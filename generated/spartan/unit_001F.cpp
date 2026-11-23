#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001F[4096] = {
    1, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0,
    0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0,
    0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0,
    121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0,
    139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0,
    147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0,
    155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196,
    0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212,
    0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0,
    0, 0, 239, 0, 240, 0, 0, 241, 0, 242, 0, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 254, 0,
    255, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 268, 0, 269,
    0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277,
    0, 278, 0, 0, 279, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 0, 289,
    0, 290, 0, 0, 291, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 302, 0, 303,
    0, 0, 304, 0, 305, 0, 0, 306, 0, 307, 0, 0, 308, 0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 0,
    316, 0, 317, 0, 0, 318, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0,
    374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_001F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0027C000;
    case 2u: goto L_0027C004;
    case 3u: goto L_0027C014;
    case 4u: goto L_0027C01C;
    case 5u: goto L_0027C02C;
    case 6u: goto L_0027C030;
    case 7u: goto L_0027C060;
    case 8u: goto L_0027C080;
    case 9u: goto L_0027C0DC;
    case 10u: goto L_0027C118;
    case 11u: goto L_0027C158;
    case 12u: goto L_0027C164;
    case 13u: goto L_0027C178;
    case 14u: goto L_0027C184;
    case 15u: goto L_0027C190;
    case 16u: goto L_0027C1AC;
    case 17u: goto L_0027C1B8;
    case 18u: goto L_0027C1D8;
    case 19u: goto L_0027C1E4;
    case 20u: goto L_0027C200;
    case 21u: goto L_0027C210;
    case 22u: goto L_0027C21C;
    case 23u: goto L_0027C22C;
    case 24u: goto L_0027C244;
    case 25u: goto L_0027C254;
    case 26u: goto L_0027C2A4;
    case 27u: goto L_0027C2E4;
    case 28u: goto L_0027C2E8;
    case 29u: goto L_0027C300;
    case 30u: goto L_0027C334;
    case 31u: goto L_0027C344;
    case 32u: goto L_0027C364;
    case 33u: goto L_0027C388;
    case 34u: goto L_0027C3A4;
    case 35u: goto L_0027C3C8;
    case 36u: goto L_0027C440;
    case 37u: goto L_0027C44C;
    case 38u: goto L_0027C4B8;
    case 39u: goto L_0027C534;
    case 40u: goto L_0027C538;
    case 41u: goto L_0027C540;
    case 42u: goto L_0027C548;
    case 43u: goto L_0027C56C;
    case 44u: goto L_0027C574;
    case 45u: goto L_0027C5E0;
    case 46u: goto L_0027C664;
    case 47u: goto L_0027C6D4;
    case 48u: goto L_0027C6F0;
    case 49u: goto L_0027C704;
    case 50u: goto L_0027C718;
    case 51u: goto L_0027C73C;
    case 52u: goto L_0027C754;
    case 53u: goto L_0027C768;
    case 54u: goto L_0027C788;
    case 55u: goto L_0027C7A4;
    case 56u: goto L_0027C7C4;
    case 57u: goto L_0027C7D4;
    case 58u: goto L_0027C7E8;
    case 59u: goto L_0027C7F8;
    case 60u: goto L_0027C808;
    case 61u: goto L_0027C820;
    case 62u: goto L_0027C854;
    case 63u: goto L_0027C864;
    case 64u: goto L_0027C87C;
    case 65u: goto L_0027C890;
    case 66u: goto L_0027C8A8;
    case 67u: goto L_0027C8BC;
    case 68u: goto L_0027C8D0;
    case 69u: goto L_0027C8E4;
    case 70u: goto L_0027C8F4;
    case 71u: goto L_0027C904;
    case 72u: goto L_0027C914;
    case 73u: goto L_0027C91C;
    case 74u: goto L_0027C944;
    case 75u: goto L_0027C94C;
    case 76u: goto L_0027C960;
    case 77u: goto L_0027C968;
    case 78u: goto L_0027C970;
    case 79u: goto L_0027C980;
    case 80u: goto L_0027C9C0;
    case 81u: goto L_0027C9E4;
    case 82u: goto L_0027CA4C;
    case 83u: goto L_0027CA54;
    case 84u: goto L_0027CA60;
    case 85u: goto L_0027CA68;
    case 86u: goto L_0027CA84;
    case 87u: goto L_0027CAA0;
    case 88u: goto L_0027CABC;
    case 89u: goto L_0027CADC;
    case 90u: goto L_0027CAF8;
    case 91u: goto L_0027CB00;
    case 92u: goto L_0027CB20;
    case 93u: goto L_0027CB3C;
    case 94u: goto L_0027CB58;
    case 95u: goto L_0027CB64;
    case 96u: goto L_0027CBA4;
    case 97u: goto L_0027CBB0;
    case 98u: goto L_0027CBC8;
    case 99u: goto L_0027CBD4;
    case 100u: goto L_0027D34C;
    case 101u: goto L_0027D374;
    case 102u: goto L_0027D380;
    case 103u: goto L_0027D398;
    case 104u: goto L_0027D3A0;
    case 105u: goto L_0027D3B4;
    case 106u: goto L_0027D3C0;
    case 107u: goto L_0027D40C;
    case 108u: goto L_0027D440;
    case 109u: goto L_0027D468;
    case 110u: goto L_0027D47C;
    case 111u: goto L_0027D4B0;
    case 112u: goto L_0027D4C0;
    case 113u: goto L_0027D4E0;
    case 114u: goto L_0027D4FC;
    case 115u: goto L_0027D520;
    case 116u: goto L_0027D530;
    case 117u: goto L_0027D540;
    case 118u: goto L_0027D550;
    case 119u: goto L_0027D560;
    case 120u: goto L_0027D570;
    case 121u: goto L_0027D580;
    case 122u: goto L_0027D590;
    case 123u: goto L_0027D5A0;
    case 124u: goto L_0027D5B0;
    case 125u: goto L_0027D5C0;
    case 126u: goto L_0027D5D0;
    case 127u: goto L_0027D5E0;
    case 128u: goto L_0027D5F0;
    case 129u: goto L_0027D600;
    case 130u: goto L_0027D610;
    case 131u: goto L_0027D650;
    case 132u: goto L_0027D660;
    case 133u: goto L_0027D6A0;
    case 134u: goto L_0027D6B0;
    case 135u: goto L_0027D6C0;
    case 136u: goto L_0027D6D0;
    case 137u: goto L_0027D6E0;
    case 138u: goto L_0027D6F0;
    case 139u: goto L_0027D700;
    case 140u: goto L_0027D710;
    case 141u: goto L_0027D720;
    case 142u: goto L_0027D730;
    case 143u: goto L_0027D740;
    case 144u: goto L_0027D750;
    case 145u: goto L_0027D760;
    case 146u: goto L_0027D770;
    case 147u: goto L_0027D780;
    case 148u: goto L_0027D790;
    case 149u: goto L_0027D7A0;
    case 150u: goto L_0027D7B0;
    case 151u: goto L_0027D7C0;
    case 152u: goto L_0027D7D0;
    case 153u: goto L_0027D7E0;
    case 154u: goto L_0027D7F0;
    case 155u: goto L_0027D800;
    case 156u: goto L_0027D810;
    case 157u: goto L_0027D820;
    case 158u: goto L_0027D830;
    case 159u: goto L_0027D840;
    case 160u: goto L_0027D850;
    case 161u: goto L_0027D8F0;
    case 162u: goto L_0027D920;
    case 163u: goto L_0027D940;
    case 164u: goto L_0027D95C;
    case 165u: goto L_0027D98C;
    case 166u: goto L_0027D9BC;
    case 167u: goto L_0027D9E8;
    case 168u: goto L_0027DA00;
    case 169u: goto L_0027DA10;
    case 170u: goto L_0027DA3C;
    case 171u: goto L_0027DA64;
    case 172u: goto L_0027DA80;
    case 173u: goto L_0027DAA0;
    case 174u: goto L_0027DAD0;
    case 175u: goto L_0027DB00;
    case 176u: goto L_0027DB2C;
    case 177u: goto L_0027DB44;
    case 178u: goto L_0027DB60;
    case 179u: goto L_0027DB84;
    case 180u: goto L_0027DBB4;
    case 181u: goto L_0027DBE4;
    case 182u: goto L_0027DC10;
    case 183u: goto L_0027DC28;
    case 184u: goto L_0027DC40;
    case 185u: goto L_0027DC60;
    case 186u: goto L_0027DC7C;
    case 187u: goto L_0027DCA0;
    case 188u: goto L_0027DCB0;
    case 189u: goto L_0027DCF0;
    case 190u: goto L_0027DD08;
    case 191u: goto L_0027DD30;
    case 192u: goto L_0027DD5C;
    case 193u: goto L_0027DD64;
    case 194u: goto L_0027DD6C;
    case 195u: goto L_0027DD74;
    case 196u: goto L_0027DD7C;
    case 197u: goto L_0027DD84;
    case 198u: goto L_0027DD8C;
    case 199u: goto L_0027DD94;
    case 200u: goto L_0027DD9C;
    case 201u: goto L_0027DDA4;
    case 202u: goto L_0027DDAC;
    case 203u: goto L_0027DDB4;
    case 204u: goto L_0027DDBC;
    case 205u: goto L_0027DDC4;
    case 206u: goto L_0027DDCC;
    case 207u: goto L_0027DDD4;
    case 208u: goto L_0027DDDC;
    case 209u: goto L_0027DDE4;
    case 210u: goto L_0027DDEC;
    case 211u: goto L_0027DDF4;
    case 212u: goto L_0027DDFC;
    case 213u: goto L_0027DE04;
    case 214u: goto L_0027DE10;
    case 215u: goto L_0027DE40;
    case 216u: goto L_0027DE60;
    case 217u: goto L_0027DE98;
    case 218u: goto L_0027DEE0;
    case 219u: goto L_0027DF60;
    case 220u: goto L_0027DF8C;
    case 221u: goto L_0027DFB8;
    case 222u: goto L_0027DFE0;
    case 223u: goto L_0027E030;
    case 224u: goto L_0027E06C;
    case 225u: goto L_0027E090;
    case 226u: goto L_0027E0C4;
    case 227u: goto L_0027E0E0;
    case 228u: goto L_0027E114;
    case 229u: goto L_0027E120;
    case 230u: goto L_0027E128;
    case 231u: goto L_0027E134;
    case 232u: goto L_0027E13C;
    case 233u: goto L_0027E148;
    case 234u: goto L_0027E150;
    case 235u: goto L_0027E15C;
    case 236u: goto L_0027E164;
    case 237u: goto L_0027E170;
    case 238u: goto L_0027E178;
    case 239u: goto L_0027E188;
    case 240u: goto L_0027E190;
    case 241u: goto L_0027E19C;
    case 242u: goto L_0027E1A4;
    case 243u: goto L_0027E1B0;
    case 244u: goto L_0027E1B8;
    case 245u: goto L_0027E1C4;
    case 246u: goto L_0027E1CC;
    case 247u: goto L_0027E1DC;
    case 248u: goto L_0027E1F0;
    case 249u: goto L_0027E220;
    case 250u: goto L_0027E238;
    case 251u: goto L_0027E240;
    case 252u: goto L_0027E258;
    case 253u: goto L_0027E260;
    case 254u: goto L_0027E278;
    case 255u: goto L_0027E280;
    case 256u: goto L_0027E29C;
    case 257u: goto L_0027E2A4;
    case 258u: goto L_0027E2C0;
    case 259u: goto L_0027E2C8;
    case 260u: goto L_0027E2E8;
    case 261u: goto L_0027E2F0;
    case 262u: goto L_0027E310;
    case 263u: goto L_0027E318;
    case 264u: goto L_0027E334;
    case 265u: goto L_0027E33C;
    case 266u: goto L_0027E354;
    case 267u: goto L_0027E35C;
    case 268u: goto L_0027E374;
    case 269u: goto L_0027E37C;
    case 270u: goto L_0027E388;
    case 271u: goto L_0027E3A0;
    case 272u: goto L_0027E3D0;
    case 273u: goto L_0027E3DC;
    case 274u: goto L_0027E3E4;
    case 275u: goto L_0027E3EC;
    case 276u: goto L_0027E3F4;
    case 277u: goto L_0027E3FC;
    case 278u: goto L_0027E404;
    case 279u: goto L_0027E410;
    case 280u: goto L_0027E418;
    case 281u: goto L_0027E424;
    case 282u: goto L_0027E42C;
    case 283u: goto L_0027E43C;
    case 284u: goto L_0027E444;
    case 285u: goto L_0027E454;
    case 286u: goto L_0027E45C;
    case 287u: goto L_0027E468;
    case 288u: goto L_0027E470;
    case 289u: goto L_0027E47C;
    case 290u: goto L_0027E484;
    case 291u: goto L_0027E490;
    case 292u: goto L_0027E498;
    case 293u: goto L_0027E4A4;
    case 294u: goto L_0027E4B0;
    case 295u: goto L_0027E588;
    case 296u: goto L_0027E59C;
    case 297u: goto L_0027E5C8;
    case 298u: goto L_0027E620;
    case 299u: goto L_0027E654;
    case 300u: goto L_0027E660;
    case 301u: goto L_0027E668;
    case 302u: goto L_0027E674;
    case 303u: goto L_0027E67C;
    case 304u: goto L_0027E688;
    case 305u: goto L_0027E690;
    case 306u: goto L_0027E69C;
    case 307u: goto L_0027E6A4;
    case 308u: goto L_0027E6B0;
    case 309u: goto L_0027E6B8;
    case 310u: goto L_0027E6C4;
    case 311u: goto L_0027E6CC;
    case 312u: goto L_0027E6D8;
    case 313u: goto L_0027E6E0;
    case 314u: goto L_0027E6EC;
    case 315u: goto L_0027E6F4;
    case 316u: goto L_0027E700;
    case 317u: goto L_0027E708;
    case 318u: goto L_0027E714;
    case 319u: goto L_0027E71C;
    case 320u: goto L_0027E728;
    case 321u: goto L_0027E740;
    case 322u: goto L_0027E770;
    case 323u: goto L_0027E7A8;
    case 324u: goto L_0027E8B0;
    case 325u: goto L_0027E8B8;
    case 326u: goto L_0027E8D0;
    case 327u: goto L_0027E950;
    case 328u: goto L_0027E9D0;
    case 329u: goto L_0027EA14;
    case 330u: goto L_0027EA70;
    case 331u: goto L_0027EAF8;
    case 332u: goto L_0027EB18;
    case 333u: goto L_0027EBC0;
    case 334u: goto L_0027EBE8;
    case 335u: goto L_0027EC50;
    case 336u: goto L_0027ECAC;
    case 337u: goto L_0027ECE0;
    case 338u: goto L_0027ED2C;
    case 339u: goto L_0027ED78;
    case 340u: goto L_0027EDB8;
    case 341u: goto L_0027EDE8;
    case 342u: goto L_0027EE00;
    case 343u: goto L_0027EEB8;
    case 344u: goto L_0027EEF0;
    case 345u: goto L_0027EF48;
    case 346u: goto L_0027EF8C;
    case 347u: goto L_0027F080;
    case 348u: goto L_0027F0A4;
    case 349u: goto L_0027F100;
    case 350u: goto L_0027F1A0;
    case 351u: goto L_0027F1C8;
    case 352u: goto L_0027F294;
    case 353u: goto L_0027F2C0;
    case 354u: goto L_0027F304;
    case 355u: goto L_0027F33C;
    case 356u: goto L_0027F394;
    case 357u: goto L_0027F3D8;
    case 358u: goto L_0027F4A0;
    case 359u: goto L_0027F6C4;
    case 360u: goto L_0027F720;
    case 361u: goto L_0027F740;
    case 362u: goto L_0027F810;
    case 363u: goto L_0027F874;
    case 364u: goto L_0027F880;
    case 365u: goto L_0027F948;
    case 366u: goto L_0027F968;
    case 367u: goto L_0027F970;
    case 368u: goto L_0027F9A0;
    case 369u: goto L_0027F9B0;
    case 370u: goto L_0027FA48;
    case 371u: goto L_0027FA58;
    case 372u: goto L_0027FAB0;
    case 373u: goto L_0027FB78;
    case 374u: goto L_0027FB80;
    case 375u: goto L_0027FB98;
    case 376u: goto L_0027FBA8;
    case 377u: goto L_0027FBC0;
    case 378u: goto L_0027FBCC;
    case 379u: goto L_0027FCE0;
    case 380u: goto L_0027FD5C;
    case 381u: goto L_0027FD8C;
    case 382u: goto L_0027FDB4;
    case 383u: goto L_0027FDBC;
    case 384u: goto L_0027FDD0;
    case 385u: goto L_0027FE28;
    case 386u: goto L_0027FE38;
    case 387u: goto L_0027FE48;
    case 388u: goto L_0027FE58;
    case 389u: goto L_0027FE70;
    case 390u: goto L_0027FE98;
    case 391u: goto L_0027FED0;
    case 392u: goto L_0027FF00;
    case 393u: goto L_0027FF7C;
    default: bad_entry(c, 0x0027C000u); return;
    }
L_0027C000:
    c.budget -= 1;
L_0027C004:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C014u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C014u) [[unlikely]] return; }
L_0027C014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027C02C; } }
L_0027C01C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C02Cu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C02Cu) [[unlikely]] return; }
L_0027C02C:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_0027C030:
    set32(c.r[2], 0u + 191u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027C04C; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 247u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BCACu | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 434u, depth); } }
L_0027C04C:
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] + 3360u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BCACu | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 434u, depth); } }
L_0027C060:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C060u | kUnwind; return; } goto L_0027C060; } }
    c.budget -= 1;
L_0027C080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], ld32((c.r[2].w[0] - 19440u)));
    c.r[2].d[0] = ld16((c.r[28].w[0] - 32632u));
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0027C0A0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0027C0A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 32624u));
    set32(c.r[9], ld32((c.r[2].w[0] - 19436u)));
    set32(c.r[2], c.r[3].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] - c.r[9].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0027C0C4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0027C0C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29936u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 19576u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C0DCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 239u, depth + 1u); else { c.pc = 0x0027A2E0u; return; } if (c.pc != 0x0027C0DCu) [[unlikely]] return; }
L_0027C0DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 19576u)));
    c.r[1].d[0] = c.r[1].d[0] | 33024ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 29936u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[28].w[0] - 32624u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], ld32((c.r[2].w[0] - 19440u)));
    set32(c.r[4], c.r[4].w[0] + c.r[1].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[9], ld32((c.r[2].w[0] - 19436u)));
    set32(c.r[2], c.r[3].w[0] >> 1);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C118u); set32(c.r[7], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 239u, depth + 1u); else { c.pc = 0x0027A2E0u; return; } if (c.pc != 0x0027C118u) [[unlikely]] return; }
L_0027C118:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[3].w[0] - 19440u));
    c.f[1] = ld32((c.r[2].w[0] - 19436u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x391E0000u);
    c.r[2].d[0] = c.r[3].d[0] | 21953ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29948u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BDBCu | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 445u, depth); } }
L_0027C158:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C164u); set32(c.r[4], c.r[4].w[0] - 19536u);  if (depth < kMaxDepth) unit_001E(c, 285u, depth + 1u); else { c.pc = 0x0027A910u; return; } if (c.pc != 0x0027C164u) [[unlikely]] return; }
L_0027C164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BE0Cu | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 449u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C178u); set32(c.r[4], c.r[4].w[0] - 19536u);  if (depth < kMaxDepth) unit_001E(c, 293u, depth + 1u); else { c.pc = 0x0027AB40u; return; } if (c.pc != 0x0027C178u) [[unlikely]] return; }
L_0027C178:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29952u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BE0Cu | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 449u, depth); } }
L_0027C184:
    set32(c.r[4], ld32((c.r[28].w[0] - 29944u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C190u); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_001E(c, 306u, depth + 1u); else { c.pc = 0x0027ACE0u; return; } if (c.pc != 0x0027C190u) [[unlikely]] return; }
L_0027C190:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[28].w[0] - 29940u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BE3Cu | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 452u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C184u | kUnwind; return; } goto L_0027C184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 29944u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BE24u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 450u, depth); } }
L_0027C1AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 29944u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C1B8u); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_001E(c, 306u, depth + 1u); else { c.pc = 0x0027ACE0u; return; } if (c.pc != 0x0027C1B8u) [[unlikely]] return; }
L_0027C1B8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[28].w[0] - 29940u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BE98u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 456u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C1ACu | kUnwind; return; } goto L_0027C1AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 29944u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BE80u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 454u, depth); } }
    c.budget -= 1;
L_0027C1D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 29944u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C1E4u); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_001E(c, 306u, depth + 1u); else { c.pc = 0x0027ACE0u; return; } if (c.pc != 0x0027C1E4u) [[unlikely]] return; }
L_0027C1E4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[28].w[0] - 29940u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BF00u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 460u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C1D8u | kUnwind; return; } goto L_0027C1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 29944u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BEE8u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 458u, depth); } }
L_0027C200:
    set32(c.r[2], c.r[16].w[0] - 32768u);
    st32((c.r[28].w[0] - 29864u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull | 32768ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BB30u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 416u, depth); } }
L_0027C210:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C21Cu); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_0005(c, 245u, depth + 1u); else { c.pc = 0x002165D8u; return; } if (c.pc != 0x0027C21Cu) [[unlikely]] return; }
L_0027C21C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BC28u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 426u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 29896u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BB84u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 418u, depth); } }
L_0027C22C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 19576u)));
    set32(c.r[4], c.r[4].w[0] - 19440u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C244u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x002164B8u; return; } if (c.pc != 0x0027C244u) [[unlikely]] return; }
L_0027C244:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C22Cu | kUnwind; return; } goto L_0027C22C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BB9Cu | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 419u, depth); } }
L_0027C254:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[9], ld32((c.r[3].w[0] - 19436u)));
    set32(c.r[8], ld32((c.r[2].w[0] - 19440u)));
    set32(c.r[3], 0u + 512u);
    set32(c.r[2], c.r[3].w[0] - c.r[8].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0027C27C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0027C27C:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 32624u));
    set32(c.r[2], c.r[2].w[0] - c.r[9].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0027C294; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0027C294:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 19576u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C2A4u); set32(c.r[4], ld32((c.r[28].w[0] - 29936u)));  if (depth < kMaxDepth) unit_001E(c, 239u, depth + 1u); else { c.pc = 0x0027A2E0u; return; } if (c.pc != 0x0027C2A4u) [[unlikely]] return; }
L_0027C2A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[3].w[0] - 19440u));
    c.f[1] = ld32((c.r[2].w[0] - 19436u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x391E0000u);
    c.r[2].d[0] = c.r[3].d[0] | 21953ull;
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29948u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BBACu | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 420u, depth); } }
L_0027C2E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0027C2E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0027C300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027C344; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C334u); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C334u) [[unlikely]] return; }
L_0027C334:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C344u); set32(c.r[4], c.r[4].w[0] - 19312u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0027C344u) [[unlikely]] return; }
L_0027C344:
    st8((c.r[28].w[0] - 29908u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[28].w[0] - 29892u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[17].w[0] - 25088u);
    st8((c.r[28].w[0] - 29896u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 29888u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 29884u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_0027C364:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 34u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C388u); c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x0027C388u) [[unlikely]] return; }
L_0027C388:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C364u | kUnwind; return; } goto L_0027C364; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] - 25264u);
    c.budget -= 3;
L_0027C3A4:
    st32((c.r[18].w[0] + 20u), 0u);
    set32(c.r[2], 0u - 2u);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 24u));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C3C8u); c.r[4].d[0] = ld8((c.r[18].w[0] + 4u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x0027C3C8u) [[unlikely]] return; }
L_0027C3C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 44u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C3A4u | kUnwind; return; } goto L_0027C3A4; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], c.r[17].w[0] - 23024u);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027C57C; } }
    set32(c.r[8], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[7], c.r[3].w[0] << 18);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[3].w[0] << 19);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[3], c.r[3].w[0] << 22);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 19;
L_0027C440:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] - 22912u);
    c.budget -= 3;
L_0027C44C:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027C5E8; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[7], c.r[3].w[0] << 18);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[3].w[0] << 19);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[3], c.r[3].w[0] << 22);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[18].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 22;
L_0027C4B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[18].w[0] + 60u), 0u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 108u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C44Cu | kUnwind; return; } goto L_0027C44C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], c.r[17].w[0] - 22672u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[4].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027C670; } }
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[7], c.r[3].w[0] << 18);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[3].w[0] << 19);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[3], c.r[3].w[0] << 22);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 80u), 0u);
    c.budget -= 19;
L_0027C534:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027C538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C540u);  if (depth < kMaxDepth) unit_001D(c, 134u, depth + 1u); else { c.pc = 0x00277090u; return; } if (c.pc != 0x0027C540u) [[unlikely]] return; }
L_0027C540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C548u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0022E588u; return; } if (c.pc != 0x0027C548u) [[unlikely]] return; }
L_0027C548:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C538u | kUnwind; return; } goto L_0027C538; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29908u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027C56C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C56Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001E(c, 318u, depth + 1u); else { c.pc = 0x0027AE10u; return; } if (c.pc != 0x0027C56Cu) [[unlikely]] return; }
L_0027C56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C574u);  if (depth < kMaxDepth) unit_001F(c, 61u, depth + 1u); else { c.pc = 0x0027C820u; return; } if (c.pc != 0x0027C574u) [[unlikely]] return; }
L_0027C574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0027C6DC; } }
L_0027C57C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[5].w[0] << 21);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[6], c.r[5].w[0] << 19);
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] << 18);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[5].w[0] << 22);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C5E0u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x0027C5E0u) [[unlikely]] return; }
L_0027C5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C440u | kUnwind; return; } goto L_0027C440; } }
L_0027C5E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 21);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[4].w[0] << 18);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[4].w[0] << 19);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 24u)));
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 22);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[18].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C664u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x0027C664u) [[unlikely]] return; }
L_0027C664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C4B8u | kUnwind; return; } goto L_0027C4B8; } }
    c.budget -= 1;
L_0027C670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[8].d[0] = 0ull & 1ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[5], c.r[8].w[0] << 21);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[8].w[0] << 18);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[6], c.r[8].w[0] << 19);
    c.r[7].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[8].w[0] << 22);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C6D4u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x0027C6D4u) [[unlikely]] return; }
L_0027C6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C534u | kUnwind; return; } goto L_0027C534; } }
L_0027C6DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027C6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C704u); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x0027C704u) [[unlikely]] return; }
L_0027C704:
    st32((c.r[28].w[0] - 29944u), c.r[2].w[0]);
    set32(c.r[4], 0u + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C718u); c.r[5].d[0] = c.r[2].d[0] | 10240ull;  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x0027C718u) [[unlikely]] return; }
L_0027C718:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00120000u);
    st32((c.r[3].w[0] - 19584u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] | 10240ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 64u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C73Cu); st32((c.r[2].w[0] - 19580u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x0027C73Cu) [[unlikely]] return; }
L_0027C73C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 64u);
    st32((c.r[3].w[0] - 19576u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C754u); c.r[5].d[0] = c.r[2].d[0] | 512ull;  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x0027C754u) [[unlikely]] return; }
L_0027C754:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 64u);
    st32((c.r[3].w[0] - 19572u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C768u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x0027C768u) [[unlikely]] return; }
L_0027C768:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00030000u);
    st32((c.r[3].w[0] - 19568u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull | 49152ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 19564u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C788u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x0027C788u) [[unlikely]] return; }
L_0027C788:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = 0ull | 49152ull;
    st32((c.r[3].w[0] - 19560u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 19556u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C7A4u); set32(c.r[4], 0u + 24576u);  if (depth < kMaxDepth) unit_0008(c, 429u, depth + 1u); else { c.pc = 0x00223C58u; return; } if (c.pc != 0x0027C7A4u) [[unlikely]] return; }
L_0027C7A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 24576u);
    st32((c.r[3].w[0] - 19552u), c.r[2].w[0]);
    set32(c.r[5], 0u + 2048u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 19548u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C7C4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x0027C7C4u) [[unlikely]] return; }
L_0027C7C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 2048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C7D4u); st32((c.r[3].w[0] - 19544u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 429u, depth + 1u); else { c.pc = 0x00223C58u; return; } if (c.pc != 0x0027C7D4u) [[unlikely]] return; }
L_0027C7D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 64u);
    st32((c.r[3].w[0] - 19540u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C7E8u); set32(c.r[5], 0u + 4096u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x0027C7E8u) [[unlikely]] return; }
L_0027C7E8:
    st32((c.r[28].w[0] - 29880u), c.r[2].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C7F8u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x0027C7F8u) [[unlikely]] return; }
L_0027C7F8:
    st32((c.r[28].w[0] - 29876u), c.r[2].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C808u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x0027C808u) [[unlikely]] return; }
L_0027C808:
    st32((c.r[28].w[0] - 29872u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027C820:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C854u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027C854u) [[unlikely]] return; }
L_0027C854:
    set32(c.r[4], ld32((c.r[28].w[0] - 29944u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C864u); set32(c.r[6], 0u + 16384u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C864u) [[unlikely]] return; }
L_0027C864:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 19584u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C87Cu); c.r[6].d[0] = c.r[2].d[0] | 10240ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C87Cu) [[unlikely]] return; }
L_0027C87C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 19576u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C890u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C890u) [[unlikely]] return; }
L_0027C890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 19572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C8A8u); c.r[6].d[0] = c.r[2].d[0] | 512ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C8A8u) [[unlikely]] return; }
L_0027C8A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 19568u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C8BCu); c.r[6].sd[0] = static_cast<std::int32_t>(0x00030000u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C8BCu) [[unlikely]] return; }
L_0027C8BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 19560u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C8D0u); c.r[6].d[0] = 0ull | 49152ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C8D0u) [[unlikely]] return; }
L_0027C8D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 19544u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C8E4u); set32(c.r[6], 0u + 2048u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C8E4u) [[unlikely]] return; }
L_0027C8E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 29880u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C8F4u); set32(c.r[6], 0u + 4096u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C8F4u) [[unlikely]] return; }
L_0027C8F4:
    set32(c.r[4], ld32((c.r[28].w[0] - 29876u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C904u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C904u) [[unlikely]] return; }
L_0027C904:
    set32(c.r[4], ld32((c.r[28].w[0] - 29872u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C914u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027C914u) [[unlikely]] return; }
L_0027C914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C91Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027C91Cu) [[unlikely]] return; }
L_0027C91C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29872u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 19572u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[3], c.r[4].w[0] + c.r[1].w[0]);
    st32((c.r[28].w[0] - 29856u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 29868u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 29852u), c.r[4].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C944u); st32((c.r[28].w[0] - 29936u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0005(c, 234u, depth + 1u); else { c.pc = 0x002163C0u; return; } if (c.pc != 0x0027C944u) [[unlikely]] return; }
L_0027C944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C94Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027C94Cu) [[unlikely]] return; }
L_0027C94C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29908u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C960u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0021EEE0u; return; } if (c.pc != 0x0027C960u) [[unlikely]] return; }
L_0027C960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C968u);  if (depth < kMaxDepth) unit_0008(c, 425u, depth + 1u); else { c.pc = 0x00223BD0u; return; } if (c.pc != 0x0027C968u) [[unlikely]] return; }
L_0027C968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C970u);  if (depth < kMaxDepth) unit_000A(c, 188u, depth + 1u); else { c.pc = 0x002298B8u; return; } if (c.pc != 0x0027C970u) [[unlikely]] return; }
L_0027C970:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C980u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 198u, depth + 1u); else { c.pc = 0x00229A10u; return; } if (c.pc != 0x0027C980u) [[unlikely]] return; }
L_0027C980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 19560u)));
    set32(c.r[4], c.r[4].w[0] - 19536u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 19556u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[2].w[0] - 19552u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], ld32((c.r[2].w[0] - 19548u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[9], ld32((c.r[2].w[0] - 19544u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[10], ld32((c.r[2].w[0] - 19540u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027C9C0u); set32(c.r[11], 0u + 2048u);  if (depth < kMaxDepth) unit_001E(c, 297u, depth + 1u); else { c.pc = 0x0027ABD0u; return; } if (c.pc != 0x0027C9C0u) [[unlikely]] return; }
L_0027C9C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] - 20608u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80400000u);
    c.r[3].d[0] = c.r[2].d[0] | 16448ull;
    c.budget -= 9;
L_0027C9E4:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C9E4u | kUnwind; return; } goto L_0027C9E4; } }
    c.r[3].d[0] = ld16((c.r[28].w[0] - 32624u));
    c.r[9].d[0] = c.r[3].d[0] << 33;
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 33);  if (t) { goto L_0027CA30; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0027CA30:
    set32(c.r[4], ld32((c.r[28].w[0] - 29936u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 20608u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA4Cu); set32(c.r[8], 0u + 512u);  if (depth < kMaxDepth) unit_001E(c, 238u, depth + 1u); else { c.pc = 0x0027A2C0u; return; } if (c.pc != 0x0027CA4Cu) [[unlikely]] return; }
L_0027CA4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA54u); set32(c.r[4], ld32((c.r[28].w[0] - 29936u)));  if (depth < kMaxDepth) unit_001E(c, 234u, depth + 1u); else { c.pc = 0x0027A090u; return; } if (c.pc != 0x0027CA54u) [[unlikely]] return; }
L_0027CA54:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 114u, depth + 1u); else { c.pc = 0x0022E620u; return; } if (c.pc != 0x0027CA60u) [[unlikely]] return; }
L_0027CA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D354; } }
L_0027CA68:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] - 19440u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 18000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CA84u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 88u, depth + 1u); else { c.pc = 0x0021AAB0u; return; } if (c.pc != 0x0027CA84u) [[unlikely]] return; }
L_0027CA84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] - 19440u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] - 18400u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CAA0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 247u, depth + 1u); else { c.pc = 0x00216630u; return; } if (c.pc != 0x0027CAA0u) [[unlikely]] return; }
L_0027CAA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] - 19440u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18640u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CABCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 247u, depth + 1u); else { c.pc = 0x00216630u; return; } if (c.pc != 0x0027CABCu) [[unlikely]] return; }
L_0027CABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] - 19440u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 19616u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CADCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 88u, depth + 1u); else { c.pc = 0x0021AAB0u; return; } if (c.pc != 0x0027CADCu) [[unlikely]] return; }
L_0027CADC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] - 19440u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], c.r[6].w[0] - 18608u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CAF8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 247u, depth + 1u); else { c.pc = 0x00216630u; return; } if (c.pc != 0x0027CAF8u) [[unlikely]] return; }
L_0027CAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0027CB5C; } }
L_0027CB00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] - 19440u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 19376u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CB20u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 88u, depth + 1u); else { c.pc = 0x0021AAB0u; return; } if (c.pc != 0x0027CB20u) [[unlikely]] return; }
L_0027CB20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] - 19440u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] - 19872u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CB3Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 247u, depth + 1u); else { c.pc = 0x00216630u; return; } if (c.pc != 0x0027CB3Cu) [[unlikely]] return; }
L_0027CB3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] - 19440u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19888u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CB58u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 247u, depth + 1u); else { c.pc = 0x00216630u; return; } if (c.pc != 0x0027CB58u) [[unlikely]] return; }
L_0027CB58:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027CB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CB64u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027CB64u) [[unlikely]] return; }
L_0027CB64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] - 19568u)));
    st32((c.r[28].w[0] - 29940u), 0u);
    st32((c.r[28].w[0] - 29864u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[6].w[0] + 16u);
    set32(c.r[5], ld32((c.r[2].w[0] - 19564u)));
    st32((c.r[28].w[0] - 29932u), c.r[6].w[0]);
    st32((c.r[28].w[0] - 29920u), c.r[6].w[0]);
    st32((c.r[28].w[0] - 29924u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 29916u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29876u)));
    st32((c.r[28].w[0] - 29928u), c.r[5].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CBA4u); st32((c.r[28].w[0] - 29860u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027CBA4u) [[unlikely]] return; }
L_0027CBA4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29908u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D3D8; } }
L_0027CBB0:
    set32(c.r[6], ld32((c.r[28].w[0] - 29940u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0027D3B4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29944u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 3;
L_0027CBC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027CBD4u); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_0006(c, 86u, depth + 1u); else { c.pc = 0x0021AA90u; return; } if (c.pc != 0x0027CBD4u) [[unlikely]] return; }
L_0027CBD4:
    set32(c.r[3], ld32((c.r[28].w[0] - 29940u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 29940u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CBB0u | kUnwind; return; } goto L_0027CBB0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 2036u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[21].d[0] = c.r[4].d[0] | 255ull;
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], 0u - 2u);
    set32(c.r[10], ld32((c.r[29].w[0] + 216u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[5].d[0] << 32;
    c.r[7].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[3].d[0] << 62;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[7].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], 0u - 3u);
    set32(c.r[7], c.r[7].w[0] << 1);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[3].d[0] << 59;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] >> 61;
    c.r[7].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[5], 0u - 29u);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[3].d[0] << 58;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[7].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], 0u - 33u);
    set32(c.r[7], c.r[7].w[0] << 5);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[3].d[0] << 57;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[7].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], 0u - 65u);
    set32(c.r[7], c.r[7].w[0] << 6);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[7].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], 0u - 129u);
    set32(c.r[7], c.r[7].w[0] << 7);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[7].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] >> 56;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] >> 48;
    c.r[5].d[0] = c.r[7].d[0] & c.r[21].d[0];
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[7].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[6], c.r[5].w[0] << 16);
    c.r[20].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[7].d[0] & c.r[20].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[19].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[7], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 2044u)));
    c.r[22].d[0] = c.r[19].d[0] << 58;
    st32((c.r[29].w[0] + 208u), c.r[19].w[0]);
    c.r[6].d[0] = c.r[5].d[0] << 62;
    set32(c.r[3], 0u + 15u);
    c.r[9].d[0] = c.r[6].d[0] >> 63;
    c.r[18].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[6], 0u - 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].d[0] = c.r[10].d[0] & c.r[6].d[0];
    c.r[11].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[9].d[0] & 1ull;
    c.r[8].d[0] = c.r[5].d[0] << 60;
    c.r[9].d[0] = c.r[10].d[0] | c.r[11].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[10], c.r[6].w[0] << 1);
    set32(c.r[3], ld32((c.r[3].w[0] + 2052u)));
    set32(c.r[6], 0u - 3u);
    c.r[5].d[0] = c.r[5].d[0] >> 36;
    c.r[9].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[8].d[0] >> 62;
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 3ull;
    set32(c.r[8], c.r[6].w[0] << 2);
    set32(c.r[6], 0u - 13u);
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.r[8].d[0] = c.r[6].d[0] & c.r[18].d[0];
    c.r[6].d[0] = c.r[5].d[0] << 36;
    set32(c.r[5], 0u - 512u);
    c.r[6].d[0] = c.r[6].d[0] >> 36;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    set32(c.r[7], c.r[6].w[0] << 4);
    c.r[6].d[0] = c.r[3].d[0] & 511ull;
    c.r[17].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[7].d[0] = c.r[3].d[0] << 49;
    set32(c.r[5], 0u - 32257u);
    c.r[7].d[0] = c.r[7].d[0] >> 58;
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 63ull;
    c.r[5].d[0] = c.r[3].d[0] << 44;
    set32(c.r[8], c.r[7].w[0] << 9);
    c.r[5].d[0] = c.r[5].d[0] >> 59;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] & 31ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    set32(c.r[7], c.r[5].w[0] << 15);
    c.r[3].d[0] = c.r[3].d[0] >> 52;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[3].d[0] = c.r[3].d[0] & 4095ull;
    c.r[16].d[0] = c.r[5].d[0] | 32767ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 228u)));
    c.r[5].d[0] = c.r[6].d[0] & c.r[16].d[0];
    st32((c.r[29].w[0] + 216u), c.r[17].w[0]);
    set32(c.r[6], c.r[3].w[0] << 20);
    c.r[7].d[0] = c.r[5].d[0] | c.r[7].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[25].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[25].d[0];
    set32(c.r[3], ld32((c.r[3].w[0] + 2056u)));
    c.r[24].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFC00000u);
    st32((c.r[29].w[0] + 224u), c.r[24].w[0]);
    c.r[15].d[0] = c.r[5].d[0] | 2047ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[14].d[0] = c.r[6].d[0] | c.r[4].d[0];
    set32(c.r[7], ld32((c.r[5].w[0] + 2060u)));
    c.r[6].d[0] = c.r[3].d[0] & 2047ull;
    set32(c.r[5], 0u - 2048u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[8].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[3].d[0] << 42;
    c.r[6].d[0] = c.r[5].d[0] >> 53;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] & 2047ull;
    c.r[3].d[0] = c.r[3].d[0] >> 54;
    c.r[5].d[0] = c.r[8].d[0] & c.r[15].d[0];
    set32(c.r[6], c.r[6].w[0] << 11);
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 1023ull;
    set32(c.r[5], c.r[3].w[0] << 22);
    c.r[3].d[0] = c.r[6].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[6].d[0] = c.r[7].d[0] & 4095ull;
    c.r[3].d[0] = c.r[7].d[0] << 41;
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    c.r[8].d[0] = c.r[3].d[0] >> 53;
    st32((c.r[29].w[0] + 228u), c.r[13].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    c.r[8].d[0] = c.r[8].d[0] & 2047ull;
    c.r[12].d[0] = c.r[3].d[0] | 4095ull;
    set32(c.r[3], c.r[8].w[0] << 12);
    c.r[8].d[0] = c.r[7].d[0] << 37;
    c.r[9].d[0] = c.r[8].d[0] >> 60;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xF87F0000u);
    c.r[9].d[0] = c.r[9].d[0] & 15ull;
    c.r[30].d[0] = c.r[8].d[0] | 65535ull;
    set32(c.r[8], 0u - 4096u);
    c.r[8].d[0] = c.r[5].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    set32(c.r[5], c.r[9].w[0] << 23);
    c.r[6].d[0] = c.r[7].d[0] << 35;
    c.r[8].d[0] = c.r[8].d[0] & c.r[12].d[0];
    c.r[6].d[0] = c.r[6].d[0] >> 62;
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[6].d[0] & 3ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[30].d[0];
    set32(c.r[3], c.r[3].w[0] << 27);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[8], 0u - 4096u);
    c.r[6].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = c.r[6].d[0] >> 61;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xE7FF0000u);
    c.r[7].d[0] = c.r[7].d[0] & 7ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[6]);
    c.r[6].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[7].w[0] << 29);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x1FFF0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[7], ld32((c.r[7].w[0] + 2064u)));
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[6]);
    c.r[6].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    c.r[11].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    st32((c.r[29].w[0] + 232u), c.r[11].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[9].d[0] = c.r[7].d[0] << 41;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[6].d[0] = c.r[7].d[0] & 4095ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[5]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = c.r[3].d[0] & c.r[8].d[0];
    set32(c.r[5], ld32((c.r[5].w[0] + 2068u)));
    c.r[3].d[0] = c.r[9].d[0] >> 53;
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 2047ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[6], c.r[3].w[0] << 12);
    c.r[3].d[0] = c.r[8].d[0] & c.r[12].d[0];
    c.r[6].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = c.r[3].d[0] >> 55;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[7].d[0] = c.r[7].d[0] & 511ull;
    set32(c.r[7], c.r[7].w[0] << 23);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[10].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[6].d[0] = c.r[5].d[0] << 48;
    st32((c.r[29].w[0] + 236u), c.r[10].w[0]);
    c.r[6].d[0] = c.r[6].d[0] >> 56;
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    c.r[6].d[0] = c.r[5].d[0] << 40;
    set32(c.r[8], c.r[7].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] >> 56;
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    c.r[6].d[0] = c.r[5].d[0] << 32;
    set32(c.r[5], 0u - 256u);
    c.r[9].d[0] = c.r[9].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[7].w[0] << 16);
    c.r[7].d[0] = c.r[9].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[6].d[0] >> 56;
    c.r[6].d[0] = c.r[7].d[0] & c.r[21].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[9].d[0] = c.r[8].d[0] | 65535ull;
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[8].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[6].d[0] & c.r[9].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[6].d[0] = c.r[19].d[0] & 1ull;
    c.r[5].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.r[7].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[4].w[0] - 19360u)));
    c.r[3].d[0] = c.r[19].d[0] << 62;
    st32((c.r[29].w[0] + 240u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[19].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[23], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[22].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[6].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], 0u - 3u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    set32(c.r[5], c.r[6].w[0] << 5);
    c.r[6].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[19].d[0] << 57;
    set32(c.r[3], 0u - 29u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[6].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[23].d[0];
    set32(c.r[4], 0u - 33u);
    set32(c.r[6], c.r[6].w[0] << 6);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[19].d[0] << 56;
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[4], 0u - 129u);
    set32(c.r[3], c.r[3].w[0] << 7);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[19].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] & c.r[21].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 56;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[19].d[0] << 32;
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] >> 48;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[20].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[20].d[0] = c.r[17].d[0] << 60;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[20].d[0] = c.r[20].d[0] >> 62;
    st32((c.r[3].w[0] - 19360u), c.r[4].w[0]);
    c.r[20].d[0] = c.r[20].d[0] & 3ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 2040u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[19].w[0] - 19356u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] - 19352u)));
    set32(c.r[6], c.r[20].w[0] << 2);
    c.r[20].d[0] = c.r[17].d[0] << 32;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = c.r[17].d[0] << 62;
    set32(c.r[17], 0u - 2u);
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[4].d[0] = c.r[4].d[0] & c.r[17].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[17].d[0] = c.r[20].d[0] >> 36;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[17].d[0] = c.r[17].d[0] << 36;
    set32(c.r[5], 0u - 3u);
    c.r[17].d[0] = c.r[17].d[0] >> 36;
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[17].w[0] << 4);
    c.r[17].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u - 13u);
    c.r[3].d[0] = c.r[17].d[0] & c.r[3].d[0];
    set32(c.r[4], ld32((c.r[4].w[0] + 2048u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[17].d[0] = c.r[3].d[0] & c.r[18].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = c.r[17].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[24].d[0] & 511ull;
    st32((c.r[19].w[0] - 19352u), c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = c.r[24].d[0] << 49;
    set32(c.r[5], ld32((c.r[5].w[0] - 19344u)));
    c.r[17].d[0] = c.r[17].d[0] >> 58;
    st32((c.r[6].w[0] - 19348u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[17].d[0] & 63ull;
    set32(c.r[17], c.r[4].w[0] << 9);
    c.r[4].d[0] = c.r[24].d[0] << 44;
    c.r[6].d[0] = c.r[4].d[0] >> 59;
    c.r[4].d[0] = c.r[24].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] & 31ull;
    c.r[4].d[0] = c.r[4].d[0] >> 52;
    set32(c.r[6], c.r[6].w[0] << 15);
    c.r[18].d[0] = c.r[4].d[0] & 4095ull;
    set32(c.r[4], 0u - 512u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[18].w[0] << 20);
    set32(c.r[3], 0u - 32257u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[17].d[0] = c.r[3].d[0] | c.r[17].d[0];
    c.r[4].d[0] = c.r[13].d[0] & 2047ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[17].d[0] & c.r[16].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[6].d[0];
    set32(c.r[3], ld32((c.r[3].w[0] - 19340u)));
    c.r[6].d[0] = c.r[13].d[0] << 42;
    c.r[16].d[0] = c.r[16].d[0] & c.r[25].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] >> 53;
    c.r[5].d[0] = c.r[6].d[0] & 2047ull;
    st32((c.r[18].w[0] - 19344u), c.r[16].w[0]);
    set32(c.r[16], c.r[5].w[0] << 11);
    c.r[13].d[0] = c.r[13].d[0] << 32;
    set32(c.r[5], 0u - 2048u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[13].d[0] >> 54;
    c.r[4].d[0] = c.r[4].d[0] & c.r[15].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 1023ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[16].d[0];
    set32(c.r[13], c.r[3].w[0] << 22);
    c.r[5].d[0] = c.r[4].d[0] & c.r[14].d[0];
    c.r[3].d[0] = c.r[11].d[0] & 4095ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[13].d[0];
    set32(c.r[14], ld32((c.r[4].w[0] - 19336u)));
    st32((c.r[6].w[0] - 19340u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[11].d[0] << 41;
    c.r[5].d[0] = c.r[4].d[0] >> 53;
    c.r[4].d[0] = c.r[11].d[0] << 37;
    c.r[5].d[0] = c.r[5].d[0] & 2047ull;
    c.r[4].d[0] = c.r[4].d[0] >> 60;
    set32(c.r[13], c.r[5].w[0] << 12);
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.r[5].d[0] = c.r[11].d[0] << 35;
    set32(c.r[6], c.r[4].w[0] << 23);
    set32(c.r[4], 0u - 4096u);
    c.r[14].d[0] = c.r[14].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[5].d[0] >> 62;
    c.r[5].d[0] = c.r[14].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 3ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[12].d[0];
    set32(c.r[5], c.r[3].w[0] << 27);
    c.r[4].d[0] = c.r[4].d[0] | c.r[13].d[0];
    c.r[3].d[0] = c.r[11].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] & c.r[30].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 61;
    c.r[6].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[3].d[0] & 7ull;
    c.r[11].d[0] = c.r[7].d[0] & 255ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[6], c.r[4].w[0] << 29);
    c.r[4].d[0] = c.r[3].d[0] | c.r[5].d[0];
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[10].d[0] & 4095ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[5].w[0] - 19336u), c.r[6].w[0]);
    set32(c.r[15], ld32((c.r[4].w[0] - 19332u)));
    c.r[5].d[0] = c.r[10].d[0] << 41;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[5].d[0] >> 53;
    c.r[5].d[0] = c.r[4].d[0] & 2047ull;
    c.r[4].d[0] = c.r[10].d[0] << 32;
    set32(c.r[14], c.r[5].w[0] << 12);
    c.r[4].d[0] = c.r[4].d[0] >> 55;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[4].d[0] & 511ull;
    c.r[10].d[0] = c.r[7].d[0] << 48;
    set32(c.r[13], c.r[4].w[0] << 23);
    set32(c.r[5], ld32((c.r[5].w[0] - 19328u)));
    set32(c.r[4], 0u - 4096u);
    c.r[4].d[0] = c.r[15].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[3].d[0] = c.r[10].d[0] >> 56;
    c.r[4].d[0] = c.r[4].d[0] & c.r[12].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[14].d[0];
    set32(c.r[10], c.r[3].w[0] << 8);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[12].d[0] = c.r[4].d[0] | c.r[13].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 40;
    c.r[4].d[0] = c.r[3].d[0] >> 56;
    st32((c.r[6].w[0] - 19332u), c.r[12].w[0]);
    set32(c.r[3], 0u - 256u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[11].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].d[0] & c.r[21].d[0];
    set32(c.r[5], c.r[3].w[0] << 16);
    c.r[4].d[0] = c.r[4].d[0] | c.r[10].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 56;
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[8].d[0];
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 19328u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], ld32((c.r[3].w[0] + 2072u)));
    st8((c.r[28].w[0] - 29912u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 19324u), c.r[5].w[0]);
    c.budget -= 474;
L_0027D34C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_0027D414; } }
L_0027D354:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 19584u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 19580u)));
    set32(c.r[4], c.r[4].w[0] - 19440u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D374u); st32((c.r[28].w[0] - 29952u), 0u);  if (depth < kMaxDepth) unit_0005(c, 185u, depth + 1u); else { c.pc = 0x00215818u; return; } if (c.pc != 0x0027D374u) [[unlikely]] return; }
L_0027D374:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D380u); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_0005(c, 243u, depth + 1u); else { c.pc = 0x00216558u; return; } if (c.pc != 0x0027D380u) [[unlikely]] return; }
L_0027D380:
    set32(c.r[5], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19440u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D398u); c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 246u, depth + 1u); else { c.pc = 0x002165F8u; return; } if (c.pc != 0x0027D398u) [[unlikely]] return; }
L_0027D398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D3A0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027D3A0u) [[unlikely]] return; }
L_0027D3A0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29908u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CB00u | kUnwind; return; } goto L_0027CB00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CA68u | kUnwind; return; } goto L_0027CA68; } }
L_0027D3B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 29944u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D3C0u); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_001E(c, 306u, depth + 1u); else { c.pc = 0x0027ACE0u; return; } if (c.pc != 0x0027D3C0u) [[unlikely]] return; }
L_0027D3C0:
    st32((c.r[28].w[0] - 29940u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D3B4u | kUnwind; return; } goto L_0027D3B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 29944u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027CBC8u | kUnwind; return; } goto L_0027CBC8; } }
L_0027D3D8:
    set32(c.r[5], ld32((c.r[28].w[0] - 29876u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] - 19312u);
    st8((c.r[28].w[0] - 29888u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[7], c.r[7].w[0] - 11200u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D40Cu); st8((c.r[28].w[0] - 29900u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001E(c, 10u, depth + 1u); else { c.pc = 0x00278080u; return; } if (c.pc != 0x0027D40Cu) [[unlikely]] return; }
L_0027D40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D34Cu | kUnwind; return; } goto L_0027D34C; } }
L_0027D414:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0027D440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29896u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0027D4B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D468u); set32(c.r[4], c.r[28].w[0] - 30636u);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x0027D468u) [[unlikely]] return; }
L_0027D468:
    set32(c.r[2], ld32((c.r[28].w[0] - 29864u)));
    set32(c.r[4], c.r[28].w[0] - 30636u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D47Cu); st32((c.r[28].w[0] - 29864u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x0027D47Cu) [[unlikely]] return; }
L_0027D47C:
    set32(c.r[3], ld32((c.r[28].w[0] - 29960u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29884u));
    st8((c.r[28].w[0] - 29888u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 29912u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 29960u), c.r[3].w[0]);  if (t) { goto L_0027D4B0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0027D4A8; } }
    st8((c.r[28].w[0] - 29884u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 1;
L_0027D4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D4B0u);  if (depth < kMaxDepth) unit_001E(c, 385u, depth + 1u); else { c.pc = 0x0027B630u; return; } if (c.pc != 0x0027D4B0u) [[unlikely]] return; }
L_0027D4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027D4C8; } }
L_0027D4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D4C0u);  if (depth < kMaxDepth) unit_001E(c, 28u, depth + 1u); else { c.pc = 0x00278300u; return; } if (c.pc != 0x0027D4C0u) [[unlikely]] return; }
L_0027D4C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29888u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D4B0u | kUnwind; return; } goto L_0027D4B0; } }
L_0027D4C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027D4E0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29888u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D504; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29912u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D504; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D4FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027D50C; } }
L_0027D504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027D4FCu | kUnwind; return; } goto L_0027D4FC; } }
L_0027D50C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D520:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B550u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 372u, depth); }
L_0027D530:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BAD0u | kUnwind; return; } [[clang::musttail]] return unit_001E(c, 414u, depth); }
L_0027D540:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 29896u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 29892u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0027D550:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C300u | kUnwind; return; } goto L_0027C300; }
L_0027D560:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027C6F0u | kUnwind; return; } goto L_0027C6F0; }
L_0027D570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D580:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D5A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D5B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D5C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027D5D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 32u);  c.pc = t; return; }
L_0027D5E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 112u);  c.pc = t; return; }
L_0027D5F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 104u));  c.pc = t; return; }
L_0027D600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0027D610:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[2].d[0] = c.r[3].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D638; } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027D638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027D63C; } }
L_0027D638:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D63C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D650:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 220u));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0027D660:
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 522u));
    set32(c.r[2], c.r[2].w[0] + 8704u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 522u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0027D6A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0027D6B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0027D6C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D6D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0027D6E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_0027D6F0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x0027C000u < 16384u) { entry = entries_001F[(t - 0x0027C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027D700:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D720:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D790:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D7A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D7B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D7C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D7D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0027D7E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027D800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D810:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D850:
    c.f[0] = ld32((c.r[4].w[0] + 308u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[5] = ld32((c.r[4].w[0] + 312u));
    c.f[4] = ld32((c.r[4].w[0] + 320u));
    c.f[2] = ld32((c.r[4].w[0] + 324u));
    c.f[3] = ld32((c.r[4].w[0] + 328u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[6] = ld32((c.r[4].w[0] + 304u));  if (t) { goto L_0027D8D8; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027D8D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027D8D8; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027D8D8; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[5], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027D8D8; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027D8D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027D8DC; } }
L_0027D8D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D8DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027D8F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 1396u)));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027D928; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 1388u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027D928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D920u);  if (depth < kMaxDepth) unit_009A(c, 193u, depth + 1u); else { c.pc = 0x0046B070u; return; } if (c.pc != 0x0027D920u) [[unlikely]] return; }
L_0027D920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027D92C; } }
L_0027D928:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027D92C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027D940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D95Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D95Cu) [[unlikely]] return; }
L_0027D95C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DA00; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027D9BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 676u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027D9BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D98Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D98Cu) [[unlikely]] return; }
L_0027D98C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027D9BC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 5760u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027D9BC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 676u)));
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] + 5632u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D9BCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 103u, depth + 1u); else { c.pc = 0x0031D1F0u; return; } if (c.pc != 0x0027D9BCu) [[unlikely]] return; }
L_0027D9BC:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 5760u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027DA00; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027D9F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027D9E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027D9E8u) [[unlikely]] return; }
L_0027D9E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DA00; } }
L_0027D9F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DA00u); set32(c.r[4], c.r[2].w[0] + 5632u);  if (depth < kMaxDepth) unit_0047(c, 63u, depth + 1u); else { c.pc = 0x0031CE80u; return; } if (c.pc != 0x0027DA00u) [[unlikely]] return; }
L_0027DA00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027DA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 672u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DA3Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027DA3Cu) [[unlikely]] return; }
L_0027DA3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DA4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027DA68; } }
L_0027DA4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 672u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 260u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DA64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027DA64u) [[unlikely]] return; }
L_0027DA64:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0027DA68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027DA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 672u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DAA0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027DAA0u) [[unlikely]] return; }
L_0027DAA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DB44; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027DB00; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 676u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027DB00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DAD0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027DAD0u) [[unlikely]] return; }
L_0027DAD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DB00; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 5760u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027DB00; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 676u)));
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] + 5632u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DB00u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 103u, depth + 1u); else { c.pc = 0x0031D1F0u; return; } if (c.pc != 0x0027DB00u) [[unlikely]] return; }
L_0027DB00:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 5760u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027DB44; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027DB34; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DB2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027DB2Cu) [[unlikely]] return; }
L_0027DB2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DB44; } }
L_0027DB34:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DB44u); set32(c.r[4], c.r[2].w[0] + 5632u);  if (depth < kMaxDepth) unit_0047(c, 63u, depth + 1u); else { c.pc = 0x0031CE80u; return; } if (c.pc != 0x0027DB44u) [[unlikely]] return; }
L_0027DB44:
    st32((c.r[16].w[0] + 676u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027DB60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 672u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 676u), c.r[6].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DB84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027DB84u) [[unlikely]] return; }
L_0027DB84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DC28; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027DBE4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 676u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027DBE4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DBB4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027DBB4u) [[unlikely]] return; }
L_0027DBB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027DBE4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 5760u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027DBE4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 676u)));
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] + 5632u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DBE4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 103u, depth + 1u); else { c.pc = 0x0031D1F0u; return; } if (c.pc != 0x0027DBE4u) [[unlikely]] return; }
L_0027DBE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 5760u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027DC28; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027DC18; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DC10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027DC10u) [[unlikely]] return; }
L_0027DC10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DC28; } }
L_0027DC18:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DC28u); set32(c.r[4], c.r[2].w[0] + 5632u);  if (depth < kMaxDepth) unit_0047(c, 63u, depth + 1u); else { c.pc = 0x0031CE80u; return; } if (c.pc != 0x0027DC28u) [[unlikely]] return; }
L_0027DC28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027DC40:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 523u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], 0u + 19u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { st8((c.r[4].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0027E770; }
L_0027DC60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[6].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027DC84; } }
L_0027DC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0027DCA8; } }
L_0027DC84:
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DCA0u); st8((c.r[4].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001F(c, 322u, depth + 1u); else { c.pc = 0x0027E770u; return; } if (c.pc != 0x0027DCA0u) [[unlikely]] return; }
L_0027DCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027DC7Cu | kUnwind; return; } goto L_0027DC7C; } }
L_0027DCA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027DCB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 32u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st16((c.r[4].w[0] + 1494u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0027DD18; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027DD10; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1581u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DCEC; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_0027DCEC:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_0027DCF0:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DD08u); set32(c.r[4], c.r[2].w[0] + 256u);  if (depth < kMaxDepth) unit_00A2(c, 277u, depth + 1u); else { c.pc = 0x0048BD70u; return; } if (c.pc != 0x0027DD08u) [[unlikely]] return; }
L_0027DD08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0027DD20; } }
L_0027DD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027DCF0u | kUnwind; return; } goto L_0027DCF0; } }
L_0027DD18:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0027DD20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027DD30:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 220u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(80ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027DE04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 24080u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0027C000u < 16384u) { entry = entries_001F[(t - 0x0027C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027DD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027DE08; } }
L_0027DD64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027DE08; } }
L_0027DD6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0027DE08; } }
L_0027DD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0027DE08; } }
L_0027DD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0027DE08; } }
L_0027DD84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0027DE08; } }
L_0027DD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0027DE08; } }
L_0027DD94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_0027DE08; } }
L_0027DD9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0027DE08; } }
L_0027DDA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_0027DE08; } }
L_0027DDAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0027DE08; } }
L_0027DDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_0027DE08; } }
L_0027DDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0027DE08; } }
L_0027DDC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_0027DE08; } }
L_0027DDCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_0027DE08; } }
L_0027DDD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_0027DE08; } }
L_0027DDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0027DE08; } }
L_0027DDE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 17u);  if (t) { goto L_0027DE08; } }
L_0027DDEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_0027DE08; } }
L_0027DDF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_0027DE08; } }
L_0027DDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 21u);  if (t) { goto L_0027DE08; } }
L_0027DE04:
    set32(c.r[2], 0u + 20u);
    c.budget -= 1;
L_0027DE08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 255ull;  c.pc = t; return; }
L_0027DE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 20368u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DE40u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 34u, depth + 1u); else { c.pc = 0x002E84E0u; return; } if (c.pc != 0x0027DE40u) [[unlikely]] return; }
L_0027DE40:
    st8((c.r[17].w[0] + 220u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027DE60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0027E008; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DE88; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_0027DE88:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0027DE98:
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    set32(c.r[3], ld32((c.r[5].w[0] + 344u)));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 40u), c.f[2]);  if (t) { goto L_0027E014; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027DED0; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_0027DED0:
    set32(c.r[2], ld32((c.r[5].w[0] + 348u)));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0027DEE0:
    c.f[4] = ld32((c.r[2].w[0] + 52u));
    set32(c.r[3], 0u + 1u);
    c.f[3] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = ld32((c.r[2].w[0] + 48u));
    c.f[6] = ld32((c.r[2].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[5] = ld32((c.r[29].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 16u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    st32((c.r[29].w[0] + 24u), c.f[5]);
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 20u), c.f[3]);  if (t) { goto L_0027DF94; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0027DF68; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DF60u); set32(c.r[7], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003A(c, 205u, depth + 1u); else { c.pc = 0x002EA2B0u; return; } if (c.pc != 0x0027DF60u) [[unlikely]] return; }
L_0027DF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0027DFE4; } }
L_0027DF68:
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DF8Cu); set32(c.r[8], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003A(c, 246u, depth + 1u); else { c.pc = 0x002EAF50u; return; } if (c.pc != 0x0027DF8Cu) [[unlikely]] return; }
L_0027DF8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0027DFE4; } }
L_0027DF94:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0027DFC0; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 1564u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DFB8u); set32(c.r[6], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_003C(c, 108u, depth + 1u); else { c.pc = 0x002F3040u; return; } if (c.pc != 0x0027DFB8u) [[unlikely]] return; }
L_0027DFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0027DFE4; } }
L_0027DFC0:
    set32(c.r[4], ld32((c.r[4].w[0] + 1564u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027DFE0u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_003C(c, 112u, depth + 1u); else { c.pc = 0x002F3610u; return; } if (c.pc != 0x0027DFE0u) [[unlikely]] return; }
L_0027DFE0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0027DFE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 23512u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 23512u), c.r[4].w[0]);  if (t) { goto L_0027E020; } }
L_0027E008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027DE98u | kUnwind; return; } goto L_0027DE98; } }
L_0027E014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027DEE0u | kUnwind; return; } goto L_0027DEE0; } }
L_0027E020:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027E030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 23510u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 23520u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027E05C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0027E078; } }
L_0027E05C:
    set32(c.r[4], c.r[4].w[0] + 1072u);
    set32(c.r[7], 0u - 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E06Cu); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0040(c, 90u, depth + 1u); else { c.pc = 0x003024A0u; return; } if (c.pc != 0x0027E06Cu) [[unlikely]] return; }
L_0027E06C:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_0027E078:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027E090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 23510u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 23520u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027E0BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0027E0D0; } }
L_0027E0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E0C4u); set32(c.r[4], c.r[4].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 77u, depth + 1u); else { c.pc = 0x00301EA0u; return; } if (c.pc != 0x0027E0C4u) [[unlikely]] return; }
L_0027E0C4:
    set32(c.r[3], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_0027E0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027E0E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.f[13] = c.f[12];  if (t) { goto L_0027E1CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23760u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0027C000u < 16384u) { entry = entries_001F[(t - 0x0027C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027E114:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E120u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 29u, depth + 1u); else { c.pc = 0x0028C610u; return; } if (c.pc != 0x0027E120u) [[unlikely]] return; }
L_0027E120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0027E1E0; } }
L_0027E128:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E134u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 23u, depth + 1u); else { c.pc = 0x0028C490u; return; } if (c.pc != 0x0027E134u) [[unlikely]] return; }
L_0027E134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E1DC; } }
L_0027E13C:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E148u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 5u, depth + 1u); else { c.pc = 0x0028C0D0u; return; } if (c.pc != 0x0027E148u) [[unlikely]] return; }
L_0027E148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E1DC; } }
L_0027E150:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E15Cu); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 399u, depth + 1u); else { c.pc = 0x0028BD80u; return; } if (c.pc != 0x0027E15Cu) [[unlikely]] return; }
L_0027E15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E1DC; } }
L_0027E164:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E170u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 396u, depth + 1u); else { c.pc = 0x0028BD20u; return; } if (c.pc != 0x0027E170u) [[unlikely]] return; }
L_0027E170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E1DC; } }
L_0027E178:
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E188u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 390u, depth + 1u); else { c.pc = 0x0028BC30u; return; } if (c.pc != 0x0027E188u) [[unlikely]] return; }
L_0027E188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E1DC; } }
L_0027E190:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E19Cu); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 14u, depth + 1u); else { c.pc = 0x0028C310u; return; } if (c.pc != 0x0027E19Cu) [[unlikely]] return; }
L_0027E19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E1DC; } }
L_0027E1A4:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E1B0u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 408u, depth + 1u); else { c.pc = 0x0028BF60u; return; } if (c.pc != 0x0027E1B0u) [[unlikely]] return; }
L_0027E1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E1DC; } }
L_0027E1B8:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E1C4u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 405u, depth + 1u); else { c.pc = 0x0028BEA0u; return; } if (c.pc != 0x0027E1C4u) [[unlikely]] return; }
L_0027E1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E1DC; } }
L_0027E1CC:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E1DCu); c.f[12] = c.f[13];  if (depth < kMaxDepth) unit_0023(c, 34u, depth + 1u); else { c.pc = 0x0028C700u; return; } if (c.pc != 0x0027E1DCu) [[unlikely]] return; }
L_0027E1DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0027E1E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027E1F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0027E37C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 23712u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0027C000u < 16384u) { entry = entries_001F[(t - 0x0027C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027E220:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027E388; } }
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E238u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x0027E238u) [[unlikely]] return; }
L_0027E238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0027E38C; } }
L_0027E240:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 552u));
    set32(c.r[3], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E258u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 150u, depth + 1u); else { c.pc = 0x0028D810u; return; } if (c.pc != 0x0027E258u) [[unlikely]] return; }
L_0027E258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E388; } }
L_0027E260:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 552u));
    set32(c.r[3], 0u + 27u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E278u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 147u, depth + 1u); else { c.pc = 0x0028D7C0u; return; } if (c.pc != 0x0027E278u) [[unlikely]] return; }
L_0027E278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E388; } }
L_0027E280:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 552u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E388; } }
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E29Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 159u, depth + 1u); else { c.pc = 0x0028D940u; return; } if (c.pc != 0x0027E29Cu) [[unlikely]] return; }
L_0027E29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E388; } }
L_0027E2A4:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 552u));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E388; } }
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E2C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 156u, depth + 1u); else { c.pc = 0x0028D8E0u; return; } if (c.pc != 0x0027E2C0u) [[unlikely]] return; }
L_0027E2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E388; } }
L_0027E2C8:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 552u));
    set32(c.r[3], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E2E8u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 387u, depth + 1u); else { c.pc = 0x0028BBD0u; return; } if (c.pc != 0x0027E2E8u) [[unlikely]] return; }
L_0027E2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E388; } }
L_0027E2F0:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 552u));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E388; } }
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E310u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 180u, depth + 1u); else { c.pc = 0x0028DC70u; return; } if (c.pc != 0x0027E310u) [[unlikely]] return; }
L_0027E310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E388; } }
L_0027E318:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 552u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E388; } }
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E334u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 183u, depth + 1u); else { c.pc = 0x0028DCE0u; return; } if (c.pc != 0x0027E334u) [[unlikely]] return; }
L_0027E334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E388; } }
L_0027E33C:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027E388; } }
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E354u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x0027E354u) [[unlikely]] return; }
L_0027E354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E388; } }
L_0027E35C:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027E388; } }
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E374u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x0027E374u) [[unlikely]] return; }
L_0027E374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E388; } }
L_0027E37C:
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E388u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x0027E388u) [[unlikely]] return; }
L_0027E388:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0027E38C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027E3A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0027E498; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0027C000u < 16384u) { entry = entries_001F[(t - 0x0027C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027E3D0:
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E3DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x0027E3DCu) [[unlikely]] return; }
L_0027E3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0027E4A8; } }
L_0027E3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E3ECu); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 150u, depth + 1u); else { c.pc = 0x0028D810u; return; } if (c.pc != 0x0027E3ECu) [[unlikely]] return; }
L_0027E3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E4A4; } }
L_0027E3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E3FCu); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 147u, depth + 1u); else { c.pc = 0x0028D7C0u; return; } if (c.pc != 0x0027E3FCu) [[unlikely]] return; }
L_0027E3FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E4A4; } }
L_0027E404:
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E410u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 159u, depth + 1u); else { c.pc = 0x0028D940u; return; } if (c.pc != 0x0027E410u) [[unlikely]] return; }
L_0027E410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E4A4; } }
L_0027E418:
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E424u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 156u, depth + 1u); else { c.pc = 0x0028D8E0u; return; } if (c.pc != 0x0027E424u) [[unlikely]] return; }
L_0027E424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E4A4; } }
L_0027E42C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E43Cu); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 387u, depth + 1u); else { c.pc = 0x0028BBD0u; return; } if (c.pc != 0x0027E43Cu) [[unlikely]] return; }
L_0027E43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E4A4; } }
L_0027E444:
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E454u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 180u, depth + 1u); else { c.pc = 0x0028DC70u; return; } if (c.pc != 0x0027E454u) [[unlikely]] return; }
L_0027E454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E4A4; } }
L_0027E45C:
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E468u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 183u, depth + 1u); else { c.pc = 0x0028DCE0u; return; } if (c.pc != 0x0027E468u) [[unlikely]] return; }
L_0027E468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E4A4; } }
L_0027E470:
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E47Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x0027E47Cu) [[unlikely]] return; }
L_0027E47C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E4A4; } }
L_0027E484:
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E490u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x0027E490u) [[unlikely]] return; }
L_0027E490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E4A4; } }
L_0027E498:
    set32(c.r[4], c.r[4].w[0] + 544u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E4A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x0027E4A4u) [[unlikely]] return; }
L_0027E4A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0027E4A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027E4B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 24u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0027E560; } }
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E560; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E560; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E560; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E560; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E560; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E550; } }
    set32(c.r[3], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E550; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E550; } }
    set32(c.r[3], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E550; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E550; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0027E550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0027E56C; } }
L_0027E550:
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0027E56C; } }
L_0027E560:
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0027E56C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027E5A4; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0027E590; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E588u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 23u, depth + 1u); else { c.pc = 0x0028C490u; return; } if (c.pc != 0x0027E588u) [[unlikely]] return; }
L_0027E588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E600; } }
L_0027E590:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E59Cu); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 29u, depth + 1u); else { c.pc = 0x0028C610u; return; } if (c.pc != 0x0027E59Cu) [[unlikely]] return; }
L_0027E59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E600; } }
L_0027E5A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027E608; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    st32((c.r[4].w[0] + 720u), c.f[0]);
    c.budget -= 2;
L_0027E5C8:
    c.f[3] = ld32((c.r[6].w[0]));
    set32(c.r[3], 0u - 5u);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[4].w[0] + 688u), c.f[3]);
    st32((c.r[4].w[0] + 692u), c.f[2]);
    st32((c.r[4].w[0] + 696u), c.f[1]);
    st32((c.r[4].w[0] + 700u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 724u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
L_0027E600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0027E618; } }
L_0027E608:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55051ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 720u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027E5C8u | kUnwind; return; } goto L_0027E5C8; } }
L_0027E618:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027E620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 14u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0027E71C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23616u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0027C000u < 16384u) { entry = entries_001F[(t - 0x0027C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027E654:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E660u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 34u, depth + 1u); else { c.pc = 0x0028C700u; return; } if (c.pc != 0x0027E660u) [[unlikely]] return; }
L_0027E660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0027E72C; } }
L_0027E668:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E674u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 29u, depth + 1u); else { c.pc = 0x0028C610u; return; } if (c.pc != 0x0027E674u) [[unlikely]] return; }
L_0027E674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E728; } }
L_0027E67C:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E688u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 26u, depth + 1u); else { c.pc = 0x0028C550u; return; } if (c.pc != 0x0027E688u) [[unlikely]] return; }
L_0027E688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E728; } }
L_0027E690:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E69Cu); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 23u, depth + 1u); else { c.pc = 0x0028C490u; return; } if (c.pc != 0x0027E69Cu) [[unlikely]] return; }
L_0027E69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E728; } }
L_0027E6A4:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E6B0u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 14u, depth + 1u); else { c.pc = 0x0028C310u; return; } if (c.pc != 0x0027E6B0u) [[unlikely]] return; }
L_0027E6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E728; } }
L_0027E6B8:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E6C4u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 11u, depth + 1u); else { c.pc = 0x0028C250u; return; } if (c.pc != 0x0027E6C4u) [[unlikely]] return; }
L_0027E6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E728; } }
L_0027E6CC:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E6D8u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 8u, depth + 1u); else { c.pc = 0x0028C190u; return; } if (c.pc != 0x0027E6D8u) [[unlikely]] return; }
L_0027E6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E728; } }
L_0027E6E0:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E6ECu); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 5u, depth + 1u); else { c.pc = 0x0028C0D0u; return; } if (c.pc != 0x0027E6ECu) [[unlikely]] return; }
L_0027E6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E728; } }
L_0027E6F4:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E700u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 405u, depth + 1u); else { c.pc = 0x0028BEA0u; return; } if (c.pc != 0x0027E700u) [[unlikely]] return; }
L_0027E700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E728; } }
L_0027E708:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E714u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 402u, depth + 1u); else { c.pc = 0x0028BDE0u; return; } if (c.pc != 0x0027E714u) [[unlikely]] return; }
L_0027E714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027E728; } }
L_0027E71C:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E728u); set32(c.r[4], c.r[4].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 23u, depth + 1u); else { c.pc = 0x0028C490u; return; } if (c.pc != 0x0027E728u) [[unlikely]] return; }
L_0027E728:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0027E72C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027E740:
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 530u));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { set32(c.r[4], c.r[4].w[0] + 752u);  [[clang::musttail]] return unit_0065(c, 36u, depth); }
L_0027E770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 522u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027E8B8; } }
    st8((c.r[16].w[0] + 521u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 522u));
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E7A8u); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 470u, depth + 1u); else { c.pc = 0x00313F20u; return; } if (c.pc != 0x0027E7A8u) [[unlikely]] return; }
L_0027E7A8:
    st8((c.r[16].w[0] + 522u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_0027E848; } }
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E848; } }
    set32(c.r[2], 0u + 68u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E848; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E848; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E848; } }
    set32(c.r[2], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E848; } }
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E848; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027E848; } }
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 8704u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 525u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[4].d[0] & 2ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_0027E848:
    set32(c.r[3], ld32((c.r[16].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027E8B0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027E8B0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027E8B0; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 522u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[5].w[0] + 8704u);
    set32(c.r[3], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 522u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027E8B0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E8B0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 40u, depth + 1u); else { c.pc = 0x00388BD0u; return; } if (c.pc != 0x0027E8B0u) [[unlikely]] return; }
L_0027E8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027E8B8u); set32(c.r[4], c.r[16].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 40u, depth + 1u); else { c.pc = 0x00394990u; return; } if (c.pc != 0x0027E8B8u) [[unlikely]] return; }
L_0027E8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027E8D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    c.f[3] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[5] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[2] = 0u;
    c.f[0] = ld32((c.r[2].w[0] + 1612u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027E938; } }
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027E938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027E93C; } }
L_0027E938:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027E93C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027E950:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    set32(c.r[2], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027E9C4; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = ld32((c.r[4].w[0] + 40u));
    c.f[6] = ld32((c.r[4].w[0] + 36u));
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = c.r[2].w[0];
    c.f[8] = ld32((c.r[4].w[0] + 32u));
    c.f[7] = ld32((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40100000u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    c.f[3] = ld32((c.r[4].w[0] + 196u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = 0u;
    c.f[7] = fp::ee::sub(c.fcr31, c.f[8], c.f[7]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[7]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027E9C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027E9C8; } }
L_0027E9C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027E9C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027E9D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = c.r[8].d[0] == 0ull; c.f[4] = ld32((c.r[29].w[0] + 12u));  if (t) { goto L_0027E9F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x400C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[5] = c.r[2].w[0];
    c.budget -= 3;
L_0027E9F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1644u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0027EAD8; } }
    c.f[0] = 0u;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[9], c.r[9].w[0] - 24192u);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    c.budget -= 4;
L_0027EA14:
    c.r[12].d[0] = c.r[8].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    set32(c.r[10], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1607u)));  if (t) { goto L_0027EBA8; } }
    c.r[10].d[0] = c.r[10].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[1].d[0] = c.r[10].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[13].d[0] = c.r[10].d[0] & 255ull;  if (t) { goto L_0027EA48; } }
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[13].d[0] = ld8((c.r[10].w[0] + 1572u));
    c.budget -= 3;
L_0027EA48:
    set32(c.r[10], ld32((c.r[3].w[0] + 4u)));
    c.r[11].d[0] = c.r[13].d[0] & 255ull;
    c.r[10].d[0] = c.r[11].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_0027EA60; } }
    c.r[13].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_0027EA60:
    c.r[10].d[0] = c.r[13].d[0] & 255ull;
    set32(c.r[11], c.r[10].w[0] << 6);
    set32(c.r[10], ld32((c.r[4].w[0] + 348u)));
    set32(c.r[14], c.r[10].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0027EA70:
    set32(c.r[10], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[11], c.r[12].w[0] << 2);
    c.r[12].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[13], c.r[12].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[29].w[0]);
    set32(c.r[12], c.r[12].w[0] + c.r[29].w[0]);
    set32(c.r[13], c.r[13].w[0] + 32u);
    set32(c.r[11], c.r[10].w[0] + c.r[11].w[0]);
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.f[0] = ld32((c.r[11].w[0] + 1628u));
    set32(c.r[12], c.r[12].w[0] + 16u);
    c.f[3] = ld32((c.r[14].w[0] + 48u));
    c.r[10].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.f[2] = ld32((c.r[14].w[0] + 52u));
    c.f[1] = ld32((c.r[14].w[0] + 56u));
    st32((c.r[13].w[0] + 12u), c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    st32((c.r[12].w[0]), c.f[0]);
    st32((c.r[13].w[0]), c.f[3]);
    st32((c.r[13].w[0] + 4u), c.f[2]);
    c.budget -= 25;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[13].w[0] + 8u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EA14u | kUnwind; return; } goto L_0027EA14; } }
    c.budget -= 1;
L_0027EAD8:
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_0027EBA0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[9], c.r[29].w[0] + 32u);
    set32(c.r[8], c.r[29].w[0] + 16u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1644u)));
    c.budget -= 5;
L_0027EAF8:
    c.r[1].d[0] = 0ll < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0027EB90; } }
    c.f[6] = ld32((c.r[5].w[0]));
    c.r[12].d[0] = c.r[9].d[0] + 0ull;
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 5;
L_0027EB18:
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    c.f[3] = ld32((c.r[12].w[0]));
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    c.f[0] = ld32((c.r[11].w[0]));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0027EB50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027EB50:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EB7C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 344u)));
    c.r[3].d[0] = c.r[13].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1607u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0027EBB0; } }
L_0027EB7C:
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[12], c.r[12].w[0] + 16u);
    c.r[2].d[0] = c.r[13].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EB18u | kUnwind; return; } goto L_0027EB18; } }
L_0027EB90:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[2].d[0] = c.r[14].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EAF8u | kUnwind; return; } goto L_0027EAF8; } }
L_0027EBA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EBB0; } }
L_0027EBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[9].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EA70u | kUnwind; return; } goto L_0027EA70; } }
L_0027EBB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0027EBC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027EC38; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1572u));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_0027EBE8:
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0] + 52u));
    c.f[6] = ld32((c.r[2].w[0] + 48u));
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 200u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027EC30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027EC44; } }
L_0027EC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027EC44; } }
L_0027EC38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EBE8u | kUnwind; return; } goto L_0027EBE8; } }
L_0027EC44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027EC50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[3] = ld32((c.r[2].w[0] + 736u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.f[4] = ld32((c.r[29].w[0] + 12u));
    c.f[5] = ld32((c.r[29].w[0] + 28u));
    c.f[6] = ld32((c.r[29].w[0] + 44u));
    c.f[7] = ld32((c.r[29].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[2] = ld32((c.r[2].w[0] + 740u));
    st32((c.r[29].w[0] + 128u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[2].w[0] + 744u));
    st32((c.r[29].w[0] + 132u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] + 748u));
    st32((c.r[29].w[0] + 136u), c.f[1]);
    set32(c.r[2], 0u + 63u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 140u), c.f[0]);  if (t) { goto L_0027EFF8; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027EFF8; } }
L_0027ECAC:
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027F018; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1577u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027ECD0; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_0027ECD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0027ECE0:
    c.f[2] = ld32((c.r[2].w[0] + 48u));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    st32((c.r[29].w[0] + 76u), c.f[7]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 72u), c.f[0]);  if (t) { goto L_0027F024; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027ED1C; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_0027ED1C:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0027ED2C:
    c.f[2] = ld32((c.r[2].w[0] + 48u));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    st32((c.r[29].w[0] + 92u), c.f[6]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_0027F030; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1576u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027ED68; } }
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_0027ED68:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0027ED78:
    c.f[2] = ld32((c.r[3].w[0] + 48u));
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[29].w[0] + 108u), c.f[5]);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 104u), c.f[0]);  if (t) { goto L_0027F03C; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1572u));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_0027EDB8:
    c.f[2] = ld32((c.r[2].w[0] + 48u));
    c.r[13].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 124u), c.f[4]);
    set32(c.r[8], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 112u), c.f[2]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.budget -= 12;
L_0027EDE8:
    c.f[6] = ld32((c.r[11].w[0]));
    c.r[12].d[0] = 0ull + 0ull;
    c.f[5] = ld32((c.r[11].w[0] + 4u));
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    c.f[4] = ld32((c.r[11].w[0] + 8u));
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 6;
L_0027EE00:
    c.f[2] = ld32((c.r[10].w[0] + 4u));
    c.f[3] = ld32((c.r[10].w[0]));
    c.f[1] = ld32((c.r[10].w[0] + 8u));
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0027EE38; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027EE38:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EE50; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027F06C; } }
L_0027EE50:
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    c.r[2].d[0] = c.r[12].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EE00u | kUnwind; return; } goto L_0027EE00; } }
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[2].d[0] = c.r[13].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EDE8u | kUnwind; return; } goto L_0027EDE8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027EFF0; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0027F048; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1574u));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EEA8; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1572u));
    c.budget -= 1;
L_0027EEA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0027EEB8:
    c.f[5] = ld32((c.r[2].w[0] + 52u));
    c.f[6] = ld32((c.r[2].w[0] + 56u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; c.f[4] = ld32((c.r[2].w[0] + 48u));  if (t) { goto L_0027F054; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1586u));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EEE0; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1572u));
    c.budget -= 1;
L_0027EEE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0027EEF0:
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[7].d[0] == 0ull; c.f[6] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_0027F060; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1586u));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EF38; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1572u));
    c.budget -= 1;
L_0027EF38:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0027EF48:
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    set32(c.r[3], 0u + 1u);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 17;
L_0027EF8C:
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0027EFC0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027EFC0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027EFE0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1621u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0027F06C; } }
L_0027EFE0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF8Cu | kUnwind; return; } goto L_0027EF8C; } }
L_0027EFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F06C; } }
L_0027EFF8:
    c.f[0] = ld32((c.r[4].w[0] + 1448u));
    set32(c.r[2], c.r[29].w[0] + 140u);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027ECACu | kUnwind; return; } goto L_0027ECAC; } }
L_0027F018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027ECE0u | kUnwind; return; } goto L_0027ECE0; } }
L_0027F024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027ED2Cu | kUnwind; return; } goto L_0027ED2C; } }
L_0027F030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027ED78u | kUnwind; return; } goto L_0027ED78; } }
L_0027F03C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EDB8u | kUnwind; return; } goto L_0027EDB8; } }
L_0027F048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EEB8u | kUnwind; return; } goto L_0027EEB8; } }
L_0027F054:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EEF0u | kUnwind; return; } goto L_0027EEF0; } }
L_0027F060:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027EF48u | kUnwind; return; } goto L_0027EF48; } }
L_0027F06C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0027F080:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.f[5] = ld32((c.r[29].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1644u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0027F160; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[9], c.r[9].w[0] - 24192u);
    c.budget -= 2;
L_0027F0A4:
    c.r[12].d[0] = c.r[8].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    set32(c.r[10], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1607u)));  if (t) { goto L_0027F448; } }
    c.r[10].d[0] = c.r[10].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[1].d[0] = c.r[10].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[13].d[0] = c.r[10].d[0] & 255ull;  if (t) { goto L_0027F0D8; } }
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[13].d[0] = ld8((c.r[10].w[0] + 1572u));
    c.budget -= 3;
L_0027F0D8:
    set32(c.r[10], ld32((c.r[3].w[0] + 4u)));
    c.r[11].d[0] = c.r[13].d[0] & 255ull;
    c.r[10].d[0] = c.r[11].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_0027F0F0; } }
    c.r[13].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_0027F0F0:
    c.r[10].d[0] = c.r[13].d[0] & 255ull;
    set32(c.r[11], c.r[10].w[0] << 6);
    set32(c.r[10], ld32((c.r[4].w[0] + 348u)));
    set32(c.r[15], c.r[10].w[0] + c.r[11].w[0]);
    c.budget -= 4;
L_0027F100:
    set32(c.r[13], c.r[12].w[0] << 2);
    set32(c.r[12], ld32((c.r[4].w[0] + 344u)));
    c.r[10].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[11], c.r[10].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[14], c.r[11].w[0] + c.r[29].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + 32u);
    set32(c.r[11], c.r[10].w[0] + c.r[29].w[0]);
    c.f[4] = ld32((c.r[15].w[0] + 48u));
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.f[3] = ld32((c.r[15].w[0] + 52u));
    c.r[10].d[0] = c.r[8].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    c.f[1] = ld32((c.r[12].w[0] + 1612u));
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[2] = ld32((c.r[15].w[0] + 56u));
    st32((c.r[14].w[0] + 12u), c.f[5]);
    st32((c.r[14].w[0]), c.f[4]);
    st32((c.r[14].w[0] + 4u), c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[14].w[0] + 8u), c.f[2]);
    c.budget -= 24;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[11].w[0] + 16u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F0A4u | kUnwind; return; } goto L_0027F0A4; } }
L_0027F160:
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.r[24].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[5].w[0] + 28u));
    c.r[14].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    set32(c.r[13], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1644u)));
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.r[10].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    set32(c.r[9], c.r[29].w[0] + 32u);
    set32(c.r[8], c.r[29].w[0] + 16u);
    c.budget -= 16;
L_0027F1A0:
    c.r[1].d[0] = 0ll < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[15].d[0] = 0ull + 0ull;  if (t) { goto L_0027F248; } }
    c.f[7] = ld32((c.r[14].w[0]));
    c.r[12].d[0] = c.r[9].d[0] + 0ull;
    c.f[6] = ld32((c.r[14].w[0] + 4u));
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    c.f[5] = ld32((c.r[14].w[0] + 8u));
    c.f[4] = ld32((c.r[13].w[0]));
    c.budget -= 7;
L_0027F1C8:
    c.f[0] = ld32((c.r[11].w[0]));
    c.f[2] = ld32((c.r[12].w[0] + 4u));
    c.f[3] = ld32((c.r[12].w[0]));
    c.f[1] = ld32((c.r[12].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[7]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0027F208; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027F208:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027F234; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 344u)));
    c.r[3].d[0] = c.r[15].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1607u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0027F48C; } }
L_0027F234:
    set32(c.r[15], c.r[15].w[0] + 1u);
    set32(c.r[12], c.r[12].w[0] + 16u);
    c.r[2].d[0] = c.r[15].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F1C8u | kUnwind; return; } goto L_0027F1C8; } }
L_0027F248:
    set32(c.r[24], c.r[24].w[0] + 1u);
    c.r[2].d[0] = c.r[24].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[14], c.r[14].w[0] + 16u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F1A0u | kUnwind; return; } goto L_0027F1A0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027F2D0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027F450; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1572u));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_0027F294:
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    set32(c.r[2], ld32((c.r[7].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027F45C; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1572u));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_0027F2C0:
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027F440; } }
L_0027F2D0:
    set32(c.r[7], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0027F468; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1574u));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027F2F4; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1572u));
    c.budget -= 1;
L_0027F2F4:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0027F304:
    c.f[5] = ld32((c.r[2].w[0] + 52u));
    c.f[6] = ld32((c.r[2].w[0] + 56u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; c.f[4] = ld32((c.r[2].w[0] + 48u));  if (t) { goto L_0027F474; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1586u));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027F32C; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1572u));
    c.budget -= 1;
L_0027F32C:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0027F33C:
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[7].d[0] == 0ull; c.f[6] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_0027F480; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1586u));
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027F384; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1572u));
    c.budget -= 1;
L_0027F384:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0027F394:
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.f[3] = ld32((c.r[3].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    set32(c.r[3], 0u + 1u);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 17;
L_0027F3D8:
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0027F40C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027F40C:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027F42C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1621u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0027F48C; } }
L_0027F42C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F3D8u | kUnwind; return; } goto L_0027F3D8; } }
    c.budget -= 1;
L_0027F440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F48C; } }
L_0027F448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[9].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F100u | kUnwind; return; } goto L_0027F100; } }
L_0027F450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F294u | kUnwind; return; } goto L_0027F294; } }
L_0027F45C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F2C0u | kUnwind; return; } goto L_0027F2C0; } }
L_0027F468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F304u | kUnwind; return; } goto L_0027F304; } }
L_0027F474:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F33Cu | kUnwind; return; } goto L_0027F33C; } }
L_0027F480:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 24192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F394u | kUnwind; return; } goto L_0027F394; } }
L_0027F48C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0027F4A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027F6CC; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027F4DC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 216u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027F4DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F72C; } }
L_0027F4DC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027F500; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 216u)));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 28u));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0027F500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F72C; } }
L_0027F500:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 807u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0027F6D4; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 807u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0027F6D4; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 752u)));
    c.r[7].d[0] = ld8((c.r[6].w[0] + 119u));
    c.r[6].d[0] = c.r[7].d[0] << 58;
    c.r[6].d[0] = c.r[6].d[0] >> 62;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0027F6DC; } }
    c.r[6].d[0] = c.r[7].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0027F6DC; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 525u));
    c.r[6].d[0] = c.r[6].d[0] << 59;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0027F6DC; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 752u)));
    c.r[7].d[0] = ld8((c.r[6].w[0] + 119u));
    c.r[6].d[0] = c.r[7].d[0] << 58;
    c.r[6].d[0] = c.r[6].d[0] >> 62;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0027F6E4; } }
    c.r[6].d[0] = c.r[7].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0027F6E4; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 525u));
    c.r[6].d[0] = c.r[6].d[0] << 59;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0027F6E4; } }
    c.r[7].d[0] = ld16((c.r[4].w[0] + 380u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0] + 12u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 48u));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = c.r[7].d[0] >> 57;
    c.budget -= 11;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_0027F6EC; } }
    c.f[1] = ld32((c.r[8].w[0] + 56u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[0] = c.r[6].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 360u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027F728; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[6].d[0] = c.r[6].d[0] | 52429ull;
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027F728; } }
    c.f[6] = ld32((c.r[4].w[0] + 104u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.f[5] = ld32((c.r[5].w[0] + 104u));
    c.r[7].d[0] = c.r[6].d[0] | 4059ull;
    c.f[4] = c.r[7].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[6].d[0] = c.r[6].d[0] | 63875ull;
    c.r[9].d[0] = 0ull | 0ull;
    c.f[3] = c.r[6].w[0];
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[9].d[0] = c.r[9].d[0] | 32768ull;
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.r[7].d[0] = c.r[7].d[0] | 4059ull;
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[1] = 0u;
    c.f[0] = c.r[6].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    set32(c.r[6], c.f[1]);
    c.f[2] = c.r[7].w[0];
    c.r[9].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.f[3] = c.r[8].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 38;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027F6F4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027F6FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027F6C4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 212u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 50u);
    set32(c.r[7], 0u + 25u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F6C4u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x0027F6C4u) [[unlikely]] return; }
L_0027F6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027F72C; } }
L_0027F6CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F72C; } }
L_0027F6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F72C; } }
L_0027F6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F72C; } }
L_0027F6E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F72C; } }
L_0027F6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F72C; } }
L_0027F6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027F72C; } }
L_0027F6FC:
    set32(c.r[2], ld32((c.r[5].w[0] + 212u)));
    set32(c.r[6], 0u + 50u);
    set32(c.r[7], 0u + 25u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    set32(c.r[4], c.r[2].w[0] + 168u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F720u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x0027F720u) [[unlikely]] return; }
L_0027F720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F6C4u | kUnwind; return; } goto L_0027F6C4; } }
L_0027F728:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027F72C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027F740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027F84C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[4].w[0] + 32u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    st32((c.r[29].w[0] + 24u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 20u), c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 432u), c.f[1]);
    st32((c.r[4].w[0] + 436u), c.f[3]);
    st32((c.r[4].w[0] + 440u), c.f[5]);
    st32((c.r[4].w[0] + 444u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29676u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 29676u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 16u), c.f[1]);  if (t) { goto L_0027F86C; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 348u)));
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    set32(c.r[7], c.r[4].w[0] + 240u);
    set32(c.r[6], 0u + 8u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    st128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    vu::addbc4<1>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[8].w[0] + 48u), c.f[0]);
    st32((c.r[8].w[0] + 52u), c.f[1]);
    st32((c.r[8].w[0] + 56u), c.f[2]);
    c.budget -= 18;
L_0027F810:
    set32(c.r[5], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 8u);
    st32((c.r[7].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027F810u | kUnwind; return; } goto L_0027F810; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 523u));
    set32(c.r[3], 0u - 33u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0027F874; } }
L_0027F84C:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0027F874; } }
L_0027F86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F874u);  if (depth < kMaxDepth) unit_0001(c, 186u, depth + 1u); else { c.pc = 0x00207C30u; return; } if (c.pc != 0x0027F874u) [[unlikely]] return; }
L_0027F874:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027F880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[6] = ld32((c.r[29].w[0] + 44u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027F978; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[4] = ld32((c.r[2].w[0] + 2436u));
    c.f[5] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[16].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[2].w[0] + 2440u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[2].w[0] + 2432u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 432u), c.f[0]);
    st32((c.r[16].w[0] + 436u), c.f[4]);
    st32((c.r[16].w[0] + 440u), c.f[2]);
    st32((c.r[16].w[0] + 444u), c.f[6]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29676u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 29676u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + 32u);  if (t) { goto L_0027F998; } }
    c.f[2] = ld32((c.r[16].w[0] + 108u));
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.f[1] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 240u), c.f[1]);
    st32((c.r[16].w[0] + 272u), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 248u), c.f[0]);
    st32((c.r[16].w[0] + 280u), c.f[1]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F948u); st32((c.r[16].w[0] + 296u), c.f[0]);  if (depth < kMaxDepth) unit_003C(c, 116u, depth + 1u); else { c.pc = 0x002F3C40u; return; } if (c.pc != 0x0027F948u) [[unlikely]] return; }
L_0027F948:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027F968; } }
    set32(c.r[4], c.r[16].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F968u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0011(c, 309u, depth + 1u); else { c.pc = 0x00246BB0u; return; } if (c.pc != 0x0027F968u) [[unlikely]] return; }
L_0027F968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F970u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 186u, depth + 1u); else { c.pc = 0x00207C30u; return; } if (c.pc != 0x0027F970u) [[unlikely]] return; }
L_0027F970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0027F9A4; } }
L_0027F978:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0027F9A0; } }
L_0027F998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027F9A0u);  if (depth < kMaxDepth) unit_0001(c, 186u, depth + 1u); else { c.pc = 0x00207C30u; return; } if (c.pc != 0x0027F9A0u) [[unlikely]] return; }
L_0027F9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0027F9A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027F9B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[6] = ld32((c.r[29].w[0] + 76u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027FA60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[4] = ld32((c.r[2].w[0] + 2436u));
    c.f[5] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[2].w[0] + 2440u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[2].w[0] + 2432u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 432u), c.f[0]);
    st32((c.r[17].w[0] + 436u), c.f[4]);
    st32((c.r[17].w[0] + 440u), c.f[2]);
    st32((c.r[17].w[0] + 444u), c.f[6]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 32u);  if (t) { goto L_0027FA80; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[2], 0u + 57u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027FA50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FA48u);  if (depth < kMaxDepth) unit_0001(c, 184u, depth + 1u); else { c.pc = 0x00207B50u; return; } if (c.pc != 0x0027FA48u) [[unlikely]] return; }
L_0027FA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027FA58; } }
L_0027FA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FA58u);  if (depth < kMaxDepth) unit_0001(c, 186u, depth + 1u); else { c.pc = 0x00207C30u; return; } if (c.pc != 0x0027FA58u) [[unlikely]] return; }
L_0027FA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0027FCC4; } }
L_0027FA60:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0027FCC0; } }
L_0027FA80:
    set32(c.r[2], ld32((c.r[28].w[0] - 29676u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 29676u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027FBB0; } }
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    set32(c.r[6], c.r[17].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 240u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
L_0027FAB0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027FAB0u | kUnwind; return; } goto L_0027FAB0; } }
    c.f[0] = ld32((c.r[17].w[0] + 240u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 244u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 248u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 256u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 260u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 264u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 272u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 276u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 280u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 288u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 292u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 296u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[17].w[0] + 296u), c.f[0]);
    c.budget -= 42;
L_0027FB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FB80u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_0001(c, 198u, depth + 1u); else { c.pc = 0x00207ED0u; return; } if (c.pc != 0x0027FB80u) [[unlikely]] return; }
L_0027FB80:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[2], 0u + 57u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027FBA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FB98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 184u, depth + 1u); else { c.pc = 0x00207B50u; return; } if (c.pc != 0x0027FB98u) [[unlikely]] return; }
L_0027FB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027FBA8; } }
L_0027FBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FBA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 186u, depth + 1u); else { c.pc = 0x00207C30u; return; } if (c.pc != 0x0027FBA8u) [[unlikely]] return; }
L_0027FBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027FCC0; } }
L_0027FBB0:
    c.f[21] = ld32((c.r[17].w[0] + 104u));
    c.f[20] = ld32((c.r[17].w[0] + 108u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FBC0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0027FBC0u) [[unlikely]] return; }
L_0027FBC0:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FBCCu); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0027FBCCu) [[unlikely]] return; }
L_0027FBCC:
    st32((c.r[17].w[0] + 240u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 272u), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 248u), c.f[0]);
    st32((c.r[17].w[0] + 280u), c.f[21]);
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 252u), 0u);
    st32((c.r[17].w[0] + 244u), 0u);
    st32((c.r[17].w[0] + 284u), 0u);
    st32((c.r[17].w[0] + 276u), 0u);
    st32((c.r[17].w[0] + 268u), 0u);
    st32((c.r[17].w[0] + 264u), 0u);
    st32((c.r[17].w[0] + 256u), 0u);
    st32((c.r[17].w[0] + 296u), 0u);
    st32((c.r[17].w[0] + 292u), 0u);
    st32((c.r[17].w[0] + 288u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 240u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 244u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 248u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 256u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 260u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 264u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 272u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 276u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 280u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 280u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 288u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 292u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 296u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[17].w[0] + 288u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[17].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 61;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 296u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027FB78u | kUnwind; return; } goto L_0027FB78; } }
L_0027FCC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0027FCC4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027FCE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[6] = ld32((c.r[29].w[0] + 44u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027FD64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[4] = ld32((c.r[2].w[0] + 2436u));
    c.f[5] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[16].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[2].w[0] + 2440u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[2].w[0] + 2432u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 432u), c.f[0]);
    st32((c.r[16].w[0] + 436u), c.f[4]);
    st32((c.r[16].w[0] + 440u), c.f[2]);
    st32((c.r[16].w[0] + 444u), c.f[6]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027FD84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FD5Cu);  if (depth < kMaxDepth) unit_0001(c, 186u, depth + 1u); else { c.pc = 0x00207C30u; return; } if (c.pc != 0x0027FD5Cu) [[unlikely]] return; }
L_0027FD5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0027FDC0; } }
L_0027FD64:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0027FDBC; } }
L_0027FD84:
    set32(c.r[6], c.r[16].w[0] + 240u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 2;
L_0027FD8C:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027FD8Cu | kUnwind; return; } goto L_0027FD8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FDB4u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_0001(c, 198u, depth + 1u); else { c.pc = 0x00207ED0u; return; } if (c.pc != 0x0027FDB4u) [[unlikely]] return; }
L_0027FDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FDBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 186u, depth + 1u); else { c.pc = 0x00207C30u; return; } if (c.pc != 0x0027FDBCu) [[unlikely]] return; }
L_0027FDBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0027FDC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027FDD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u - 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u - 9u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 523u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 523u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 1416u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FE28u); set32(c.r[4], c.r[4].w[0] - 15840u);  if (depth < kMaxDepth) unit_0091(c, 158u, depth + 1u); else { c.pc = 0x004463C0u; return; } if (c.pc != 0x0027FE28u) [[unlikely]] return; }
L_0027FE28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FE38u); set32(c.r[4], c.r[4].w[0] - 14992u);  if (depth < kMaxDepth) unit_0091(c, 158u, depth + 1u); else { c.pc = 0x004463C0u; return; } if (c.pc != 0x0027FE38u) [[unlikely]] return; }
L_0027FE38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FE48u); set32(c.r[4], c.r[4].w[0] - 14144u);  if (depth < kMaxDepth) unit_0091(c, 158u, depth + 1u); else { c.pc = 0x004463C0u; return; } if (c.pc != 0x0027FE48u) [[unlikely]] return; }
L_0027FE48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027FE58u); set32(c.r[4], c.r[4].w[0] - 13072u);  if (depth < kMaxDepth) unit_0091(c, 158u, depth + 1u); else { c.pc = 0x004463C0u; return; } if (c.pc != 0x0027FE58u) [[unlikely]] return; }
L_0027FE58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027FE70:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027FEA0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0027FEA0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[5].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[5].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 5;
L_0027FE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027FEC8; } }
L_0027FEA0:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 811u));
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 808u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027FE98u | kUnwind; return; } goto L_0027FE98; } }
L_0027FEC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027FED0:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 811u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[2], 0u + 8u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 808u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { set32(c.r[4], c.r[4].w[0] + 752u);  [[clang::musttail]] return unit_0065(c, 15u, depth); }
L_0027FF00:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] & 255ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[11], 0u + 2u);
    set32(c.r[12], 0u + 8u);
    set32(c.r[30], 0u + 10u);
    set32(c.r[13], 0u + 11u);
    set32(c.r[23], 0u + 13u);
    set32(c.r[14], 0u + 14u);
    set32(c.r[22], 0u + 4u);
    set32(c.r[15], 0u + 5u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[6], 0u + 12u);
    set32(c.r[9], 0u + 9u);
    set32(c.r[10], 0u + 3u);
    set32(c.r[24], 0u + 34u);
    c.budget -= 31;
L_0027FF7C:
    c.r[17].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[21], c.r[3].w[0] + c.r[17].w[0]);
    c.r[25].d[0] = ld8((c.r[21].w[0] + 1476u));
    c.budget -= 5;
    { const bool t = c.r[25].d[0] == c.r[24].d[0]; set32(c.r[16], c.r[21].w[0] + 1476u);  if (t) { [[clang::musttail]] return unit_0020(c, 14u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[15].d[0];  if (t) { [[clang::musttail]] return unit_0020(c, 13u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[22].d[0];  if (t) { [[clang::musttail]] return unit_0020(c, 12u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[14].d[0];  if (t) { [[clang::musttail]] return unit_0020(c, 11u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[23].d[0];  if (t) { [[clang::musttail]] return unit_0020(c, 10u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[13].d[0];  if (t) { [[clang::musttail]] return unit_0020(c, 9u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[30].d[0];  if (t) { [[clang::musttail]] return unit_0020(c, 7u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[12].d[0];  if (t) { [[clang::musttail]] return unit_0020(c, 6u, depth); } }
    set32(c.r[21], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[25].d[0] == c.r[21].d[0];  if (t) { [[clang::musttail]] return unit_0020(c, 4u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == c.r[11].d[0];  if (t) { [[clang::musttail]] return unit_0020(c, 3u, depth); } }
    set32(c.r[21], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[25].d[0] == c.r[21].d[0];  if (t) { [[clang::musttail]] return unit_0020(c, 1u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[25].d[0] == 0ull;  if (t) { goto L_0027FFF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0020(c, 15u, depth); } }
L_0027FFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[17].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0020(c, 16u, depth); } }
    [[clang::musttail]] return unit_0020(c, 1u, depth);
}

}

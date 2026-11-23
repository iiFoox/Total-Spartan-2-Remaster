#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0011[4096] = {
    1, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 10,
    0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0,
    19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0,
    92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113,
    0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 160, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0,
    176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0,
    226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0,
    0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343,
    0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 354, 0, 0, 0, 0, 355, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 384,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387,
    0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    413, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0,
};

void unit_0011(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00244000;
    case 2u: goto L_00244008;
    case 3u: goto L_00244014;
    case 4u: goto L_00244020;
    case 5u: goto L_0024402C;
    case 6u: goto L_0024403C;
    case 7u: goto L_00244058;
    case 8u: goto L_00244064;
    case 9u: goto L_00244070;
    case 10u: goto L_0024407C;
    case 11u: goto L_00244088;
    case 12u: goto L_0024409C;
    case 13u: goto L_002440B4;
    case 14u: goto L_002440C0;
    case 15u: goto L_002440CC;
    case 16u: goto L_002440D8;
    case 17u: goto L_002440EC;
    case 18u: goto L_002440F8;
    case 19u: goto L_00244100;
    case 20u: goto L_00244104;
    case 21u: goto L_00244140;
    case 22u: goto L_0024417C;
    case 23u: goto L_00244184;
    case 24u: goto L_002441A0;
    case 25u: goto L_002441A8;
    case 26u: goto L_002441D0;
    case 27u: goto L_002441F4;
    case 28u: goto L_002441FC;
    case 29u: goto L_00244224;
    case 30u: goto L_00244248;
    case 31u: goto L_00244254;
    case 32u: goto L_0024426C;
    case 33u: goto L_00244290;
    case 34u: goto L_002442F8;
    case 35u: goto L_00244310;
    case 36u: goto L_00244348;
    case 37u: goto L_00244374;
    case 38u: goto L_00244388;
    case 39u: goto L_00244398;
    case 40u: goto L_002443A4;
    case 41u: goto L_002443B4;
    case 42u: goto L_002443D0;
    case 43u: goto L_002443DC;
    case 44u: goto L_002443F4;
    case 45u: goto L_00244404;
    case 46u: goto L_00244418;
    case 47u: goto L_00244428;
    case 48u: goto L_00244454;
    case 49u: goto L_00244464;
    case 50u: goto L_00244470;
    case 51u: goto L_0024447C;
    case 52u: goto L_0024448C;
    case 53u: goto L_002444A8;
    case 54u: goto L_002444B4;
    case 55u: goto L_002444CC;
    case 56u: goto L_002444DC;
    case 57u: goto L_002444F0;
    case 58u: goto L_00244500;
    case 59u: goto L_00244534;
    case 60u: goto L_00244540;
    case 61u: goto L_0024454C;
    case 62u: goto L_00244558;
    case 63u: goto L_0024456C;
    case 64u: goto L_00244588;
    case 65u: goto L_00244598;
    case 66u: goto L_002445A4;
    case 67u: goto L_002445B4;
    case 68u: goto L_002445D0;
    case 69u: goto L_002445DC;
    case 70u: goto L_002445F4;
    case 71u: goto L_00244604;
    case 72u: goto L_0024462C;
    case 73u: goto L_00244638;
    case 74u: goto L_00244644;
    case 75u: goto L_00244650;
    case 76u: goto L_00244664;
    case 77u: goto L_00244670;
    case 78u: goto L_0024467C;
    case 79u: goto L_0024468C;
    case 80u: goto L_002446A8;
    case 81u: goto L_002446B4;
    case 82u: goto L_002446CC;
    case 83u: goto L_002446DC;
    case 84u: goto L_0024470C;
    case 85u: goto L_00244718;
    case 86u: goto L_00244724;
    case 87u: goto L_00244730;
    case 88u: goto L_00244744;
    case 89u: goto L_0024475C;
    case 90u: goto L_00244768;
    case 91u: goto L_00244774;
    case 92u: goto L_00244780;
    case 93u: goto L_00244794;
    case 94u: goto L_002447AC;
    case 95u: goto L_002447B8;
    case 96u: goto L_002447C4;
    case 97u: goto L_002447D0;
    case 98u: goto L_002447E4;
    case 99u: goto L_00244800;
    case 100u: goto L_0024480C;
    case 101u: goto L_0024481C;
    case 102u: goto L_00244838;
    case 103u: goto L_00244844;
    case 104u: goto L_0024485C;
    case 105u: goto L_0024486C;
    case 106u: goto L_00244894;
    case 107u: goto L_002448A0;
    case 108u: goto L_002448AC;
    case 109u: goto L_002448B8;
    case 110u: goto L_002448CC;
    case 111u: goto L_002448E4;
    case 112u: goto L_002448F0;
    case 113u: goto L_002448FC;
    case 114u: goto L_00244908;
    case 115u: goto L_0024491C;
    case 116u: goto L_00244938;
    case 117u: goto L_00244960;
    case 118u: goto L_00244980;
    case 119u: goto L_00244990;
    case 120u: goto L_002449B0;
    case 121u: goto L_002449F0;
    case 122u: goto L_00244A10;
    case 123u: goto L_00244A5C;
    case 124u: goto L_00244AD0;
    case 125u: goto L_00244BD0;
    case 126u: goto L_00244CD0;
    case 127u: goto L_00244DB4;
    case 128u: goto L_00244E28;
    case 129u: goto L_00244E88;
    case 130u: goto L_00244F00;
    case 131u: goto L_00244FD8;
    case 132u: goto L_00245098;
    case 133u: goto L_00245110;
    case 134u: goto L_00245230;
    case 135u: goto L_00245400;
    case 136u: goto L_00245500;
    case 137u: goto L_002455D4;
    case 138u: goto L_002455E4;
    case 139u: goto L_00245614;
    case 140u: goto L_00245628;
    case 141u: goto L_00245630;
    case 142u: goto L_00245638;
    case 143u: goto L_00245644;
    case 144u: goto L_00245654;
    case 145u: goto L_00245660;
    case 146u: goto L_00245678;
    case 147u: goto L_00245690;
    case 148u: goto L_002456A0;
    case 149u: goto L_002456B8;
    case 150u: goto L_002456C0;
    case 151u: goto L_002456CC;
    case 152u: goto L_002456DC;
    case 153u: goto L_002456F8;
    case 154u: goto L_00245704;
    case 155u: goto L_00245718;
    case 156u: goto L_00245728;
    case 157u: goto L_0024573C;
    case 158u: goto L_0024574C;
    case 159u: goto L_0024577C;
    case 160u: goto L_0024578C;
    case 161u: goto L_00245790;
    case 162u: goto L_002457C0;
    case 163u: goto L_00245838;
    case 164u: goto L_00245910;
    case 165u: goto L_00245A38;
    case 166u: goto L_00245A44;
    case 167u: goto L_00245A50;
    case 168u: goto L_00245A64;
    case 169u: goto L_00245A84;
    case 170u: goto L_00245A90;
    case 171u: goto L_00245AA0;
    case 172u: goto L_00245ABC;
    case 173u: goto L_00245AC8;
    case 174u: goto L_00245ADC;
    case 175u: goto L_00245AEC;
    case 176u: goto L_00245B00;
    case 177u: goto L_00245B10;
    case 178u: goto L_00245B40;
    case 179u: goto L_00245B4C;
    case 180u: goto L_00245B58;
    case 181u: goto L_00245B64;
    case 182u: goto L_00245B78;
    case 183u: goto L_00245B94;
    case 184u: goto L_00245B9C;
    case 185u: goto L_00245BA8;
    case 186u: goto L_00245BB8;
    case 187u: goto L_00245BD4;
    case 188u: goto L_00245BE0;
    case 189u: goto L_00245BF4;
    case 190u: goto L_00245C04;
    case 191u: goto L_00245C2C;
    case 192u: goto L_00245C38;
    case 193u: goto L_00245C44;
    case 194u: goto L_00245C50;
    case 195u: goto L_00245C64;
    case 196u: goto L_00245C6C;
    case 197u: goto L_00245C78;
    case 198u: goto L_00245C88;
    case 199u: goto L_00245CA4;
    case 200u: goto L_00245CB0;
    case 201u: goto L_00245CC4;
    case 202u: goto L_00245CD4;
    case 203u: goto L_00245D04;
    case 204u: goto L_00245D10;
    case 205u: goto L_00245D1C;
    case 206u: goto L_00245D28;
    case 207u: goto L_00245D3C;
    case 208u: goto L_00245D50;
    case 209u: goto L_00245D5C;
    case 210u: goto L_00245D68;
    case 211u: goto L_00245D74;
    case 212u: goto L_00245D88;
    case 213u: goto L_00245D9C;
    case 214u: goto L_00245DA8;
    case 215u: goto L_00245DB4;
    case 216u: goto L_00245DC0;
    case 217u: goto L_00245DD4;
    case 218u: goto L_00245DE8;
    case 219u: goto L_00245DF4;
    case 220u: goto L_00245E04;
    case 221u: goto L_00245E20;
    case 222u: goto L_00245E2C;
    case 223u: goto L_00245E40;
    case 224u: goto L_00245E50;
    case 225u: goto L_00245E74;
    case 226u: goto L_00245E80;
    case 227u: goto L_00245E8C;
    case 228u: goto L_00245E98;
    case 229u: goto L_00245EAC;
    case 230u: goto L_00245EC0;
    case 231u: goto L_00245ECC;
    case 232u: goto L_00245ED8;
    case 233u: goto L_00245EE4;
    case 234u: goto L_00245EF8;
    case 235u: goto L_00245F30;
    case 236u: goto L_00245F40;
    case 237u: goto L_00245F50;
    case 238u: goto L_00245F80;
    case 239u: goto L_00245F90;
    case 240u: goto L_00245FA0;
    case 241u: goto L_00245FC4;
    case 242u: goto L_00245FF0;
    case 243u: goto L_0024604C;
    case 244u: goto L_00246068;
    case 245u: goto L_002460B0;
    case 246u: goto L_002460C0;
    case 247u: goto L_00246128;
    case 248u: goto L_00246148;
    case 249u: goto L_00246160;
    case 250u: goto L_00246180;
    case 251u: goto L_002461A0;
    case 252u: goto L_002461C0;
    case 253u: goto L_002461DC;
    case 254u: goto L_00246220;
    case 255u: goto L_00246244;
    case 256u: goto L_00246260;
    case 257u: goto L_00246284;
    case 258u: goto L_002462A0;
    case 259u: goto L_002462C8;
    case 260u: goto L_002462E0;
    case 261u: goto L_00246304;
    case 262u: goto L_00246320;
    case 263u: goto L_00246348;
    case 264u: goto L_00246370;
    case 265u: goto L_00246388;
    case 266u: goto L_002463A0;
    case 267u: goto L_002463D0;
    case 268u: goto L_002463E0;
    case 269u: goto L_002463FC;
    case 270u: goto L_00246410;
    case 271u: goto L_0024641C;
    case 272u: goto L_00246424;
    case 273u: goto L_0024642C;
    case 274u: goto L_00246444;
    case 275u: goto L_0024644C;
    case 276u: goto L_00246478;
    case 277u: goto L_002464B0;
    case 278u: goto L_002464C0;
    case 279u: goto L_002464E8;
    case 280u: goto L_002464FC;
    case 281u: goto L_0024652C;
    case 282u: goto L_00246550;
    case 283u: goto L_00246560;
    case 284u: goto L_00246578;
    case 285u: goto L_0024658C;
    case 286u: goto L_002465B0;
    case 287u: goto L_002465C0;
    case 288u: goto L_00246600;
    case 289u: goto L_00246640;
    case 290u: goto L_002466DC;
    case 291u: goto L_002466EC;
    case 292u: goto L_00246738;
    case 293u: goto L_00246748;
    case 294u: goto L_00246770;
    case 295u: goto L_00246780;
    case 296u: goto L_002467C0;
    case 297u: goto L_0024684C;
    case 298u: goto L_00246860;
    case 299u: goto L_00246880;
    case 300u: goto L_002468A4;
    case 301u: goto L_002468BC;
    case 302u: goto L_002468E0;
    case 303u: goto L_002468F0;
    case 304u: goto L_0024690C;
    case 305u: goto L_002469D8;
    case 306u: goto L_00246AF0;
    case 307u: goto L_00246B20;
    case 308u: goto L_00246B40;
    case 309u: goto L_00246BB0;
    case 310u: goto L_00246C20;
    case 311u: goto L_00246CD0;
    case 312u: goto L_00246D10;
    case 313u: goto L_00246D80;
    case 314u: goto L_00246DA4;
    case 315u: goto L_00246DBC;
    case 316u: goto L_00246DE0;
    case 317u: goto L_00246E0C;
    case 318u: goto L_00246E58;
    case 319u: goto L_00247090;
    case 320u: goto L_002470B0;
    case 321u: goto L_002470EC;
    case 322u: goto L_00247160;
    case 323u: goto L_00247194;
    case 324u: goto L_00247220;
    case 325u: goto L_00247240;
    case 326u: goto L_00247264;
    case 327u: goto L_00247270;
    case 328u: goto L_00247278;
    case 329u: goto L_00247290;
    case 330u: goto L_0024729C;
    case 331u: goto L_002472D0;
    case 332u: goto L_00247300;
    case 333u: goto L_00247314;
    case 334u: goto L_00247354;
    case 335u: goto L_00247384;
    case 336u: goto L_0024739C;
    case 337u: goto L_002473C0;
    case 338u: goto L_002473DC;
    case 339u: goto L_002473F4;
    case 340u: goto L_00247410;
    case 341u: goto L_00247420;
    case 342u: goto L_00247450;
    case 343u: goto L_0024747C;
    case 344u: goto L_00247494;
    case 345u: goto L_002474A0;
    case 346u: goto L_00247514;
    case 347u: goto L_00247530;
    case 348u: goto L_00247568;
    case 349u: goto L_002475A0;
    case 350u: goto L_002475B0;
    case 351u: goto L_002475D0;
    case 352u: goto L_002475F8;
    case 353u: goto L_00247650;
    case 354u: goto L_00247684;
    case 355u: goto L_00247698;
    case 356u: goto L_0024769C;
    case 357u: goto L_002476D8;
    case 358u: goto L_00247700;
    case 359u: goto L_00247760;
    case 360u: goto L_00247794;
    case 361u: goto L_002477A4;
    case 362u: goto L_002477BC;
    case 363u: goto L_002477E8;
    case 364u: goto L_00247818;
    case 365u: goto L_00247890;
    case 366u: goto L_002478A0;
    case 367u: goto L_002478C0;
    case 368u: goto L_002478E0;
    case 369u: goto L_00247904;
    case 370u: goto L_00247920;
    case 371u: goto L_00247960;
    case 372u: goto L_0024798C;
    case 373u: goto L_002479A0;
    case 374u: goto L_002479D0;
    case 375u: goto L_00247A0C;
    case 376u: goto L_00247A34;
    case 377u: goto L_00247A54;
    case 378u: goto L_00247A70;
    case 379u: goto L_00247B00;
    case 380u: goto L_00247B20;
    case 381u: goto L_00247B3C;
    case 382u: goto L_00247B60;
    case 383u: goto L_00247B68;
    case 384u: goto L_00247B7C;
    case 385u: goto L_00247BC4;
    case 386u: goto L_00247BDC;
    case 387u: goto L_00247BFC;
    case 388u: goto L_00247C04;
    case 389u: goto L_00247C0C;
    case 390u: goto L_00247C2C;
    case 391u: goto L_00247C58;
    case 392u: goto L_00247C60;
    case 393u: goto L_00247C94;
    case 394u: goto L_00247CA4;
    case 395u: goto L_00247CD0;
    case 396u: goto L_00247CE0;
    case 397u: goto L_00247D0C;
    case 398u: goto L_00247D1C;
    case 399u: goto L_00247D48;
    case 400u: goto L_00247D58;
    case 401u: goto L_00247D84;
    case 402u: goto L_00247D94;
    case 403u: goto L_00247DC0;
    case 404u: goto L_00247DD0;
    case 405u: goto L_00247DFC;
    case 406u: goto L_00247E0C;
    case 407u: goto L_00247E38;
    case 408u: goto L_00247E48;
    case 409u: goto L_00247E74;
    case 410u: goto L_00247E84;
    case 411u: goto L_00247EB0;
    case 412u: goto L_00247EC0;
    case 413u: goto L_00247F00;
    case 414u: goto L_00247F10;
    case 415u: goto L_00247F24;
    case 416u: goto L_00247F2C;
    case 417u: goto L_00247F34;
    case 418u: goto L_00247F3C;
    case 419u: goto L_00247F44;
    case 420u: goto L_00247F4C;
    case 421u: goto L_00247F54;
    case 422u: goto L_00247F5C;
    case 423u: goto L_00247F80;
    case 424u: goto L_00247FA8;
    case 425u: goto L_00247FB8;
    case 426u: goto L_00247FD0;
    case 427u: goto L_00247FEC;
    case 428u: goto L_00247FF8;
    default: bad_entry(c, 0x00244000u); return;
    }
L_00244000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244008u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00244008u) [[unlikely]] return; }
L_00244008:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244014u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x00244014u) [[unlikely]] return; }
L_00244014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 379u, depth); } }
    c.budget -= 1;
L_00244020:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024402Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024402Cu) [[unlikely]] return; }
L_0024402C:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024403Cu); set32(c.r[4], c.r[16].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x0024403Cu) [[unlikely]] return; }
L_0024403C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002440A8; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243FD0u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 442u, depth); } }
    c.budget -= 1;
L_00244058:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244064u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00244064u) [[unlikely]] return; }
L_00244064:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244070u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00244070u) [[unlikely]] return; }
L_00244070:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024407Cu); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024407Cu) [[unlikely]] return; }
L_0024407C:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244088u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00244088u) [[unlikely]] return; }
L_00244088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 379u, depth); } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024409Cu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x0024409Cu) [[unlikely]] return; }
L_0024409C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 379u, depth); } }
    c.budget -= 1;
L_002440A8:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002440B4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002440B4u) [[unlikely]] return; }
L_002440B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002440C0u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x002440C0u) [[unlikely]] return; }
L_002440C0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002440CCu); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002440CCu) [[unlikely]] return; }
L_002440CC:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002440D8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x002440D8u) [[unlikely]] return; }
L_002440D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 379u, depth); } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002440ECu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x002440ECu) [[unlikely]] return; }
L_002440EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 379u, depth); } }
    c.budget -= 1;
L_002440F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244100u); set32(c.r[4], c.r[28].w[0] - 30656u);  if (depth < kMaxDepth) unit_0011(c, 21u, depth + 1u); else { c.pc = 0x00244140u; return; } if (c.pc != 0x00244100u) [[unlikely]] return; }
L_00244100:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00244104:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00244140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024418C; } }
    st32((c.r[2].w[0] + 68u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00244184; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024417Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0011(c, 26u, depth + 1u); else { c.pc = 0x002441D0u; return; } if (c.pc != 0x0024417Cu) [[unlikely]] return; }
L_0024417C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244184u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00244184u) [[unlikely]] return; }
L_00244184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002441B4; } }
L_0024418C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002441A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002441A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0011(c, 26u, depth + 1u); else { c.pc = 0x002441D0u; return; } if (c.pc != 0x002441A0u) [[unlikely]] return; }
L_002441A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002441A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002441A8u) [[unlikely]] return; }
L_002441A8:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244184u | kUnwind; return; } goto L_00244184; } }
L_002441B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002441D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024426C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002441F4u); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_0011(c, 260u, depth + 1u); else { c.pc = 0x002462E0u; return; } if (c.pc != 0x002441F4u) [[unlikely]] return; }
L_002441F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002441FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 258u, depth + 1u); else { c.pc = 0x002462A0u; return; } if (c.pc != 0x002441FCu) [[unlikely]] return; }
L_002441FC:
    set32(c.r[2], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244248; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00244240; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 44u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
L_00244224:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244224u | kUnwind; return; } goto L_00244224; } }
    c.budget -= 1;
L_00244240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244248u); set32(c.r[4], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x00244248u) [[unlikely]] return; }
L_00244248:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244254u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00244254u) [[unlikely]] return; }
L_00244254:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0024426C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024426Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0024426Cu) [[unlikely]] return; }
L_0024426C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00244290:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002442F8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002442F8u) [[unlikely]] return; }
L_002442F8:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00244340; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00244310:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00244328; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00244328:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244310u | kUnwind; return; } goto L_00244310; } }
    c.budget -= 1;
L_00244340:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[19].d[0];  if (t) { goto L_00244930; } }
L_00244348:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00244920; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00244920; } }
    set32(c.r[20], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244374u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00241EF0u; return; } if (c.pc != 0x00244374u) [[unlikely]] return; }
L_00244374:
    mmi::divu(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[18].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00244470; } }
L_00244388:
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00244440; } }
    c.budget -= 1;
L_00244398:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002443A4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002443A4u) [[unlikely]] return; }
L_002443A4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002443B4u); set32(c.r[4], c.r[17].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x002443B4u) [[unlikely]] return; }
L_002443B4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002443E8; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002443D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002443D0u) [[unlikely]] return; }
L_002443D0:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002443DCu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x002443DCu) [[unlikely]] return; }
L_002443DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244920; } }
    c.budget -= 1;
L_002443E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002443F4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002443F4u) [[unlikely]] return; }
L_002443F4:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244404u); set32(c.r[4], c.r[17].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00244404u) [[unlikely]] return; }
L_00244404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002447A0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244418u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00244418u) [[unlikely]] return; }
L_00244418:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244428u); set32(c.r[4], c.r[17].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00244428u) [[unlikely]] return; }
L_00244428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002447F0; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244398u | kUnwind; return; } goto L_00244398; } }
L_00244440:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244454u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0011(c, 33u, depth + 1u); else { c.pc = 0x00244290u; return; } if (c.pc != 0x00244454u) [[unlikely]] return; }
L_00244454:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244464u); set32(c.r[6], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 120u, depth + 1u); else { c.pc = 0x002449B0u; return; } if (c.pc != 0x00244464u) [[unlikely]] return; }
L_00244464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244920; } }
    c.budget -= 1;
L_00244470:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024447Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024447Cu) [[unlikely]] return; }
L_0024447C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024448Cu); set32(c.r[4], c.r[17].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x0024448Cu) [[unlikely]] return; }
L_0024448C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002444C0; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002444A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002444A8u) [[unlikely]] return; }
L_002444A8:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002444B4u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x002444B4u) [[unlikely]] return; }
L_002444B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244920; } }
    c.budget -= 1;
L_002444C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002444CCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002444CCu) [[unlikely]] return; }
L_002444CC:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002444DCu); set32(c.r[4], c.r[17].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x002444DCu) [[unlikely]] return; }
L_002444DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00244528; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002444F0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002444F0u) [[unlikely]] return; }
L_002444F0:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244500u); set32(c.r[4], c.r[17].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00244500u) [[unlikely]] return; }
L_00244500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00244578; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244470u | kUnwind; return; } goto L_00244470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244388u | kUnwind; return; } goto L_00244388; } }
    c.budget -= 1;
L_00244528:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244534u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00244534u) [[unlikely]] return; }
L_00244534:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244540u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00244540u) [[unlikely]] return; }
L_00244540:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024454Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024454Cu) [[unlikely]] return; }
L_0024454C:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244558u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00244558u) [[unlikely]] return; }
L_00244558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244920; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024456Cu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x0024456Cu) [[unlikely]] return; }
L_0024456C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244920; } }
    c.budget -= 1;
L_00244578:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00244670; } }
L_00244588:
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00244620; } }
    c.budget -= 1;
L_00244598:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002445A4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002445A4u) [[unlikely]] return; }
L_002445A4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002445B4u); set32(c.r[4], c.r[17].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x002445B4u) [[unlikely]] return; }
L_002445B4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002445E8; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002445D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002445D0u) [[unlikely]] return; }
L_002445D0:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002445DCu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x002445DCu) [[unlikely]] return; }
L_002445DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244920; } }
    c.budget -= 1;
L_002445E8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002445F4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002445F4u) [[unlikely]] return; }
L_002445F4:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244604u); set32(c.r[4], c.r[17].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00244604u) [[unlikely]] return; }
L_00244604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00244750; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244598u | kUnwind; return; } goto L_00244598; } }
    c.budget -= 1;
L_00244620:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024462Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024462Cu) [[unlikely]] return; }
L_0024462C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244638u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00244638u) [[unlikely]] return; }
L_00244638:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244644u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00244644u) [[unlikely]] return; }
L_00244644:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244650u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00244650u) [[unlikely]] return; }
L_00244650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244920; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244664u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00244664u) [[unlikely]] return; }
L_00244664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244920; } }
    c.budget -= 1;
L_00244670:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024467Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024467Cu) [[unlikely]] return; }
L_0024467C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024468Cu); set32(c.r[4], c.r[17].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x0024468Cu) [[unlikely]] return; }
L_0024468C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002446C0; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002446A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002446A8u) [[unlikely]] return; }
L_002446A8:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002446B4u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x002446B4u) [[unlikely]] return; }
L_002446B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244920; } }
    c.budget -= 1;
L_002446C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002446CCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002446CCu) [[unlikely]] return; }
L_002446CC:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002446DCu); set32(c.r[4], c.r[17].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x002446DCu) [[unlikely]] return; }
L_002446DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00244700; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244670u | kUnwind; return; } goto L_00244670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244588u | kUnwind; return; } goto L_00244588; } }
L_00244700:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024470Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024470Cu) [[unlikely]] return; }
L_0024470C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244718u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00244718u) [[unlikely]] return; }
L_00244718:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244724u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00244724u) [[unlikely]] return; }
L_00244724:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244730u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00244730u) [[unlikely]] return; }
L_00244730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244920; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244744u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00244744u) [[unlikely]] return; }
L_00244744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244920; } }
    c.budget -= 1;
L_00244750:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024475Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024475Cu) [[unlikely]] return; }
L_0024475C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244768u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00244768u) [[unlikely]] return; }
L_00244768:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244774u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00244774u) [[unlikely]] return; }
L_00244774:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244780u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00244780u) [[unlikely]] return; }
L_00244780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244920; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244794u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00244794u) [[unlikely]] return; }
L_00244794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244920; } }
    c.budget -= 1;
L_002447A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002447ACu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002447ACu) [[unlikely]] return; }
L_002447AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002447B8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x002447B8u) [[unlikely]] return; }
L_002447B8:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002447C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002447C4u) [[unlikely]] return; }
L_002447C4:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002447D0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x002447D0u) [[unlikely]] return; }
L_002447D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244920; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002447E4u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x002447E4u) [[unlikely]] return; }
L_002447E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244920; } }
    c.budget -= 1;
L_002447F0:
    c.r[1].d[0] = c.r[21].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00244888; } }
    c.budget -= 1;
L_00244800:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024480Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024480Cu) [[unlikely]] return; }
L_0024480C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024481Cu); set32(c.r[4], c.r[17].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x0024481Cu) [[unlikely]] return; }
L_0024481C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00244850; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244838u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00244838u) [[unlikely]] return; }
L_00244838:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244844u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x00244844u) [[unlikely]] return; }
L_00244844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244920; } }
    c.budget -= 1;
L_00244850:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024485Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024485Cu) [[unlikely]] return; }
L_0024485C:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024486Cu); set32(c.r[4], c.r[17].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x0024486Cu) [[unlikely]] return; }
L_0024486C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002448D8; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244800u | kUnwind; return; } goto L_00244800; } }
    c.budget -= 1;
L_00244888:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244894u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00244894u) [[unlikely]] return; }
L_00244894:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002448A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x002448A0u) [[unlikely]] return; }
L_002448A0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002448ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002448ACu) [[unlikely]] return; }
L_002448AC:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002448B8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x002448B8u) [[unlikely]] return; }
L_002448B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244920; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002448CCu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x002448CCu) [[unlikely]] return; }
L_002448CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00244920; } }
    c.budget -= 1;
L_002448D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002448E4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002448E4u) [[unlikely]] return; }
L_002448E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002448F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x002448F0u) [[unlikely]] return; }
L_002448F0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002448FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002448FCu) [[unlikely]] return; }
L_002448FC:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244908u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00244908u) [[unlikely]] return; }
L_00244908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00244920; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024491Cu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x0024491Cu) [[unlikely]] return; }
L_0024491C:
    c.budget -= 1;
L_00244920:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244348u | kUnwind; return; } goto L_00244348; } }
    c.budget -= 1;
L_00244930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00244938u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x00244938u) [[unlikely]] return; }
L_00244938:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00244960:
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_00244980:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00244990:
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_002449B0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 268u), 0u);  if (t) { goto L_00244A20; } }
    set32(c.r[5], c.r[29].w[0] + 270u);
    c.budget -= 1;
L_002449F0:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 268u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[29].w[0] + 268u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00244B08; } }
L_00244A10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002449F0u | kUnwind; return; } goto L_002449F0; } }
    c.budget -= 1;
L_00244A20:
    set32(c.r[16], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    mmi::divu(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00244D90; } }
    c.f[2] = ld32((c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 140u), c.f[2]);
    st32((c.r[29].w[0] + 156u), c.f[2]);
    c.budget -= 8;
L_00244A5C:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 264u), c.f[2]);
    set32(c.r[8], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[29].w[0] + 260u), c.f[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 260u)));
    c.r[9].d[0] = c.r[8].d[0] ^ c.r[7].d[0];
    c.r[9].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00244B48; } }
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00244A90; } }
    c.r[8].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00244A90:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00244AA8; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 264u)));
    c.r[7].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00244AA8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[8].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_00244AC0; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 260u)));
    c.r[7].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[8].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00244AC0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00244B40; } }
    set32(c.r[10], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 2;
L_00244AD0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[7].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00244B28; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_00244B28; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244AD0u | kUnwind; return; } goto L_00244AD0; } }
    c.budget -= 1;
L_00244B08:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244A10u | kUnwind; return; } goto L_00244A10; } }
    c.budget -= 1;
L_00244B28:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[7].d[0] = c.r[9].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    c.r[7].d[0] = c.r[7].d[0] ^ 0ull;
    c.r[7].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_00244B40:
    c.r[9].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 2;
L_00244B48:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00244C08; } }
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    st32((c.r[29].w[0] + 252u), c.f[1]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.r[9].d[0] = c.r[8].d[0] ^ c.r[7].d[0];
    c.r[9].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[29].w[0] + 136u), c.f[0]);  if (t) { goto L_00244C50; } }
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00244B90; } }
    c.r[8].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00244B90:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00244BA8; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 256u)));
    c.r[7].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00244BA8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[8].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_00244BC0; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 252u)));
    c.r[7].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[8].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00244BC0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00244C48; } }
    set32(c.r[10], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 2;
L_00244BD0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[7].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00244C30; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_00244C30; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244BD0u | kUnwind; return; } goto L_00244BD0; } }
    c.budget -= 1;
L_00244C08:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00245F00; } }
L_00244C30:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[7].d[0] = c.r[9].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    c.r[7].d[0] = c.r[7].d[0] ^ 0ull;
    c.r[7].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_00244C48:
    c.r[9].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 2;
L_00244C50:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00244D08; } }
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    st32((c.r[29].w[0] + 244u), c.f[1]);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 248u)));
    c.r[9].d[0] = c.r[8].d[0] ^ c.r[7].d[0];
    c.r[9].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00244D70; } }
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00244C90; } }
    c.r[8].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00244C90:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00244CA8; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 248u)));
    c.r[7].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00244CA8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[8].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_00244CC0; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 244u)));
    c.r[7].d[0] = ~(c.r[7].d[0] | 0ull);
    c.r[8].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00244CC0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[7].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00244D68; } }
    set32(c.r[10], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 2;
L_00244CD0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[7].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00244D4C; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_00244D4C; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244CD0u | kUnwind; return; } goto L_00244CD0; } }
    c.budget -= 1;
L_00244D08:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00244D44; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_00244D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00245F00; } }
L_00244D4C:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[7].d[0] = c.r[9].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[7], c.r[8].w[0] - c.r[7].w[0]);
    c.r[7].d[0] = c.r[7].d[0] ^ 0ull;
    c.r[7].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
L_00244D68:
    c.r[9].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 2;
L_00244D70:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00244E60; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.r[7].d[0] = c.r[6].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244A5Cu | kUnwind; return; } goto L_00244A5C; } }
    c.budget -= 1;
L_00244D90:
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002455C0; } }
    c.f[2] = ld32((c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    c.budget -= 6;
L_00244DB4:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 208u), c.f[2]);
    set32(c.r[8], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[29].w[0] + 204u), c.f[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 204u)));
    c.r[9].d[0] = c.r[8].d[0] ^ c.r[6].d[0];
    c.r[9].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00245378; } }
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00244DE8; } }
    c.r[8].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00244DE8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[6].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00244E00; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00244E00:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[8].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_00244E18; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 204u)));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[8].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00244E18:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[6].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00245370; } }
    set32(c.r[10], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 2;
L_00244E28:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[6].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00245358; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_00245358; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244E28u | kUnwind; return; } goto L_00244E28; } }
    c.budget -= 1;
L_00244E60:
    c.r[1].d[0] = c.r[6].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00245078; } }
    c.f[2] = ld32((c.r[29].w[0] + 140u));
    set32(c.r[4], c.r[6].w[0] << 1);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    c.budget -= 7;
L_00244E88:
    c.f[1] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 240u), c.f[2]);
    set32(c.r[9], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[29].w[0] + 236u), c.f[1]);
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    c.r[10].d[0] = c.r[9].d[0] ^ c.r[8].d[0];
    c.r[10].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00244F58; } }
    c.r[9].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00244EC0; } }
    c.r[9].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00244EC0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_00244ED8; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 240u)));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00244ED8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00244EF0; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[9].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00244EF0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_00244F50; } }
    set32(c.r[11], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[12], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 2;
L_00244F00:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[8].d[0] = 0ull < c.r[10].d[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00244F38; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[9].d[0] = c.r[10].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00244F38; } }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244F00u | kUnwind; return; } goto L_00244F00; } }
    c.budget -= 1;
L_00244F38:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[8].d[0] = c.r[10].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[8], c.r[9].w[0] - c.r[8].w[0]);
    c.r[8].d[0] = c.r[8].d[0] ^ 0ull;
    c.r[8].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_00244F50:
    c.r[10].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 2;
L_00244F58:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00245010; } }
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[8].w[0]));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[29].w[0] + 228u), c.f[1]);
    set32(c.r[8], ld32((c.r[29].w[0] + 228u)));
    c.r[10].d[0] = c.r[9].d[0] ^ c.r[8].d[0];
    c.r[10].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00245058; } }
    c.r[9].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00244F98; } }
    c.r[9].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00244F98:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_00244FB0; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 232u)));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00244FB0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00244FC8; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 228u)));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[9].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00244FC8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_00245050; } }
    set32(c.r[11], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[12], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 2;
L_00244FD8:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[8].d[0] = 0ull < c.r[10].d[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00245038; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[9].d[0] = c.r[10].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00245038; } }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244FD8u | kUnwind; return; } goto L_00244FD8; } }
    c.budget -= 1;
L_00245010:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00245F00; } }
L_00245038:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[8].d[0] = c.r[10].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[8], c.r[9].w[0] - c.r[8].w[0]);
    c.r[8].d[0] = c.r[8].d[0] ^ 0ull;
    c.r[8].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_00245050:
    c.r[10].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 2;
L_00245058:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00245148; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.r[8].d[0] = c.r[6].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244E88u | kUnwind; return; } goto L_00244E88; } }
    c.budget -= 1;
L_00245078:
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002452D0; } }
    c.f[2] = ld32((c.r[29].w[0] + 140u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 152u), c.f[2]);
    c.budget -= 5;
L_00245098:
    c.f[1] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 224u), c.f[2]);
    set32(c.r[9], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[29].w[0] + 220u), c.f[1]);
    set32(c.r[8], ld32((c.r[29].w[0] + 220u)));
    c.r[10].d[0] = c.r[9].d[0] ^ c.r[8].d[0];
    c.r[10].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_002451B0; } }
    c.r[9].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002450D0; } }
    c.r[9].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002450D0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_002450E8; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 224u)));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002450E8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00245100; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 220u)));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[9].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00245100:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_002451A8; } }
    set32(c.r[11], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[12], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 2;
L_00245110:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[8].d[0] = 0ull < c.r[10].d[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0024518C; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[9].d[0] = c.r[10].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_0024518C; } }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245110u | kUnwind; return; } goto L_00245110; } }
    c.budget -= 1;
L_00245148:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00245184; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_00245184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00245F00; } }
L_0024518C:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[8].d[0] = c.r[10].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[8], c.r[9].w[0] - c.r[8].w[0]);
    c.r[8].d[0] = c.r[8].d[0] ^ 0ull;
    c.r[8].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
L_002451A8:
    c.r[10].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 2;
L_002451B0:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00245268; } }
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[8].w[0]));
    st32((c.r[29].w[0] + 216u), c.f[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[29].w[0] + 212u), c.f[1]);
    set32(c.r[8], ld32((c.r[29].w[0] + 212u)));
    c.r[10].d[0] = c.r[9].d[0] ^ c.r[8].d[0];
    c.r[10].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_002452B0; } }
    c.r[9].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002451F0; } }
    c.r[9].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002451F0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_00245208; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 216u)));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00245208:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00245220; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 212u)));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[9].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00245220:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_002452A8; } }
    set32(c.r[11], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[12], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 2;
L_00245230:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[8].d[0] = 0ull < c.r[10].d[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00245290; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[9].d[0] = c.r[10].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00245290; } }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245230u | kUnwind; return; } goto L_00245230; } }
    c.budget -= 1;
L_00245268:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00245F00; } }
L_00245290:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[8].d[0] = c.r[10].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[8], c.r[9].w[0] - c.r[8].w[0]);
    c.r[8].d[0] = c.r[8].d[0] ^ 0ull;
    c.r[8].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_002452A8:
    c.r[10].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 2;
L_002452B0:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00245314; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.r[8].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245098u | kUnwind; return; } goto L_00245098; } }
    c.budget -= 1;
L_002452D0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024530C; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_0024530C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00245F00; } }
L_00245314:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00245350; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_00245350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00245F00; } }
L_00245358:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[6], c.r[8].w[0] - c.r[6].w[0]);
    c.r[6].d[0] = c.r[6].d[0] ^ 0ull;
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_00245370:
    c.r[9].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 2;
L_00245378:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00245438; } }
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    st32((c.r[29].w[0] + 196u), c.f[1]);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.r[9].d[0] = c.r[8].d[0] ^ c.r[6].d[0];
    c.r[9].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[29].w[0] + 124u), c.f[0]);  if (t) { goto L_00245480; } }
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002453C0; } }
    c.r[8].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002453C0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[6].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_002453D8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 200u)));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002453D8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[8].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_002453F0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 196u)));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[8].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002453F0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[6].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00245478; } }
    set32(c.r[10], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 2;
L_00245400:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[6].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00245460; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_00245460; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245400u | kUnwind; return; } goto L_00245400; } }
    c.budget -= 1;
L_00245438:
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00245F00; } }
L_00245460:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[6], c.r[8].w[0] - c.r[6].w[0]);
    c.r[6].d[0] = c.r[6].d[0] ^ 0ull;
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_00245478:
    c.r[9].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 2;
L_00245480:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00245538; } }
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    st32((c.r[29].w[0] + 188u), c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 192u)));
    c.r[9].d[0] = c.r[8].d[0] ^ c.r[6].d[0];
    c.r[9].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_002455A0; } }
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002454C0; } }
    c.r[8].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002454C0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[6].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_002454D8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 192u)));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002454D8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[8].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_002454F0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 188u)));
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    c.r[8].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002454F0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[6].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00245598; } }
    set32(c.r[10], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 2;
L_00245500:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[6].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0024557C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0024557C; } }
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245500u | kUnwind; return; } goto L_00245500; } }
    c.budget -= 1;
L_00245538:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00245574; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_00245574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00245F00; } }
L_0024557C:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[6], c.r[8].w[0] - c.r[6].w[0]);
    c.r[6].d[0] = c.r[6].d[0] ^ 0ull;
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
L_00245598:
    c.r[9].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 2;
L_002455A0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00245798; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.r[6].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00244DB4u | kUnwind; return; } goto L_00244DB4; } }
    c.budget -= 1;
L_002455C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002455D4u); st32((c.r[29].w[0] + 168u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002455D4u) [[unlikely]] return; }
L_002455D4:
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002455E4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002455E4u) [[unlikely]] return; }
L_002455E4:
    set32(c.r[3], c.r[16].w[0] << 1);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245614u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00245614u) [[unlikely]] return; }
L_00245614:
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00245A38; } }
L_00245628:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_00245688; } }
L_00245630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245638u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 235u, depth + 1u); else { c.pc = 0x00245F30u; return; } if (c.pc != 0x00245638u) [[unlikely]] return; }
L_00245638:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245644u); set32(c.r[4], c.r[20].w[0] + 12u);  if (depth < kMaxDepth) unit_0011(c, 235u, depth + 1u); else { c.pc = 0x00245F30u; return; } if (c.pc != 0x00245644u) [[unlikely]] return; }
L_00245644:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_00245678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245654u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 235u, depth + 1u); else { c.pc = 0x00245F30u; return; } if (c.pc != 0x00245654u) [[unlikely]] return; }
L_00245654:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245660u); set32(c.r[4], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0011(c, 235u, depth + 1u); else { c.pc = 0x00245F30u; return; } if (c.pc != 0x00245660u) [[unlikely]] return; }
L_00245660:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[2].d[0];  if (t) { goto L_00245678; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245678u); set32(c.r[6], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 120u, depth + 1u); else { c.pc = 0x002449B0u; return; } if (c.pc != 0x00245678u) [[unlikely]] return; }
L_00245678:
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245630u | kUnwind; return; } goto L_00245630; } }
    c.budget -= 1;
L_00245688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245690u); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x00245690u) [[unlikely]] return; }
L_00245690:
    set32(c.r[17], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[20].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002456A0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00241EF0u; return; } if (c.pc != 0x002456A0u) [[unlikely]] return; }
L_002456A0:
    mmi::divu(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00245A84; } }
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002456B8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00245768; } }
L_002456C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002456CCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002456CCu) [[unlikely]] return; }
L_002456CC:
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002456DCu); set32(c.r[4], c.r[20].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x002456DCu) [[unlikely]] return; }
L_002456DC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024570C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002456F8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002456F8u) [[unlikely]] return; }
L_002456F8:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245704u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x00245704u) [[unlikely]] return; }
L_00245704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00245790; } }
L_0024570C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245718u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245718u) [[unlikely]] return; }
L_00245718:
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245728u); set32(c.r[4], c.r[20].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00245728u) [[unlikely]] return; }
L_00245728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245D90; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024573Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024573Cu) [[unlikely]] return; }
L_0024573C:
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024574Cu); set32(c.r[4], c.r[20].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x0024574Cu) [[unlikely]] return; }
L_0024574C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245DDC; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002456C0u | kUnwind; return; } goto L_002456C0; } }
    c.budget -= 1;
L_00245768:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024577Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0011(c, 33u, depth + 1u); else { c.pc = 0x00244290u; return; } if (c.pc != 0x0024577Cu) [[unlikely]] return; }
L_0024577C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024578Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 120u, depth + 1u); else { c.pc = 0x002449B0u; return; } if (c.pc != 0x0024578Cu) [[unlikely]] return; }
L_0024578C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00245790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00245F04; } }
L_00245798:
    c.r[1].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002459B0; } }
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], c.r[7].w[0] << 1);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 160u), c.f[2]);
    c.budget -= 7;
L_002457C0:
    c.f[1] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 184u), c.f[2]);
    set32(c.r[9], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[29].w[0] + 180u), c.f[1]);
    set32(c.r[8], ld32((c.r[29].w[0] + 180u)));
    c.r[10].d[0] = c.r[9].d[0] ^ c.r[8].d[0];
    c.r[10].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00245890; } }
    c.r[9].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002457F8; } }
    c.r[9].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002457F8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_00245810; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 184u)));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00245810:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00245828; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 180u)));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[9].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00245828:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_00245888; } }
    set32(c.r[11], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[12], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 2;
L_00245838:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[8].d[0] = 0ull < c.r[10].d[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00245870; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[9].d[0] = c.r[10].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00245870; } }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245838u | kUnwind; return; } goto L_00245838; } }
    c.budget -= 1;
L_00245870:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[8].d[0] = c.r[10].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[8], c.r[9].w[0] - c.r[8].w[0]);
    c.r[8].d[0] = c.r[8].d[0] ^ 0ull;
    c.r[8].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_00245888:
    c.r[10].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 2;
L_00245890:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00245948; } }
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[8].w[0]));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 172u), c.f[1]);
    set32(c.r[8], ld32((c.r[29].w[0] + 172u)));
    c.r[10].d[0] = c.r[9].d[0] ^ c.r[8].d[0];
    c.r[10].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00245990; } }
    c.r[9].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002458D0; } }
    c.r[9].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002458D0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_002458E8; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 176u)));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[8].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002458E8:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[9].d[0] = c.r[8].d[0] & 255ull;  if (t) { goto L_00245900; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 172u)));
    c.r[8].d[0] = ~(c.r[8].d[0] | 0ull);
    c.r[9].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00245900:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = c.r[9].d[0] & 255ull;  if (t) { goto L_00245988; } }
    set32(c.r[11], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[12], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 2;
L_00245910:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.r[8].d[0] = 0ull < c.r[10].d[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00245970; } }
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[9].d[0] = c.r[10].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_00245970; } }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245910u | kUnwind; return; } goto L_00245910; } }
    c.budget -= 1;
L_00245948:
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00245F00; } }
L_00245970:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[8].d[0] = c.r[10].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[8], c.r[9].w[0] - c.r[8].w[0]);
    c.r[8].d[0] = c.r[8].d[0] ^ 0ull;
    c.r[8].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_00245988:
    c.r[10].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 2;
L_00245990:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_002459F4; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.r[8].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002457C0u | kUnwind; return; } goto L_002457C0; } }
    c.budget -= 1;
L_002459B0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002459EC; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_002459EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00245F00; } }
L_002459F4:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00245A30; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_00245A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00245F00; } }
L_00245A38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245A44u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245A44u) [[unlikely]] return; }
L_00245A44:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245A50u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00245A50u) [[unlikely]] return; }
L_00245A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00245A68; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245A64u); set32(c.r[5], c.r[20].w[0] + 12u);  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00245F40u; return; } if (c.pc != 0x00245A64u) [[unlikely]] return; }
L_00245A64:
    c.budget -= 1;
L_00245A68:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245A38u | kUnwind; return; } goto L_00245A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245628u | kUnwind; return; } goto L_00245628; } }
L_00245A84:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245A90u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245A90u) [[unlikely]] return; }
L_00245A90:
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245AA0u); set32(c.r[4], c.r[20].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00245AA0u) [[unlikely]] return; }
L_00245AA0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245AD0; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245ABCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245ABCu) [[unlikely]] return; }
L_00245ABC:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245AC8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x00245AC8u) [[unlikely]] return; }
L_00245AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245790u | kUnwind; return; } goto L_00245790; } }
L_00245AD0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245ADCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245ADCu) [[unlikely]] return; }
L_00245ADC:
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245AECu); set32(c.r[4], c.r[20].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00245AECu) [[unlikely]] return; }
L_00245AEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245B34; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245B00u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245B00u) [[unlikely]] return; }
L_00245B00:
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245B10u); set32(c.r[4], c.r[20].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00245B10u) [[unlikely]] return; }
L_00245B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245B80; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245A84u | kUnwind; return; } goto L_00245A84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002456B8u | kUnwind; return; } goto L_002456B8; } }
L_00245B34:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245B40u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245B40u) [[unlikely]] return; }
L_00245B40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245B4Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00245B4Cu) [[unlikely]] return; }
L_00245B4C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245B58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245B58u) [[unlikely]] return; }
L_00245B58:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245B64u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00245B64u) [[unlikely]] return; }
L_00245B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00245B78; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245B78u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00245B78u) [[unlikely]] return; }
L_00245B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245790u | kUnwind; return; } goto L_00245790; } }
L_00245B80:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00245C6C; } }
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00245B94:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00245C20; } }
L_00245B9C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245BA8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245BA8u) [[unlikely]] return; }
L_00245BA8:
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245BB8u); set32(c.r[4], c.r[20].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00245BB8u) [[unlikely]] return; }
L_00245BB8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245BE8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245BD4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245BD4u) [[unlikely]] return; }
L_00245BD4:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245BE0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x00245BE0u) [[unlikely]] return; }
L_00245BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245790u | kUnwind; return; } goto L_00245790; } }
L_00245BE8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245BF4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245BF4u) [[unlikely]] return; }
L_00245BF4:
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245C04u); set32(c.r[4], c.r[20].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00245C04u) [[unlikely]] return; }
L_00245C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245D44; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245B9Cu | kUnwind; return; } goto L_00245B9C; } }
    c.budget -= 1;
L_00245C20:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245C2Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245C2Cu) [[unlikely]] return; }
L_00245C2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245C38u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00245C38u) [[unlikely]] return; }
L_00245C38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245C44u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245C44u) [[unlikely]] return; }
L_00245C44:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245C50u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00245C50u) [[unlikely]] return; }
L_00245C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00245C64; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245C64u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00245C64u) [[unlikely]] return; }
L_00245C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245790u | kUnwind; return; } goto L_00245790; } }
L_00245C6C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245C78u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245C78u) [[unlikely]] return; }
L_00245C78:
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245C88u); set32(c.r[4], c.r[20].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00245C88u) [[unlikely]] return; }
L_00245C88:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245CB8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245CA4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245CA4u) [[unlikely]] return; }
L_00245CA4:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245CB0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x00245CB0u) [[unlikely]] return; }
L_00245CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245790u | kUnwind; return; } goto L_00245790; } }
L_00245CB8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245CC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245CC4u) [[unlikely]] return; }
L_00245CC4:
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245CD4u); set32(c.r[4], c.r[20].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00245CD4u) [[unlikely]] return; }
L_00245CD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245CF8; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245C6Cu | kUnwind; return; } goto L_00245C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245B94u | kUnwind; return; } goto L_00245B94; } }
L_00245CF8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245D04u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245D04u) [[unlikely]] return; }
L_00245D04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245D10u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00245D10u) [[unlikely]] return; }
L_00245D10:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245D1Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245D1Cu) [[unlikely]] return; }
L_00245D1C:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245D28u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00245D28u) [[unlikely]] return; }
L_00245D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00245D3C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245D3Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00245D3Cu) [[unlikely]] return; }
L_00245D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245790u | kUnwind; return; } goto L_00245790; } }
L_00245D44:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245D50u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245D50u) [[unlikely]] return; }
L_00245D50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245D5Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00245D5Cu) [[unlikely]] return; }
L_00245D5C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245D68u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245D68u) [[unlikely]] return; }
L_00245D68:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245D74u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00245D74u) [[unlikely]] return; }
L_00245D74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00245D88; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245D88u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00245D88u) [[unlikely]] return; }
L_00245D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245790u | kUnwind; return; } goto L_00245790; } }
L_00245D90:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245D9Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245D9Cu) [[unlikely]] return; }
L_00245D9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245DA8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00245DA8u) [[unlikely]] return; }
L_00245DA8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245DB4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245DB4u) [[unlikely]] return; }
L_00245DB4:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245DC0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00245DC0u) [[unlikely]] return; }
L_00245DC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00245DD4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245DD4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00245DD4u) [[unlikely]] return; }
L_00245DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245790u | kUnwind; return; } goto L_00245790; } }
L_00245DDC:
    c.r[1].d[0] = c.r[21].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00245E68; } }
L_00245DE8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245DF4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245DF4u) [[unlikely]] return; }
L_00245DF4:
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245E04u); set32(c.r[4], c.r[20].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00245E04u) [[unlikely]] return; }
L_00245E04:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245E34; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245E20u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245E20u) [[unlikely]] return; }
L_00245E20:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245E2Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x00245E2Cu) [[unlikely]] return; }
L_00245E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245790u | kUnwind; return; } goto L_00245790; } }
L_00245E34:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245E40u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245E40u) [[unlikely]] return; }
L_00245E40:
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245E50u); set32(c.r[4], c.r[20].w[0] + 9u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00245E50u) [[unlikely]] return; }
L_00245E50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00245EB4; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245DE8u | kUnwind; return; } goto L_00245DE8; } }
L_00245E68:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245E74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245E74u) [[unlikely]] return; }
L_00245E74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245E80u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00245E80u) [[unlikely]] return; }
L_00245E80:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245E8Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245E8Cu) [[unlikely]] return; }
L_00245E8C:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245E98u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00245E98u) [[unlikely]] return; }
L_00245E98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00245EAC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245EACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00245EACu) [[unlikely]] return; }
L_00245EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245790u | kUnwind; return; } goto L_00245790; } }
L_00245EB4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245EC0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245EC0u) [[unlikely]] return; }
L_00245EC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245ECCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00245ECCu) [[unlikely]] return; }
L_00245ECC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245ED8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00245ED8u) [[unlikely]] return; }
L_00245ED8:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245EE4u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00245EE4u) [[unlikely]] return; }
L_00245EE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00245EF8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245EF8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00245EF8u) [[unlikely]] return; }
L_00245EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00245790u | kUnwind; return; } goto L_00245790; } }
L_00245F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00245F04:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00245F30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00245F40:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00245F50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245F80u); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x00245F80u) [[unlikely]] return; }
L_00245F80:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245F90u); st32((c.r[19].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0011(c, 245u, depth + 1u); else { c.pc = 0x002460B0u; return; } if (c.pc != 0x00245F90u) [[unlikely]] return; }
L_00245F90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245FA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0011(c, 245u, depth + 1u); else { c.pc = 0x002460B0u; return; } if (c.pc != 0x00245FA0u) [[unlikely]] return; }
L_00245FA0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 40u);
    set32(c.r[7], 0u + 31u);
    set32(c.r[8], c.r[29].w[0] + 84u);
    set32(c.r[9], c.r[29].w[0] + 80u);
    st8((c.r[29].w[0] + 84u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00245FC4u); st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0011(c, 242u, depth + 1u); else { c.pc = 0x00245FF0u; return; } if (c.pc != 0x00245FC4u) [[unlikely]] return; }
L_00245FC4:
    st32((c.r[19].w[0] + 60u), 0u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 64u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 68u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00245FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = ld8((c.r[8].w[0]));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024604Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0024604Cu) [[unlikely]] return; }
L_0024604C:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00246098; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00246068:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00246080; } }
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00246080:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246068u | kUnwind; return; } goto L_00246068; } }
    c.budget -= 1;
L_00246098:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002460B0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002460C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00246148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 28504u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_00246130; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 28488u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_00246130; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 28472u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00246130; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00246130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246128u);  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x00246128u) [[unlikely]] return; }
L_00246128:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00246130:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00246148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246148u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00246148u) [[unlikely]] return; }
L_00246148:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00246160:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00246180:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002461A0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002461C0:
    set32(c.r[8], ld32((c.r[6].w[0])));
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[3].d[0] = c.r[8].d[0] ^ c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00246210; } }
L_002461DC:
    c.r[3].d[0] = c.r[8].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002461F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_00246218; } }
L_002461F4:
    set32(c.r[8], ld32((c.r[3].w[0] + 68u)));
    c.r[3].d[0] = c.r[8].d[0] ^ c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002461DCu | kUnwind; return; } goto L_002461DC; } }
    c.budget -= 1;
L_00246210:
    set32(c.r[3], ld32((c.r[7].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00246218:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00246220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246244u);  if (depth < kMaxDepth) unit_0011(c, 282u, depth + 1u); else { c.pc = 0x00246550u; return; } if (c.pc != 0x00246244u) [[unlikely]] return; }
L_00246244:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00246260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246284; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246284u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00246284u) [[unlikely]] return; }
L_00246284:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002462A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002462C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002462C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002462C8u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002462C8u) [[unlikely]] return; }
L_002462C8:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002462E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246304u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00246304u) [[unlikely]] return; }
L_00246304:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00246320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00246388; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00246368; } }
L_00246348:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246348u | kUnwind; return; } goto L_00246348; } }
    c.budget -= 1;
L_00246368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246370u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00246370u) [[unlikely]] return; }
L_00246370:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00246388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00246388u) [[unlikely]] return; }
L_00246388:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002463A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00246444; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024644C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_002463D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002463E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002463E0u);  if (depth < kMaxDepth) unit_0010(c, 278u, depth + 1u); else { c.pc = 0x00242DB0u; return; } if (c.pc != 0x002463E0u) [[unlikely]] return; }
L_002463E0:
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00246424; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00246424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002463FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 278u, depth + 1u); else { c.pc = 0x00242DB0u; return; } if (c.pc != 0x002463FCu) [[unlikely]] return; }
L_002463FC:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00246410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246410u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 266u, depth + 1u); else { c.pc = 0x002463A0u; return; } if (c.pc != 0x00246410u) [[unlikely]] return; }
L_00246410:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024641Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 277u, depth + 1u); else { c.pc = 0x002464B0u; return; } if (c.pc != 0x0024641Cu) [[unlikely]] return; }
L_0024641C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246424u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00246424u) [[unlikely]] return; }
L_00246424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024642Cu); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0024642Cu) [[unlikely]] return; }
L_0024642C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00246444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246444u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00246444u) [[unlikely]] return; }
L_00246444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0024648C; } }
L_0024644C:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246478u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 289u, depth + 1u); else { c.pc = 0x00242F70u; return; } if (c.pc != 0x00246478u) [[unlikely]] return; }
L_00246478:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024644Cu | kUnwind; return; } goto L_0024644C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002463D0u | kUnwind; return; } goto L_002463D0; } }
L_0024648C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002464B0:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B170u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 165u, depth); }
L_002464C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024652C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00246510; } }
L_002464E8:
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002464FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 299u, depth + 1u); else { c.pc = 0x002430E0u; return; } if (c.pc != 0x002464FCu) [[unlikely]] return; }
L_002464FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002464E8u | kUnwind; return; } goto L_002464E8; } }
L_00246510:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_0024652C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024652Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0024652Cu) [[unlikely]] return; }
L_0024652C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00246550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00246560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246578u); set32(c.r[4], ld32((c.r[4].w[0] + 32u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00246578u) [[unlikely]] return; }
L_00246578:
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024658Cu); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0024658Cu) [[unlikely]] return; }
L_0024658C:
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002465B0u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0011(c, 368u, depth + 1u); else { c.pc = 0x002478E0u; return; } if (c.pc != 0x002465B0u) [[unlikely]] return; }
L_002465B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002465E8; } }
L_002465C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 32720u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002465C0u | kUnwind; return; } goto L_002465C0; } }
    c.budget -= 1;
L_002465E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00246600:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[9].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[8], 0u + 76u);
    set32(c.r[7], 0u + 49u);
    set32(c.r[6], 0u + 57u);
    set32(c.r[5], 0u + 25u);
    set32(c.r[4], 0u + 10u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 16;
L_00246640:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002466B0; } }
    c.r[2].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_00246688; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_00246688; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_00246688; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00246688; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00246688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00246690; } }
L_00246688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00246698; } }
L_00246690:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00246698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002466B0; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002466B0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(85ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246640u | kUnwind; return; } goto L_00246640; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[18].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] - 29440u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002466DCu); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 366u, depth + 1u); else { c.pc = 0x002478A0u; return; } if (c.pc != 0x002466DCu) [[unlikely]] return; }
L_002466DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00246710; } }
L_002466EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32724u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002466ECu | kUnwind; return; } goto L_002466EC; } }
L_00246710:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 64u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    mmi::maddu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[17].w[0] << 6);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246738u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x00246738u) [[unlikely]] return; }
L_00246738:
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246748u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 434u, depth + 1u); else { c.pc = 0x0023FFE0u; return; } if (c.pc != 0x00246748u) [[unlikely]] return; }
L_00246748:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[17], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246770u); st32((c.r[18].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x00246770u) [[unlikely]] return; }
L_00246770:
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246780u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 434u, depth + 1u); else { c.pc = 0x0023FFE0u; return; } if (c.pc != 0x00246780u) [[unlikely]] return; }
L_00246780:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], c.r[16].w[0] << 4);
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002467C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 76u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1564u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1564u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246834; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246834; } }
    set32(c.r[2], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246834; } }
    set32(c.r[2], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246834; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246834; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00246838; } }
L_00246834:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00246838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00246854; } }
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024684Cu); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0011(c, 249u, depth + 1u); else { c.pc = 0x00246160u; return; } if (c.pc != 0x0024684Cu) [[unlikely]] return; }
L_0024684C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00246864; } }
L_00246854:
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246860u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0011(c, 249u, depth + 1u); else { c.pc = 0x00246160u; return; } if (c.pc != 0x00246860u) [[unlikely]] return; }
L_00246860:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_00246864:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00246880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002468BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002468A4u);  if (depth < kMaxDepth) unit_0011(c, 368u, depth + 1u); else { c.pc = 0x002478E0u; return; } if (c.pc != 0x002468A4u) [[unlikely]] return; }
L_002468A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002468BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002468BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002468BCu) [[unlikely]] return; }
L_002468BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002468E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 104u), c.r[5].w[0]);  c.pc = t; return; }
L_002468F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00246AE4; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_00246AD0; } }
L_0024690C:
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00246AE4; } }
    c.r[5].d[0] = ld8((c.r[5].w[0] + 1564u));
    set32(c.r[3], 0u + 76u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00246974; } }
    set32(c.r[3], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00246974; } }
    set32(c.r[3], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00246974; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00246974; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00246974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00246980; } }
L_00246974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00246980; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00246980:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00246994; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[3].w[0] - 2460u)));  if (t) { goto L_00246998; } }
L_00246994:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00246998:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002469B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[5].w[0] - 2464u)));
    set32(c.r[3], ld32((c.r[3].w[0] - 2460u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_002469C0; } }
L_002469B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[3].w[0] - 2460u)));
    c.budget -= 2;
L_002469C0:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00246A08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 2448u)));
    set32(c.r[7], c.r[5].w[0] + c.r[8].w[0]);
    c.budget -= 3;
L_002469D8:
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002469F4; } }
    set32(c.r[3], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00246A0C; } }
L_002469F4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002469D8u | kUnwind; return; } goto L_002469D8; } }
    c.budget -= 1;
L_00246A08:
    set32(c.r[8], 0u - 1u);
    c.budget -= 1;
L_00246A0C:
    st32((c.r[4].w[0] + 152u), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 2460u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 152u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00246A48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 2452u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[3], ld32((c.r[3].w[0] - 2428u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_00246A68; } }
L_00246A48:
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 2456u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[3], ld32((c.r[3].w[0] - 2424u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
L_00246A68:
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[3].w[0] - 2460u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00246AA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 2452u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], ld32((c.r[3].w[0] - 2416u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_00246AC4; } }
L_00246AA4:
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 2456u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], ld32((c.r[3].w[0] - 2412u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
L_00246AC4:
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00246AE4; } }
L_00246AD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 2448u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024690Cu | kUnwind; return; } goto L_0024690C; } }
L_00246AE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00246AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00246B20; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00246B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246B20u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00246B20u) [[unlikely]] return; }
L_00246B20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00246B40:
    st16((c.r[4].w[0] + 140u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 120u), 0u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    c.r[7].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 116u), 0u);
    set32(c.r[3], 0u - 5u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 142u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 142u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0] + 140u));
    set32(c.r[7], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[4].w[0] + 96u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 142u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 142u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00246BB0:
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00246BD0; } }
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 2;
L_00246BD0:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00246BE8; } }
    c.r[7].d[0] = ld8((c.r[6].w[0] + 1572u));
    c.budget -= 1;
L_00246BE8:
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] << 6);
    vu::sub4<1>(c.vu0, 15u, 1u, 1u, 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[1]);  c.pc = t; return; }
L_00246C20:
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 108u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 112u), 0u);
    c.r[3].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 140u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    set32(c.r[2], 0u - 2u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 124u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 142u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 142u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 132u), 0u);
    st16((c.r[4].w[0] + 140u), static_cast<std::uint16_t>(0u));
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    set32(c.r[6], 0u - 5u);
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = ld8((c.r[4].w[0] + 142u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 142u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 96u), 0u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 142u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 142u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 144u), 0u);
    c.budget -= 44;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 148u), 0u);  c.pc = t; return; }
L_00246CD0:
    st32((c.r[4].w[0] + 116u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 120u), 0u);
    c.r[5].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 142u));
    set32(c.r[3], 0u - 2u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 142u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 132u), 0u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 140u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_00246D10:
    st32((c.r[4].w[0] + 100u), c.f[12]);
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = 0ull & 1ull;
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 124u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 142u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 142u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 132u), 0u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 140u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_00246D80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00246DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246DA4u);  if (depth < kMaxDepth) unit_0011(c, 353u, depth + 1u); else { c.pc = 0x00247650u; return; } if (c.pc != 0x00246DA4u) [[unlikely]] return; }
L_00246DA4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00246DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00246DBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00246DBCu) [[unlikely]] return; }
L_00246DBC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00246DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 85u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st8((c.r[4].w[0] + 1564u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_00246E0C:
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st32((c.r[3].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 380ll ? 1ull : 0ull;
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 36u), 0u);
    st32((c.r[3].w[0] + 40u), 0u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246E0Cu | kUnwind; return; } goto L_00246E0C; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    c.budget -= 7;
L_00246E58:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    st8((c.r[4].w[0] + 1572u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 1572u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] + 3u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    st8((c.r[4].w[0] + 1572u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 1572u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] + 5u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    st8((c.r[4].w[0] + 1572u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 1572u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[2].w[0] + 6u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[3].w[0] + 1572u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 32;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00246E58u | kUnwind; return; } goto L_00246E58; } }
    st32((c.r[16].w[0] + 1568u), 0u);
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 1607u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    st8((c.r[16].w[0] + 1608u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 1609u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 72u);
    st8((c.r[16].w[0] + 1610u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st8((c.r[16].w[0] + 1644u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00247030; } }
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00247004; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246FD0; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246FD0; } }
    set32(c.r[2], 0u + 52u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246F90; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246F64; } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246F64; } }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00246F64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_00247064; } }
L_00246F64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st32((c.r[16].w[0] + 1612u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1616u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1620u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1624u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1628u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1632u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1636u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1640u), c.r[2].w[0]);  if (t) { goto L_00247088; } }
L_00246F90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[4].d[0] = c.r[3].d[0] | 26214ull;
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[16].w[0] + 1612u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    st32((c.r[16].w[0] + 1620u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 1624u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1628u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1632u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1636u), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1640u), c.r[2].w[0]);  if (t) { goto L_00247088; } }
L_00246FD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 1612u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1616u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1620u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1624u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1628u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1632u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1636u), c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1640u), c.r[2].w[0]);  if (t) { goto L_00247088; } }
L_00247004:
    st32((c.r[16].w[0] + 1612u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FEB0000u);
    st32((c.r[16].w[0] + 1616u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    st32((c.r[16].w[0] + 1620u), 0u);
    st32((c.r[16].w[0] + 1624u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1628u), 0u);
    st32((c.r[16].w[0] + 1632u), 0u);
    st32((c.r[16].w[0] + 1636u), 0u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1640u), c.r[2].w[0]);  if (t) { goto L_00247088; } }
L_00247030:
    st32((c.r[16].w[0] + 1612u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FEB0000u);
    st32((c.r[16].w[0] + 1616u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 34079ull;
    st32((c.r[16].w[0] + 1620u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40300000u);
    st32((c.r[16].w[0] + 1624u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 41943ull;
    st32((c.r[16].w[0] + 1628u), 0u);
    st32((c.r[16].w[0] + 1632u), 0u);
    st32((c.r[16].w[0] + 1636u), 0u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1640u), c.r[2].w[0]);  if (t) { goto L_00247088; } }
L_00247064:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[16].w[0] + 1612u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1616u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1620u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1624u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1628u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1632u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1636u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1640u), c.r[2].w[0]);
    c.budget -= 9;
L_00247088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247090u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 359u, depth + 1u); else { c.pc = 0x00247760u; return; } if (c.pc != 0x00247090u) [[unlikely]] return; }
L_00247090:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002470B0:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[7], 0u + 388u);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[11], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 19680u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[8].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00247128; } }
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[3].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 4;
L_002470EC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));  if (t) { goto L_00247100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024714C; } }
L_00247100:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00247118; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[3].d[0];  if (t) { goto L_00247118; } }
    c.r[11].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 2;
L_00247118:
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.r[2].d[0] = ld16((c.r[9].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002470ECu | kUnwind; return; } goto L_002470EC; } }
L_00247128:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[2].d[0];  if (t) { goto L_0024713C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 388u);  if (t) { goto L_0024714C; } }
L_0024713C:
    set32(c.r[2], c.r[11].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 4;
L_0024714C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00247160:
    set32(c.r[29], c.r[29].w[0] - 480u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
L_00247194:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] + 2u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    st8((c.r[6].w[0] + 1572u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 1572u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[2].w[0] + 3u);
    set32(c.r[6], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    st8((c.r[6].w[0] + 1572u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] + 4u);
    st8((c.r[3].w[0] + 1572u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[2].w[0] + 5u);
    set32(c.r[6], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    st8((c.r[6].w[0] + 1572u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 1572u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[2].w[0] + 6u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[3].w[0] + 1572u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 32;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247194u | kUnwind; return; } goto L_00247194; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[6].w[0] - 29404u);
    c.budget -= 3;
L_00247220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247220u | kUnwind; return; } goto L_00247220; } }
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 1;
L_00247240:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247240u | kUnwind; return; } goto L_00247240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247264u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x00247264u) [[unlikely]] return; }
L_00247264:
    set32(c.r[4], c.r[29].w[0] + 476u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247270u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00247270u) [[unlikely]] return; }
L_00247270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247278u); set32(c.r[4], c.r[29].w[0] + 476u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00247278u) [[unlikely]] return; }
L_00247278:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247290u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247290u) [[unlikely]] return; }
L_00247290:
    set32(c.r[4], c.r[29].w[0] + 476u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024729Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0024729Cu) [[unlikely]] return; }
L_0024729C:
    set32(c.r[18], c.r[29].w[0] + 196u);
    set32(c.r[23], c.r[29].w[0] + 184u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00247308; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[29].w[0] + 468u);
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002472D0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002472D0u) [[unlikely]] return; }
L_002472D0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_00247320; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247300u); set32(c.r[5], c.r[2].w[0] + 468u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247300u) [[unlikely]] return; }
L_00247300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0])));  if (t) { goto L_00247324; } }
L_00247308:
    set32(c.r[4], c.r[29].w[0] + 468u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247314u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00247314u) [[unlikely]] return; }
L_00247314:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00247320:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00247324:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[30], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[29].w[0] + 176u);  if (t) { goto L_0024738C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 472u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247354u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00247354u) [[unlikely]] return; }
L_00247354:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_002473A8; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247384u); set32(c.r[5], c.r[2].w[0] + 472u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247384u) [[unlikely]] return; }
L_00247384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 472u)));  if (t) { goto L_002473AC; } }
L_0024738C:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 472u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024739Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0024739Cu) [[unlikely]] return; }
L_0024739C:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_002473A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 472u)));
    c.budget -= 1;
L_002473AC:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002473C0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002473C0u) [[unlikely]] return; }
L_002473C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30112u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002473DCu); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002473DCu) [[unlikely]] return; }
L_002473DC:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00247484; } }
    c.r[2].d[0] = c.r[30].d[0] & 255ull;
    c.budget -= 1;
L_002473F4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0024753C; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00247500; } }
L_00247410:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00247420:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00247524; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[21].w[0] + 1572u);
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247450u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00247450u) [[unlikely]] return; }
L_00247450:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[17].d[0]; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0024753C; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[17].w[0] + c.r[21].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[6], c.r[16].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024747Cu); set32(c.r[5], c.r[2].w[0] + 1572u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024747Cu) [[unlikely]] return; }
L_0024747C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0])));  if (t) { goto L_00247540; } }
L_00247484:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 172u);
    set32(c.r[16], c.r[29].w[0] + 168u);
    set32(c.r[22], c.r[29].w[0] + 164u);
    c.budget -= 4;
L_00247494:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002474A0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0011(c, 370u, depth + 1u); else { c.pc = 0x00247920u; return; } if (c.pc != 0x002474A0u) [[unlikely]] return; }
L_002474A0:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[22].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247494u | kUnwind; return; } goto L_00247494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002473F4u | kUnwind; return; } goto L_002473F4; } }
L_00247500:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00247514u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00247514u) [[unlikely]] return; }
L_00247514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247410u | kUnwind; return; } goto L_00247410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247420u | kUnwind; return; } goto L_00247420; } }
L_00247524:
    set32(c.r[4], c.r[21].w[0] + 1572u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247530u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00247530u) [[unlikely]] return; }
L_00247530:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0024753C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_00247540:
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247568u); st32((c.r[2].w[0] + 16u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00247568u) [[unlikely]] return; }
L_00247568:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_002475A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002475B0:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 4);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] + 19680u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u + 388u);
    c.budget -= 8;
L_002475D0:
    c.r[2].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247628; } }
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00247628; } }
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002475F8:
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00247614; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));  if (t) { goto L_00247640; } }
L_00247614:
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002475F8u | kUnwind; return; } goto L_002475F8; } }
    c.budget -= 1;
L_00247628:
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002475D0u | kUnwind; return; } goto L_002475D0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00247640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00247650:
    set32(c.r[29], c.r[29].w[0] - 480u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00247740; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00247684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247684u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00247684u) [[unlikely]] return; }
L_00247684:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 388u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247698u); st32((c.r[19].w[0]), 0u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00247698u) [[unlikely]] return; }
L_00247698:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0024769C:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 1564u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] + 19680u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00247728; } }
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], 0u + 388u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00247728; } }
L_002476D8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00247700; } }
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 80u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00247700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247700u); set32(c.r[4], c.r[28].w[0] - 28560u);  if (depth < kMaxDepth) unit_0079(c, 266u, depth + 1u); else { c.pc = 0x003E78D0u; return; } if (c.pc != 0x00247700u) [[unlikely]] return; }
L_00247700:
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 388u);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002476D8u | kUnwind; return; } goto L_002476D8; } }
    c.budget -= 1;
L_00247728:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024769Cu | kUnwind; return; } goto L_0024769C; } }
    c.budget -= 1;
L_00247740:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_00247760:
    set32(c.r[29], c.r[29].w[0] - 512u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247794u); st8((c.r[4].w[0] + 1564u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0011(c, 322u, depth + 1u); else { c.pc = 0x00247160u; return; } if (c.pc != 0x00247794u) [[unlikely]] return; }
L_00247794:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002477A4u); set32(c.r[6], 0u + 388u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x002477A4u) [[unlikely]] return; }
L_002477A4:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 19680u);
    set32(c.r[21], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_002477BC:
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00247850; } }
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], 0u + 388u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00247850; } }
    c.budget -= 1;
L_002477E8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00247828; } }
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 112u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00247828; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 1564u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247818u); set32(c.r[4], c.r[28].w[0] - 28560u);  if (depth < kMaxDepth) unit_0079(c, 270u, depth + 1u); else { c.pc = 0x003E79B0u; return; } if (c.pc != 0x00247818u) [[unlikely]] return; }
L_00247818:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
L_00247828:
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 388u);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002477E8u | kUnwind; return; } goto L_002477E8; } }
    c.budget -= 1;
L_00247850:
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002477BCu | kUnwind; return; } goto L_002477BC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 512u);  c.pc = t; return; }
L_00247890:
    c.budget -= 2;
    { set32(c.r[4], c.r[28].w[0] - 28360u);  [[clang::musttail]] return unit_009C(c, 412u, depth); }
L_002478A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002478C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002478C0u) [[unlikely]] return; }
L_002478C0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002478E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247904u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00247904u) [[unlikely]] return; }
L_00247904:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00247920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00247994; } }
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247960u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00247960u) [[unlikely]] return; }
L_00247960:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0024798C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0024798Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0024798Cu) [[unlikely]] return; }
L_0024798C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002479B0; } }
L_00247994:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002479A0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002479A0u) [[unlikely]] return; }
L_002479A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024798Cu | kUnwind; return; } goto L_0024798C; } }
L_002479B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002479D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00247A54; } }
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247A14; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247A0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247A0Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00247A0Cu) [[unlikely]] return; }
L_00247A0C:
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 2;
L_00247A14:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00247A3C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00247A34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247A34u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00247A34u) [[unlikely]] return; }
L_00247A34:
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 2;
L_00247A3C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00247A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247A54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00247A54u) [[unlikely]] return; }
L_00247A54:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00247A70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00247A8C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00247AA8; } }
L_00247A8C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00247AA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FDE0000u);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 14564ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[2], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00247B00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], 0u + 130u);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 16u), c.r[4].w[0]);  c.pc = t; return; }
L_00247B20:
    set32(c.r[29], c.r[29].w[0] - 3120u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 3116u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00247B58; } }
L_00247B3C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247B3Cu | kUnwind; return; } goto L_00247B3C; } }
L_00247B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247B60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0021EEE0u; return; } if (c.pc != 0x00247B60u) [[unlikely]] return; }
L_00247B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247B68u);  if (depth < kMaxDepth) unit_0008(c, 425u, depth + 1u); else { c.pc = 0x00223BD0u; return; } if (c.pc != 0x00247B68u) [[unlikely]] return; }
L_00247B68:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00247BF4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_00247B7C:
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00247BA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] - 29400u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] - 29398u));
    st16((c.r[29].w[0] + 3116u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 3118u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_00247BA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 2848u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    set32(c.r[7], c.r[7].w[0] - 29384u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247BC4u); set32(c.r[8], c.r[29].w[0] + 3116u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247BC4u) [[unlikely]] return; }
L_00247BC4:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00247C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247BDCu); set32(c.r[4], c.r[29].w[0] + 2848u);  if (depth < kMaxDepth) unit_0009(c, 89u, depth + 1u); else { c.pc = 0x00225050u; return; } if (c.pc != 0x00247BDCu) [[unlikely]] return; }
L_00247BDC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247BC4u | kUnwind; return; } goto L_00247BC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00247C04; } }
L_00247BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247BFCu);  if (depth < kMaxDepth) unit_0012(c, 35u, depth + 1u); else { c.pc = 0x00248330u; return; } if (c.pc != 0x00247BFCu) [[unlikely]] return; }
L_00247BFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247B7Cu | kUnwind; return; } goto L_00247B7C; } }
L_00247C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247C0Cu);  if (depth < kMaxDepth) unit_0009(c, 84u, depth + 1u); else { c.pc = 0x00225000u; return; } if (c.pc != 0x00247C0Cu) [[unlikely]] return; }
L_00247C0C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247C04u | kUnwind; return; } goto L_00247C04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247C2Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0021EEE0u; return; } if (c.pc != 0x00247C2Cu) [[unlikely]] return; }
L_00247C2C:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[3].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00247C58; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00247C50; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00247C50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247C58u);  if (depth < kMaxDepth) unit_000A(c, 147u, depth + 1u); else { c.pc = 0x00229220u; return; } if (c.pc != 0x00247C58u) [[unlikely]] return; }
L_00247C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247C60u);  if (depth < kMaxDepth) unit_0008(c, 62u, depth + 1u); else { c.pc = 0x00220A40u; return; } if (c.pc != 0x00247C60u) [[unlikely]] return; }
L_00247C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 5u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 2400u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00247CB0; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 2592u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247C94u); set32(c.r[7], c.r[7].w[0] - 29368u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247C94u) [[unlikely]] return; }
L_00247C94:
    set32(c.r[4], c.r[29].w[0] + 2592u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247CA4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00224B20u; return; } if (c.pc != 0x00247CA4u) [[unlikely]] return; }
L_00247CA4:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247C94u | kUnwind; return; } goto L_00247C94; } }
L_00247CB0:
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 2336u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247CD0u); set32(c.r[7], c.r[7].w[0] - 29352u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247CD0u) [[unlikely]] return; }
L_00247CD0:
    set32(c.r[4], c.r[29].w[0] + 2336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247CE0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00224B20u; return; } if (c.pc != 0x00247CE0u) [[unlikely]] return; }
L_00247CE0:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247CD0u | kUnwind; return; } goto L_00247CD0; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 2080u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247D0Cu); set32(c.r[7], c.r[7].w[0] - 29336u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247D0Cu) [[unlikely]] return; }
L_00247D0C:
    set32(c.r[4], c.r[29].w[0] + 2080u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247D1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00224B20u; return; } if (c.pc != 0x00247D1Cu) [[unlikely]] return; }
L_00247D1C:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247D0Cu | kUnwind; return; } goto L_00247D0C; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1824u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247D48u); set32(c.r[7], c.r[7].w[0] - 29320u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247D48u) [[unlikely]] return; }
L_00247D48:
    set32(c.r[4], c.r[29].w[0] + 1824u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247D58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00224B20u; return; } if (c.pc != 0x00247D58u) [[unlikely]] return; }
L_00247D58:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247D48u | kUnwind; return; } goto L_00247D48; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1568u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247D84u); set32(c.r[7], c.r[7].w[0] - 29304u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247D84u) [[unlikely]] return; }
L_00247D84:
    set32(c.r[4], c.r[29].w[0] + 1568u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247D94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00224B20u; return; } if (c.pc != 0x00247D94u) [[unlikely]] return; }
L_00247D94:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247D84u | kUnwind; return; } goto L_00247D84; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1312u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247DC0u); set32(c.r[7], c.r[7].w[0] - 29288u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247DC0u) [[unlikely]] return; }
L_00247DC0:
    set32(c.r[4], c.r[29].w[0] + 1312u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247DD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00224B20u; return; } if (c.pc != 0x00247DD0u) [[unlikely]] return; }
L_00247DD0:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247DC0u | kUnwind; return; } goto L_00247DC0; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1056u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247DFCu); set32(c.r[7], c.r[7].w[0] - 29272u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247DFCu) [[unlikely]] return; }
L_00247DFC:
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00224B20u; return; } if (c.pc != 0x00247E0Cu) [[unlikely]] return; }
L_00247E0C:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247DFCu | kUnwind; return; } goto L_00247DFC; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 800u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E38u); set32(c.r[7], c.r[7].w[0] - 29272u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247E38u) [[unlikely]] return; }
L_00247E38:
    set32(c.r[4], c.r[29].w[0] + 800u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00224B20u; return; } if (c.pc != 0x00247E48u) [[unlikely]] return; }
L_00247E48:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247E38u | kUnwind; return; } goto L_00247E38; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E74u); set32(c.r[7], c.r[7].w[0] - 29256u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247E74u) [[unlikely]] return; }
L_00247E74:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247E84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00224B20u; return; } if (c.pc != 0x00247E84u) [[unlikely]] return; }
L_00247E84:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247E74u | kUnwind; return; } goto L_00247E74; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247EB0u); set32(c.r[7], c.r[7].w[0] - 29240u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247EB0u) [[unlikely]] return; }
L_00247EB0:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247EC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00224B20u; return; } if (c.pc != 0x00247EC0u) [[unlikely]] return; }
L_00247EC0:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247EB0u | kUnwind; return; } goto L_00247EB0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00247F24; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    set32(c.r[6], c.r[16].w[0] + 328u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F00u); set32(c.r[7], c.r[7].w[0] - 29224u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247F00u) [[unlikely]] return; }
L_00247F00:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00224B20u; return; } if (c.pc != 0x00247F10u) [[unlikely]] return; }
L_00247F10:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247F00u | kUnwind; return; } goto L_00247F00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F24u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 120u, depth + 1u); else { c.pc = 0x00228F40u; return; } if (c.pc != 0x00247F24u) [[unlikely]] return; }
L_00247F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F2Cu);  if (depth < kMaxDepth) unit_0008(c, 425u, depth + 1u); else { c.pc = 0x00223BD0u; return; } if (c.pc != 0x00247F2Cu) [[unlikely]] return; }
L_00247F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F34u);  if (depth < kMaxDepth) unit_0003(c, 195u, depth + 1u); else { c.pc = 0x0020F460u; return; } if (c.pc != 0x00247F34u) [[unlikely]] return; }
L_00247F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F3Cu);  if (depth < kMaxDepth) unit_0003(c, 135u, depth + 1u); else { c.pc = 0x0020EA88u; return; } if (c.pc != 0x00247F3Cu) [[unlikely]] return; }
L_00247F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F44u);  if (depth < kMaxDepth) unit_0003(c, 203u, depth + 1u); else { c.pc = 0x0020F790u; return; } if (c.pc != 0x00247F44u) [[unlikely]] return; }
L_00247F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F4Cu);  if (depth < kMaxDepth) unit_0003(c, 155u, depth + 1u); else { c.pc = 0x0020EFC0u; return; } if (c.pc != 0x00247F4Cu) [[unlikely]] return; }
L_00247F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F54u);  if (depth < kMaxDepth) unit_000B(c, 86u, depth + 1u); else { c.pc = 0x0022DCA0u; return; } if (c.pc != 0x00247F54u) [[unlikely]] return; }
L_00247F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247F5Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 105u, depth + 1u); else { c.pc = 0x0020E3A8u; return; } if (c.pc != 0x00247F5Cu) [[unlikely]] return; }
L_00247F5C:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[3].w[0] - 8192u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 3120u);  c.pc = t; return; }
L_00247F80:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 324u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] - 29392u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247FA8u); set32(c.r[6], c.r[2].w[0] + 328u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00247FA8u) [[unlikely]] return; }
L_00247FA8:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247FB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x00224B20u; return; } if (c.pc != 0x00247FB8u) [[unlikely]] return; }
L_00247FB8:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00247FA8u | kUnwind; return; } goto L_00247FA8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00247FD0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247FECu); set32(c.r[5], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00247FECu) [[unlikely]] return; }
L_00247FEC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00247FF8u); set32(c.r[5], c.r[16].w[0] + 65u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00247FF8u) [[unlikely]] return; }
L_00247FF8:
    set32(c.r[4], c.r[29].w[0] + 300u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248004u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00248004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0012(c, 2u, depth);
}

}

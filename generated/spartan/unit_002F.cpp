#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    16, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0,
    0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173,
    0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0,
    191, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0,
    0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223,
    0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    249, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0,
    0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0,
    0, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0,
    0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0,
    304, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0,
    0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0,
    0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413,
    0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0,
    0, 0, 0, 447, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0,
};

void unit_002F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002BC000;
    case 2u: goto L_002BC01C;
    case 3u: goto L_002BC040;
    case 4u: goto L_002BC050;
    case 5u: goto L_002BC060;
    case 6u: goto L_002BC08C;
    case 7u: goto L_002BC090;
    case 8u: goto L_002BC0C8;
    case 9u: goto L_002BC0E0;
    case 10u: goto L_002BC0E8;
    case 11u: goto L_002BC0F8;
    case 12u: goto L_002BC104;
    case 13u: goto L_002BC124;
    case 14u: goto L_002BC12C;
    case 15u: goto L_002BC168;
    case 16u: goto L_002BC180;
    case 17u: goto L_002BC188;
    case 18u: goto L_002BC198;
    case 19u: goto L_002BC1A4;
    case 20u: goto L_002BC1C4;
    case 21u: goto L_002BC1CC;
    case 22u: goto L_002BC208;
    case 23u: goto L_002BC220;
    case 24u: goto L_002BC228;
    case 25u: goto L_002BC238;
    case 26u: goto L_002BC244;
    case 27u: goto L_002BC264;
    case 28u: goto L_002BC26C;
    case 29u: goto L_002BC2A8;
    case 30u: goto L_002BC2C0;
    case 31u: goto L_002BC2C8;
    case 32u: goto L_002BC2D8;
    case 33u: goto L_002BC2E4;
    case 34u: goto L_002BC30C;
    case 35u: goto L_002BC31C;
    case 36u: goto L_002BC340;
    case 37u: goto L_002BC354;
    case 38u: goto L_002BC380;
    case 39u: goto L_002BC390;
    case 40u: goto L_002BC3B0;
    case 41u: goto L_002BC3B4;
    case 42u: goto L_002BC3E0;
    case 43u: goto L_002BC400;
    case 44u: goto L_002BC410;
    case 45u: goto L_002BC430;
    case 46u: goto L_002BC450;
    case 47u: goto L_002BC458;
    case 48u: goto L_002BC468;
    case 49u: goto L_002BC474;
    case 50u: goto L_002BC494;
    case 51u: goto L_002BC49C;
    case 52u: goto L_002BC4D8;
    case 53u: goto L_002BC4F0;
    case 54u: goto L_002BC4F8;
    case 55u: goto L_002BC508;
    case 56u: goto L_002BC514;
    case 57u: goto L_002BC534;
    case 58u: goto L_002BC53C;
    case 59u: goto L_002BC578;
    case 60u: goto L_002BC590;
    case 61u: goto L_002BC598;
    case 62u: goto L_002BC5A8;
    case 63u: goto L_002BC5B4;
    case 64u: goto L_002BC5D4;
    case 65u: goto L_002BC5DC;
    case 66u: goto L_002BC618;
    case 67u: goto L_002BC630;
    case 68u: goto L_002BC638;
    case 69u: goto L_002BC648;
    case 70u: goto L_002BC654;
    case 71u: goto L_002BC674;
    case 72u: goto L_002BC680;
    case 73u: goto L_002BC69C;
    case 74u: goto L_002BC6B4;
    case 75u: goto L_002BC6C4;
    case 76u: goto L_002BC6D0;
    case 77u: goto L_002BC6E8;
    case 78u: goto L_002BC700;
    case 79u: goto L_002BC720;
    case 80u: goto L_002BC738;
    case 81u: goto L_002BC748;
    case 82u: goto L_002BC75C;
    case 83u: goto L_002BC76C;
    case 84u: goto L_002BC77C;
    case 85u: goto L_002BC790;
    case 86u: goto L_002BC7B8;
    case 87u: goto L_002BC7CC;
    case 88u: goto L_002BC814;
    case 89u: goto L_002BC83C;
    case 90u: goto L_002BC860;
    case 91u: goto L_002BC870;
    case 92u: goto L_002BC888;
    case 93u: goto L_002BC8D8;
    case 94u: goto L_002BC8F4;
    case 95u: goto L_002BC928;
    case 96u: goto L_002BC97C;
    case 97u: goto L_002BC990;
    case 98u: goto L_002BC9D0;
    case 99u: goto L_002BCA00;
    case 100u: goto L_002BCA14;
    case 101u: goto L_002BCA58;
    case 102u: goto L_002BCA88;
    case 103u: goto L_002BCA9C;
    case 104u: goto L_002BCAE0;
    case 105u: goto L_002BCB10;
    case 106u: goto L_002BCB24;
    case 107u: goto L_002BCB68;
    case 108u: goto L_002BCB90;
    case 109u: goto L_002BCBAC;
    case 110u: goto L_002BCBB4;
    case 111u: goto L_002BCBBC;
    case 112u: goto L_002BCBC4;
    case 113u: goto L_002BCBD0;
    case 114u: goto L_002BCBE0;
    case 115u: goto L_002BCBF0;
    case 116u: goto L_002BCC00;
    case 117u: goto L_002BCC10;
    case 118u: goto L_002BCC20;
    case 119u: goto L_002BCC30;
    case 120u: goto L_002BCC70;
    case 121u: goto L_002BCD98;
    case 122u: goto L_002BCDCC;
    case 123u: goto L_002BCDD8;
    case 124u: goto L_002BCE88;
    case 125u: goto L_002BCEB8;
    case 126u: goto L_002BCEC4;
    case 127u: goto L_002BCF18;
    case 128u: goto L_002BCF60;
    case 129u: goto L_002BCFD4;
    case 130u: goto L_002BD01C;
    case 131u: goto L_002BD050;
    case 132u: goto L_002BD06C;
    case 133u: goto L_002BD080;
    case 134u: goto L_002BD0C8;
    case 135u: goto L_002BD0EC;
    case 136u: goto L_002BD120;
    case 137u: goto L_002BD160;
    case 138u: goto L_002BD184;
    case 139u: goto L_002BD1C0;
    case 140u: goto L_002BD1E0;
    case 141u: goto L_002BD200;
    case 142u: goto L_002BD220;
    case 143u: goto L_002BD264;
    case 144u: goto L_002BD2B0;
    case 145u: goto L_002BD2E0;
    case 146u: goto L_002BD314;
    case 147u: goto L_002BD338;
    case 148u: goto L_002BD33C;
    case 149u: goto L_002BD364;
    case 150u: goto L_002BD3F8;
    case 151u: goto L_002BD440;
    case 152u: goto L_002BD470;
    case 153u: goto L_002BD490;
    case 154u: goto L_002BD4B4;
    case 155u: goto L_002BD4BC;
    case 156u: goto L_002BD4F8;
    case 157u: goto L_002BD51C;
    case 158u: goto L_002BD534;
    case 159u: goto L_002BD53C;
    case 160u: goto L_002BD54C;
    case 161u: goto L_002BD558;
    case 162u: goto L_002BD578;
    case 163u: goto L_002BD580;
    case 164u: goto L_002BD5BC;
    case 165u: goto L_002BD5D4;
    case 166u: goto L_002BD5DC;
    case 167u: goto L_002BD5EC;
    case 168u: goto L_002BD5F8;
    case 169u: goto L_002BD618;
    case 170u: goto L_002BD620;
    case 171u: goto L_002BD65C;
    case 172u: goto L_002BD674;
    case 173u: goto L_002BD67C;
    case 174u: goto L_002BD68C;
    case 175u: goto L_002BD698;
    case 176u: goto L_002BD6B8;
    case 177u: goto L_002BD6C4;
    case 178u: goto L_002BD6E0;
    case 179u: goto L_002BD6F8;
    case 180u: goto L_002BD708;
    case 181u: goto L_002BD714;
    case 182u: goto L_002BD72C;
    case 183u: goto L_002BD740;
    case 184u: goto L_002BD758;
    case 185u: goto L_002BD7B0;
    case 186u: goto L_002BD7D0;
    case 187u: goto L_002BD7E0;
    case 188u: goto L_002BD7E8;
    case 189u: goto L_002BD7F0;
    case 190u: goto L_002BD7F8;
    case 191u: goto L_002BD800;
    case 192u: goto L_002BD808;
    case 193u: goto L_002BD814;
    case 194u: goto L_002BD824;
    case 195u: goto L_002BD854;
    case 196u: goto L_002BD870;
    case 197u: goto L_002BD878;
    case 198u: goto L_002BD884;
    case 199u: goto L_002BD89C;
    case 200u: goto L_002BD8A4;
    case 201u: goto L_002BD8B8;
    case 202u: goto L_002BD8E4;
    case 203u: goto L_002BD908;
    case 204u: goto L_002BD928;
    case 205u: goto L_002BD930;
    case 206u: goto L_002BD96C;
    case 207u: goto L_002BD974;
    case 208u: goto L_002BD988;
    case 209u: goto L_002BD9BC;
    case 210u: goto L_002BD9C4;
    case 211u: goto L_002BD9D4;
    case 212u: goto L_002BD9E0;
    case 213u: goto L_002BDA00;
    case 214u: goto L_002BDA08;
    case 215u: goto L_002BDA44;
    case 216u: goto L_002BDA5C;
    case 217u: goto L_002BDA64;
    case 218u: goto L_002BDA74;
    case 219u: goto L_002BDA80;
    case 220u: goto L_002BDAA0;
    case 221u: goto L_002BDAA8;
    case 222u: goto L_002BDAE4;
    case 223u: goto L_002BDAFC;
    case 224u: goto L_002BDB04;
    case 225u: goto L_002BDB14;
    case 226u: goto L_002BDB20;
    case 227u: goto L_002BDB48;
    case 228u: goto L_002BDB58;
    case 229u: goto L_002BDB80;
    case 230u: goto L_002BDBBC;
    case 231u: goto L_002BDBC4;
    case 232u: goto L_002BDC00;
    case 233u: goto L_002BDC0C;
    case 234u: goto L_002BDC14;
    case 235u: goto L_002BDC40;
    case 236u: goto L_002BDC48;
    case 237u: goto L_002BDC58;
    case 238u: goto L_002BDC64;
    case 239u: goto L_002BDC84;
    case 240u: goto L_002BDC8C;
    case 241u: goto L_002BDCC8;
    case 242u: goto L_002BDCE0;
    case 243u: goto L_002BDCE8;
    case 244u: goto L_002BDCF8;
    case 245u: goto L_002BDD04;
    case 246u: goto L_002BDD24;
    case 247u: goto L_002BDD2C;
    case 248u: goto L_002BDD68;
    case 249u: goto L_002BDD80;
    case 250u: goto L_002BDD88;
    case 251u: goto L_002BDD98;
    case 252u: goto L_002BDDA4;
    case 253u: goto L_002BDDC4;
    case 254u: goto L_002BDDD0;
    case 255u: goto L_002BDDEC;
    case 256u: goto L_002BDE04;
    case 257u: goto L_002BDE14;
    case 258u: goto L_002BDE20;
    case 259u: goto L_002BDE38;
    case 260u: goto L_002BDE4C;
    case 261u: goto L_002BDE60;
    case 262u: goto L_002BDE84;
    case 263u: goto L_002BDEA4;
    case 264u: goto L_002BDEB4;
    case 265u: goto L_002BDED8;
    case 266u: goto L_002BDEF0;
    case 267u: goto L_002BDF14;
    case 268u: goto L_002BDF70;
    case 269u: goto L_002BDF9C;
    case 270u: goto L_002BDFA4;
    case 271u: goto L_002BDFE0;
    case 272u: goto L_002BDFEC;
    case 273u: goto L_002BE01C;
    case 274u: goto L_002BE030;
    case 275u: goto L_002BE054;
    case 276u: goto L_002BE084;
    case 277u: goto L_002BE0A8;
    case 278u: goto L_002BE0CC;
    case 279u: goto L_002BE0EC;
    case 280u: goto L_002BE108;
    case 281u: goto L_002BE110;
    case 282u: goto L_002BE120;
    case 283u: goto L_002BE12C;
    case 284u: goto L_002BE14C;
    case 285u: goto L_002BE154;
    case 286u: goto L_002BE190;
    case 287u: goto L_002BE1A8;
    case 288u: goto L_002BE1B0;
    case 289u: goto L_002BE1C0;
    case 290u: goto L_002BE1CC;
    case 291u: goto L_002BE1EC;
    case 292u: goto L_002BE1F4;
    case 293u: goto L_002BE230;
    case 294u: goto L_002BE248;
    case 295u: goto L_002BE250;
    case 296u: goto L_002BE260;
    case 297u: goto L_002BE26C;
    case 298u: goto L_002BE28C;
    case 299u: goto L_002BE298;
    case 300u: goto L_002BE2B4;
    case 301u: goto L_002BE2CC;
    case 302u: goto L_002BE2DC;
    case 303u: goto L_002BE2E8;
    case 304u: goto L_002BE300;
    case 305u: goto L_002BE308;
    case 306u: goto L_002BE320;
    case 307u: goto L_002BE370;
    case 308u: goto L_002BE3C8;
    case 309u: goto L_002BE400;
    case 310u: goto L_002BE788;
    case 311u: goto L_002BE7A0;
    case 312u: goto L_002BE7D0;
    case 313u: goto L_002BE804;
    case 314u: goto L_002BE834;
    case 315u: goto L_002BE84C;
    case 316u: goto L_002BE87C;
    case 317u: goto L_002BE894;
    case 318u: goto L_002BE8C4;
    case 319u: goto L_002BE8E0;
    case 320u: goto L_002BE910;
    case 321u: goto L_002BE940;
    case 322u: goto L_002BE958;
    case 323u: goto L_002BE988;
    case 324u: goto L_002BE9A0;
    case 325u: goto L_002BE9D0;
    case 326u: goto L_002BE9E8;
    case 327u: goto L_002BEA18;
    case 328u: goto L_002BEA30;
    case 329u: goto L_002BEA60;
    case 330u: goto L_002BEA74;
    case 331u: goto L_002BEA80;
    case 332u: goto L_002BEB00;
    case 333u: goto L_002BEB44;
    case 334u: goto L_002BEB5C;
    case 335u: goto L_002BEB8C;
    case 336u: goto L_002BEBB4;
    case 337u: goto L_002BEBF0;
    case 338u: goto L_002BEC08;
    case 339u: goto L_002BEC38;
    case 340u: goto L_002BEC50;
    case 341u: goto L_002BEC80;
    case 342u: goto L_002BECA8;
    case 343u: goto L_002BECD0;
    case 344u: goto L_002BECDC;
    case 345u: goto L_002BED0C;
    case 346u: goto L_002BED24;
    case 347u: goto L_002BED54;
    case 348u: goto L_002BED6C;
    case 349u: goto L_002BEDA0;
    case 350u: goto L_002BEDB8;
    case 351u: goto L_002BEDEC;
    case 352u: goto L_002BEE04;
    case 353u: goto L_002BEE38;
    case 354u: goto L_002BEE50;
    case 355u: goto L_002BEE84;
    case 356u: goto L_002BEE9C;
    case 357u: goto L_002BEED0;
    case 358u: goto L_002BEEE8;
    case 359u: goto L_002BEF24;
    case 360u: goto L_002BEF3C;
    case 361u: goto L_002BEF78;
    case 362u: goto L_002BEF94;
    case 363u: goto L_002BEFA4;
    case 364u: goto L_002BEFAC;
    case 365u: goto L_002BEFDC;
    case 366u: goto L_002BEFF4;
    case 367u: goto L_002BF024;
    case 368u: goto L_002BF03C;
    case 369u: goto L_002BF06C;
    case 370u: goto L_002BF084;
    case 371u: goto L_002BF0B4;
    case 372u: goto L_002BF0CC;
    case 373u: goto L_002BF100;
    case 374u: goto L_002BF134;
    case 375u: goto L_002BF168;
    case 376u: goto L_002BF198;
    case 377u: goto L_002BF1B0;
    case 378u: goto L_002BF1E0;
    case 379u: goto L_002BF1F8;
    case 380u: goto L_002BF228;
    case 381u: goto L_002BF240;
    case 382u: goto L_002BF270;
    case 383u: goto L_002BF288;
    case 384u: goto L_002BF2B8;
    case 385u: goto L_002BF2D0;
    case 386u: goto L_002BF300;
    case 387u: goto L_002BF318;
    case 388u: goto L_002BF348;
    case 389u: goto L_002BF360;
    case 390u: goto L_002BF390;
    case 391u: goto L_002BF3A8;
    case 392u: goto L_002BF3D8;
    case 393u: goto L_002BF3F0;
    case 394u: goto L_002BF420;
    case 395u: goto L_002BF438;
    case 396u: goto L_002BF468;
    case 397u: goto L_002BF480;
    case 398u: goto L_002BF4B0;
    case 399u: goto L_002BF4C8;
    case 400u: goto L_002BF4F8;
    case 401u: goto L_002BF510;
    case 402u: goto L_002BF540;
    case 403u: goto L_002BF558;
    case 404u: goto L_002BF588;
    case 405u: goto L_002BF5A0;
    case 406u: goto L_002BF5D0;
    case 407u: goto L_002BF5E8;
    case 408u: goto L_002BF624;
    case 409u: goto L_002BF66C;
    case 410u: goto L_002BF684;
    case 411u: goto L_002BF6B4;
    case 412u: goto L_002BF6CC;
    case 413u: goto L_002BF6FC;
    case 414u: goto L_002BF714;
    case 415u: goto L_002BF744;
    case 416u: goto L_002BF75C;
    case 417u: goto L_002BF78C;
    case 418u: goto L_002BF7A0;
    case 419u: goto L_002BF7BC;
    case 420u: goto L_002BF7EC;
    case 421u: goto L_002BF82C;
    case 422u: goto L_002BF844;
    case 423u: goto L_002BF878;
    case 424u: goto L_002BF890;
    case 425u: goto L_002BF8C0;
    case 426u: goto L_002BF8D8;
    case 427u: goto L_002BF908;
    case 428u: goto L_002BF920;
    case 429u: goto L_002BF950;
    case 430u: goto L_002BF968;
    case 431u: goto L_002BF998;
    case 432u: goto L_002BF9B0;
    case 433u: goto L_002BF9E0;
    case 434u: goto L_002BF9F8;
    case 435u: goto L_002BFA28;
    case 436u: goto L_002BFA40;
    case 437u: goto L_002BFA70;
    case 438u: goto L_002BFA8C;
    case 439u: goto L_002BFABC;
    case 440u: goto L_002BFAD4;
    case 441u: goto L_002BFB00;
    case 442u: goto L_002BFB30;
    case 443u: goto L_002BFB44;
    case 444u: goto L_002BFBA4;
    case 445u: goto L_002BFBB8;
    case 446u: goto L_002BFBF8;
    case 447u: goto L_002BFC0C;
    case 448u: goto L_002BFC14;
    case 449u: goto L_002BFC1C;
    case 450u: goto L_002BFC38;
    case 451u: goto L_002BFC70;
    case 452u: goto L_002BFD1C;
    case 453u: goto L_002BFD2C;
    case 454u: goto L_002BFD3C;
    case 455u: goto L_002BFD4C;
    case 456u: goto L_002BFD60;
    case 457u: goto L_002BFD9C;
    case 458u: goto L_002BFDD4;
    case 459u: goto L_002BFE14;
    case 460u: goto L_002BFF48;
    case 461u: goto L_002BFF98;
    case 462u: goto L_002BFFA4;
    case 463u: goto L_002BFFB0;
    case 464u: goto L_002BFFBC;
    case 465u: goto L_002BFFC8;
    case 466u: goto L_002BFFD4;
    case 467u: goto L_002BFFE0;
    case 468u: goto L_002BFFEC;
    case 469u: goto L_002BFFF8;
    default: bad_entry(c, 0x002BC000u); return;
    }
L_002BC000:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[3].d[0] = c.r[12].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    set32(c.r[9], c.r[9].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBFA0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 302u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC030; } }
L_002BC01C:
    c.r[3].d[0] = ld8((c.r[8].w[0] + 105u));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC000u | kUnwind; return; } goto L_002BC000; } }
L_002BC030:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002BC040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 16212u));  c.pc = t; return; }
L_002BC050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 16212u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002BC060:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16212u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BC324; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC0D0; } }
L_002BC08C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BC090:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC090u | kUnwind; return; } goto L_002BC090; } }
    set32(c.r[3], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002BC324; } }
    set32(c.r[4], c.r[17].w[0] + 16180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC0C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BC0C8u) [[unlikely]] return; }
L_002BC0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002BC328; } }
L_002BC0D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC0E0u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BC0E0u) [[unlikely]] return; }
L_002BC0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC0E8u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BC0E8u) [[unlikely]] return; }
L_002BC0E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC0F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BC0F8u) [[unlikely]] return; }
L_002BC0F8:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC104u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BC104u) [[unlikely]] return; }
L_002BC104:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 16213u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC08Cu | kUnwind; return; } goto L_002BC08C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC170; } }
L_002BC124:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 18647u);
    c.budget -= 2;
L_002BC12C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC12Cu | kUnwind; return; } goto L_002BC12C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC08Cu | kUnwind; return; } goto L_002BC08C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC168u); set32(c.r[4], c.r[17].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BC168u) [[unlikely]] return; }
L_002BC168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC090u | kUnwind; return; } goto L_002BC090; } }
L_002BC170:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC180u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BC180u) [[unlikely]] return; }
L_002BC180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC188u); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BC188u) [[unlikely]] return; }
L_002BC188:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC198u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BC198u) [[unlikely]] return; }
L_002BC198:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC1A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BC1A4u) [[unlikely]] return; }
L_002BC1A4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 16213u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC124u | kUnwind; return; } goto L_002BC124; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC210; } }
L_002BC1C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 18647u);
    c.budget -= 2;
L_002BC1CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC1CCu | kUnwind; return; } goto L_002BC1CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC124u | kUnwind; return; } goto L_002BC124; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC208u); set32(c.r[4], c.r[17].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BC208u) [[unlikely]] return; }
L_002BC208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC124u | kUnwind; return; } goto L_002BC124; } }
L_002BC210:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC220u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BC220u) [[unlikely]] return; }
L_002BC220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC228u); set32(c.r[4], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BC228u) [[unlikely]] return; }
L_002BC228:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC238u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BC238u) [[unlikely]] return; }
L_002BC238:
    set32(c.r[4], c.r[29].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC244u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BC244u) [[unlikely]] return; }
L_002BC244:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 16213u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC1C4u | kUnwind; return; } goto L_002BC1C4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC2B0; } }
L_002BC264:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 18647u);
    c.budget -= 2;
L_002BC26C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC26Cu | kUnwind; return; } goto L_002BC26C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC1C4u | kUnwind; return; } goto L_002BC1C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC2A8u); set32(c.r[4], c.r[17].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BC2A8u) [[unlikely]] return; }
L_002BC2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC1C4u | kUnwind; return; } goto L_002BC1C4; } }
L_002BC2B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC2C0u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BC2C0u) [[unlikely]] return; }
L_002BC2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC2C8u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BC2C8u) [[unlikely]] return; }
L_002BC2C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC2D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BC2D8u) [[unlikely]] return; }
L_002BC2D8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC2E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BC2E4u) [[unlikely]] return; }
L_002BC2E4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 16213u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC264u | kUnwind; return; } goto L_002BC264; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC30C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC30Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 45u, depth + 1u); else { c.pc = 0x002BC430u; return; } if (c.pc != 0x002BC30Cu) [[unlikely]] return; }
L_002BC30C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[17].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC31Cu); set32(c.r[5], c.r[5].w[0] - 18647u);  if (depth < kMaxDepth) unit_002F(c, 36u, depth + 1u); else { c.pc = 0x002BC340u; return; } if (c.pc != 0x002BC31Cu) [[unlikely]] return; }
L_002BC31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC264u | kUnwind; return; } goto L_002BC264; } }
L_002BC324:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002BC328:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BC340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_002BC354:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC354u | kUnwind; return; } goto L_002BC354; } }
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002BC388; } }
L_002BC380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BC398; } }
L_002BC388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC390u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BC390u) [[unlikely]] return; }
L_002BC390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC380u | kUnwind; return; } goto L_002BC380; } }
L_002BC398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC3B0:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_002BC3B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC3B4u | kUnwind; return; } goto L_002BC3B4; } }
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 1u);  c.pc = t; return; }
L_002BC3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC400u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BC400u) [[unlikely]] return; }
L_002BC400:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC410u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BC410u) [[unlikely]] return; }
L_002BC410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BC430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 18658u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC450u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BC450u) [[unlikely]] return; }
L_002BC450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC458u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BC458u) [[unlikely]] return; }
L_002BC458:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC468u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BC468u) [[unlikely]] return; }
L_002BC468:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC474u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BC474u) [[unlikely]] return; }
L_002BC474:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 16213u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC6F0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC4E0; } }
L_002BC494:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 18647u);
    c.budget -= 2;
L_002BC49C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC49Cu | kUnwind; return; } goto L_002BC49C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002BC6F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC4D8u); set32(c.r[4], c.r[16].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BC4D8u) [[unlikely]] return; }
L_002BC4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002BC6F4; } }
L_002BC4E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC4F0u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BC4F0u) [[unlikely]] return; }
L_002BC4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC4F8u); set32(c.r[4], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BC4F8u) [[unlikely]] return; }
L_002BC4F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC508u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BC508u) [[unlikely]] return; }
L_002BC508:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC514u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BC514u) [[unlikely]] return; }
L_002BC514:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 16213u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC494u | kUnwind; return; } goto L_002BC494; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC580; } }
L_002BC534:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 18647u);
    c.budget -= 2;
L_002BC53C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC53Cu | kUnwind; return; } goto L_002BC53C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC494u | kUnwind; return; } goto L_002BC494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC578u); set32(c.r[4], c.r[16].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BC578u) [[unlikely]] return; }
L_002BC578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC494u | kUnwind; return; } goto L_002BC494; } }
L_002BC580:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC590u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BC590u) [[unlikely]] return; }
L_002BC590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC598u); set32(c.r[4], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BC598u) [[unlikely]] return; }
L_002BC598:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC5A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BC5A8u) [[unlikely]] return; }
L_002BC5A8:
    set32(c.r[4], c.r[29].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC5B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BC5B4u) [[unlikely]] return; }
L_002BC5B4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 16213u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC534u | kUnwind; return; } goto L_002BC534; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC620; } }
L_002BC5D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 18647u);
    c.budget -= 2;
L_002BC5DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC5DCu | kUnwind; return; } goto L_002BC5DC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC534u | kUnwind; return; } goto L_002BC534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC618u); set32(c.r[4], c.r[16].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BC618u) [[unlikely]] return; }
L_002BC618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC534u | kUnwind; return; } goto L_002BC534; } }
L_002BC620:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC630u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BC630u) [[unlikely]] return; }
L_002BC630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC638u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BC638u) [[unlikely]] return; }
L_002BC638:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC648u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BC648u) [[unlikely]] return; }
L_002BC648:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC654u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BC654u) [[unlikely]] return; }
L_002BC654:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 16213u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC5D4u | kUnwind; return; } goto L_002BC5D4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC6A4; } }
L_002BC674:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC680u); set32(c.r[4], c.r[4].w[0] - 18647u);  if (depth < kMaxDepth) unit_002F(c, 40u, depth + 1u); else { c.pc = 0x002BC3B0u; return; } if (c.pc != 0x002BC680u) [[unlikely]] return; }
L_002BC680:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC5D4u | kUnwind; return; } goto L_002BC5D4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC69Cu); set32(c.r[5], c.r[5].w[0] - 18647u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BC69Cu) [[unlikely]] return; }
L_002BC69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC5D4u | kUnwind; return; } goto L_002BC5D4; } }
L_002BC6A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6B4u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BC6B4u) [[unlikely]] return; }
L_002BC6B4:
    set32(c.r[4], c.r[16].w[0] + 16180u);
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 42u, depth + 1u); else { c.pc = 0x002BC3E0u; return; } if (c.pc != 0x002BC6C4u) [[unlikely]] return; }
L_002BC6C4:
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BC6D0u) [[unlikely]] return; }
L_002BC6D0:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6E8u); set32(c.r[5], c.r[5].w[0] - 18647u);  if (depth < kMaxDepth) unit_002F(c, 5u, depth + 1u); else { c.pc = 0x002BC060u; return; } if (c.pc != 0x002BC6E8u) [[unlikely]] return; }
L_002BC6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC674u | kUnwind; return; } goto L_002BC674; } }
L_002BC6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002BC6F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BC700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC720u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 176u, depth + 1u); else { c.pc = 0x002DF930u; return; } if (c.pc != 0x002BC720u) [[unlikely]] return; }
L_002BC720:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 3184u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC738u); st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0018(c, 226u, depth + 1u); else { c.pc = 0x00263420u; return; } if (c.pc != 0x002BC738u) [[unlikely]] return; }
L_002BC738:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC748u); set32(c.r[4], c.r[4].w[0] + 3056u);  if (depth < kMaxDepth) unit_0018(c, 199u, depth + 1u); else { c.pc = 0x00262AC0u; return; } if (c.pc != 0x002BC748u) [[unlikely]] return; }
L_002BC748:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 21424u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC75Cu); set32(c.r[5], c.r[5].w[0] - 18607u);  if (depth < kMaxDepth) unit_0037(c, 176u, depth + 1u); else { c.pc = 0x002DF930u; return; } if (c.pc != 0x002BC75Cu) [[unlikely]] return; }
L_002BC75C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC76Cu); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 217u, depth + 1u); else { c.pc = 0x002DFEE0u; return; } if (c.pc != 0x002BC76Cu) [[unlikely]] return; }
L_002BC76C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC77Cu); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 217u, depth + 1u); else { c.pc = 0x002DFEE0u; return; } if (c.pc != 0x002BC77Cu) [[unlikely]] return; }
L_002BC77C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BC790:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 16108u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BC8C4; } }
L_002BC7B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 16120u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002BC800; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16112u)));
    c.budget -= 1;
L_002BC7CC:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002BC7EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16124u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002BCB70; } }
L_002BC7EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 16120u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC7CCu | kUnwind; return; } goto L_002BC7CC; } }
L_002BC800:
    set32(c.r[18], ld32((c.r[17].w[0] + 16120u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16116u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002BCA60; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16120u)));
    c.budget -= 1;
L_002BC814:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16120u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 16112u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC834; } }
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_002BC834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC83Cu); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002BC83Cu) [[unlikely]] return; }
L_002BC83C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC860; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[7], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 19120u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC860u); set32(c.r[6], c.r[3].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0042(c, 46u, depth + 1u); else { c.pc = 0x00308530u; return; } if (c.pc != 0x002BC860u) [[unlikely]] return; }
L_002BC860:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC870u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 68u, depth + 1u); else { c.pc = 0x002F06D0u; return; } if (c.pc != 0x002BC870u) [[unlikely]] return; }
L_002BC870:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 16132u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16128u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002BCAE8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16132u)));
    c.budget -= 1;
L_002BC888:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16132u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 16124u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC8A8; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002BC8A8:
    set32(c.r[3], ld32((c.r[17].w[0] + 16120u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16124u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002BCB70; } }
L_002BC8C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18599u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8D8u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002BC8D8u) [[unlikely]] return; }
L_002BC8D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC7B8u | kUnwind; return; } goto L_002BC7B8; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 16120u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16116u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002BC954; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16120u)));
    c.budget -= 1;
L_002BC8F4:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16120u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 16112u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC914; } }
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_002BC914:
    set32(c.r[18], ld32((c.r[17].w[0] + 16132u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16128u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002BC9D8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16132u)));
    c.budget -= 1;
L_002BC928:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16132u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 16124u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC94C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 32352u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002BC94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16108u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC7B8u | kUnwind; return; } goto L_002BC7B8; } }
L_002BC954:
    set32(c.r[19], ld32((c.r[17].w[0] + 16112u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[17].w[0] + 16116u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16120u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16116u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC97Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002BC97Cu) [[unlikely]] return; }
L_002BC97C:
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    st32((c.r[17].w[0] + 16112u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BC9C8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002BC990:
    set32(c.r[3], ld32((c.r[17].w[0] + 16120u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16120u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 16112u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC9B8; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002BC9B8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC990u | kUnwind; return; } goto L_002BC990; } }
L_002BC9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002BC9D0u) [[unlikely]] return; }
L_002BC9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 16120u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC8F4u | kUnwind; return; } goto L_002BC8F4; } }
L_002BC9D8:
    set32(c.r[19], ld32((c.r[17].w[0] + 16124u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[17].w[0] + 16128u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16132u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16128u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA00u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002BCA00u) [[unlikely]] return; }
L_002BCA00:
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    st32((c.r[17].w[0] + 16124u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BCA50; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002BCA14:
    set32(c.r[3], ld32((c.r[17].w[0] + 16132u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16132u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 16124u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BCA40; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002BCA40:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCA14u | kUnwind; return; } goto L_002BCA14; } }
L_002BCA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA58u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002BCA58u) [[unlikely]] return; }
L_002BCA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 16132u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC928u | kUnwind; return; } goto L_002BC928; } }
L_002BCA60:
    set32(c.r[19], ld32((c.r[17].w[0] + 16112u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[17].w[0] + 16116u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16120u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16116u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA88u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002BCA88u) [[unlikely]] return; }
L_002BCA88:
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    st32((c.r[17].w[0] + 16112u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BCAD8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002BCA9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 16120u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16120u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 16112u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BCAC8; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002BCAC8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCA9Cu | kUnwind; return; } goto L_002BCA9C; } }
L_002BCAD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002BCAE0u) [[unlikely]] return; }
L_002BCAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 16120u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC814u | kUnwind; return; } goto L_002BC814; } }
L_002BCAE8:
    set32(c.r[19], ld32((c.r[17].w[0] + 16124u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[17].w[0] + 16128u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 16132u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16128u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB10u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002BCB10u) [[unlikely]] return; }
L_002BCB10:
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    st32((c.r[17].w[0] + 16124u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BCB60; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002BCB24:
    set32(c.r[3], ld32((c.r[17].w[0] + 16132u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16132u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 16124u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BCB50; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002BCB50:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCB24u | kUnwind; return; } goto L_002BCB24; } }
L_002BCB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002BCB68u) [[unlikely]] return; }
L_002BCB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 16132u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC888u | kUnwind; return; } goto L_002BC888; } }
L_002BCB70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BCB90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16100u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BCBAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBACu);  if (depth < kMaxDepth) unit_0081(c, 159u, depth + 1u); else { c.pc = 0x00405B10u; return; } if (c.pc != 0x002BCBACu) [[unlikely]] return; }
L_002BCBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBB4u);  if (depth < kMaxDepth) unit_0097(c, 196u, depth + 1u); else { c.pc = 0x0045F1E0u; return; } if (c.pc != 0x002BCBB4u) [[unlikely]] return; }
L_002BCBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBBCu);  if (depth < kMaxDepth) unit_009D(c, 177u, depth + 1u); else { c.pc = 0x00477560u; return; } if (c.pc != 0x002BCBBCu) [[unlikely]] return; }
L_002BCBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBC4u); set32(c.r[4], c.r[28].w[0] - 28488u);  if (depth < kMaxDepth) unit_0089(c, 40u, depth + 1u); else { c.pc = 0x00424FC0u; return; } if (c.pc != 0x002BCBC4u) [[unlikely]] return; }
L_002BCBC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BCBD0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 16100u)));  [[clang::musttail]] return unit_0081(c, 170u, depth); }
L_002BCBE0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 16100u)));  [[clang::musttail]] return unit_0081(c, 171u, depth); }
L_002BCBF0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 16100u)));  [[clang::musttail]] return unit_0081(c, 178u, depth); }
L_002BCC00:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 16100u)));  [[clang::musttail]] return unit_0081(c, 184u, depth); }
L_002BCC10:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 16100u)));  [[clang::musttail]] return unit_0081(c, 193u, depth); }
L_002BCC20:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 16100u)));  [[clang::musttail]] return unit_0081(c, 200u, depth); }
L_002BCC30:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002BCC64; } }
    c.r[1].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BCC64; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 16104u));
    set32(c.r[5], c.r[5].w[0] - 4244u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st16((c.r[4].w[0] + 16104u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002BCC64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BCC70:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16100u)));
    c.f[21] = ld32((c.r[29].w[0] + 156u));
    c.f[20] = ld32((c.r[29].w[0] + 172u));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002BCF20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[18], c.r[29].w[0] + 208u);
    c.f[3] = ld32((c.r[2].w[0] - 20092u));
    set32(c.r[17], c.r[29].w[0] + 212u);
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[16], c.r[29].w[0] + 216u);
    st32((c.r[29].w[0] + 204u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    c.f[1] = ld32((c.r[6].w[0]));
    st32((c.r[29].w[0] + 224u), c.r[8].w[0]);
    st8((c.r[29].w[0] + 240u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 236u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[2].w[0] - 20088u));
    st8((c.r[29].w[0] + 241u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st32((c.r[29].w[0] + 232u), 0u);
    st8((c.r[29].w[0] + 228u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0]), 0u);
    st32((c.r[29].w[0] + 196u), c.f[3]);
    st32((c.r[17].w[0]), 0u);
    c.f[5] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[2].w[0] - 20096u));
    c.f[4] = 0u;
    st32((c.r[29].w[0] + 200u), c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 34;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[4].w[0]), c.f[3]);  if (t) { goto L_002BCE20; } }
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BCE20; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[23] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD98u); c.f[24] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002BCD98u) [[unlikely]] return; }
L_002BCD98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.f[21] = c.f[0] ^ fp::kSign;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDCCu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002BCDCCu) [[unlikely]] return; }
L_002BCDCC:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDD8u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002BCDD8u) [[unlikely]] return; }
L_002BCDD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 4244u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[24], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[21]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[24], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);
    st32((c.r[17].w[0]), c.f[23]);
    st32((c.r[29].w[0] + 220u), c.f[20]);
    st32((c.r[18].w[0]), c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 16104u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 16104u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BCF0C; } }
L_002BCE20:
    c.r[2].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BCEEC; } }
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BCEEC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[2] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[4] = ld32((c.r[3].w[0] + 32u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[3] = ld32((c.r[3].w[0] + 40u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[23] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCE88u); c.f[24] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002BCE88u) [[unlikely]] return; }
L_002BCE88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCEB8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002BCEB8u) [[unlikely]] return; }
L_002BCEB8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCEC4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002BCEC4u) [[unlikely]] return; }
L_002BCEC4:
    c.facc = fp::ee::mul(c.fcr31, c.f[24], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[20]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[24], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);
    st32((c.r[17].w[0]), c.f[23]);
    st32((c.r[29].w[0] + 220u), c.f[21]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { goto L_002BCF0C; } }
L_002BCEEC:
    set32(c.r[2], c.r[3].w[0] - 33u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BCF0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 4;
L_002BCF0C:
    set32(c.r[4], ld32((c.r[20].w[0] + 16100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF18u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0081(c, 222u, depth + 1u); else { c.pc = 0x00406F80u; return; } if (c.pc != 0x002BCF18u) [[unlikely]] return; }
L_002BCF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_002BCF28; } }
L_002BCF20:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 2;
L_002BCF28:
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002BCF60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16100u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[12], ld32((c.r[29].w[0] + 96u)));  if (t) { goto L_002BD024; } }
    c.f[3] = ld32((c.r[6].w[0]));
    st32((c.r[29].w[0] + 64u), c.r[8].w[0]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[29].w[0] + 72u), c.r[11].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[29].w[0] + 76u), c.r[5].w[0]);
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 32u), c.f[3]);
    st8((c.r[29].w[0] + 81u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 36u), c.f[2]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.budget -= 16;
    { const bool t = c.r[12].d[0] == 0ull; st32((c.r[29].w[0] + 44u), c.f[0]);  if (t) { goto L_002BD02C; } }
    c.f[0] = ld32((c.r[12].w[0]));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0] + 4u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0] + 8u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0] + 12u));
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.budget -= 8;
L_002BCFD4:
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002BD008; } }
    c.r[1].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BD008; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 16104u));
    set32(c.r[3], c.r[3].w[0] - 4244u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 16104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_002BD008:
    set32(c.r[4], ld32((c.r[4].w[0] + 16100u)));
    c.r[7].d[0] = 0ull < c.r[12].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD01Cu); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0081(c, 206u, depth + 1u); else { c.pc = 0x00406C10u; return; } if (c.pc != 0x002BD01Cu) [[unlikely]] return; }
L_002BD01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002BD040; } }
L_002BD024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BD03C; } }
L_002BD02C:
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 56u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCFD4u | kUnwind; return; } goto L_002BCFD4; } }
L_002BD03C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002BD040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BD050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16100u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD06C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD06Cu);  if (depth < kMaxDepth) unit_0081(c, 226u, depth + 1u); else { c.pc = 0x00407080u; return; } if (c.pc != 0x002BD06Cu) [[unlikely]] return; }
L_002BD06C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BD080:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BD0A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 16216u)));  if (t) { goto L_002BD0AC; } }
L_002BD0A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[5].w[0] - 17639u);
    c.budget -= 2;
L_002BD0AC:
    set32(c.r[3], 0u + 1600u);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BD108; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD0C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD0F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0ECu); set32(c.r[6], c.r[29].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD0ECu) [[unlikely]] return; }
L_002BD0EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002BD0F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD0C8u | kUnwind; return; } goto L_002BD0C8; } }
    c.budget -= 1;
L_002BD108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BD120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BD144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 16216u)));  if (t) { goto L_002BD14C; } }
L_002BD144:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[5].w[0] - 17639u);
    c.budget -= 2;
L_002BD14C:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BD1A0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD160:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD188; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD184u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD184u) [[unlikely]] return; }
L_002BD184:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002BD188:
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD160u | kUnwind; return; } goto L_002BD160; } }
    c.budget -= 1;
L_002BD1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BD1C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BD1E8; } }
L_002BD1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD1F0; } }
L_002BD1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD1E0u | kUnwind; return; } goto L_002BD1E0; } }
L_002BD1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD200:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[8], c.r[2].w[0] + 200u);
    c.r[1].d[0] = c.r[2].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BD248; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 3;
L_002BD220:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002BD234; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD29C; } }
L_002BD234:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD220u | kUnwind; return; } goto L_002BD220; } }
    c.budget -= 1;
L_002BD248:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BD298; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_002BD264:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BD288; } }
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002BD29C; } }
L_002BD288:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD264u | kUnwind; return; } goto L_002BD264; } }
L_002BD298:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD29C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD2B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD2D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD2D4; } }
L_002BD2D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD2D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD2E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BD414; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD314:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD400; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD338u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD338u) [[unlikely]] return; }
L_002BD338:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002BD33C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BD3C0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_002BD370; } }
L_002BD364:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD33Cu | kUnwind; return; } goto L_002BD33C; } }
L_002BD370:
    c.r[3].d[0] = c.r[6].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BD394; } }
    c.r[1].d[0] = c.r[6].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002BD390; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD394; } }
L_002BD390:
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 1;
L_002BD394:
    c.r[3].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BD3B8; } }
    c.r[1].d[0] = c.r[5].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002BD3B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD3B8; } }
L_002BD3B4:
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 1;
L_002BD3B8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD364u | kUnwind; return; } goto L_002BD364; } }
L_002BD3C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD400; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD3F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD3F8u) [[unlikely]] return; }
L_002BD3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002BD41C; } }
L_002BD400:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD314u | kUnwind; return; } goto L_002BD314; } }
L_002BD414:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_002BD41C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BD440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[5].w[0] << 2);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD478; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD470u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD470u) [[unlikely]] return; }
L_002BD470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002BD480; } }
L_002BD478:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_002BD480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BD490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 16212u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BD4F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD524; } }
L_002BD4B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18591u);
    c.budget -= 2;
L_002BD4BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD4BCu | kUnwind; return; } goto L_002BD4BC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18591u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002BD4F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD4F8u); set32(c.r[4], c.r[16].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BD4F8u) [[unlikely]] return; }
L_002BD4F8:
    st32((c.r[16].w[0] + 16072u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[16].w[0] + 16076u), 0u);
    set32(c.r[4], c.r[4].w[0] + 25088u);
    st8((c.r[16].w[0] + 16080u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 16081u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD51Cu); st32((c.r[16].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_00A0(c, 233u, depth + 1u); else { c.pc = 0x00483690u; return; } if (c.pc != 0x002BD51Cu) [[unlikely]] return; }
L_002BD51C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002BD734; } }
L_002BD524:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD534u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BD534u) [[unlikely]] return; }
L_002BD534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD53Cu); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BD53Cu) [[unlikely]] return; }
L_002BD53C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD54Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BD54Cu) [[unlikely]] return; }
L_002BD54C:
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD558u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BD558u) [[unlikely]] return; }
L_002BD558:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD4B4u | kUnwind; return; } goto L_002BD4B4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD5C4; } }
L_002BD578:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18647u);
    c.budget -= 2;
L_002BD580:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD580u | kUnwind; return; } goto L_002BD580; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD4B4u | kUnwind; return; } goto L_002BD4B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5BCu); set32(c.r[4], c.r[16].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BD5BCu) [[unlikely]] return; }
L_002BD5BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD4B4u | kUnwind; return; } goto L_002BD4B4; } }
L_002BD5C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5D4u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BD5D4u) [[unlikely]] return; }
L_002BD5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5DCu); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BD5DCu) [[unlikely]] return; }
L_002BD5DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BD5ECu) [[unlikely]] return; }
L_002BD5EC:
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BD5F8u) [[unlikely]] return; }
L_002BD5F8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD578u | kUnwind; return; } goto L_002BD578; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD664; } }
L_002BD618:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18647u);
    c.budget -= 2;
L_002BD620:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD620u | kUnwind; return; } goto L_002BD620; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD578u | kUnwind; return; } goto L_002BD578; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD65Cu); set32(c.r[4], c.r[16].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BD65Cu) [[unlikely]] return; }
L_002BD65C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD578u | kUnwind; return; } goto L_002BD578; } }
L_002BD664:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD674u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BD674u) [[unlikely]] return; }
L_002BD674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD67Cu); set32(c.r[4], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BD67Cu) [[unlikely]] return; }
L_002BD67C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD68Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BD68Cu) [[unlikely]] return; }
L_002BD68C:
    set32(c.r[4], c.r[29].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD698u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BD698u) [[unlikely]] return; }
L_002BD698:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD618u | kUnwind; return; } goto L_002BD618; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD6E8; } }
L_002BD6B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD6C4u); set32(c.r[4], c.r[4].w[0] - 18647u);  if (depth < kMaxDepth) unit_002F(c, 40u, depth + 1u); else { c.pc = 0x002BC3B0u; return; } if (c.pc != 0x002BD6C4u) [[unlikely]] return; }
L_002BD6C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD618u | kUnwind; return; } goto L_002BD618; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 16180u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD6E0u); set32(c.r[5], c.r[5].w[0] - 18647u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BD6E0u) [[unlikely]] return; }
L_002BD6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD618u | kUnwind; return; } goto L_002BD618; } }
L_002BD6E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD6F8u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BD6F8u) [[unlikely]] return; }
L_002BD6F8:
    set32(c.r[4], c.r[16].w[0] + 16180u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD708u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 42u, depth + 1u); else { c.pc = 0x002BC3E0u; return; } if (c.pc != 0x002BD708u) [[unlikely]] return; }
L_002BD708:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD714u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BD714u) [[unlikely]] return; }
L_002BD714:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD72Cu); set32(c.r[5], c.r[5].w[0] - 18647u);  if (depth < kMaxDepth) unit_002F(c, 5u, depth + 1u); else { c.pc = 0x002BC060u; return; } if (c.pc != 0x002BD72Cu) [[unlikely]] return; }
L_002BD72C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD6B8u | kUnwind; return; } goto L_002BD6B8; } }
L_002BD734:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BD740:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002BD7A0; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 2u);
    c.budget -= 2;
L_002BD758:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002BD788; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 18u));
    c.r[6].d[0] = c.r[3].d[0] << 62;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[7].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002BD788:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD758u | kUnwind; return; } goto L_002BD758; } }
    c.budget -= 1;
L_002BD7A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BD7B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16082u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BD7D8; } }
L_002BD7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002BDB60; } }
L_002BD7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 229u, depth + 1u); else { c.pc = 0x002BDB80u; return; } if (c.pc != 0x002BD7E0u) [[unlikely]] return; }
L_002BD7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 594u, depth + 1u); else { c.pc = 0x002C2BE0u; return; } if (c.pc != 0x002BD7E8u) [[unlikely]] return; }
L_002BD7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7F0u); set32(c.r[4], c.r[18].w[0] + 16220u);  if (depth < kMaxDepth) unit_002A(c, 4u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002BD7F0u) [[unlikely]] return; }
L_002BD7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7F8u); set32(c.r[4], c.r[18].w[0] + 16228u);  if (depth < kMaxDepth) unit_002A(c, 4u, depth + 1u); else { c.pc = 0x002A8060u; return; } if (c.pc != 0x002BD7F8u) [[unlikely]] return; }
L_002BD7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD800u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x002BD800u) [[unlikely]] return; }
L_002BD800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD808u); set32(c.r[4], c.r[18].w[0] + 40u);  if (depth < kMaxDepth) unit_0030(c, 582u, depth + 1u); else { c.pc = 0x002C2A60u; return; } if (c.pc != 0x002BD808u) [[unlikely]] return; }
L_002BD808:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD814u); set32(c.r[4], c.r[4].w[0] - 3768u);  if (depth < kMaxDepth) unit_006F(c, 8u, depth + 1u); else { c.pc = 0x003BC070u; return; } if (c.pc != 0x002BD814u) [[unlikely]] return; }
L_002BD814:
    set32(c.r[17], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BD868; } }
    set32(c.r[16], c.r[17].w[0] << 2);
    c.budget -= 1;
L_002BD824:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_002BD858; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BD858; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD854u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD854u) [[unlikely]] return; }
L_002BD854:
    c.budget -= 1;
L_002BD858:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[2].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD824u | kUnwind; return; } goto L_002BD824; } }
L_002BD868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD870u); set32(c.r[4], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0030(c, 590u, depth + 1u); else { c.pc = 0x002C2B60u; return; } if (c.pc != 0x002BD870u) [[unlikely]] return; }
L_002BD870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD878u); set32(c.r[4], ld32((c.r[18].w[0] + 56u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x002BD878u) [[unlikely]] return; }
L_002BD878:
    st32((c.r[18].w[0] + 56u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD884u); set32(c.r[4], ld32((c.r[18].w[0] + 60u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x002BD884u) [[unlikely]] return; }
L_002BD884:
    st32((c.r[18].w[0] + 60u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[18].w[0] + 16100u), 0u);
    set32(c.r[4], c.r[4].w[0] - 14752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD89Cu); st32((c.r[18].w[0] + 16088u), 0u);  if (depth < kMaxDepth) unit_0022(c, 22u, depth + 1u); else { c.pc = 0x00288390u; return; } if (c.pc != 0x002BD89Cu) [[unlikely]] return; }
L_002BD89C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8A4u); set32(c.r[4], c.r[28].w[0] - 28488u);  if (depth < kMaxDepth) unit_0089(c, 44u, depth + 1u); else { c.pc = 0x00425040u; return; } if (c.pc != 0x002BD8A4u) [[unlikely]] return; }
L_002BD8A4:
    st32((c.r[18].w[0] + 16092u), 0u);
    st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 16132u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD8D8; } }
L_002BD8B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 16132u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 16132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16132u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD8B8u | kUnwind; return; } goto L_002BD8B8; } }
    c.budget -= 1;
L_002BD8D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 16120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD900; } }
L_002BD8E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 16120u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 16120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16120u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD8E4u | kUnwind; return; } goto L_002BD8E4; } }
L_002BD900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD908u); set32(c.r[4], c.r[18].w[0] + 16136u);  if (depth < kMaxDepth) unit_0044(c, 392u, depth + 1u); else { c.pc = 0x003134C0u; return; } if (c.pc != 0x002BD908u) [[unlikely]] return; }
L_002BD908:
    st32((c.r[18].w[0] + 64u), 0u);
    st32((c.r[18].w[0] + 68u), 0u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD96C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD9AC; } }
L_002BD928:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18627u);
    c.budget -= 2;
L_002BD930:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD930u | kUnwind; return; } goto L_002BD930; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18627u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002BD96C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD96Cu); set32(c.r[4], c.r[18].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BD96Cu) [[unlikely]] return; }
L_002BD96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD974u); set32(c.r[4], c.r[18].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 44u, depth + 1u); else { c.pc = 0x00240510u; return; } if (c.pc != 0x002BD974u) [[unlikely]] return; }
L_002BD974:
    st8((c.r[18].w[0] + 16213u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD988u); set32(c.r[4], ld32((c.r[18].w[0] + 16216u)));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002BD988u) [[unlikely]] return; }
L_002BD988:
    st32((c.r[18].w[0] + 16216u), 0u);
    st32((c.r[18].w[0] + 52u), 0u);
    st32((c.r[18].w[0] + 48u), 0u);
    st8((c.r[18].w[0] + 16096u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 16097u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 16098u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 16099u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 16080u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD7D0u | kUnwind; return; } goto L_002BD7D0; } }
L_002BD9AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9BCu); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BD9BCu) [[unlikely]] return; }
L_002BD9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9C4u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BD9C4u) [[unlikely]] return; }
L_002BD9C4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BD9D4u) [[unlikely]] return; }
L_002BD9D4:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BD9E0u) [[unlikely]] return; }
L_002BD9E0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD928u | kUnwind; return; } goto L_002BD928; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDA4C; } }
L_002BDA00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18647u);
    c.budget -= 2;
L_002BDA08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDA08u | kUnwind; return; } goto L_002BDA08; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD928u | kUnwind; return; } goto L_002BD928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA44u); set32(c.r[4], c.r[18].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BDA44u) [[unlikely]] return; }
L_002BDA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD928u | kUnwind; return; } goto L_002BD928; } }
L_002BDA4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA5Cu); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BDA5Cu) [[unlikely]] return; }
L_002BDA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA64u); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BDA64u) [[unlikely]] return; }
L_002BDA64:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA74u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BDA74u) [[unlikely]] return; }
L_002BDA74:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BDA80u) [[unlikely]] return; }
L_002BDA80:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDA00u | kUnwind; return; } goto L_002BDA00; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDAEC; } }
L_002BDAA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18647u);
    c.budget -= 2;
L_002BDAA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDAA8u | kUnwind; return; } goto L_002BDAA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDA00u | kUnwind; return; } goto L_002BDA00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAE4u); set32(c.r[4], c.r[18].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BDAE4u) [[unlikely]] return; }
L_002BDAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDA00u | kUnwind; return; } goto L_002BDA00; } }
L_002BDAEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAFCu); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BDAFCu) [[unlikely]] return; }
L_002BDAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB04u); set32(c.r[4], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BDB04u) [[unlikely]] return; }
L_002BDB04:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BDB14u) [[unlikely]] return; }
L_002BDB14:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BDB20u) [[unlikely]] return; }
L_002BDB20:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDAA0u | kUnwind; return; } goto L_002BDAA0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDB48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB48u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 45u, depth + 1u); else { c.pc = 0x002BC430u; return; } if (c.pc != 0x002BDB48u) [[unlikely]] return; }
L_002BDB48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[18].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB58u); set32(c.r[5], c.r[5].w[0] - 18647u);  if (depth < kMaxDepth) unit_002F(c, 36u, depth + 1u); else { c.pc = 0x002BC340u; return; } if (c.pc != 0x002BDB58u) [[unlikely]] return; }
L_002BDB58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDAA0u | kUnwind; return; } goto L_002BDAA0; } }
L_002BDB60:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BDB80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 16082u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 16083u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 16212u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BDC00; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDC30; } }
L_002BDBBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18566u);
    c.budget -= 2;
L_002BDBC4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDBC4u | kUnwind; return; } goto L_002BDBC4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18566u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002BDC00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC00u); set32(c.r[4], c.r[19].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BDC00u) [[unlikely]] return; }
L_002BDC00:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BDE40; } }
L_002BDC0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC14u); set32(c.r[16], ld32((c.r[4].w[0] + 24u)));  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x002BDC14u) [[unlikely]] return; }
L_002BDC14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDC0Cu | kUnwind; return; } goto L_002BDC0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDE40; } }
L_002BDC30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC40u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BDC40u) [[unlikely]] return; }
L_002BDC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC48u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BDC48u) [[unlikely]] return; }
L_002BDC48:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BDC58u) [[unlikely]] return; }
L_002BDC58:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC64u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BDC64u) [[unlikely]] return; }
L_002BDC64:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDBBCu | kUnwind; return; } goto L_002BDBBC; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDCD0; } }
L_002BDC84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18647u);
    c.budget -= 2;
L_002BDC8C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDC8Cu | kUnwind; return; } goto L_002BDC8C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDBBCu | kUnwind; return; } goto L_002BDBBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDCC8u); set32(c.r[4], c.r[19].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BDCC8u) [[unlikely]] return; }
L_002BDCC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDBBCu | kUnwind; return; } goto L_002BDBBC; } }
L_002BDCD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDCE0u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BDCE0u) [[unlikely]] return; }
L_002BDCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDCE8u); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BDCE8u) [[unlikely]] return; }
L_002BDCE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDCF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BDCF8u) [[unlikely]] return; }
L_002BDCF8:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BDD04u) [[unlikely]] return; }
L_002BDD04:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDC84u | kUnwind; return; } goto L_002BDC84; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDD70; } }
L_002BDD24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18647u);
    c.budget -= 2;
L_002BDD2C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDD2Cu | kUnwind; return; } goto L_002BDD2C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDC84u | kUnwind; return; } goto L_002BDC84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD68u); set32(c.r[4], c.r[19].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BDD68u) [[unlikely]] return; }
L_002BDD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDC84u | kUnwind; return; } goto L_002BDC84; } }
L_002BDD70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD80u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BDD80u) [[unlikely]] return; }
L_002BDD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD88u); set32(c.r[4], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BDD88u) [[unlikely]] return; }
L_002BDD88:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BDD98u) [[unlikely]] return; }
L_002BDD98:
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BDDA4u) [[unlikely]] return; }
L_002BDDA4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[19].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDD24u | kUnwind; return; } goto L_002BDD24; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDDF4; } }
L_002BDDC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDD0u); set32(c.r[4], c.r[4].w[0] - 18647u);  if (depth < kMaxDepth) unit_002F(c, 40u, depth + 1u); else { c.pc = 0x002BC3B0u; return; } if (c.pc != 0x002BDDD0u) [[unlikely]] return; }
L_002BDDD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDD24u | kUnwind; return; } goto L_002BDD24; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 16180u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDECu); set32(c.r[5], c.r[5].w[0] - 18647u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BDDECu) [[unlikely]] return; }
L_002BDDEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDD24u | kUnwind; return; } goto L_002BDD24; } }
L_002BDDF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE04u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BDE04u) [[unlikely]] return; }
L_002BDE04:
    set32(c.r[4], c.r[19].w[0] + 16180u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 42u, depth + 1u); else { c.pc = 0x002BC3E0u; return; } if (c.pc != 0x002BDE14u) [[unlikely]] return; }
L_002BDE14:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BDE20u) [[unlikely]] return; }
L_002BDE20:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[19].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE38u); set32(c.r[5], c.r[5].w[0] - 18647u);  if (depth < kMaxDepth) unit_002F(c, 5u, depth + 1u); else { c.pc = 0x002BC060u; return; } if (c.pc != 0x002BDE38u) [[unlikely]] return; }
L_002BDE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDDC4u | kUnwind; return; } goto L_002BDDC4; } }
L_002BDE40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE4Cu); set32(c.r[4], c.r[4].w[0] - 29024u);  if (depth < kMaxDepth) unit_00BF(c, 20u, depth + 1u); else { c.pc = 0x004FC110u; return; } if (c.pc != 0x002BDE4Cu) [[unlikely]] return; }
L_002BDE4C:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BDF40; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BDE60:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BDE88; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BDE84u) [[unlikely]] return; }
L_002BDE84:
    c.budget -= 1;
L_002BDE88:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDE60u | kUnwind; return; } goto L_002BDE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDF40; } }
L_002BDEA4:
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BDEF0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BDEB4:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BDED8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDED8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BDED8u) [[unlikely]] return; }
L_002BDED8:
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDEB4u | kUnwind; return; } goto L_002BDEB4; } }
    c.budget -= 1;
L_002BDEF0:
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    st32((c.r[19].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 200u);
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BDF50; } }
    set32(c.r[4], c.r[5].w[0] << 2);
    c.budget -= 1;
L_002BDF14:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 200u);
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDF14u | kUnwind; return; } goto L_002BDF14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002BDF54; } }
L_002BDF40:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDEF0u | kUnwind; return; } goto L_002BDEF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 48u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDEA4u | kUnwind; return; } goto L_002BDEA4; } }
L_002BDF50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002BDF54:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BDF70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 16212u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BDFE0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE0F8; } }
L_002BDF9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18542u);
    c.budget -= 2;
L_002BDFA4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDFA4u | kUnwind; return; } goto L_002BDFA4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18542u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002BDFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDFE0u); set32(c.r[4], c.r[18].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BDFE0u) [[unlikely]] return; }
L_002BDFE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDFECu); st8((c.r[18].w[0] + 16082u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009B(c, 322u, depth + 1u); else { c.pc = 0x0046F7C0u; return; } if (c.pc != 0x002BDFECu) [[unlikely]] return; }
L_002BDFEC:
    st32((c.r[18].w[0] + 16072u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 16076u), 0u);
    st8((c.r[18].w[0] + 16080u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 29024u);
    st8((c.r[18].w[0] + 16083u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 16081u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 16083u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 16084u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE01Cu); st16((c.r[18].w[0] + 16104u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_00BF(c, 21u, depth + 1u); else { c.pc = 0x004FC120u; return; } if (c.pc != 0x002BE01Cu) [[unlikely]] return; }
L_002BE01C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BE070; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BE030:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BE058; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE054u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE054u) [[unlikely]] return; }
L_002BE054:
    c.budget -= 1;
L_002BE058:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE030u | kUnwind; return; } goto L_002BE030; } }
    c.budget -= 1;
L_002BE070:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BE0C0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BE084:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BE0A8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE0A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE0A8u) [[unlikely]] return; }
L_002BE0A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE084u | kUnwind; return; } goto L_002BE084; } }
    c.budget -= 1;
L_002BE0C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE0CCu); set32(c.r[4], c.r[4].w[0] + 25088u);  if (depth < kMaxDepth) unit_00A0(c, 233u, depth + 1u); else { c.pc = 0x00483690u; return; } if (c.pc != 0x002BE0CCu) [[unlikely]] return; }
L_002BE0CC:
    st8((c.r[18].w[0] + 16080u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 16083u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 16076u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16072u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BE308; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002BE0EC:
    st8((c.r[18].w[0] + 16080u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 16083u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BE350; } }
L_002BE0F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE108u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BE108u) [[unlikely]] return; }
L_002BE108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE110u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BE110u) [[unlikely]] return; }
L_002BE110:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE120u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BE120u) [[unlikely]] return; }
L_002BE120:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE12Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BE12Cu) [[unlikely]] return; }
L_002BE12C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDF9Cu | kUnwind; return; } goto L_002BDF9C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE198; } }
L_002BE14C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18647u);
    c.budget -= 2;
L_002BE154:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE154u | kUnwind; return; } goto L_002BE154; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDF9Cu | kUnwind; return; } goto L_002BDF9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE190u); set32(c.r[4], c.r[18].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BE190u) [[unlikely]] return; }
L_002BE190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDF9Cu | kUnwind; return; } goto L_002BDF9C; } }
L_002BE198:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE1A8u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BE1A8u) [[unlikely]] return; }
L_002BE1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE1B0u); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BE1B0u) [[unlikely]] return; }
L_002BE1B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE1C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BE1C0u) [[unlikely]] return; }
L_002BE1C0:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE1CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BE1CCu) [[unlikely]] return; }
L_002BE1CC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE14Cu | kUnwind; return; } goto L_002BE14C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE238; } }
L_002BE1EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 18647u);
    c.budget -= 2;
L_002BE1F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE1F4u | kUnwind; return; } goto L_002BE1F4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 18647u);
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE14Cu | kUnwind; return; } goto L_002BE14C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE230u); set32(c.r[4], c.r[18].w[0] + 16180u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BE230u) [[unlikely]] return; }
L_002BE230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE14Cu | kUnwind; return; } goto L_002BE14C; } }
L_002BE238:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE248u); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BE248u) [[unlikely]] return; }
L_002BE248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE250u); set32(c.r[4], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002BE250u) [[unlikely]] return; }
L_002BE250:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE260u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 46u, depth + 1u); else { c.pc = 0x00240560u; return; } if (c.pc != 0x002BE260u) [[unlikely]] return; }
L_002BE260:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE26Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BE26Cu) [[unlikely]] return; }
L_002BE26C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16212u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE1ECu | kUnwind; return; } goto L_002BE1EC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16213u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE2BC; } }
L_002BE28C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE298u); set32(c.r[4], c.r[4].w[0] - 18647u);  if (depth < kMaxDepth) unit_002F(c, 40u, depth + 1u); else { c.pc = 0x002BC3B0u; return; } if (c.pc != 0x002BE298u) [[unlikely]] return; }
L_002BE298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE1ECu | kUnwind; return; } goto L_002BE1EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 16180u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2B4u); set32(c.r[5], c.r[5].w[0] - 18647u);  if (depth < kMaxDepth) unit_0010(c, 42u, depth + 1u); else { c.pc = 0x002404E0u; return; } if (c.pc != 0x002BE2B4u) [[unlikely]] return; }
L_002BE2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE1ECu | kUnwind; return; } goto L_002BE1EC; } }
L_002BE2BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2CCu); set32(c.r[5], c.r[5].w[0] - 18658u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002BE2CCu) [[unlikely]] return; }
L_002BE2CC:
    set32(c.r[4], c.r[18].w[0] + 16180u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 42u, depth + 1u); else { c.pc = 0x002BC3E0u; return; } if (c.pc != 0x002BE2DCu) [[unlikely]] return; }
L_002BE2DC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002BE2E8u) [[unlikely]] return; }
L_002BE2E8:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 16213u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE300u); set32(c.r[5], c.r[5].w[0] - 18647u);  if (depth < kMaxDepth) unit_002F(c, 5u, depth + 1u); else { c.pc = 0x002BC060u; return; } if (c.pc != 0x002BE300u) [[unlikely]] return; }
L_002BE300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE28Cu | kUnwind; return; } goto L_002BE28C; } }
L_002BE308:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 8072u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE320u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x002BE320u) [[unlikely]] return; }
L_002BE320:
    set32(c.r[4], ld32((c.r[18].w[0] + 16076u)));
    set32(c.r[3], 0u + 2000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st32((c.r[18].w[0] + 16076u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 16076u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16072u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE308u | kUnwind; return; } goto L_002BE308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE0ECu | kUnwind; return; } goto L_002BE0EC; } }
L_002BE350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BE370:
    set32(c.r[29], c.r[29].w[0] - 288u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 276u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] >> 2);
    set32(c.r[17], c.r[29].w[0] + 280u);
    set32(c.r[4], c.r[2].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE3C8u); st32((c.r[17].w[0]), 0u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002BE3C8u) [[unlikely]] return; }
L_002BE3C8:
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[22].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 256u), 0u);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 224u), 0u);
    st32((c.r[29].w[0] + 208u), 0u);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 192u), 0u);  if (t) { goto L_002BFB20; } }
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 3;
L_002BE400:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], 0u + 208u);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002BFA94; } }
    set32(c.r[3], 0u + 207u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BFA48; } }
    set32(c.r[3], 0u + 202u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BFA00; } }
    set32(c.r[3], 0u + 201u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF9B8; } }
    set32(c.r[3], 0u + 198u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF970; } }
    set32(c.r[3], 0u + 195u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF928; } }
    set32(c.r[3], 0u + 194u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF8E0; } }
    set32(c.r[3], 0u + 191u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF898; } }
    set32(c.r[3], 0u + 173u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF850; } }
    set32(c.r[3], 0u + 172u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF7C4; } }
    set32(c.r[3], 0u + 156u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF764; } }
    set32(c.r[3], 0u + 152u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF71C; } }
    set32(c.r[3], 0u + 154u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF6D4; } }
    set32(c.r[3], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF68C; } }
    set32(c.r[3], 0u + 149u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF644; } }
    set32(c.r[3], 0u + 136u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF5F0; } }
    set32(c.r[3], 0u + 134u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF5A8; } }
    set32(c.r[3], 0u + 163u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF560; } }
    set32(c.r[3], 0u + 147u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF518; } }
    set32(c.r[3], 0u + 187u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF4D0; } }
    set32(c.r[3], 0u + 146u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF488; } }
    set32(c.r[3], 0u + 145u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF440; } }
    set32(c.r[3], 0u + 144u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF3F8; } }
    set32(c.r[3], 0u + 143u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF3B0; } }
    set32(c.r[3], 0u + 142u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF368; } }
    set32(c.r[3], 0u + 115u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF320; } }
    set32(c.r[3], 0u + 189u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF2D8; } }
    set32(c.r[3], 0u + 114u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF290; } }
    set32(c.r[3], 0u + 113u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF248; } }
    set32(c.r[3], 0u + 112u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF200; } }
    set32(c.r[3], 0u + 116u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF1B8; } }
    set32(c.r[3], 0u + 111u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF170; } }
    set32(c.r[3], 0u + 123u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF13C; } }
    set32(c.r[3], 0u + 110u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF108; } }
    set32(c.r[3], 0u + 109u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF0D4; } }
    set32(c.r[3], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF08C; } }
    set32(c.r[3], 0u + 119u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BF044; } }
    set32(c.r[3], 0u + 117u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEFFC; } }
    set32(c.r[3], 0u + 102u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEFB4; } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEF50; } }
    set32(c.r[3], 0u + 104u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEF44; } }
    set32(c.r[3], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEEFC; } }
    set32(c.r[3], 0u + 80u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEEF0; } }
    set32(c.r[3], 0u + 186u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEEA4; } }
    set32(c.r[3], 0u + 79u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEE58; } }
    set32(c.r[3], 0u + 168u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEE0C; } }
    set32(c.r[3], 0u + 167u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEDC0; } }
    set32(c.r[3], 0u + 166u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BED74; } }
    set32(c.r[3], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BED2C; } }
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BECE4; } }
    set32(c.r[3], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEC58; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEC10; } }
    set32(c.r[3], 0u + 56u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEBC8; } }
    set32(c.r[3], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEBBC; } }
    set32(c.r[3], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEB64; } }
    set32(c.r[3], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEB18; } }
    set32(c.r[3], 0u + 158u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEAC0; } }
    set32(c.r[3], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEAA0; } }
    set32(c.r[3], 0u + 35u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BEA38; } }
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BE9F0; } }
    set32(c.r[3], 0u + 21u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BE9A8; } }
    set32(c.r[3], 0u + 181u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BE960; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BE918; } }
    set32(c.r[3], 0u + 165u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BE8F4; } }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BE8E8; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BE89C; } }
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BE854; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BE80C; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BE7A8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BE75C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BE75C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10276u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18518u);  if (t) { goto L_002BE790; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE788u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE788u) [[unlikely]] return; }
L_002BE788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BE798; } }
L_002BE790:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BE798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7A0u);  if (depth < kMaxDepth) unit_007F(c, 219u, depth + 1u); else { c.pc = 0x003FE2A0u; return; } if (c.pc != 0x002BE7A0u) [[unlikely]] return; }
L_002BE7A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BE7A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18508u);  if (t) { goto L_002BE7D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE7D0u) [[unlikely]] return; }
L_002BE7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE7DC; } }
L_002BE7D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BE7DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[3].w[0] - 20360u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 116u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 16100u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE804u); st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0081(c, 224u, depth + 1u); else { c.pc = 0x00407050u; return; } if (c.pc != 0x002BE804u) [[unlikely]] return; }
L_002BE804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BE80C:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18498u);  if (t) { goto L_002BE83C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE834u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE834u) [[unlikely]] return; }
L_002BE834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BE844; } }
L_002BE83C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BE844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE84Cu);  if (depth < kMaxDepth) unit_00AD(c, 141u, depth + 1u); else { c.pc = 0x004B5490u; return; } if (c.pc != 0x002BE84Cu) [[unlikely]] return; }
L_002BE84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BE854:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18479u);  if (t) { goto L_002BE884; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE87Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE87Cu) [[unlikely]] return; }
L_002BE87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BE88C; } }
L_002BE884:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BE88C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE894u);  if (depth < kMaxDepth) unit_009A(c, 85u, depth + 1u); else { c.pc = 0x004692E0u; return; } if (c.pc != 0x002BE894u) [[unlikely]] return; }
L_002BE894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BE89C:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18453u);  if (t) { goto L_002BE8CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE8C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE8C4u) [[unlikely]] return; }
L_002BE8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[2].w[0])));  if (t) { goto L_002BE8D4; } }
L_002BE8CC:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002BE8D4:
    set32(c.r[25], ld32((c.r[25].w[0] + 304u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE8E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE8E0u) [[unlikely]] return; }
L_002BE8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BE8E8:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] - 18442u);  if (t) { goto L_002BFAD4; } }
L_002BE8F4:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE910u); set32(c.r[19], c.r[19].w[0] - 18424u);  if (depth < kMaxDepth) unit_002D(c, 204u, depth + 1u); else { c.pc = 0x002B6B50u; return; } if (c.pc != 0x002BE910u) [[unlikely]] return; }
L_002BE910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BE918:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18402u);  if (t) { goto L_002BE948; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE940u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE940u) [[unlikely]] return; }
L_002BE940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BE950; } }
L_002BE948:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BE950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE958u);  if (depth < kMaxDepth) unit_0080(c, 301u, depth + 1u); else { c.pc = 0x00402470u; return; } if (c.pc != 0x002BE958u) [[unlikely]] return; }
L_002BE958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BE960:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18393u);  if (t) { goto L_002BE990; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE988u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE988u) [[unlikely]] return; }
L_002BE988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BE998; } }
L_002BE990:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BE998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE9A0u);  if (depth < kMaxDepth) unit_0097(c, 225u, depth + 1u); else { c.pc = 0x0045FA90u; return; } if (c.pc != 0x002BE9A0u) [[unlikely]] return; }
L_002BE9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BE9A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18378u);  if (t) { goto L_002BE9D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE9D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE9D0u) [[unlikely]] return; }
L_002BE9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BE9E0; } }
L_002BE9D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BE9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE9E8u);  if (depth < kMaxDepth) unit_0098(c, 36u, depth + 1u); else { c.pc = 0x004604E0u; return; } if (c.pc != 0x002BE9E8u) [[unlikely]] return; }
L_002BE9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BE9F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18360u);  if (t) { goto L_002BEA20; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEA18u) [[unlikely]] return; }
L_002BEA18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEA28; } }
L_002BEA20:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BEA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA30u);  if (depth < kMaxDepth) unit_002D(c, 36u, depth + 1u); else { c.pc = 0x002B47D0u; return; } if (c.pc != 0x002BEA30u) [[unlikely]] return; }
L_002BEA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEA38:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18349u);  if (t) { goto L_002BEA68; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEA60u) [[unlikely]] return; }
L_002BEA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEA6C; } }
L_002BEA68:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BEA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 38u, depth + 1u); else { c.pc = 0x004003C0u; return; } if (c.pc != 0x002BEA74u) [[unlikely]] return; }
L_002BEA74:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFB60; } }
L_002BEA80:
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 16228u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[16].w[0]);  if (t) { goto L_002BFAD4; } }
L_002BEAA0:
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[3], c.r[30].w[0] << 2);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[30], c.r[30].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] - 18339u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[22].w[0]);  if (t) { goto L_002BFAD4; } }
L_002BEAC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18329u);  if (t) { goto L_002BEB08; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEB00u) [[unlikely]] return; }
L_002BEB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BEB10; } }
L_002BEB08:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002BEB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEB18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10276u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18316u);  if (t) { goto L_002BEB4C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEB44u) [[unlikely]] return; }
L_002BEB44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEB54; } }
L_002BEB4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BEB54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB5Cu);  if (depth < kMaxDepth) unit_00AC(c, 344u, depth + 1u); else { c.pc = 0x004B3410u; return; } if (c.pc != 0x002BEB5Cu) [[unlikely]] return; }
L_002BEB5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEB64:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18293u);  if (t) { goto L_002BEB94; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEB8Cu) [[unlikely]] return; }
L_002BEB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[2].w[0])));  if (t) { goto L_002BEB9C; } }
L_002BEB94:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002BEB9C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 356u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBB4u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEBB4u) [[unlikely]] return; }
L_002BEBB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEBBC:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] - 18277u);  if (t) { goto L_002BFAD4; } }
L_002BEBC8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18258u);  if (t) { goto L_002BEBF8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEBF0u) [[unlikely]] return; }
L_002BEBF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEC00; } }
L_002BEBF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BEC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEC08u);  if (depth < kMaxDepth) unit_00A9(c, 175u, depth + 1u); else { c.pc = 0x004A60D0u; return; } if (c.pc != 0x002BEC08u) [[unlikely]] return; }
L_002BEC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEC10:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18245u);  if (t) { goto L_002BEC40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEC38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEC38u) [[unlikely]] return; }
L_002BEC38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEC48; } }
L_002BEC40:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BEC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEC50u);  if (depth < kMaxDepth) unit_00A9(c, 239u, depth + 1u); else { c.pc = 0x004A6C20u; return; } if (c.pc != 0x002BEC50u) [[unlikely]] return; }
L_002BEC50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEC58:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18236u);  if (t) { goto L_002BEC88; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEC80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEC80u) [[unlikely]] return; }
L_002BEC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEC90; } }
L_002BEC88:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BEC90:
    set32(c.r[16], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[29].w[0] + 276u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[4].d[0];  if (t) { goto L_002BFB80; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002BECA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[4].w[0]);  if (t) { goto L_002BECC4; } }
    st32((c.r[2].w[0]), c.r[23].w[0]);
    c.budget -= 1;
L_002BECC4:
    set32(c.r[5], ld32((c.r[23].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BECD0u); set32(c.r[4], c.r[20].w[0] + 16136u);  if (depth < kMaxDepth) unit_0044(c, 100u, depth + 1u); else { c.pc = 0x00310EB0u; return; } if (c.pc != 0x002BECD0u) [[unlikely]] return; }
L_002BECD0:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BECDCu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 212u, depth + 1u); else { c.pc = 0x004A9970u; return; } if (c.pc != 0x002BECDCu) [[unlikely]] return; }
L_002BECDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BECE4:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18218u);  if (t) { goto L_002BED14; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BED0Cu) [[unlikely]] return; }
L_002BED0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BED1C; } }
L_002BED14:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BED1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED24u);  if (depth < kMaxDepth) unit_00AA(c, 137u, depth + 1u); else { c.pc = 0x004A9020u; return; } if (c.pc != 0x002BED24u) [[unlikely]] return; }
L_002BED24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BED2C:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18209u);  if (t) { goto L_002BED5C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BED54u) [[unlikely]] return; }
L_002BED54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BED64; } }
L_002BED5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BED64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED6Cu);  if (depth < kMaxDepth) unit_0090(c, 27u, depth + 1u); else { c.pc = 0x004403B0u; return; } if (c.pc != 0x002BED6Cu) [[unlikely]] return; }
L_002BED6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BED74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10276u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18196u);  if (t) { goto L_002BEDA8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEDA0u) [[unlikely]] return; }
L_002BEDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEDB0; } }
L_002BEDA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BEDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDB8u);  if (depth < kMaxDepth) unit_008F(c, 189u, depth + 1u); else { c.pc = 0x0043E3F0u; return; } if (c.pc != 0x002BEDB8u) [[unlikely]] return; }
L_002BEDB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEDC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10276u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18173u);  if (t) { goto L_002BEDF4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEDECu) [[unlikely]] return; }
L_002BEDEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEDFC; } }
L_002BEDF4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BEDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE04u);  if (depth < kMaxDepth) unit_008F(c, 148u, depth + 1u); else { c.pc = 0x0043DDA0u; return; } if (c.pc != 0x002BEE04u) [[unlikely]] return; }
L_002BEE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEE0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10276u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18158u);  if (t) { goto L_002BEE40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEE38u) [[unlikely]] return; }
L_002BEE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEE48; } }
L_002BEE40:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BEE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE50u);  if (depth < kMaxDepth) unit_008F(c, 193u, depth + 1u); else { c.pc = 0x0043E480u; return; } if (c.pc != 0x002BEE50u) [[unlikely]] return; }
L_002BEE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEE58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10276u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18140u);  if (t) { goto L_002BEE8C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEE84u) [[unlikely]] return; }
L_002BEE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEE94; } }
L_002BEE8C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BEE94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE9Cu);  if (depth < kMaxDepth) unit_00AC(c, 404u, depth + 1u); else { c.pc = 0x004B3E60u; return; } if (c.pc != 0x002BEE9Cu) [[unlikely]] return; }
L_002BEE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEEA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10276u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18112u);  if (t) { goto L_002BEED8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEED0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEED0u) [[unlikely]] return; }
L_002BEED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEEE0; } }
L_002BEED8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BEEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEEE8u);  if (depth < kMaxDepth) unit_00AC(c, 373u, depth + 1u); else { c.pc = 0x004B3900u; return; } if (c.pc != 0x002BEEE8u) [[unlikely]] return; }
L_002BEEE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEEF0:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] - 18094u);  if (t) { goto L_002BFAD4; } }
L_002BEEFC:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18086u);  if (t) { goto L_002BEF2C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEF24u) [[unlikely]] return; }
L_002BEF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEF34; } }
L_002BEF2C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BEF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF3Cu);  if (depth < kMaxDepth) unit_00A9(c, 363u, depth + 1u); else { c.pc = 0x004A7E60u; return; } if (c.pc != 0x002BEF3Cu) [[unlikely]] return; }
L_002BEF3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEF44:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] - 18069u);  if (t) { goto L_002BFAD4; } }
L_002BEF50:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18053u);  if (t) { goto L_002BEF80; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEF78u) [[unlikely]] return; }
L_002BEF78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[2].w[0])));  if (t) { goto L_002BEF88; } }
L_002BEF80:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002BEF88:
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEF94u) [[unlikely]] return; }
L_002BEF94:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 348u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEFA4u) [[unlikely]] return; }
L_002BEFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 262u, depth + 1u); else { c.pc = 0x004AEBA0u; return; } if (c.pc != 0x002BEFACu) [[unlikely]] return; }
L_002BEFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEFB4:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18033u);  if (t) { goto L_002BEFE4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEFDCu) [[unlikely]] return; }
L_002BEFDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BEFEC; } }
L_002BEFE4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BEFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFF4u);  if (depth < kMaxDepth) unit_00AC(c, 330u, depth + 1u); else { c.pc = 0x004B3200u; return; } if (c.pc != 0x002BEFF4u) [[unlikely]] return; }
L_002BEFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BEFFC:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18020u);  if (t) { goto L_002BF02C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF024u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF024u) [[unlikely]] return; }
L_002BF024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF034; } }
L_002BF02C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF03Cu);  if (depth < kMaxDepth) unit_009C(c, 324u, depth + 1u); else { c.pc = 0x00472F50u; return; } if (c.pc != 0x002BF03Cu) [[unlikely]] return; }
L_002BF03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF044:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 18007u);  if (t) { goto L_002BF074; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF06Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF06Cu) [[unlikely]] return; }
L_002BF06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF07C; } }
L_002BF074:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF084u);  if (depth < kMaxDepth) unit_009C(c, 234u, depth + 1u); else { c.pc = 0x00472370u; return; } if (c.pc != 0x002BF084u) [[unlikely]] return; }
L_002BF084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF08C:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17992u);  if (t) { goto L_002BF0BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF0B4u) [[unlikely]] return; }
L_002BF0B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF0C4; } }
L_002BF0BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0CCu);  if (depth < kMaxDepth) unit_009C(c, 66u, depth + 1u); else { c.pc = 0x004708C0u; return; } if (c.pc != 0x002BF0CCu) [[unlikely]] return; }
L_002BF0CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF0D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10276u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17970u);  if (t) { goto L_002BFAD4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF100u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF100u) [[unlikely]] return; }
L_002BF100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10276u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17952u);  if (t) { goto L_002BFAD4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF134u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF134u) [[unlikely]] return; }
L_002BF134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF13C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10276u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17933u);  if (t) { goto L_002BFAD4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF168u) [[unlikely]] return; }
L_002BF168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF170:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17913u);  if (t) { goto L_002BF1A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF198u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF198u) [[unlikely]] return; }
L_002BF198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF1A8; } }
L_002BF1A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF1B0u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 296u, depth + 1u); else { c.pc = 0x004B2C40u; return; } if (c.pc != 0x002BF1B0u) [[unlikely]] return; }
L_002BF1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF1B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17896u);  if (t) { goto L_002BF1E8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF1E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF1E0u) [[unlikely]] return; }
L_002BF1E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF1F0; } }
L_002BF1E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF1F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF1F8u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF1F8u) [[unlikely]] return; }
L_002BF1F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF200:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17877u);  if (t) { goto L_002BF230; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF228u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF228u) [[unlikely]] return; }
L_002BF228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF238; } }
L_002BF230:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF240u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF240u) [[unlikely]] return; }
L_002BF240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF248:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17857u);  if (t) { goto L_002BF278; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF270u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF270u) [[unlikely]] return; }
L_002BF270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF280; } }
L_002BF278:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF288u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF288u) [[unlikely]] return; }
L_002BF288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF290:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17827u);  if (t) { goto L_002BF2C0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF2B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF2B8u) [[unlikely]] return; }
L_002BF2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF2C8; } }
L_002BF2C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF2D0u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF2D0u) [[unlikely]] return; }
L_002BF2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF2D8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17807u);  if (t) { goto L_002BF308; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF300u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF300u) [[unlikely]] return; }
L_002BF300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF310; } }
L_002BF308:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF318u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF318u) [[unlikely]] return; }
L_002BF318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF320:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17776u);  if (t) { goto L_002BF350; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF348u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF348u) [[unlikely]] return; }
L_002BF348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF358; } }
L_002BF350:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF360u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF360u) [[unlikely]] return; }
L_002BF360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF368:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17757u);  if (t) { goto L_002BF398; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF390u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF390u) [[unlikely]] return; }
L_002BF390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF3A0; } }
L_002BF398:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3A8u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF3A8u) [[unlikely]] return; }
L_002BF3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF3B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17735u);  if (t) { goto L_002BF3E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF3D8u) [[unlikely]] return; }
L_002BF3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF3E8; } }
L_002BF3E0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3F0u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF3F0u) [[unlikely]] return; }
L_002BF3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF3F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17717u);  if (t) { goto L_002BF428; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF420u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF420u) [[unlikely]] return; }
L_002BF420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF430; } }
L_002BF428:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF438u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF438u) [[unlikely]] return; }
L_002BF438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF440:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17696u);  if (t) { goto L_002BF470; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF468u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF468u) [[unlikely]] return; }
L_002BF468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF478; } }
L_002BF470:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF480u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF480u) [[unlikely]] return; }
L_002BF480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF488:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17667u);  if (t) { goto L_002BF4B8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF4B0u) [[unlikely]] return; }
L_002BF4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF4C0; } }
L_002BF4B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF4C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4C8u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF4C8u) [[unlikely]] return; }
L_002BF4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF4D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17633u);  if (t) { goto L_002BF500; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF4F8u) [[unlikely]] return; }
L_002BF4F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF508; } }
L_002BF500:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF510u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF510u) [[unlikely]] return; }
L_002BF510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF518:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17609u);  if (t) { goto L_002BF548; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF540u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF540u) [[unlikely]] return; }
L_002BF540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF550; } }
L_002BF548:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF558u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF558u) [[unlikely]] return; }
L_002BF558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF560:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17589u);  if (t) { goto L_002BF590; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF588u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF588u) [[unlikely]] return; }
L_002BF588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF598; } }
L_002BF590:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5A0u);  if (depth < kMaxDepth) unit_007A(c, 339u, depth + 1u); else { c.pc = 0x003EBFB0u; return; } if (c.pc != 0x002BF5A0u) [[unlikely]] return; }
L_002BF5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF5A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17566u);  if (t) { goto L_002BF5D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF5D0u) [[unlikely]] return; }
L_002BF5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF5E0; } }
L_002BF5D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5E8u);  if (depth < kMaxDepth) unit_0081(c, 157u, depth + 1u); else { c.pc = 0x00405AD0u; return; } if (c.pc != 0x002BF5E8u) [[unlikely]] return; }
L_002BF5E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF5F0:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17551u);  if (t) { goto L_002BF62C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF624u) [[unlikely]] return; }
L_002BF624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002BF634; } }
L_002BF62C:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002BF634:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_002BFAD4; } }
L_002BF644:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17537u);  if (t) { goto L_002BF674; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF66Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF66Cu) [[unlikely]] return; }
L_002BF66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF67C; } }
L_002BF674:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF684u);  if (depth < kMaxDepth) unit_00AC(c, 178u, depth + 1u); else { c.pc = 0x004B16B0u; return; } if (c.pc != 0x002BF684u) [[unlikely]] return; }
L_002BF684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF68C:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17522u);  if (t) { goto L_002BF6BC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF6B4u) [[unlikely]] return; }
L_002BF6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF6C4; } }
L_002BF6BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6CCu);  if (depth < kMaxDepth) unit_00AC(c, 149u, depth + 1u); else { c.pc = 0x004B1350u; return; } if (c.pc != 0x002BF6CCu) [[unlikely]] return; }
L_002BF6CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF6D4:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17507u);  if (t) { goto L_002BF704; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF6FCu) [[unlikely]] return; }
L_002BF6FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF70C; } }
L_002BF704:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF714u);  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x004B0CC0u; return; } if (c.pc != 0x002BF714u) [[unlikely]] return; }
L_002BF714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF71C:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17489u);  if (t) { goto L_002BF74C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF744u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF744u) [[unlikely]] return; }
L_002BF744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF754; } }
L_002BF74C:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF75Cu);  if (depth < kMaxDepth) unit_00AB(c, 12u, depth + 1u); else { c.pc = 0x004AC130u; return; } if (c.pc != 0x002BF75Cu) [[unlikely]] return; }
L_002BF75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF764:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17480u);  if (t) { goto L_002BF794; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF78Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF78Cu) [[unlikely]] return; }
L_002BF78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF798; } }
L_002BF794:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BF798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF7A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 11u, depth + 1u); else { c.pc = 0x004280C0u; return; } if (c.pc != 0x002BF7A0u) [[unlikely]] return; }
L_002BF7A0:
    set32(c.r[5], ld32((c.r[29].w[0] + 240u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[28].w[0] - 28488u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF7BCu); st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0089(c, 45u, depth + 1u); else { c.pc = 0x00425050u; return; } if (c.pc != 0x002BF7BCu) [[unlikely]] return; }
L_002BF7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF7C4:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17467u);  if (t) { goto L_002BF7F4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF7ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF7ECu) [[unlikely]] return; }
L_002BF7EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 48u)));  if (t) { goto L_002BF7FC; } }
L_002BF7F4:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 2;
L_002BF7FC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] - 10276u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BF834; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF82Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF82Cu) [[unlikely]] return; }
L_002BF82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF838; } }
L_002BF834:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BF838:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF844u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 395u, depth + 1u); else { c.pc = 0x004031F0u; return; } if (c.pc != 0x002BF844u) [[unlikely]] return; }
L_002BF844:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002BFAD4; } }
L_002BF850:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17440u);  if (t) { goto L_002BF880; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF878u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF878u) [[unlikely]] return; }
L_002BF878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF888; } }
L_002BF880:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF890u);  if (depth < kMaxDepth) unit_0095(c, 285u, depth + 1u); else { c.pc = 0x00456B50u; return; } if (c.pc != 0x002BF890u) [[unlikely]] return; }
L_002BF890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF898:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17427u);  if (t) { goto L_002BF8C8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF8C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF8C0u) [[unlikely]] return; }
L_002BF8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF8D0; } }
L_002BF8C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF8D8u);  if (depth < kMaxDepth) unit_00AB(c, 384u, depth + 1u); else { c.pc = 0x004AFDA0u; return; } if (c.pc != 0x002BF8D8u) [[unlikely]] return; }
L_002BF8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF8E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17417u);  if (t) { goto L_002BF910; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF908u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF908u) [[unlikely]] return; }
L_002BF908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF918; } }
L_002BF910:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF920u);  if (depth < kMaxDepth) unit_00AB(c, 284u, depth + 1u); else { c.pc = 0x004AEF70u; return; } if (c.pc != 0x002BF920u) [[unlikely]] return; }
L_002BF920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF928:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17398u);  if (t) { goto L_002BF958; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF950u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF950u) [[unlikely]] return; }
L_002BF950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF960; } }
L_002BF958:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF968u);  if (depth < kMaxDepth) unit_00AA(c, 381u, depth + 1u); else { c.pc = 0x004AB070u; return; } if (c.pc != 0x002BF968u) [[unlikely]] return; }
L_002BF968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF970:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17386u);  if (t) { goto L_002BF9A0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF998u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF998u) [[unlikely]] return; }
L_002BF998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF9A8; } }
L_002BF9A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9B0u);  if (depth < kMaxDepth) unit_00AD(c, 261u, depth + 1u); else { c.pc = 0x004B6650u; return; } if (c.pc != 0x002BF9B0u) [[unlikely]] return; }
L_002BF9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BF9B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17378u);  if (t) { goto L_002BF9E8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF9E0u) [[unlikely]] return; }
L_002BF9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BF9F0; } }
L_002BF9E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BF9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9F8u);  if (depth < kMaxDepth) unit_007F(c, 298u, depth + 1u); else { c.pc = 0x003FF100u; return; } if (c.pc != 0x002BF9F8u) [[unlikely]] return; }
L_002BF9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BFA00:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17364u);  if (t) { goto L_002BFA30; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFA28u) [[unlikely]] return; }
L_002BFA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BFA38; } }
L_002BFA30:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BFA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA40u);  if (depth < kMaxDepth) unit_00B3(c, 126u, depth + 1u); else { c.pc = 0x004CDF30u; return; } if (c.pc != 0x002BFA40u) [[unlikely]] return; }
L_002BFA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BFA48:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17352u);  if (t) { goto L_002BFA78; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFA70u) [[unlikely]] return; }
L_002BFA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[2].w[0])));  if (t) { goto L_002BFA80; } }
L_002BFA78:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_002BFA80:
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFA8Cu) [[unlikely]] return; }
L_002BFA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFAD4; } }
L_002BFA94:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 17335u);  if (t) { goto L_002BFAC4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFABCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFABCu) [[unlikely]] return; }
L_002BFABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002BFACC; } }
L_002BFAC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002BFACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFAD4u);  if (depth < kMaxDepth) unit_0095(c, 135u, depth + 1u); else { c.pc = 0x00455950u; return; } if (c.pc != 0x002BFAD4u) [[unlikely]] return; }
L_002BFAD4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BFB00; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BFB00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB00u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFB00u) [[unlikely]] return; }
L_002BFB00:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE400u | kUnwind; return; } goto L_002BE400; } }
L_002BFB20:
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BFC00; } }
L_002BFB30:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB44u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00AA(c, 214u, depth + 1u); else { c.pc = 0x004A99B0u; return; } if (c.pc != 0x002BFB44u) [[unlikely]] return; }
L_002BFB44:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFB30u | kUnwind; return; } goto L_002BFB30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFC00; } }
L_002BFB60:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 16220u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BEA80u | kUnwind; return; } goto L_002BEA80; } }
L_002BFB80:
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[21], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 3);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFBA4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002BFBA4u) [[unlikely]] return; }
L_002BFBA4:
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002BFBF0; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002BFBB8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BFBE0; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_002BFBE0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFBB8u | kUnwind; return; } goto L_002BFBB8; } }
L_002BFBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFBF8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002BFBF8u) [[unlikely]] return; }
L_002BFBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BECA8u | kUnwind; return; } goto L_002BECA8; } }
L_002BFC00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC0Cu); set32(c.r[4], c.r[4].w[0] + 9968u);  if (depth < kMaxDepth) unit_0030(c, 600u, depth + 1u); else { c.pc = 0x002C2CA0u; return; } if (c.pc != 0x002BFC0Cu) [[unlikely]] return; }
L_002BFC0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC14u);  if (depth < kMaxDepth) unit_0097(c, 234u, depth + 1u); else { c.pc = 0x0045FBE0u; return; } if (c.pc != 0x002BFC14u) [[unlikely]] return; }
L_002BFC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC1Cu); set32(c.r[4], c.r[20].w[0] + 24u);  if (depth < kMaxDepth) unit_0030(c, 586u, depth + 1u); else { c.pc = 0x002C2AE0u; return; } if (c.pc != 0x002BFC1Cu) [[unlikely]] return; }
L_002BFC1C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFC2C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFC2C:
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC38u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002BFC38u) [[unlikely]] return; }
L_002BFC38:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002BFC70:
    set32(c.r[29], c.r[29].w[0] - 944u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 780u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 772u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 764u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[21], c.r[29].w[0] + 768u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 776u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 784u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[16], c.r[29].w[0] + 792u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[2].w[0]), 0u);
    c.f[20] = ld32((c.r[29].w[0] + 204u));
    set32(c.r[2], c.r[29].w[0] + 788u);
    st32((c.r[23].w[0]), 0u);
    st32((c.r[21].w[0]), 0u);
    c.f[21] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[30].w[0]), 0u);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[29].w[0] + 736u), c.r[2].w[0]);
    set32(c.r[5], 0u + 85u);
    st32((c.r[29].w[0] + 748u), 0u);
    st32((c.r[29].w[0] + 752u), 0u);
    st32((c.r[29].w[0] + 756u), 0u);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD1Cu); st32((c.r[29].w[0] + 760u), 0u);  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x002BFD1Cu) [[unlikely]] return; }
L_002BFD1C:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], 0u + 85u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x002BFD2Cu) [[unlikely]] return; }
L_002BFD2C:
    set32(c.r[4], c.r[29].w[0] + 780u);
    set32(c.r[5], 0u + 85u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD3Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x002BFD3Cu) [[unlikely]] return; }
L_002BFD3C:
    set32(c.r[4], c.r[29].w[0] + 788u);
    set32(c.r[5], 0u + 85u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x002BFD4Cu) [[unlikely]] return; }
L_002BFD4C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BFD88; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFD60:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 32368u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFD60u | kUnwind; return; } goto L_002BFD60; } }
    c.budget -= 1;
L_002BFD88:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BFDC0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFD9C:
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 32364u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFD9Cu | kUnwind; return; } goto L_002BFD9C; } }
L_002BFDC0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BFE00; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFDD4:
    set32(c.r[2], c.r[29].w[0] + 780u);
    set32(c.r[3], ld32((c.r[28].w[0] - 32360u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFDD4u | kUnwind; return; } goto L_002BFDD4; } }
    c.budget -= 1;
L_002BFE00:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002BFE40; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BFE14:
    set32(c.r[2], c.r[29].w[0] + 788u);
    set32(c.r[3], ld32((c.r[28].w[0] - 32356u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFE14u | kUnwind; return; } goto L_002BFE14; } }
    c.budget -= 1;
L_002BFE40:
    set32(c.r[2], 0u - 1u);
    st32((c.r[29].w[0] + 796u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x44160000u);
    set32(c.r[2], c.r[29].w[0] + 800u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xC4160000u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[2], c.r[29].w[0] + 804u);
    set32(c.r[4], 0u + 128u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], 0u + 192u);
    set32(c.r[2], c.r[29].w[0] + 808u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 812u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 816u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 820u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 824u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 828u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 832u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 836u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[8], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[8], ld32((c.r[8].w[0] + 28u)));
    st32((c.r[29].w[0] + 896u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 860u), c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 848u);
    st32((c.r[29].w[0] + 928u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 876u), c.f[20]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    st32((c.r[29].w[0] + 856u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 852u), 0u);
    st32((c.r[29].w[0] + 864u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 872u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 868u), 0u);
    st8((c.r[29].w[0] + 880u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 881u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 882u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 883u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 884u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 885u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 886u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 887u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 888u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 889u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 900u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 902u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 901u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 903u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 915u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 912u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 913u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 914u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 64;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0030(c, 370u, depth); } }
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[29].w[0] + 744u);
    c.budget -= 2;
L_002BFF48:
    set32(c.r[17], ld32((c.r[29].w[0] + 736u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 740u);
    st32((c.r[22].w[0]), c.r[18].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(220ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0030(c, 367u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 20080u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_002F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BFF98:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFA4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 77u, depth + 1u); else { c.pc = 0x004E4B70u; return; } if (c.pc != 0x002BFFA4u) [[unlikely]] return; }
L_002BFFA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0030(c, 368u, depth); } }
    c.budget -= 1;
L_002BFFB0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFBCu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 70u, depth + 1u); else { c.pc = 0x004E4A20u; return; } if (c.pc != 0x002BFFBCu) [[unlikely]] return; }
L_002BFFBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0030(c, 368u, depth); } }
    c.budget -= 1;
L_002BFFC8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFD4u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 63u, depth + 1u); else { c.pc = 0x004E48C0u; return; } if (c.pc != 0x002BFFD4u) [[unlikely]] return; }
L_002BFFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0030(c, 368u, depth); } }
    c.budget -= 1;
L_002BFFE0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFECu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 59u, depth + 1u); else { c.pc = 0x004E4860u; return; } if (c.pc != 0x002BFFECu) [[unlikely]] return; }
L_002BFFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0030(c, 368u, depth); } }
    c.budget -= 1;
L_002BFFF8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C0004u); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_00B9(c, 55u, depth + 1u); else { c.pc = 0x004E4780u; return; } if (c.pc != 0x002C0004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0030(c, 2u, depth);
}

}

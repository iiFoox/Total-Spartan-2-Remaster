#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0058[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89,
    0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0,
    270, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 0,
    0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0,
    0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0,
    364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0,
    368, 0, 0, 369, 0, 0, 370, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0,
    378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 0,
    386, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0,
    393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401,
    0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 417,
    0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 425,
    0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433,
    0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 441, 0,
    0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 0, 449, 0,
    0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0,
    457, 0, 0, 458, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 465, 0,
    0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 473,
    0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0,
    0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 489,
    0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 497, 0,
    0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 505,
    0, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0,
    0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521,
    0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 528, 0, 0,
    529, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0,
    537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544,
    0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0,
    552, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 0,
    560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 0, 567, 0, 0,
    0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 575,
    0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 582,
    0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0,
    589, 0, 0, 590, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 597, 0,
    0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 605,
    0, 0, 0, 606, 0, 0, 607, 0, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 614,
    0, 0, 0, 615, 0, 616, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 623, 0, 624,
    0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 627, 0, 628, 0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 631, 0, 632, 0, 0, 0, 633, 0, 0,
    634, 0, 0, 0, 635, 0, 636, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 643, 0,
    644, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 647, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0, 652, 0, 0, 0, 653, 0,
    0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 659, 0, 660, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 663,
    0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 668, 0, 0, 0, 669, 0, 0, 670, 0, 0, 0, 671, 0, 672, 0, 0, 0, 673,
    0, 0, 674, 0, 0, 0, 675, 0, 676, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0,
    683, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0,
    0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0,
    0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0, 0,
};

void unit_0058(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00360000;
    case 2u: goto L_00360010;
    case 3u: goto L_00360030;
    case 4u: goto L_00360044;
    case 5u: goto L_00360070;
    case 6u: goto L_00360084;
    case 7u: goto L_0036008C;
    case 8u: goto L_003600E0;
    case 9u: goto L_00360114;
    case 10u: goto L_0036012C;
    case 11u: goto L_00360140;
    case 12u: goto L_00360164;
    case 13u: goto L_00360174;
    case 14u: goto L_00360190;
    case 15u: goto L_003601CC;
    case 16u: goto L_003601F0;
    case 17u: goto L_00360210;
    case 18u: goto L_00360224;
    case 19u: goto L_00360250;
    case 20u: goto L_00360284;
    case 21u: goto L_0036029C;
    case 22u: goto L_003602B0;
    case 23u: goto L_003602D4;
    case 24u: goto L_003602E4;
    case 25u: goto L_00360300;
    case 26u: goto L_0036033C;
    case 27u: goto L_00360360;
    case 28u: goto L_00360380;
    case 29u: goto L_00360394;
    case 30u: goto L_003603C0;
    case 31u: goto L_003603F4;
    case 32u: goto L_0036040C;
    case 33u: goto L_00360420;
    case 34u: goto L_00360444;
    case 35u: goto L_00360454;
    case 36u: goto L_00360470;
    case 37u: goto L_003604AC;
    case 38u: goto L_003604D0;
    case 39u: goto L_003604F0;
    case 40u: goto L_00360504;
    case 41u: goto L_00360530;
    case 42u: goto L_00360564;
    case 43u: goto L_0036057C;
    case 44u: goto L_00360590;
    case 45u: goto L_003605B4;
    case 46u: goto L_003605C4;
    case 47u: goto L_003605E0;
    case 48u: goto L_0036061C;
    case 49u: goto L_00360640;
    case 50u: goto L_00360660;
    case 51u: goto L_00360674;
    case 52u: goto L_003606A0;
    case 53u: goto L_003606D4;
    case 54u: goto L_003606EC;
    case 55u: goto L_00360700;
    case 56u: goto L_00360724;
    case 57u: goto L_00360734;
    case 58u: goto L_00360750;
    case 59u: goto L_0036078C;
    case 60u: goto L_003607B0;
    case 61u: goto L_003607D0;
    case 62u: goto L_003607E4;
    case 63u: goto L_00360810;
    case 64u: goto L_00360844;
    case 65u: goto L_0036085C;
    case 66u: goto L_00360870;
    case 67u: goto L_00360894;
    case 68u: goto L_003608A4;
    case 69u: goto L_003608C0;
    case 70u: goto L_003608FC;
    case 71u: goto L_00360920;
    case 72u: goto L_00360940;
    case 73u: goto L_00360954;
    case 74u: goto L_00360980;
    case 75u: goto L_003609B4;
    case 76u: goto L_003609CC;
    case 77u: goto L_003609E0;
    case 78u: goto L_00360A0C;
    case 79u: goto L_00360A1C;
    case 80u: goto L_00360A30;
    case 81u: goto L_00360A6C;
    case 82u: goto L_00360A90;
    case 83u: goto L_00360AB0;
    case 84u: goto L_00360AC4;
    case 85u: goto L_00360AF0;
    case 86u: goto L_00360B24;
    case 87u: goto L_00360B3C;
    case 88u: goto L_00360B50;
    case 89u: goto L_00360B7C;
    case 90u: goto L_00360B8C;
    case 91u: goto L_00360BA0;
    case 92u: goto L_00360BDC;
    case 93u: goto L_00360C00;
    case 94u: goto L_00360C20;
    case 95u: goto L_00360C34;
    case 96u: goto L_00360C60;
    case 97u: goto L_00360C94;
    case 98u: goto L_00360CAC;
    case 99u: goto L_00360CC0;
    case 100u: goto L_00360CE4;
    case 101u: goto L_00360CF4;
    case 102u: goto L_00360D10;
    case 103u: goto L_00360D4C;
    case 104u: goto L_00360D70;
    case 105u: goto L_00360D90;
    case 106u: goto L_00360DA4;
    case 107u: goto L_00360DD0;
    case 108u: goto L_00360E04;
    case 109u: goto L_00360E1C;
    case 110u: goto L_00360E30;
    case 111u: goto L_00360E54;
    case 112u: goto L_00360E64;
    case 113u: goto L_00360E80;
    case 114u: goto L_00360EBC;
    case 115u: goto L_00360EE0;
    case 116u: goto L_00360F00;
    case 117u: goto L_00360F14;
    case 118u: goto L_00360F40;
    case 119u: goto L_00360F74;
    case 120u: goto L_00360F8C;
    case 121u: goto L_00360FA0;
    case 122u: goto L_00360FC4;
    case 123u: goto L_00360FD4;
    case 124u: goto L_00360FF0;
    case 125u: goto L_0036102C;
    case 126u: goto L_00361050;
    case 127u: goto L_00361070;
    case 128u: goto L_00361084;
    case 129u: goto L_003610B0;
    case 130u: goto L_003610E4;
    case 131u: goto L_003610FC;
    case 132u: goto L_00361110;
    case 133u: goto L_00361134;
    case 134u: goto L_00361144;
    case 135u: goto L_00361160;
    case 136u: goto L_0036119C;
    case 137u: goto L_003611C0;
    case 138u: goto L_003611E0;
    case 139u: goto L_003611F4;
    case 140u: goto L_00361220;
    case 141u: goto L_00361254;
    case 142u: goto L_0036126C;
    case 143u: goto L_00361280;
    case 144u: goto L_003612AC;
    case 145u: goto L_003612BC;
    case 146u: goto L_003612D0;
    case 147u: goto L_0036130C;
    case 148u: goto L_00361330;
    case 149u: goto L_00361350;
    case 150u: goto L_00361364;
    case 151u: goto L_00361390;
    case 152u: goto L_003613C4;
    case 153u: goto L_003613DC;
    case 154u: goto L_003613F0;
    case 155u: goto L_0036141C;
    case 156u: goto L_0036142C;
    case 157u: goto L_00361440;
    case 158u: goto L_0036147C;
    case 159u: goto L_003614A0;
    case 160u: goto L_003614C0;
    case 161u: goto L_003614D4;
    case 162u: goto L_00361500;
    case 163u: goto L_00361534;
    case 164u: goto L_0036154C;
    case 165u: goto L_00361560;
    case 166u: goto L_00361584;
    case 167u: goto L_00361594;
    case 168u: goto L_003615B0;
    case 169u: goto L_003615EC;
    case 170u: goto L_00361610;
    case 171u: goto L_00361630;
    case 172u: goto L_00361644;
    case 173u: goto L_00361670;
    case 174u: goto L_003616A4;
    case 175u: goto L_003616BC;
    case 176u: goto L_003616D0;
    case 177u: goto L_003616F4;
    case 178u: goto L_00361704;
    case 179u: goto L_00361720;
    case 180u: goto L_0036175C;
    case 181u: goto L_00361780;
    case 182u: goto L_003617A0;
    case 183u: goto L_003617B4;
    case 184u: goto L_003617E0;
    case 185u: goto L_00361814;
    case 186u: goto L_0036182C;
    case 187u: goto L_00361840;
    case 188u: goto L_0036186C;
    case 189u: goto L_0036187C;
    case 190u: goto L_00361890;
    case 191u: goto L_003618CC;
    case 192u: goto L_003618F0;
    case 193u: goto L_00361910;
    case 194u: goto L_00361924;
    case 195u: goto L_00361950;
    case 196u: goto L_00361984;
    case 197u: goto L_0036199C;
    case 198u: goto L_003619B0;
    case 199u: goto L_003619DC;
    case 200u: goto L_003619EC;
    case 201u: goto L_00361A00;
    case 202u: goto L_00361A3C;
    case 203u: goto L_00361A60;
    case 204u: goto L_00361A80;
    case 205u: goto L_00361A94;
    case 206u: goto L_00361AC0;
    case 207u: goto L_00361AF4;
    case 208u: goto L_00361B0C;
    case 209u: goto L_00361B20;
    case 210u: goto L_00361B44;
    case 211u: goto L_00361B54;
    case 212u: goto L_00361B70;
    case 213u: goto L_00361BAC;
    case 214u: goto L_00361BD0;
    case 215u: goto L_00361BF0;
    case 216u: goto L_00361C20;
    case 217u: goto L_00361C54;
    case 218u: goto L_00361C6C;
    case 219u: goto L_00361C80;
    case 220u: goto L_00361CAC;
    case 221u: goto L_00361CBC;
    case 222u: goto L_00361CD0;
    case 223u: goto L_00361D0C;
    case 224u: goto L_00361D30;
    case 225u: goto L_00361D50;
    case 226u: goto L_00361D64;
    case 227u: goto L_00361D90;
    case 228u: goto L_00361DB8;
    case 229u: goto L_00361DC4;
    case 230u: goto L_00361DD0;
    case 231u: goto L_00361E40;
    case 232u: goto L_00361E74;
    case 233u: goto L_00361E8C;
    case 234u: goto L_00361EA0;
    case 235u: goto L_00361EC4;
    case 236u: goto L_00361ED4;
    case 237u: goto L_00361EF0;
    case 238u: goto L_00361F2C;
    case 239u: goto L_00361F50;
    case 240u: goto L_00361F70;
    case 241u: goto L_00361F84;
    case 242u: goto L_00361FB0;
    case 243u: goto L_00361FD0;
    case 244u: goto L_00362004;
    case 245u: goto L_0036201C;
    case 246u: goto L_00362030;
    case 247u: goto L_00362054;
    case 248u: goto L_00362064;
    case 249u: goto L_00362080;
    case 250u: goto L_003620BC;
    case 251u: goto L_003620E0;
    case 252u: goto L_00362100;
    case 253u: goto L_00362114;
    case 254u: goto L_00362140;
    case 255u: goto L_00362174;
    case 256u: goto L_0036218C;
    case 257u: goto L_003621A0;
    case 258u: goto L_003621CC;
    case 259u: goto L_003621DC;
    case 260u: goto L_003621F0;
    case 261u: goto L_0036222C;
    case 262u: goto L_00362250;
    case 263u: goto L_00362270;
    case 264u: goto L_00362284;
    case 265u: goto L_003622B0;
    case 266u: goto L_003622CC;
    case 267u: goto L_003622E0;
    case 268u: goto L_003622EC;
    case 269u: goto L_003622F8;
    case 270u: goto L_00362300;
    case 271u: goto L_00362308;
    case 272u: goto L_00362318;
    case 273u: goto L_00362328;
    case 274u: goto L_0036233C;
    case 275u: goto L_00362348;
    case 276u: goto L_00362358;
    case 277u: goto L_00362368;
    case 278u: goto L_00362374;
    case 279u: goto L_00362384;
    case 280u: goto L_00362390;
    case 281u: goto L_0036239C;
    case 282u: goto L_003623A8;
    case 283u: goto L_003623B8;
    case 284u: goto L_003623D4;
    case 285u: goto L_003623E0;
    case 286u: goto L_003623F0;
    case 287u: goto L_00362408;
    case 288u: goto L_00362420;
    case 289u: goto L_00362438;
    case 290u: goto L_00362450;
    case 291u: goto L_00362468;
    case 292u: goto L_00362480;
    case 293u: goto L_00362498;
    case 294u: goto L_003624B0;
    case 295u: goto L_003624C8;
    case 296u: goto L_003624E0;
    case 297u: goto L_003624F8;
    case 298u: goto L_00362510;
    case 299u: goto L_00362528;
    case 300u: goto L_00362540;
    case 301u: goto L_00362558;
    case 302u: goto L_00362570;
    case 303u: goto L_00362588;
    case 304u: goto L_003625A0;
    case 305u: goto L_003625B8;
    case 306u: goto L_003625D0;
    case 307u: goto L_003625E8;
    case 308u: goto L_00362600;
    case 309u: goto L_00362618;
    case 310u: goto L_00362630;
    case 311u: goto L_00362648;
    case 312u: goto L_00362660;
    case 313u: goto L_00362678;
    case 314u: goto L_00362690;
    case 315u: goto L_003626A8;
    case 316u: goto L_003626C0;
    case 317u: goto L_003626D8;
    case 318u: goto L_003626F0;
    case 319u: goto L_00362708;
    case 320u: goto L_00362720;
    case 321u: goto L_00362738;
    case 322u: goto L_00362750;
    case 323u: goto L_00362768;
    case 324u: goto L_00362780;
    case 325u: goto L_00362798;
    case 326u: goto L_003627B0;
    case 327u: goto L_003627C8;
    case 328u: goto L_003627E0;
    case 329u: goto L_003627F8;
    case 330u: goto L_00362810;
    case 331u: goto L_00362828;
    case 332u: goto L_00362840;
    case 333u: goto L_00362858;
    case 334u: goto L_00362870;
    case 335u: goto L_00362888;
    case 336u: goto L_003628A0;
    case 337u: goto L_003628B8;
    case 338u: goto L_003628D0;
    case 339u: goto L_003628E8;
    case 340u: goto L_00362900;
    case 341u: goto L_00362918;
    case 342u: goto L_00362930;
    case 343u: goto L_00362948;
    case 344u: goto L_00362960;
    case 345u: goto L_00362978;
    case 346u: goto L_00362990;
    case 347u: goto L_003629A8;
    case 348u: goto L_003629C0;
    case 349u: goto L_003629D8;
    case 350u: goto L_003629F0;
    case 351u: goto L_00362A08;
    case 352u: goto L_00362A20;
    case 353u: goto L_00362A38;
    case 354u: goto L_00362A50;
    case 355u: goto L_00362A68;
    case 356u: goto L_00362A80;
    case 357u: goto L_00362A98;
    case 358u: goto L_00362AAC;
    case 359u: goto L_00362AC0;
    case 360u: goto L_00362ACC;
    case 361u: goto L_00362AE0;
    case 362u: goto L_00362AEC;
    case 363u: goto L_00362AF4;
    case 364u: goto L_00362B00;
    case 365u: goto L_00362B0C;
    case 366u: goto L_00362B40;
    case 367u: goto L_00362B6C;
    case 368u: goto L_00362B80;
    case 369u: goto L_00362B8C;
    case 370u: goto L_00362B98;
    case 371u: goto L_00362BA0;
    case 372u: goto L_00362BB0;
    case 373u: goto L_00362BC0;
    case 374u: goto L_00362BD0;
    case 375u: goto L_00362BE0;
    case 376u: goto L_00362BEC;
    case 377u: goto L_00362BF8;
    case 378u: goto L_00362C00;
    case 379u: goto L_00362C10;
    case 380u: goto L_00362C28;
    case 381u: goto L_00362C34;
    case 382u: goto L_00362C48;
    case 383u: goto L_00362C58;
    case 384u: goto L_00362C64;
    case 385u: goto L_00362C70;
    case 386u: goto L_00362C80;
    case 387u: goto L_00362C94;
    case 388u: goto L_00362CA4;
    case 389u: goto L_00362CB8;
    case 390u: goto L_00362CD4;
    case 391u: goto L_00362CE0;
    case 392u: goto L_00362CF0;
    case 393u: goto L_00362D00;
    case 394u: goto L_00362D0C;
    case 395u: goto L_00362D1C;
    case 396u: goto L_00362D28;
    case 397u: goto L_00362D34;
    case 398u: goto L_00362D40;
    case 399u: goto L_00362D50;
    case 400u: goto L_00362D6C;
    case 401u: goto L_00362D7C;
    case 402u: goto L_00362D90;
    case 403u: goto L_00362D9C;
    case 404u: goto L_00362DA8;
    case 405u: goto L_00362DB8;
    case 406u: goto L_00362DCC;
    case 407u: goto L_00362DDC;
    case 408u: goto L_00362DE8;
    case 409u: goto L_00362DF4;
    case 410u: goto L_00362E04;
    case 411u: goto L_00362E1C;
    case 412u: goto L_00362E2C;
    case 413u: goto L_00362E40;
    case 414u: goto L_00362E4C;
    case 415u: goto L_00362E58;
    case 416u: goto L_00362E68;
    case 417u: goto L_00362E7C;
    case 418u: goto L_00362E8C;
    case 419u: goto L_00362E9C;
    case 420u: goto L_00362EA8;
    case 421u: goto L_00362EB8;
    case 422u: goto L_00362ECC;
    case 423u: goto L_00362EDC;
    case 424u: goto L_00362EF0;
    case 425u: goto L_00362EFC;
    case 426u: goto L_00362F08;
    case 427u: goto L_00362F18;
    case 428u: goto L_00362F2C;
    case 429u: goto L_00362F3C;
    case 430u: goto L_00362F48;
    case 431u: goto L_00362F54;
    case 432u: goto L_00362F64;
    case 433u: goto L_00362F7C;
    case 434u: goto L_00362F8C;
    case 435u: goto L_00362FA0;
    case 436u: goto L_00362FAC;
    case 437u: goto L_00362FB8;
    case 438u: goto L_00362FC8;
    case 439u: goto L_00362FDC;
    case 440u: goto L_00362FEC;
    case 441u: goto L_00362FF8;
    case 442u: goto L_00363004;
    case 443u: goto L_00363014;
    case 444u: goto L_0036302C;
    case 445u: goto L_0036303C;
    case 446u: goto L_00363050;
    case 447u: goto L_0036305C;
    case 448u: goto L_00363068;
    case 449u: goto L_00363078;
    case 450u: goto L_0036308C;
    case 451u: goto L_0036309C;
    case 452u: goto L_003630A8;
    case 453u: goto L_003630B4;
    case 454u: goto L_003630C4;
    case 455u: goto L_003630DC;
    case 456u: goto L_003630EC;
    case 457u: goto L_00363100;
    case 458u: goto L_0036310C;
    case 459u: goto L_00363118;
    case 460u: goto L_00363128;
    case 461u: goto L_0036313C;
    case 462u: goto L_0036314C;
    case 463u: goto L_0036315C;
    case 464u: goto L_00363168;
    case 465u: goto L_00363178;
    case 466u: goto L_0036318C;
    case 467u: goto L_0036319C;
    case 468u: goto L_003631B0;
    case 469u: goto L_003631BC;
    case 470u: goto L_003631C8;
    case 471u: goto L_003631D8;
    case 472u: goto L_003631EC;
    case 473u: goto L_003631FC;
    case 474u: goto L_0036320C;
    case 475u: goto L_00363218;
    case 476u: goto L_00363228;
    case 477u: goto L_0036323C;
    case 478u: goto L_0036324C;
    case 479u: goto L_00363260;
    case 480u: goto L_0036326C;
    case 481u: goto L_00363278;
    case 482u: goto L_00363288;
    case 483u: goto L_0036329C;
    case 484u: goto L_003632AC;
    case 485u: goto L_003632BC;
    case 486u: goto L_003632C8;
    case 487u: goto L_003632D8;
    case 488u: goto L_003632EC;
    case 489u: goto L_003632FC;
    case 490u: goto L_00363310;
    case 491u: goto L_0036331C;
    case 492u: goto L_00363328;
    case 493u: goto L_00363338;
    case 494u: goto L_0036334C;
    case 495u: goto L_0036335C;
    case 496u: goto L_0036336C;
    case 497u: goto L_00363378;
    case 498u: goto L_00363388;
    case 499u: goto L_0036339C;
    case 500u: goto L_003633AC;
    case 501u: goto L_003633C0;
    case 502u: goto L_003633CC;
    case 503u: goto L_003633D8;
    case 504u: goto L_003633E8;
    case 505u: goto L_003633FC;
    case 506u: goto L_0036340C;
    case 507u: goto L_00363418;
    case 508u: goto L_00363424;
    case 509u: goto L_00363434;
    case 510u: goto L_00363440;
    case 511u: goto L_00363450;
    case 512u: goto L_00363474;
    case 513u: goto L_00363484;
    case 514u: goto L_00363498;
    case 515u: goto L_003634A4;
    case 516u: goto L_003634AC;
    case 517u: goto L_003634BC;
    case 518u: goto L_003634D4;
    case 519u: goto L_003634E0;
    case 520u: goto L_003634EC;
    case 521u: goto L_003634FC;
    case 522u: goto L_00363510;
    case 523u: goto L_00363524;
    case 524u: goto L_00363530;
    case 525u: goto L_00363544;
    case 526u: goto L_00363558;
    case 527u: goto L_00363568;
    case 528u: goto L_00363574;
    case 529u: goto L_00363580;
    case 530u: goto L_00363590;
    case 531u: goto L_003635A4;
    case 532u: goto L_003635B4;
    case 533u: goto L_003635C8;
    case 534u: goto L_003635D4;
    case 535u: goto L_003635E0;
    case 536u: goto L_003635F0;
    case 537u: goto L_00363600;
    case 538u: goto L_00363618;
    case 539u: goto L_00363628;
    case 540u: goto L_00363638;
    case 541u: goto L_00363644;
    case 542u: goto L_00363654;
    case 543u: goto L_0036366C;
    case 544u: goto L_0036367C;
    case 545u: goto L_00363690;
    case 546u: goto L_0036369C;
    case 547u: goto L_003636A8;
    case 548u: goto L_003636B8;
    case 549u: goto L_003636C8;
    case 550u: goto L_003636E0;
    case 551u: goto L_003636F0;
    case 552u: goto L_00363700;
    case 553u: goto L_0036370C;
    case 554u: goto L_0036371C;
    case 555u: goto L_00363734;
    case 556u: goto L_00363744;
    case 557u: goto L_00363758;
    case 558u: goto L_00363764;
    case 559u: goto L_00363770;
    case 560u: goto L_00363780;
    case 561u: goto L_00363798;
    case 562u: goto L_003637A8;
    case 563u: goto L_003637C0;
    case 564u: goto L_003637CC;
    case 565u: goto L_003637D8;
    case 566u: goto L_003637E4;
    case 567u: goto L_003637F4;
    case 568u: goto L_0036380C;
    case 569u: goto L_0036381C;
    case 570u: goto L_0036382C;
    case 571u: goto L_00363844;
    case 572u: goto L_00363850;
    case 573u: goto L_00363858;
    case 574u: goto L_00363868;
    case 575u: goto L_0036387C;
    case 576u: goto L_0036388C;
    case 577u: goto L_0036389C;
    case 578u: goto L_003638B0;
    case 579u: goto L_003638C8;
    case 580u: goto L_003638D8;
    case 581u: goto L_003638EC;
    case 582u: goto L_003638FC;
    case 583u: goto L_00363910;
    case 584u: goto L_00363920;
    case 585u: goto L_00363934;
    case 586u: goto L_00363944;
    case 587u: goto L_0036395C;
    case 588u: goto L_0036396C;
    case 589u: goto L_00363980;
    case 590u: goto L_0036398C;
    case 591u: goto L_00363998;
    case 592u: goto L_003639A8;
    case 593u: goto L_003639BC;
    case 594u: goto L_003639CC;
    case 595u: goto L_003639DC;
    case 596u: goto L_003639E8;
    case 597u: goto L_003639F8;
    case 598u: goto L_00363A0C;
    case 599u: goto L_00363A1C;
    case 600u: goto L_00363A30;
    case 601u: goto L_00363A3C;
    case 602u: goto L_00363A48;
    case 603u: goto L_00363A58;
    case 604u: goto L_00363A6C;
    case 605u: goto L_00363A7C;
    case 606u: goto L_00363A8C;
    case 607u: goto L_00363A98;
    case 608u: goto L_00363AA8;
    case 609u: goto L_00363AB4;
    case 610u: goto L_00363AC0;
    case 611u: goto L_00363ACC;
    case 612u: goto L_00363AD8;
    case 613u: goto L_00363AF0;
    case 614u: goto L_00363AFC;
    case 615u: goto L_00363B0C;
    case 616u: goto L_00363B14;
    case 617u: goto L_00363B24;
    case 618u: goto L_00363B30;
    case 619u: goto L_00363B40;
    case 620u: goto L_00363B48;
    case 621u: goto L_00363B58;
    case 622u: goto L_00363B64;
    case 623u: goto L_00363B74;
    case 624u: goto L_00363B7C;
    case 625u: goto L_00363B8C;
    case 626u: goto L_00363B98;
    case 627u: goto L_00363BA8;
    case 628u: goto L_00363BB0;
    case 629u: goto L_00363BC0;
    case 630u: goto L_00363BCC;
    case 631u: goto L_00363BDC;
    case 632u: goto L_00363BE4;
    case 633u: goto L_00363BF4;
    case 634u: goto L_00363C00;
    case 635u: goto L_00363C10;
    case 636u: goto L_00363C18;
    case 637u: goto L_00363C28;
    case 638u: goto L_00363C34;
    case 639u: goto L_00363C44;
    case 640u: goto L_00363C4C;
    case 641u: goto L_00363C5C;
    case 642u: goto L_00363C68;
    case 643u: goto L_00363C78;
    case 644u: goto L_00363C80;
    case 645u: goto L_00363C90;
    case 646u: goto L_00363C9C;
    case 647u: goto L_00363CAC;
    case 648u: goto L_00363CB4;
    case 649u: goto L_00363CC4;
    case 650u: goto L_00363CD0;
    case 651u: goto L_00363CE0;
    case 652u: goto L_00363CE8;
    case 653u: goto L_00363CF8;
    case 654u: goto L_00363D04;
    case 655u: goto L_00363D14;
    case 656u: goto L_00363D1C;
    case 657u: goto L_00363D2C;
    case 658u: goto L_00363D38;
    case 659u: goto L_00363D48;
    case 660u: goto L_00363D50;
    case 661u: goto L_00363D60;
    case 662u: goto L_00363D6C;
    case 663u: goto L_00363D7C;
    case 664u: goto L_00363D84;
    case 665u: goto L_00363D94;
    case 666u: goto L_00363DA0;
    case 667u: goto L_00363DB0;
    case 668u: goto L_00363DB8;
    case 669u: goto L_00363DC8;
    case 670u: goto L_00363DD4;
    case 671u: goto L_00363DE4;
    case 672u: goto L_00363DEC;
    case 673u: goto L_00363DFC;
    case 674u: goto L_00363E08;
    case 675u: goto L_00363E18;
    case 676u: goto L_00363E20;
    case 677u: goto L_00363E30;
    case 678u: goto L_00363E3C;
    case 679u: goto L_00363E4C;
    case 680u: goto L_00363E54;
    case 681u: goto L_00363E68;
    case 682u: goto L_00363E74;
    case 683u: goto L_00363E80;
    case 684u: goto L_00363E8C;
    case 685u: goto L_00363EA0;
    case 686u: goto L_00363EB4;
    case 687u: goto L_00363EC8;
    case 688u: goto L_00363EDC;
    case 689u: goto L_00363EF0;
    case 690u: goto L_00363F04;
    case 691u: goto L_00363F18;
    case 692u: goto L_00363F2C;
    case 693u: goto L_00363F40;
    case 694u: goto L_00363F54;
    case 695u: goto L_00363F68;
    case 696u: goto L_00363F78;
    case 697u: goto L_00363F9C;
    case 698u: goto L_00363FB0;
    case 699u: goto L_00363FC4;
    case 700u: goto L_00363FD8;
    case 701u: goto L_00363FE8;
    default: bad_entry(c, 0x00360000u); return;
    }
L_00360000:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
    c.pc = 0x00360004u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00360010:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00360030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360044u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00360044u) [[unlikely]] return; }
L_00360044:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10016u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360084u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00360084u) [[unlikely]] return; }
L_00360084:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] - 29800u));
    c.budget -= 2;
L_0036008C:
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003600B8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003600B8; } }
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036008Cu | kUnwind; return; } goto L_0036008C; } }
    c.budget -= 1;
L_003600B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003600E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00360148; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360114u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00360114u) [[unlikely]] return; }
L_00360114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036012C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036012Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 14u, depth + 1u); else { c.pc = 0x00360190u; return; } if (c.pc != 0x0036012Cu) [[unlikely]] return; }
L_0036012C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00360138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360140u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 8u, depth + 1u); else { c.pc = 0x003600E0u; return; } if (c.pc != 0x00360140u) [[unlikely]] return; }
L_00360140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00360178; } }
L_00360148:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360164u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00360164u) [[unlikely]] return; }
L_00360164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360174u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 17u, depth + 1u); else { c.pc = 0x00360210u; return; } if (c.pc != 0x00360174u) [[unlikely]] return; }
L_00360174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00360178:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003601B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003601BC; } }
L_003601B4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_003601BC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003601CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 16u, depth + 1u); else { c.pc = 0x003601F0u; return; } if (c.pc != 0x003601CCu) [[unlikely]] return; }
L_003601CC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003601F0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00360210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360224u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00360224u) [[unlikely]] return; }
L_00360224:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10032u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003602B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003602A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360284u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00360284u) [[unlikely]] return; }
L_00360284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036029C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036029Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 25u, depth + 1u); else { c.pc = 0x00360300u; return; } if (c.pc != 0x0036029Cu) [[unlikely]] return; }
L_0036029C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_003602A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602B0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 19u, depth + 1u); else { c.pc = 0x00360250u; return; } if (c.pc != 0x003602B0u) [[unlikely]] return; }
L_003602B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003602E8; } }
L_003602B8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602D4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003602D4u) [[unlikely]] return; }
L_003602D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003602E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 28u, depth + 1u); else { c.pc = 0x00360380u; return; } if (c.pc != 0x003602E4u) [[unlikely]] return; }
L_003602E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003602E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00360324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036032C; } }
L_00360324:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036032C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036033Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 27u, depth + 1u); else { c.pc = 0x00360360u; return; } if (c.pc != 0x0036033Cu) [[unlikely]] return; }
L_0036033C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360360:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00360380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360394u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00360394u) [[unlikely]] return; }
L_00360394:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9120u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003603C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00360428; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003603F4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003603F4u) [[unlikely]] return; }
L_003603F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036040C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036040Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 36u, depth + 1u); else { c.pc = 0x00360470u; return; } if (c.pc != 0x0036040Cu) [[unlikely]] return; }
L_0036040C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00360418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360420u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 30u, depth + 1u); else { c.pc = 0x003603C0u; return; } if (c.pc != 0x00360420u) [[unlikely]] return; }
L_00360420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00360458; } }
L_00360428:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360444u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00360444u) [[unlikely]] return; }
L_00360444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360454u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 39u, depth + 1u); else { c.pc = 0x003604F0u; return; } if (c.pc != 0x00360454u) [[unlikely]] return; }
L_00360454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00360458:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00360494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036049C; } }
L_00360494:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036049C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003604ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 38u, depth + 1u); else { c.pc = 0x003604D0u; return; } if (c.pc != 0x003604ACu) [[unlikely]] return; }
L_003604AC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003604D0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_003604F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360504u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00360504u) [[unlikely]] return; }
L_00360504:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9392u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00360598; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360564u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00360564u) [[unlikely]] return; }
L_00360564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036057C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036057Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 47u, depth + 1u); else { c.pc = 0x003605E0u; return; } if (c.pc != 0x0036057Cu) [[unlikely]] return; }
L_0036057C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00360588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360590u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 41u, depth + 1u); else { c.pc = 0x00360530u; return; } if (c.pc != 0x00360590u) [[unlikely]] return; }
L_00360590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003605C8; } }
L_00360598:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605B4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003605B4u) [[unlikely]] return; }
L_003605B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003605C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 50u, depth + 1u); else { c.pc = 0x00360660u; return; } if (c.pc != 0x003605C4u) [[unlikely]] return; }
L_003605C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003605C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003605E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00360604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036060C; } }
L_00360604:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036060C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036061Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 49u, depth + 1u); else { c.pc = 0x00360640u; return; } if (c.pc != 0x0036061Cu) [[unlikely]] return; }
L_0036061C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360640:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00360660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360674u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00360674u) [[unlikely]] return; }
L_00360674:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9376u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003606A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00360708; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003606F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606D4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003606D4u) [[unlikely]] return; }
L_003606D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003606EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606ECu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 58u, depth + 1u); else { c.pc = 0x00360750u; return; } if (c.pc != 0x003606ECu) [[unlikely]] return; }
L_003606EC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_003606F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360700u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 52u, depth + 1u); else { c.pc = 0x003606A0u; return; } if (c.pc != 0x00360700u) [[unlikely]] return; }
L_00360700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00360738; } }
L_00360708:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360724u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00360724u) [[unlikely]] return; }
L_00360724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360734u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 61u, depth + 1u); else { c.pc = 0x003607D0u; return; } if (c.pc != 0x00360734u) [[unlikely]] return; }
L_00360734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00360738:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00360774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036077C; } }
L_00360774:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036077C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036078Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 60u, depth + 1u); else { c.pc = 0x003607B0u; return; } if (c.pc != 0x0036078Cu) [[unlikely]] return; }
L_0036078C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003607B0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_003607D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x003607E4u) [[unlikely]] return; }
L_003607E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9360u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00360878; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360844u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00360844u) [[unlikely]] return; }
L_00360844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036085C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036085Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 69u, depth + 1u); else { c.pc = 0x003608C0u; return; } if (c.pc != 0x0036085Cu) [[unlikely]] return; }
L_0036085C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00360868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360870u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 63u, depth + 1u); else { c.pc = 0x00360810u; return; } if (c.pc != 0x00360870u) [[unlikely]] return; }
L_00360870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003608A8; } }
L_00360878:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360894u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00360894u) [[unlikely]] return; }
L_00360894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003608A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003608A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 72u, depth + 1u); else { c.pc = 0x00360940u; return; } if (c.pc != 0x003608A4u) [[unlikely]] return; }
L_003608A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003608A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003608C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003608E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003608EC; } }
L_003608E4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_003608EC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003608FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 71u, depth + 1u); else { c.pc = 0x00360920u; return; } if (c.pc != 0x003608FCu) [[unlikely]] return; }
L_003608FC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360920:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00360940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360954u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00360954u) [[unlikely]] return; }
L_00360954:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9344u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003609E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003609D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003609B4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003609B4u) [[unlikely]] return; }
L_003609B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003609CC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003609CCu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 80u, depth + 1u); else { c.pc = 0x00360A30u; return; } if (c.pc != 0x003609CCu) [[unlikely]] return; }
L_003609CC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_003609D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003609E0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 74u, depth + 1u); else { c.pc = 0x00360980u; return; } if (c.pc != 0x003609E0u) [[unlikely]] return; }
L_003609E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00360A20; } }
L_003609E8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A0Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00360A0Cu) [[unlikely]] return; }
L_00360A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360A1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 83u, depth + 1u); else { c.pc = 0x00360AB0u; return; } if (c.pc != 0x00360A1Cu) [[unlikely]] return; }
L_00360A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00360A20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00360A54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00360A5C; } }
L_00360A54:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00360A5C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 82u, depth + 1u); else { c.pc = 0x00360A90u; return; } if (c.pc != 0x00360A6Cu) [[unlikely]] return; }
L_00360A6C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360A90:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00360AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360AC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00360AC4u) [[unlikely]] return; }
L_00360AC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9328u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00360B58; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B24u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00360B24u) [[unlikely]] return; }
L_00360B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360B3C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B3Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 91u, depth + 1u); else { c.pc = 0x00360BA0u; return; } if (c.pc != 0x00360B3Cu) [[unlikely]] return; }
L_00360B3C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00360B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B50u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 85u, depth + 1u); else { c.pc = 0x00360AF0u; return; } if (c.pc != 0x00360B50u) [[unlikely]] return; }
L_00360B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00360B90; } }
L_00360B58:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B7Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00360B7Cu) [[unlikely]] return; }
L_00360B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360B8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 94u, depth + 1u); else { c.pc = 0x00360C20u; return; } if (c.pc != 0x00360B8Cu) [[unlikely]] return; }
L_00360B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00360B90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00360BC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00360BCC; } }
L_00360BC4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00360BCC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360BDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 93u, depth + 1u); else { c.pc = 0x00360C00u; return; } if (c.pc != 0x00360BDCu) [[unlikely]] return; }
L_00360BDC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360C00:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00360C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00360C34u) [[unlikely]] return; }
L_00360C34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9312u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00360CC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360CB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C94u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00360C94u) [[unlikely]] return; }
L_00360C94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360CAC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CACu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 102u, depth + 1u); else { c.pc = 0x00360D10u; return; } if (c.pc != 0x00360CACu) [[unlikely]] return; }
L_00360CAC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00360CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CC0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 96u, depth + 1u); else { c.pc = 0x00360C60u; return; } if (c.pc != 0x00360CC0u) [[unlikely]] return; }
L_00360CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00360CF8; } }
L_00360CC8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CE4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00360CE4u) [[unlikely]] return; }
L_00360CE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360CF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 105u, depth + 1u); else { c.pc = 0x00360D90u; return; } if (c.pc != 0x00360CF4u) [[unlikely]] return; }
L_00360CF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00360CF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00360D34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00360D3C; } }
L_00360D34:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00360D3C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360D4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 104u, depth + 1u); else { c.pc = 0x00360D70u; return; } if (c.pc != 0x00360D4Cu) [[unlikely]] return; }
L_00360D4C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360D70:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00360D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360DA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00360DA4u) [[unlikely]] return; }
L_00360DA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9296u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00360E38; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E04u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00360E04u) [[unlikely]] return; }
L_00360E04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360E1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E1Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 113u, depth + 1u); else { c.pc = 0x00360E80u; return; } if (c.pc != 0x00360E1Cu) [[unlikely]] return; }
L_00360E1C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00360E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E30u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 107u, depth + 1u); else { c.pc = 0x00360DD0u; return; } if (c.pc != 0x00360E30u) [[unlikely]] return; }
L_00360E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00360E68; } }
L_00360E38:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E54u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00360E54u) [[unlikely]] return; }
L_00360E54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360E64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 116u, depth + 1u); else { c.pc = 0x00360F00u; return; } if (c.pc != 0x00360E64u) [[unlikely]] return; }
L_00360E64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00360E68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00360EA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00360EAC; } }
L_00360EA4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00360EAC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360EBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 115u, depth + 1u); else { c.pc = 0x00360EE0u; return; } if (c.pc != 0x00360EBCu) [[unlikely]] return; }
L_00360EBC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360EE0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00360F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00360F14u) [[unlikely]] return; }
L_00360F14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9280u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00360FA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F74u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00360F74u) [[unlikely]] return; }
L_00360F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360F8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F8Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 124u, depth + 1u); else { c.pc = 0x00360FF0u; return; } if (c.pc != 0x00360F8Cu) [[unlikely]] return; }
L_00360F8C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00360F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360FA0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 118u, depth + 1u); else { c.pc = 0x00360F40u; return; } if (c.pc != 0x00360FA0u) [[unlikely]] return; }
L_00360FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00360FD8; } }
L_00360FA8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360FC4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00360FC4u) [[unlikely]] return; }
L_00360FC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360FD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360FD4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 127u, depth + 1u); else { c.pc = 0x00361070u; return; } if (c.pc != 0x00360FD4u) [[unlikely]] return; }
L_00360FD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00360FD8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00361014; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036101C; } }
L_00361014:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036101C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036102Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 126u, depth + 1u); else { c.pc = 0x00361050u; return; } if (c.pc != 0x0036102Cu) [[unlikely]] return; }
L_0036102C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361050:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00361070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361084u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00361084u) [[unlikely]] return; }
L_00361084:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9264u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003610B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00361118; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003610E4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003610E4u) [[unlikely]] return; }
L_003610E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003610FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003610FCu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 135u, depth + 1u); else { c.pc = 0x00361160u; return; } if (c.pc != 0x003610FCu) [[unlikely]] return; }
L_003610FC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00361108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361110u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 129u, depth + 1u); else { c.pc = 0x003610B0u; return; } if (c.pc != 0x00361110u) [[unlikely]] return; }
L_00361110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00361148; } }
L_00361118:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361134u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00361134u) [[unlikely]] return; }
L_00361134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361144u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 138u, depth + 1u); else { c.pc = 0x003611E0u; return; } if (c.pc != 0x00361144u) [[unlikely]] return; }
L_00361144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00361148:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00361184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036118C; } }
L_00361184:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036118C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036119Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 137u, depth + 1u); else { c.pc = 0x003611C0u; return; } if (c.pc != 0x0036119Cu) [[unlikely]] return; }
L_0036119C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003611C0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_003611E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003611F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x003611F4u) [[unlikely]] return; }
L_003611F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9248u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00361288; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361278; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361254u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00361254u) [[unlikely]] return; }
L_00361254:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036126C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036126Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 146u, depth + 1u); else { c.pc = 0x003612D0u; return; } if (c.pc != 0x0036126Cu) [[unlikely]] return; }
L_0036126C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00361278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361280u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 140u, depth + 1u); else { c.pc = 0x00361220u; return; } if (c.pc != 0x00361280u) [[unlikely]] return; }
L_00361280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003612C0; } }
L_00361288:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003612ACu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003612ACu) [[unlikely]] return; }
L_003612AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003612BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003612BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 149u, depth + 1u); else { c.pc = 0x00361350u; return; } if (c.pc != 0x003612BCu) [[unlikely]] return; }
L_003612BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003612C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003612D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003612F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003612FC; } }
L_003612F4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_003612FC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036130Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 148u, depth + 1u); else { c.pc = 0x00361330u; return; } if (c.pc != 0x0036130Cu) [[unlikely]] return; }
L_0036130C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361330:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00361350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361364u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00361364u) [[unlikely]] return; }
L_00361364:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9232u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003613F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003613E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613C4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003613C4u) [[unlikely]] return; }
L_003613C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003613DC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613DCu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 157u, depth + 1u); else { c.pc = 0x00361440u; return; } if (c.pc != 0x003613DCu) [[unlikely]] return; }
L_003613DC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_003613E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613F0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 151u, depth + 1u); else { c.pc = 0x00361390u; return; } if (c.pc != 0x003613F0u) [[unlikely]] return; }
L_003613F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00361430; } }
L_003613F8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036141Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036141Cu) [[unlikely]] return; }
L_0036141C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036142C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036142Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 160u, depth + 1u); else { c.pc = 0x003614C0u; return; } if (c.pc != 0x0036142Cu) [[unlikely]] return; }
L_0036142C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00361430:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00361464; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036146C; } }
L_00361464:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036146C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036147Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 159u, depth + 1u); else { c.pc = 0x003614A0u; return; } if (c.pc != 0x0036147Cu) [[unlikely]] return; }
L_0036147C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003614A0:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_003614C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003614D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x003614D4u) [[unlikely]] return; }
L_003614D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9216u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00361568; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361534u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00361534u) [[unlikely]] return; }
L_00361534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036154C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036154Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 168u, depth + 1u); else { c.pc = 0x003615B0u; return; } if (c.pc != 0x0036154Cu) [[unlikely]] return; }
L_0036154C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00361558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361560u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 162u, depth + 1u); else { c.pc = 0x00361500u; return; } if (c.pc != 0x00361560u) [[unlikely]] return; }
L_00361560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00361598; } }
L_00361568:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361584u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00361584u) [[unlikely]] return; }
L_00361584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361594u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 171u, depth + 1u); else { c.pc = 0x00361630u; return; } if (c.pc != 0x00361594u) [[unlikely]] return; }
L_00361594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00361598:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003615B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003615D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003615DC; } }
L_003615D4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_003615DC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003615ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 170u, depth + 1u); else { c.pc = 0x00361610u; return; } if (c.pc != 0x003615ECu) [[unlikely]] return; }
L_003615EC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361610:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00361630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00361644u) [[unlikely]] return; }
L_00361644:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9200u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003616D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003616C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616A4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003616A4u) [[unlikely]] return; }
L_003616A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003616BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616BCu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 179u, depth + 1u); else { c.pc = 0x00361720u; return; } if (c.pc != 0x003616BCu) [[unlikely]] return; }
L_003616BC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_003616C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616D0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 173u, depth + 1u); else { c.pc = 0x00361670u; return; } if (c.pc != 0x003616D0u) [[unlikely]] return; }
L_003616D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00361708; } }
L_003616D8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616F4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003616F4u) [[unlikely]] return; }
L_003616F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361704u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 182u, depth + 1u); else { c.pc = 0x003617A0u; return; } if (c.pc != 0x00361704u) [[unlikely]] return; }
L_00361704:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00361708:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00361744; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036174C; } }
L_00361744:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036174C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036175Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 181u, depth + 1u); else { c.pc = 0x00361780u; return; } if (c.pc != 0x0036175Cu) [[unlikely]] return; }
L_0036175C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361780:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_003617A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003617B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x003617B4u) [[unlikely]] return; }
L_003617B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9184u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003617E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00361848; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361814u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00361814u) [[unlikely]] return; }
L_00361814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036182C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036182Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 190u, depth + 1u); else { c.pc = 0x00361890u; return; } if (c.pc != 0x0036182Cu) [[unlikely]] return; }
L_0036182C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00361838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361840u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 184u, depth + 1u); else { c.pc = 0x003617E0u; return; } if (c.pc != 0x00361840u) [[unlikely]] return; }
L_00361840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00361880; } }
L_00361848:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036186Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036186Cu) [[unlikely]] return; }
L_0036186C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036187C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036187Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 193u, depth + 1u); else { c.pc = 0x00361910u; return; } if (c.pc != 0x0036187Cu) [[unlikely]] return; }
L_0036187C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00361880:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003618B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003618BC; } }
L_003618B4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_003618BC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003618CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x003618F0u; return; } if (c.pc != 0x003618CCu) [[unlikely]] return; }
L_003618CC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003618F0:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00361910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361924u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00361924u) [[unlikely]] return; }
L_00361924:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10048u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003619B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003619A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361984u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00361984u) [[unlikely]] return; }
L_00361984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036199C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036199Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 201u, depth + 1u); else { c.pc = 0x00361A00u; return; } if (c.pc != 0x0036199Cu) [[unlikely]] return; }
L_0036199C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_003619A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003619B0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 195u, depth + 1u); else { c.pc = 0x00361950u; return; } if (c.pc != 0x003619B0u) [[unlikely]] return; }
L_003619B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003619F0; } }
L_003619B8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003619DCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003619DCu) [[unlikely]] return; }
L_003619DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003619EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003619ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 204u, depth + 1u); else { c.pc = 0x00361A80u; return; } if (c.pc != 0x003619ECu) [[unlikely]] return; }
L_003619EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003619F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00361A24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00361A2C; } }
L_00361A24:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00361A2C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 203u, depth + 1u); else { c.pc = 0x00361A60u; return; } if (c.pc != 0x00361A3Cu) [[unlikely]] return; }
L_00361A3C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361A60:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00361A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00361A94u) [[unlikely]] return; }
L_00361A94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10064u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00361B28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361AF4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00361AF4u) [[unlikely]] return; }
L_00361AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361B0C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B0Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 212u, depth + 1u); else { c.pc = 0x00361B70u; return; } if (c.pc != 0x00361B0Cu) [[unlikely]] return; }
L_00361B0C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00361B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B20u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 206u, depth + 1u); else { c.pc = 0x00361AC0u; return; } if (c.pc != 0x00361B20u) [[unlikely]] return; }
L_00361B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00361B58; } }
L_00361B28:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 32u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B44u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00361B44u) [[unlikely]] return; }
L_00361B44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361B54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 215u, depth + 1u); else { c.pc = 0x00361BF0u; return; } if (c.pc != 0x00361B54u) [[unlikely]] return; }
L_00361B54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00361B58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00361B94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00361B9C; } }
L_00361B94:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00361B9C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361BACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 214u, depth + 1u); else { c.pc = 0x00361BD0u; return; } if (c.pc != 0x00361BACu) [[unlikely]] return; }
L_00361BAC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361BD0:
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00361BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 9952u);
    set32(c.r[3], c.r[3].w[0] - 10080u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), 0u);  c.pc = t; return; }
L_00361C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00361C88; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361C54u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00361C54u) [[unlikely]] return; }
L_00361C54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361C6C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361C6Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 222u, depth + 1u); else { c.pc = 0x00361CD0u; return; } if (c.pc != 0x00361C6Cu) [[unlikely]] return; }
L_00361C6C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00361C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361C80u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 216u, depth + 1u); else { c.pc = 0x00361C20u; return; } if (c.pc != 0x00361C80u) [[unlikely]] return; }
L_00361C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00361CC0; } }
L_00361C88:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], 0u + 24u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361CACu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00361CACu) [[unlikely]] return; }
L_00361CAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361CBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361CBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 225u, depth + 1u); else { c.pc = 0x00361D50u; return; } if (c.pc != 0x00361CBCu) [[unlikely]] return; }
L_00361CBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00361CC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00361CF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00361CFC; } }
L_00361CF4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00361CFC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 224u, depth + 1u); else { c.pc = 0x00361D30u; return; } if (c.pc != 0x00361D0Cu) [[unlikely]] return; }
L_00361D0C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361D30:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00361D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00361D64u) [[unlikely]] return; }
L_00361D64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10096u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361D90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], c.r[16].w[0] - 22944u);
    c.budget -= 10;
L_00361DB8:
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361DC4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00361DC4u) [[unlikely]] return; }
L_00361DC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] - 29800u));
    c.budget -= 3;
L_00361DD0:
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00361DF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00361DF8; } }
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00361DD0u | kUnwind; return; } goto L_00361DD0; } }
L_00361DF8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00361E20; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00361DB8u | kUnwind; return; } goto L_00361DB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00361E24; } }
L_00361E20:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 1;
L_00361E24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00361E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00361EA8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361E98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E74u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00361E74u) [[unlikely]] return; }
L_00361E74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361E8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E8Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 237u, depth + 1u); else { c.pc = 0x00361EF0u; return; } if (c.pc != 0x00361E8Cu) [[unlikely]] return; }
L_00361E8C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00361E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361EA0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 231u, depth + 1u); else { c.pc = 0x00361E40u; return; } if (c.pc != 0x00361EA0u) [[unlikely]] return; }
L_00361EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00361ED8; } }
L_00361EA8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361EC4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00361EC4u) [[unlikely]] return; }
L_00361EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361ED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361ED4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 240u, depth + 1u); else { c.pc = 0x00361F70u; return; } if (c.pc != 0x00361ED4u) [[unlikely]] return; }
L_00361ED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00361ED8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00361F14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00361F1C; } }
L_00361F14:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00361F1C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 239u, depth + 1u); else { c.pc = 0x00361F50u; return; } if (c.pc != 0x00361F2Cu) [[unlikely]] return; }
L_00361F2C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361F50:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00361F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 242u, depth + 1u); else { c.pc = 0x00361FB0u; return; } if (c.pc != 0x00361F84u) [[unlikely]] return; }
L_00361F84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 10280u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361FB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 10120u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00361FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00362038; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362004u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00362004u) [[unlikely]] return; }
L_00362004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036201C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036201Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 249u, depth + 1u); else { c.pc = 0x00362080u; return; } if (c.pc != 0x0036201Cu) [[unlikely]] return; }
L_0036201C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00362028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362030u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 243u, depth + 1u); else { c.pc = 0x00361FD0u; return; } if (c.pc != 0x00362030u) [[unlikely]] return; }
L_00362030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00362068; } }
L_00362038:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 8u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362054u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00362054u) [[unlikely]] return; }
L_00362054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362064u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 252u, depth + 1u); else { c.pc = 0x00362100u; return; } if (c.pc != 0x00362064u) [[unlikely]] return; }
L_00362064:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00362068:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003620A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003620AC; } }
L_003620A4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_003620AC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003620BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 251u, depth + 1u); else { c.pc = 0x003620E0u; return; } if (c.pc != 0x003620BCu) [[unlikely]] return; }
L_003620BC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003620E0:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00362100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362114u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 242u, depth + 1u); else { c.pc = 0x00361FB0u; return; } if (c.pc != 0x00362114u) [[unlikely]] return; }
L_00362114:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9936u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003621A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362174u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00362174u) [[unlikely]] return; }
L_00362174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036218C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036218Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0058(c, 260u, depth + 1u); else { c.pc = 0x003621F0u; return; } if (c.pc != 0x0036218Cu) [[unlikely]] return; }
L_0036218C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00362198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003621A0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0058(c, 254u, depth + 1u); else { c.pc = 0x00362140u; return; } if (c.pc != 0x003621A0u) [[unlikely]] return; }
L_003621A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003621E0; } }
L_003621A8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003621CCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003621CCu) [[unlikely]] return; }
L_003621CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003621DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003621DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 263u, depth + 1u); else { c.pc = 0x00362270u; return; } if (c.pc != 0x003621DCu) [[unlikely]] return; }
L_003621DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003621E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003621F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00362214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036221C; } }
L_00362214:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036221C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036222Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 262u, depth + 1u); else { c.pc = 0x00362250u; return; } if (c.pc != 0x0036222Cu) [[unlikely]] return; }
L_0036222C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362250:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00362270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x00362284u) [[unlikely]] return; }
L_00362284:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9904u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003622B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 446u, depth + 1u); else { c.pc = 0x0035B830u; return; } if (c.pc != 0x003622CCu) [[unlikely]] return; }
L_003622CC:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 220u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622E0u); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0056(c, 445u, depth + 1u); else { c.pc = 0x0035B810u; return; } if (c.pc != 0x003622E0u) [[unlikely]] return; }
L_003622E0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622ECu); set32(c.r[5], c.r[16].w[0] + 220u);  if (depth < kMaxDepth) unit_0056(c, 96u, depth + 1u); else { c.pc = 0x00358880u; return; } if (c.pc != 0x003622ECu) [[unlikely]] return; }
L_003622EC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622F8u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0056(c, 93u, depth + 1u); else { c.pc = 0x00358830u; return; } if (c.pc != 0x003622F8u) [[unlikely]] return; }
L_003622F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362308; } }
L_00362300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00362B1C; } }
L_00362308:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362318u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 444u, depth + 1u); else { c.pc = 0x0035B800u; return; } if (c.pc != 0x00362318u) [[unlikely]] return; }
L_00362318:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362328u); st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 444u, depth + 1u); else { c.pc = 0x0035B800u; return; } if (c.pc != 0x00362328u) [[unlikely]] return; }
L_00362328:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[18], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036233Cu); set32(c.r[5], c.r[5].w[0] + 12359u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0036233Cu) [[unlikely]] return; }
L_0036233C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362348u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00362348u) [[unlikely]] return; }
L_00362348:
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003623C8; } }
    c.budget -= 1;
L_00362358:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362368u); set32(c.r[5], c.r[5].w[0] + 12362u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00362368u) [[unlikely]] return; }
L_00362368:
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362374u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362374u) [[unlikely]] return; }
L_00362374:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362384u); set32(c.r[6], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_000E(c, 302u, depth + 1u); else { c.pc = 0x0023B790u; return; } if (c.pc != 0x00362384u) [[unlikely]] return; }
L_00362384:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362390u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0056(c, 441u, depth + 1u); else { c.pc = 0x0035B7A0u; return; } if (c.pc != 0x00362390u) [[unlikely]] return; }
L_00362390:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036239Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0036239Cu) [[unlikely]] return; }
L_0036239C:
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003623A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003623A8u) [[unlikely]] return; }
L_003623A8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003623B8u); c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x003623B8u) [[unlikely]] return; }
L_003623B8:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00362358u | kUnwind; return; } goto L_00362358; } }
    c.budget -= 1;
L_003623C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003623D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003623D4u) [[unlikely]] return; }
L_003623D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003623E0u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003623E0u) [[unlikely]] return; }
L_003623E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003623F0u); set32(c.r[5], c.r[5].w[0] + 12364u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003623F0u) [[unlikely]] return; }
L_003623F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362408u); set32(c.r[5], c.r[5].w[0] + 12367u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362408u) [[unlikely]] return; }
L_00362408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362420u); set32(c.r[5], c.r[5].w[0] + 12523u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362420u) [[unlikely]] return; }
L_00362420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362438u); set32(c.r[5], c.r[5].w[0] + 12763u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362438u) [[unlikely]] return; }
L_00362438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362450u); set32(c.r[5], c.r[5].w[0] + 12798u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362450u) [[unlikely]] return; }
L_00362450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362468u); set32(c.r[5], c.r[5].w[0] + 12805u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362468u) [[unlikely]] return; }
L_00362468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362480u); set32(c.r[5], c.r[5].w[0] + 12819u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362480u) [[unlikely]] return; }
L_00362480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362498u); set32(c.r[5], c.r[5].w[0] + 12826u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362498u) [[unlikely]] return; }
L_00362498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003624B0u); set32(c.r[5], c.r[5].w[0] + 12833u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003624B0u) [[unlikely]] return; }
L_003624B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003624C8u); set32(c.r[5], c.r[5].w[0] + 12781u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003624C8u) [[unlikely]] return; }
L_003624C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003624E0u); set32(c.r[5], c.r[5].w[0] + 12771u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003624E0u) [[unlikely]] return; }
L_003624E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003624F8u); set32(c.r[5], c.r[5].w[0] + 12948u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003624F8u) [[unlikely]] return; }
L_003624F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362510u); set32(c.r[5], c.r[5].w[0] + 12373u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362510u) [[unlikely]] return; }
L_00362510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362528u); set32(c.r[5], c.r[5].w[0] + 12839u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362528u) [[unlikely]] return; }
L_00362528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362540u); set32(c.r[5], c.r[5].w[0] + 12383u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362540u) [[unlikely]] return; }
L_00362540:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362558u); set32(c.r[5], c.r[5].w[0] + 12387u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362558u) [[unlikely]] return; }
L_00362558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362570u); set32(c.r[5], c.r[5].w[0] + 12397u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362570u) [[unlikely]] return; }
L_00362570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362588u); set32(c.r[5], c.r[5].w[0] + 12403u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362588u) [[unlikely]] return; }
L_00362588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003625A0u); set32(c.r[5], c.r[5].w[0] + 12411u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003625A0u) [[unlikely]] return; }
L_003625A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003625B8u); set32(c.r[5], c.r[5].w[0] + 12418u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003625B8u) [[unlikely]] return; }
L_003625B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003625D0u); set32(c.r[5], c.r[5].w[0] + 12427u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003625D0u) [[unlikely]] return; }
L_003625D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003625E8u); set32(c.r[5], c.r[5].w[0] + 12434u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003625E8u) [[unlikely]] return; }
L_003625E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362600u); set32(c.r[5], c.r[5].w[0] + 12531u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362600u) [[unlikely]] return; }
L_00362600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362618u); set32(c.r[5], c.r[5].w[0] + 12534u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362618u) [[unlikely]] return; }
L_00362618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362630u); set32(c.r[5], c.r[5].w[0] + 12538u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362630u) [[unlikely]] return; }
L_00362630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362648u); set32(c.r[5], c.r[5].w[0] + 12542u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362648u) [[unlikely]] return; }
L_00362648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362660u); set32(c.r[5], c.r[5].w[0] + 12451u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362660u) [[unlikely]] return; }
L_00362660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362678u); set32(c.r[5], c.r[5].w[0] + 12447u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362678u) [[unlikely]] return; }
L_00362678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362690u); set32(c.r[5], c.r[5].w[0] + 12441u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362690u) [[unlikely]] return; }
L_00362690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003626A8u); set32(c.r[5], c.r[5].w[0] + 12392u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003626A8u) [[unlikely]] return; }
L_003626A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003626C0u); set32(c.r[5], c.r[5].w[0] + 12469u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003626C0u) [[unlikely]] return; }
L_003626C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003626D8u); set32(c.r[5], c.r[5].w[0] + 12472u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003626D8u) [[unlikely]] return; }
L_003626D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003626F0u); set32(c.r[5], c.r[5].w[0] + 12477u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003626F0u) [[unlikely]] return; }
L_003626F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362708u); set32(c.r[5], c.r[5].w[0] + 12482u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362708u) [[unlikely]] return; }
L_00362708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362720u); set32(c.r[5], c.r[5].w[0] + 12488u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362720u) [[unlikely]] return; }
L_00362720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362738u); set32(c.r[5], c.r[5].w[0] + 12497u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362738u) [[unlikely]] return; }
L_00362738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362750u); set32(c.r[5], c.r[5].w[0] + 12503u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362750u) [[unlikely]] return; }
L_00362750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362768u); set32(c.r[5], c.r[5].w[0] + 12510u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362768u) [[unlikely]] return; }
L_00362768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362780u); set32(c.r[5], c.r[5].w[0] + 12517u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362780u) [[unlikely]] return; }
L_00362780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362798u); set32(c.r[5], c.r[5].w[0] + 12750u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362798u) [[unlikely]] return; }
L_00362798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003627B0u); set32(c.r[5], c.r[5].w[0] + 12461u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003627B0u) [[unlikely]] return; }
L_003627B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003627C8u); set32(c.r[5], c.r[5].w[0] + 12456u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003627C8u) [[unlikely]] return; }
L_003627C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003627E0u); set32(c.r[5], c.r[5].w[0] + 12937u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003627E0u) [[unlikely]] return; }
L_003627E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003627F8u); set32(c.r[5], c.r[5].w[0] + 12722u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003627F8u) [[unlikely]] return; }
L_003627F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362810u); set32(c.r[5], c.r[5].w[0] + 12727u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362810u) [[unlikely]] return; }
L_00362810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362828u); set32(c.r[5], c.r[5].w[0] + 12732u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362828u) [[unlikely]] return; }
L_00362828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362840u); set32(c.r[5], c.r[5].w[0] + 12737u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362840u) [[unlikely]] return; }
L_00362840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362858u); set32(c.r[5], c.r[5].w[0] + 12744u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362858u) [[unlikely]] return; }
L_00362858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362870u); set32(c.r[5], c.r[5].w[0] + 12708u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362870u) [[unlikely]] return; }
L_00362870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362888u); set32(c.r[5], c.r[5].w[0] + 12954u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362888u) [[unlikely]] return; }
L_00362888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003628A0u); set32(c.r[5], c.r[5].w[0] + 12609u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003628A0u) [[unlikely]] return; }
L_003628A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003628B8u); set32(c.r[5], c.r[5].w[0] + 12628u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003628B8u) [[unlikely]] return; }
L_003628B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003628D0u); set32(c.r[5], c.r[5].w[0] + 12642u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003628D0u) [[unlikely]] return; }
L_003628D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003628E8u); set32(c.r[5], c.r[5].w[0] + 12649u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003628E8u) [[unlikely]] return; }
L_003628E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362900u); set32(c.r[5], c.r[5].w[0] + 12656u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362900u) [[unlikely]] return; }
L_00362900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362918u); set32(c.r[5], c.r[5].w[0] + 12670u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362918u) [[unlikely]] return; }
L_00362918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362930u); set32(c.r[5], c.r[5].w[0] + 12546u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362930u) [[unlikely]] return; }
L_00362930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362948u); set32(c.r[5], c.r[5].w[0] + 12563u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362948u) [[unlikely]] return; }
L_00362948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362960u); set32(c.r[5], c.r[5].w[0] + 12575u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362960u) [[unlikely]] return; }
L_00362960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362978u); set32(c.r[5], c.r[5].w[0] + 12580u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362978u) [[unlikely]] return; }
L_00362978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362990u); set32(c.r[5], c.r[5].w[0] + 12585u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362990u) [[unlikely]] return; }
L_00362990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003629A8u); set32(c.r[5], c.r[5].w[0] + 12597u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003629A8u) [[unlikely]] return; }
L_003629A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003629C0u); set32(c.r[5], c.r[5].w[0] + 12967u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003629C0u) [[unlikely]] return; }
L_003629C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003629D8u); set32(c.r[5], c.r[5].w[0] + 12867u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003629D8u) [[unlikely]] return; }
L_003629D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003629F0u); set32(c.r[5], c.r[5].w[0] + 12877u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003629F0u) [[unlikely]] return; }
L_003629F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A08u); set32(c.r[5], c.r[5].w[0] + 12894u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362A08u) [[unlikely]] return; }
L_00362A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A20u); set32(c.r[5], c.r[5].w[0] + 12915u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362A20u) [[unlikely]] return; }
L_00362A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A38u); set32(c.r[5], c.r[5].w[0] + 12925u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362A38u) [[unlikely]] return; }
L_00362A38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A50u); set32(c.r[5], c.r[5].w[0] + 12849u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362A50u) [[unlikely]] return; }
L_00362A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A68u); set32(c.r[5], c.r[5].w[0] + 12860u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362A68u) [[unlikely]] return; }
L_00362A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A80u); set32(c.r[5], c.r[5].w[0] + 12684u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362A80u) [[unlikely]] return; }
L_00362A80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A98u); set32(c.r[5], c.r[5].w[0] + 12698u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x00362A98u) [[unlikely]] return; }
L_00362A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362AD4; } }
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362AACu); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0056(c, 144u, depth + 1u); else { c.pc = 0x00358E50u; return; } if (c.pc != 0x00362AACu) [[unlikely]] return; }
L_00362AAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362AD4; } }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362AC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00362AC0u) [[unlikely]] return; }
L_00362AC0:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362ACCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00362ACCu) [[unlikely]] return; }
L_00362ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00362B1C; } }
L_00362AD4:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362AE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00362AE0u) [[unlikely]] return; }
L_00362AE0:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362AECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00362AECu) [[unlikely]] return; }
L_00362AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362AF4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0056(c, 100u, depth + 1u); else { c.pc = 0x00358900u; return; } if (c.pc != 0x00362AF4u) [[unlikely]] return; }
L_00362AF4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B00u); set32(c.r[5], c.r[16].w[0] + 220u);  if (depth < kMaxDepth) unit_0056(c, 96u, depth + 1u); else { c.pc = 0x00358880u; return; } if (c.pc != 0x00362B00u) [[unlikely]] return; }
L_00362B00:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B0Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0056(c, 93u, depth + 1u); else { c.pc = 0x00358830u; return; } if (c.pc != 0x00362B0Cu) [[unlikely]] return; }
L_00362B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00362308u | kUnwind; return; } goto L_00362308; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00362300u | kUnwind; return; } goto L_00362300; } }
L_00362B1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00362B40:
    set32(c.r[29], c.r[29].w[0] - 704u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B6Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0056(c, 446u, depth + 1u); else { c.pc = 0x0035B830u; return; } if (c.pc != 0x00362B6Cu) [[unlikely]] return; }
L_00362B6C:
    st32((c.r[21].w[0] + 12u), 0u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[21].w[0] + 220u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B80u); st32((c.r[21].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0056(c, 445u, depth + 1u); else { c.pc = 0x0035B810u; return; } if (c.pc != 0x00362B80u) [[unlikely]] return; }
L_00362B80:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B8Cu); set32(c.r[5], c.r[21].w[0] + 220u);  if (depth < kMaxDepth) unit_0056(c, 96u, depth + 1u); else { c.pc = 0x00358880u; return; } if (c.pc != 0x00362B8Cu) [[unlikely]] return; }
L_00362B8C:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B98u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0056(c, 93u, depth + 1u); else { c.pc = 0x00358830u; return; } if (c.pc != 0x00362B98u) [[unlikely]] return; }
L_00362B98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363AE0; } }
L_00362BA0:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BB0u); st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 444u, depth + 1u); else { c.pc = 0x0035B800u; return; } if (c.pc != 0x00362BB0u) [[unlikely]] return; }
L_00362BB0:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BC0u); st32((c.r[21].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 444u, depth + 1u); else { c.pc = 0x0035B800u; return; } if (c.pc != 0x00362BC0u) [[unlikely]] return; }
L_00362BC0:
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00362BD0u) [[unlikely]] return; }
L_00362BD0:
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00362CB0; } }
    c.budget -= 1;
L_00362BE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362BECu) [[unlikely]] return; }
L_00362BEC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BF8u); set32(c.r[4], c.r[29].w[0] + 556u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00362BF8u) [[unlikely]] return; }
L_00362BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C00u); set32(c.r[4], c.r[29].w[0] + 556u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x003705F0u; return; } if (c.pc != 0x00362C00u) [[unlikely]] return; }
L_00362C00:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 556u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00362C10u) [[unlikely]] return; }
L_00362C10:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00362C98; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C28u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362C28u) [[unlikely]] return; }
L_00362C28:
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C34u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x00362C34u) [[unlikely]] return; }
L_00362C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362C98; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C48u); set32(c.r[4], c.r[2].w[0] + 712u);  if (depth < kMaxDepth) unit_005B(c, 156u, depth + 1u); else { c.pc = 0x0036CFD0u; return; } if (c.pc != 0x00362C48u) [[unlikely]] return; }
L_00362C48:
    st32((c.r[29].w[0] + 700u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362C58u) [[unlikely]] return; }
L_00362C58:
    set32(c.r[4], ld32((c.r[29].w[0] + 700u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C64u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00362C64u) [[unlikely]] return; }
L_00362C64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C70u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362C70u) [[unlikely]] return; }
L_00362C70:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C80u); set32(c.r[6], c.r[29].w[0] + 700u);  if (depth < kMaxDepth) unit_005B(c, 66u, depth + 1u); else { c.pc = 0x0036C8C0u; return; } if (c.pc != 0x00362C80u) [[unlikely]] return; }
L_00362C80:
    set32(c.r[4], ld32((c.r[29].w[0] + 700u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C94u); c.r[5].d[0] = c.r[18].d[0] & 255ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00362C94u) [[unlikely]] return; }
L_00362C94:
    c.budget -= 1;
L_00362C98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362CA4u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00362CA4u) [[unlikely]] return; }
L_00362CA4:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00362BE0u | kUnwind; return; } goto L_00362BE0; } }
L_00362CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362CB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00362CB8u) [[unlikely]] return; }
L_00362CB8:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363AB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362CD4u); set32(c.r[5], c.r[5].w[0] + 12359u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00362CD4u) [[unlikely]] return; }
L_00362CD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362CE0u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00362CE0u) [[unlikely]] return; }
L_00362CE0:
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00362D60; } }
    c.budget -= 1;
L_00362CF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 552u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D00u); set32(c.r[5], c.r[5].w[0] + 12362u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00362D00u) [[unlikely]] return; }
L_00362D00:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362D0Cu) [[unlikely]] return; }
L_00362D0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 548u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D1Cu); set32(c.r[6], c.r[29].w[0] + 552u);  if (depth < kMaxDepth) unit_000E(c, 302u, depth + 1u); else { c.pc = 0x0023B790u; return; } if (c.pc != 0x00362D1Cu) [[unlikely]] return; }
L_00362D1C:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D28u); set32(c.r[5], c.r[29].w[0] + 548u);  if (depth < kMaxDepth) unit_0056(c, 441u, depth + 1u); else { c.pc = 0x0035B7A0u; return; } if (c.pc != 0x00362D28u) [[unlikely]] return; }
L_00362D28:
    set32(c.r[4], c.r[29].w[0] + 548u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00362D34u) [[unlikely]] return; }
L_00362D34:
    set32(c.r[4], c.r[29].w[0] + 552u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00362D40u) [[unlikely]] return; }
L_00362D40:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D50u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00362D50u) [[unlikely]] return; }
L_00362D50:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00362CF0u | kUnwind; return; } goto L_00362CF0; } }
    c.budget -= 1;
L_00362D60:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362D6Cu) [[unlikely]] return; }
L_00362D6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D7Cu); set32(c.r[5], c.r[5].w[0] + 12367u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00362D7Cu) [[unlikely]] return; }
L_00362D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362E10; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362D90u) [[unlikely]] return; }
L_00362D90:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D9Cu); set32(c.r[4], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00362D9Cu) [[unlikely]] return; }
L_00362D9C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362DA8u); set32(c.r[5], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x00362DA8u) [[unlikely]] return; }
L_00362DA8:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362DB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00362DB8u) [[unlikely]] return; }
L_00362DB8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363E94; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362DCCu); set32(c.r[4], c.r[2].w[0] + 732u);  if (depth < kMaxDepth) unit_005A(c, 605u, depth + 1u); else { c.pc = 0x0036BB00u; return; } if (c.pc != 0x00362DCCu) [[unlikely]] return; }
L_00362DCC:
    st32((c.r[29].w[0] + 692u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362DDCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362DDCu) [[unlikely]] return; }
L_00362DDC:
    set32(c.r[4], ld32((c.r[29].w[0] + 692u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362DE8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00362DE8u) [[unlikely]] return; }
L_00362DE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362DF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362DF4u) [[unlikely]] return; }
L_00362DF4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E04u); set32(c.r[6], c.r[29].w[0] + 692u);  if (depth < kMaxDepth) unit_005A(c, 515u, depth + 1u); else { c.pc = 0x0036B3F0u; return; } if (c.pc != 0x00362E04u) [[unlikely]] return; }
L_00362E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
    c.budget -= 1;
L_00362E10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362E1Cu) [[unlikely]] return; }
L_00362E1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E2Cu); set32(c.r[5], c.r[5].w[0] + 12523u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00362E2Cu) [[unlikely]] return; }
L_00362E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362EC0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E40u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362E40u) [[unlikely]] return; }
L_00362E40:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E4Cu); set32(c.r[4], c.r[29].w[0] + 540u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00362E4Cu) [[unlikely]] return; }
L_00362E4C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E58u); set32(c.r[5], c.r[29].w[0] + 540u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x00362E58u) [[unlikely]] return; }
L_00362E58:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 540u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E68u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00362E68u) [[unlikely]] return; }
L_00362E68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363EA8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E7Cu); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_005A(c, 421u, depth + 1u); else { c.pc = 0x0036A630u; return; } if (c.pc != 0x00362E7Cu) [[unlikely]] return; }
L_00362E7C:
    st32((c.r[29].w[0] + 688u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E8Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362E8Cu) [[unlikely]] return; }
L_00362E8C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 688u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E9Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00362E9Cu) [[unlikely]] return; }
L_00362E9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362EA8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362EA8u) [[unlikely]] return; }
L_00362EA8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362EB8u); set32(c.r[6], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_005A(c, 331u, depth + 1u); else { c.pc = 0x00369F20u; return; } if (c.pc != 0x00362EB8u) [[unlikely]] return; }
L_00362EB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
L_00362EC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362ECCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362ECCu) [[unlikely]] return; }
L_00362ECC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362EDCu); set32(c.r[5], c.r[5].w[0] + 12373u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00362EDCu) [[unlikely]] return; }
L_00362EDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362F70; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362EF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362EF0u) [[unlikely]] return; }
L_00362EF0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362EFCu); set32(c.r[4], c.r[29].w[0] + 536u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00362EFCu) [[unlikely]] return; }
L_00362EFC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F08u); set32(c.r[5], c.r[29].w[0] + 536u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x00362F08u) [[unlikely]] return; }
L_00362F08:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00362F18u) [[unlikely]] return; }
L_00362F18:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363EBC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F2Cu); set32(c.r[4], c.r[2].w[0] + 692u);  if (depth < kMaxDepth) unit_005A(c, 288u, depth + 1u); else { c.pc = 0x00369710u; return; } if (c.pc != 0x00362F2Cu) [[unlikely]] return; }
L_00362F2C:
    st32((c.r[29].w[0] + 684u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F3Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362F3Cu) [[unlikely]] return; }
L_00362F3C:
    set32(c.r[4], ld32((c.r[29].w[0] + 684u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F48u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00362F48u) [[unlikely]] return; }
L_00362F48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362F54u) [[unlikely]] return; }
L_00362F54:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F64u); set32(c.r[6], c.r[29].w[0] + 684u);  if (depth < kMaxDepth) unit_005A(c, 198u, depth + 1u); else { c.pc = 0x00369000u; return; } if (c.pc != 0x00362F64u) [[unlikely]] return; }
L_00362F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
    c.budget -= 1;
L_00362F70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362F7Cu) [[unlikely]] return; }
L_00362F7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F8Cu); set32(c.r[5], c.r[5].w[0] + 12397u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00362F8Cu) [[unlikely]] return; }
L_00362F8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363020; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362FA0u) [[unlikely]] return; }
L_00362FA0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FACu); set32(c.r[4], c.r[29].w[0] + 532u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00362FACu) [[unlikely]] return; }
L_00362FAC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FB8u); set32(c.r[5], c.r[29].w[0] + 532u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x00362FB8u) [[unlikely]] return; }
L_00362FB8:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 532u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00362FC8u) [[unlikely]] return; }
L_00362FC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363ED0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FDCu); set32(c.r[4], c.r[2].w[0] + 792u);  if (depth < kMaxDepth) unit_005A(c, 186u, depth + 1u); else { c.pc = 0x00368E90u; return; } if (c.pc != 0x00362FDCu) [[unlikely]] return; }
L_00362FDC:
    st32((c.r[29].w[0] + 680u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00362FECu) [[unlikely]] return; }
L_00362FEC:
    set32(c.r[4], ld32((c.r[29].w[0] + 680u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FF8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00362FF8u) [[unlikely]] return; }
L_00362FF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363004u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363004u) [[unlikely]] return; }
L_00363004:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363014u); set32(c.r[6], c.r[29].w[0] + 680u);  if (depth < kMaxDepth) unit_005A(c, 96u, depth + 1u); else { c.pc = 0x00368780u; return; } if (c.pc != 0x00363014u) [[unlikely]] return; }
L_00363014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
    c.budget -= 1;
L_00363020:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036302Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036302Cu) [[unlikely]] return; }
L_0036302C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036303Cu); set32(c.r[5], c.r[5].w[0] + 12403u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0036303Cu) [[unlikely]] return; }
L_0036303C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003630D0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363050u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363050u) [[unlikely]] return; }
L_00363050:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036305Cu); set32(c.r[4], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0036305Cu) [[unlikely]] return; }
L_0036305C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363068u); set32(c.r[5], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x00363068u) [[unlikely]] return; }
L_00363068:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363078u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363078u) [[unlikely]] return; }
L_00363078:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363EE4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036308Cu); set32(c.r[4], c.r[2].w[0] + 812u);  if (depth < kMaxDepth) unit_005A(c, 85u, depth + 1u); else { c.pc = 0x00368620u; return; } if (c.pc != 0x0036308Cu) [[unlikely]] return; }
L_0036308C:
    st32((c.r[29].w[0] + 676u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036309Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036309Cu) [[unlikely]] return; }
L_0036309C:
    set32(c.r[4], ld32((c.r[29].w[0] + 676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630A8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003630A8u) [[unlikely]] return; }
L_003630A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003630B4u) [[unlikely]] return; }
L_003630B4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630C4u); set32(c.r[6], c.r[29].w[0] + 676u);  if (depth < kMaxDepth) unit_0059(c, 636u, depth + 1u); else { c.pc = 0x00367F10u; return; } if (c.pc != 0x003630C4u) [[unlikely]] return; }
L_003630C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
    c.budget -= 1;
L_003630D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003630DCu) [[unlikely]] return; }
L_003630DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630ECu); set32(c.r[5], c.r[5].w[0] + 12411u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003630ECu) [[unlikely]] return; }
L_003630EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363180; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363100u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363100u) [[unlikely]] return; }
L_00363100:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036310Cu); set32(c.r[4], c.r[29].w[0] + 524u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0036310Cu) [[unlikely]] return; }
L_0036310C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363118u); set32(c.r[5], c.r[29].w[0] + 524u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x00363118u) [[unlikely]] return; }
L_00363118:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 524u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363128u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363128u) [[unlikely]] return; }
L_00363128:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363EF8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036313Cu); set32(c.r[4], c.r[2].w[0] + 832u);  if (depth < kMaxDepth) unit_0059(c, 625u, depth + 1u); else { c.pc = 0x00367DA0u; return; } if (c.pc != 0x0036313Cu) [[unlikely]] return; }
L_0036313C:
    st32((c.r[29].w[0] + 672u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036314Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036314Cu) [[unlikely]] return; }
L_0036314C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036315Cu); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036315Cu) [[unlikely]] return; }
L_0036315C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363168u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363168u) [[unlikely]] return; }
L_00363168:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363178u); set32(c.r[6], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_0059(c, 535u, depth + 1u); else { c.pc = 0x00367690u; return; } if (c.pc != 0x00363178u) [[unlikely]] return; }
L_00363178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
L_00363180:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036318Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036318Cu) [[unlikely]] return; }
L_0036318C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036319Cu); set32(c.r[5], c.r[5].w[0] + 12418u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0036319Cu) [[unlikely]] return; }
L_0036319C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363230; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003631B0u) [[unlikely]] return; }
L_003631B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631BCu); set32(c.r[4], c.r[29].w[0] + 520u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003631BCu) [[unlikely]] return; }
L_003631BC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631C8u); set32(c.r[5], c.r[29].w[0] + 520u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x003631C8u) [[unlikely]] return; }
L_003631C8:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 520u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003631D8u) [[unlikely]] return; }
L_003631D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363F0C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631ECu); set32(c.r[4], c.r[2].w[0] + 652u);  if (depth < kMaxDepth) unit_0059(c, 445u, depth + 1u); else { c.pc = 0x003668E0u; return; } if (c.pc != 0x003631ECu) [[unlikely]] return; }
L_003631EC:
    st32((c.r[29].w[0] + 668u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003631FCu) [[unlikely]] return; }
L_003631FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 668u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036320Cu); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036320Cu) [[unlikely]] return; }
L_0036320C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363218u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363218u) [[unlikely]] return; }
L_00363218:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363228u); set32(c.r[6], c.r[29].w[0] + 668u);  if (depth < kMaxDepth) unit_0059(c, 535u, depth + 1u); else { c.pc = 0x00367690u; return; } if (c.pc != 0x00363228u) [[unlikely]] return; }
L_00363228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
L_00363230:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036323Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036323Cu) [[unlikely]] return; }
L_0036323C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036324Cu); set32(c.r[5], c.r[5].w[0] + 12427u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0036324Cu) [[unlikely]] return; }
L_0036324C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003632E0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363260u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363260u) [[unlikely]] return; }
L_00363260:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036326Cu); set32(c.r[4], c.r[29].w[0] + 516u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0036326Cu) [[unlikely]] return; }
L_0036326C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363278u); set32(c.r[5], c.r[29].w[0] + 516u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x00363278u) [[unlikely]] return; }
L_00363278:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 516u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363288u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363288u) [[unlikely]] return; }
L_00363288:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363F20; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036329Cu); set32(c.r[4], c.r[2].w[0] + 832u);  if (depth < kMaxDepth) unit_0059(c, 625u, depth + 1u); else { c.pc = 0x00367DA0u; return; } if (c.pc != 0x0036329Cu) [[unlikely]] return; }
L_0036329C:
    st32((c.r[29].w[0] + 664u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003632ACu) [[unlikely]] return; }
L_003632AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 664u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632BCu); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003632BCu) [[unlikely]] return; }
L_003632BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003632C8u) [[unlikely]] return; }
L_003632C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632D8u); set32(c.r[6], c.r[29].w[0] + 664u);  if (depth < kMaxDepth) unit_0059(c, 535u, depth + 1u); else { c.pc = 0x00367690u; return; } if (c.pc != 0x003632D8u) [[unlikely]] return; }
L_003632D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
L_003632E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003632ECu) [[unlikely]] return; }
L_003632EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632FCu); set32(c.r[5], c.r[5].w[0] + 12434u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003632FCu) [[unlikely]] return; }
L_003632FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363390; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363310u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363310u) [[unlikely]] return; }
L_00363310:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036331Cu); set32(c.r[4], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0036331Cu) [[unlikely]] return; }
L_0036331C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363328u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x00363328u) [[unlikely]] return; }
L_00363328:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363338u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363338u) [[unlikely]] return; }
L_00363338:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363F34; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036334Cu); set32(c.r[4], c.r[2].w[0] + 672u);  if (depth < kMaxDepth) unit_0059(c, 434u, depth + 1u); else { c.pc = 0x00366770u; return; } if (c.pc != 0x0036334Cu) [[unlikely]] return; }
L_0036334C:
    st32((c.r[29].w[0] + 660u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036335Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036335Cu) [[unlikely]] return; }
L_0036335C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 660u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036336Cu); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036336Cu) [[unlikely]] return; }
L_0036336C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363378u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363378u) [[unlikely]] return; }
L_00363378:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363388u); set32(c.r[6], c.r[29].w[0] + 660u);  if (depth < kMaxDepth) unit_0059(c, 535u, depth + 1u); else { c.pc = 0x00367690u; return; } if (c.pc != 0x00363388u) [[unlikely]] return; }
L_00363388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
L_00363390:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036339Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036339Cu) [[unlikely]] return; }
L_0036339C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633ACu); set32(c.r[5], c.r[5].w[0] + 12387u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003633ACu) [[unlikely]] return; }
L_003633AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363468; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003633C0u) [[unlikely]] return; }
L_003633C0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633CCu); set32(c.r[4], c.r[29].w[0] + 508u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003633CCu) [[unlikely]] return; }
L_003633CC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633D8u); set32(c.r[5], c.r[29].w[0] + 508u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x003633D8u) [[unlikely]] return; }
L_003633D8:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 508u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003633E8u) [[unlikely]] return; }
L_003633E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363F48; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633FCu); set32(c.r[4], c.r[2].w[0] + 772u);  if (depth < kMaxDepth) unit_0059(c, 425u, depth + 1u); else { c.pc = 0x00366640u; return; } if (c.pc != 0x003633FCu) [[unlikely]] return; }
L_003633FC:
    st32((c.r[29].w[0] + 656u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036340Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036340Cu) [[unlikely]] return; }
L_0036340C:
    set32(c.r[4], ld32((c.r[29].w[0] + 656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363418u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00363418u) [[unlikely]] return; }
L_00363418:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363424u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363424u) [[unlikely]] return; }
L_00363424:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363434u); set32(c.r[6], c.r[29].w[0] + 656u);  if (depth < kMaxDepth) unit_0059(c, 332u, depth + 1u); else { c.pc = 0x00365F30u; return; } if (c.pc != 0x00363434u) [[unlikely]] return; }
L_00363434:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363440u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363440u) [[unlikely]] return; }
L_00363440:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363450u); set32(c.r[5], c.r[5].w[0] + 12981u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00363450u) [[unlikely]] return; }
L_00363450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363F5C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.r[2].w[0]);  if (t) { goto L_00363AA8; } }
    c.budget -= 1;
L_00363468:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363474u) [[unlikely]] return; }
L_00363474:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363484u); set32(c.r[5], c.r[5].w[0] + 12441u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00363484u) [[unlikely]] return; }
L_00363484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363598; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363498u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363498u) [[unlikely]] return; }
L_00363498:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634A4u); set32(c.r[4], c.r[29].w[0] + 504u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003634A4u) [[unlikely]] return; }
L_003634A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634ACu); set32(c.r[4], c.r[29].w[0] + 504u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x003705F0u; return; } if (c.pc != 0x003634ACu) [[unlikely]] return; }
L_003634AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003634BCu) [[unlikely]] return; }
L_003634BC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00363518; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003634D4u) [[unlikely]] return; }
L_003634D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634E0u); set32(c.r[4], c.r[29].w[0] + 500u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003634E0u) [[unlikely]] return; }
L_003634E0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634ECu); set32(c.r[5], c.r[29].w[0] + 500u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x003634ECu) [[unlikely]] return; }
L_003634EC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 500u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003634FCu) [[unlikely]] return; }
L_003634FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0036354C; } }
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363510u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363510u) [[unlikely]] return; }
L_00363510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363518:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363524u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363524u) [[unlikely]] return; }
L_00363524:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363530u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363530u) [[unlikely]] return; }
L_00363530:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036354C; } }
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363544u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363544u) [[unlikely]] return; }
L_00363544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_0036354C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363558u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x00363558u) [[unlikely]] return; }
L_00363558:
    st32((c.r[29].w[0] + 652u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363568u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363568u) [[unlikely]] return; }
L_00363568:
    set32(c.r[4], ld32((c.r[29].w[0] + 652u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363574u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00363574u) [[unlikely]] return; }
L_00363574:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363580u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363580u) [[unlikely]] return; }
L_00363580:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363590u); set32(c.r[6], c.r[29].w[0] + 652u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x00363590u) [[unlikely]] return; }
L_00363590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
L_00363598:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003635A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003635A4u) [[unlikely]] return; }
L_003635A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003635B4u); set32(c.r[5], c.r[5].w[0] + 12447u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003635B4u) [[unlikely]] return; }
L_003635B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363660; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003635C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003635C8u) [[unlikely]] return; }
L_003635C8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003635D4u); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003635D4u) [[unlikely]] return; }
L_003635D4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003635E0u); set32(c.r[5], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x003635E0u) [[unlikely]] return; }
L_003635E0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003635F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003635F0u) [[unlikely]] return; }
L_003635F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363600u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00363600u) [[unlikely]] return; }
L_00363600:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363F90; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363618u); set32(c.r[4], c.r[2].w[0] + 892u);  if (depth < kMaxDepth) unit_0059(c, 220u, depth + 1u); else { c.pc = 0x00365560u; return; } if (c.pc != 0x00363618u) [[unlikely]] return; }
L_00363618:
    st32((c.r[29].w[0] + 648u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363628u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363628u) [[unlikely]] return; }
L_00363628:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 648u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363638u); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00363638u) [[unlikely]] return; }
L_00363638:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363644u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363644u) [[unlikely]] return; }
L_00363644:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363654u); set32(c.r[6], c.r[29].w[0] + 648u);  if (depth < kMaxDepth) unit_0059(c, 535u, depth + 1u); else { c.pc = 0x00367690u; return; } if (c.pc != 0x00363654u) [[unlikely]] return; }
L_00363654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
    c.budget -= 1;
L_00363660:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036366Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036366Cu) [[unlikely]] return; }
L_0036366C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036367Cu); set32(c.r[5], c.r[5].w[0] + 12451u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0036367Cu) [[unlikely]] return; }
L_0036367C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363728; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363690u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363690u) [[unlikely]] return; }
L_00363690:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036369Cu); set32(c.r[4], c.r[29].w[0] + 492u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0036369Cu) [[unlikely]] return; }
L_0036369C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636A8u); set32(c.r[5], c.r[29].w[0] + 492u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x003636A8u) [[unlikely]] return; }
L_003636A8:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 492u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003636B8u) [[unlikely]] return; }
L_003636B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363FA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x003636C8u) [[unlikely]] return; }
L_003636C8:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363FA4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636E0u); set32(c.r[4], c.r[2].w[0] + 872u);  if (depth < kMaxDepth) unit_0059(c, 211u, depth + 1u); else { c.pc = 0x00365410u; return; } if (c.pc != 0x003636E0u) [[unlikely]] return; }
L_003636E0:
    st32((c.r[29].w[0] + 644u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003636F0u) [[unlikely]] return; }
L_003636F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 644u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363700u); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00363700u) [[unlikely]] return; }
L_00363700:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036370Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036370Cu) [[unlikely]] return; }
L_0036370C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036371Cu); set32(c.r[6], c.r[29].w[0] + 644u);  if (depth < kMaxDepth) unit_0059(c, 535u, depth + 1u); else { c.pc = 0x00367690u; return; } if (c.pc != 0x0036371Cu) [[unlikely]] return; }
L_0036371C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
    c.budget -= 1;
L_00363728:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363734u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363734u) [[unlikely]] return; }
L_00363734:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363744u); set32(c.r[5], c.r[5].w[0] + 12383u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00363744u) [[unlikely]] return; }
L_00363744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363800; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363758u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363758u) [[unlikely]] return; }
L_00363758:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363764u); set32(c.r[4], c.r[29].w[0] + 488u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00363764u) [[unlikely]] return; }
L_00363764:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363770u); set32(c.r[5], c.r[29].w[0] + 488u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x00363770u) [[unlikely]] return; }
L_00363770:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 488u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363780u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363780u) [[unlikely]] return; }
L_00363780:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00363FB8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363798u); st32((c.r[29].w[0] + 640u), 0u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363798u) [[unlikely]] return; }
L_00363798:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637A8u); set32(c.r[5], c.r[5].w[0] + 12991u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003637A8u) [[unlikely]] return; }
L_003637A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363FCC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 184u);
    st32((c.r[29].w[0] + 640u), c.r[2].w[0]);
    c.budget -= 4;
L_003637C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003637CCu) [[unlikely]] return; }
L_003637CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 640u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003637D8u) [[unlikely]] return; }
L_003637D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637E4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003637E4u) [[unlikely]] return; }
L_003637E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637F4u); set32(c.r[6], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_005B(c, 66u, depth + 1u); else { c.pc = 0x0036C8C0u; return; } if (c.pc != 0x003637F4u) [[unlikely]] return; }
L_003637F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
    c.budget -= 1;
L_00363800:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036380Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036380Cu) [[unlikely]] return; }
L_0036380C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036381Cu); set32(c.r[5], c.r[5].w[0] + 12531u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0036381Cu) [[unlikely]] return; }
L_0036381C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036382Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x0036382Cu) [[unlikely]] return; }
L_0036382C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363870; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363844u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363844u) [[unlikely]] return; }
L_00363844:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363850u); set32(c.r[4], c.r[29].w[0] + 484u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00363850u) [[unlikely]] return; }
L_00363850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363858u); set32(c.r[4], c.r[29].w[0] + 484u);  if (depth < kMaxDepth) unit_005C(c, 86u, depth + 1u); else { c.pc = 0x00370710u; return; } if (c.pc != 0x00363858u) [[unlikely]] return; }
L_00363858:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 484u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363868u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363868u) [[unlikely]] return; }
L_00363868:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00363AA8; } }
L_00363870:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036387Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036387Cu) [[unlikely]] return; }
L_0036387C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036388Cu); set32(c.r[5], c.r[5].w[0] + 12534u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0036388Cu) [[unlikely]] return; }
L_0036388C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036389Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x0036389Cu) [[unlikely]] return; }
L_0036389C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x003638B0u) [[unlikely]] return; }
L_003638B0:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363AA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638C8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003638C8u) [[unlikely]] return; }
L_003638C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638D8u); set32(c.r[5], ld32((c.r[2].w[0] - 22912u)));  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003638D8u) [[unlikely]] return; }
L_003638D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363AA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638ECu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003638ECu) [[unlikely]] return; }
L_003638EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638FCu); set32(c.r[5], ld32((c.r[2].w[0] - 22908u)));  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003638FCu) [[unlikely]] return; }
L_003638FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363AA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363910u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363910u) [[unlikely]] return; }
L_00363910:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363920u); set32(c.r[5], ld32((c.r[2].w[0] - 22904u)));  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00363920u) [[unlikely]] return; }
L_00363920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363AA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363934u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363934u) [[unlikely]] return; }
L_00363934:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363944u); set32(c.r[5], ld32((c.r[2].w[0] - 22900u)));  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00363944u) [[unlikely]] return; }
L_00363944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
    c.budget -= 1;
L_00363950:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036395Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036395Cu) [[unlikely]] return; }
L_0036395C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036396Cu); set32(c.r[5], c.r[5].w[0] + 12461u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0036396Cu) [[unlikely]] return; }
L_0036396C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363A00; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363980u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363980u) [[unlikely]] return; }
L_00363980:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036398Cu); set32(c.r[4], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0036398Cu) [[unlikely]] return; }
L_0036398C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363998u); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x00363998u) [[unlikely]] return; }
L_00363998:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003639A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003639A8u) [[unlikely]] return; }
L_003639A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 17u, depth); } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003639BCu); set32(c.r[4], c.r[2].w[0] + 992u);  if (depth < kMaxDepth) unit_0059(c, 202u, depth + 1u); else { c.pc = 0x003652C0u; return; } if (c.pc != 0x003639BCu) [[unlikely]] return; }
L_003639BC:
    st32((c.r[29].w[0] + 636u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003639CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003639CCu) [[unlikely]] return; }
L_003639CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 636u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003639DCu); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003639DCu) [[unlikely]] return; }
L_003639DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003639E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003639E8u) [[unlikely]] return; }
L_003639E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003639F8u); set32(c.r[6], c.r[29].w[0] + 636u);  if (depth < kMaxDepth) unit_0059(c, 535u, depth + 1u); else { c.pc = 0x00367690u; return; } if (c.pc != 0x003639F8u) [[unlikely]] return; }
L_003639F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363AA8; } }
L_00363A00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363A0Cu) [[unlikely]] return; }
L_00363A0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A1Cu); set32(c.r[5], c.r[5].w[0] + 12456u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00363A1Cu) [[unlikely]] return; }
L_00363A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363AA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A30u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363A30u) [[unlikely]] return; }
L_00363A30:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A3Cu); set32(c.r[4], c.r[29].w[0] + 476u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00363A3Cu) [[unlikely]] return; }
L_00363A3C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A48u); set32(c.r[5], c.r[29].w[0] + 476u);  if (depth < kMaxDepth) unit_005C(c, 19u, depth + 1u); else { c.pc = 0x00370190u; return; } if (c.pc != 0x00363A48u) [[unlikely]] return; }
L_00363A48:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 476u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363A58u) [[unlikely]] return; }
L_00363A58:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 19u, depth); } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A6Cu); set32(c.r[4], c.r[2].w[0] + 1012u);  if (depth < kMaxDepth) unit_0059(c, 188u, depth + 1u); else { c.pc = 0x003650E0u; return; } if (c.pc != 0x00363A6Cu) [[unlikely]] return; }
L_00363A6C:
    st32((c.r[29].w[0] + 632u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A7Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363A7Cu) [[unlikely]] return; }
L_00363A7C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 632u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A8Cu); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00363A8Cu) [[unlikely]] return; }
L_00363A8C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363A98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363A98u) [[unlikely]] return; }
L_00363A98:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AA8u); set32(c.r[6], c.r[29].w[0] + 632u);  if (depth < kMaxDepth) unit_0059(c, 535u, depth + 1u); else { c.pc = 0x00367690u; return; } if (c.pc != 0x00363AA8u) [[unlikely]] return; }
L_00363AA8:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363AB4u) [[unlikely]] return; }
L_00363AB4:
    c.budget -= 1;
L_00363AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AC0u); set32(c.r[4], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_0056(c, 100u, depth + 1u); else { c.pc = 0x00358900u; return; } if (c.pc != 0x00363AC0u) [[unlikely]] return; }
L_00363AC0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363ACCu); set32(c.r[5], c.r[21].w[0] + 220u);  if (depth < kMaxDepth) unit_0056(c, 96u, depth + 1u); else { c.pc = 0x00358880u; return; } if (c.pc != 0x00363ACCu) [[unlikely]] return; }
L_00363ACC:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AD8u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0056(c, 93u, depth + 1u); else { c.pc = 0x00358830u; return; } if (c.pc != 0x00363AD8u) [[unlikely]] return; }
L_00363AD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00362BA0u | kUnwind; return; } goto L_00362BA0; } }
L_00363AE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 472u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AF0u); set32(c.r[5], c.r[5].w[0] + 12378u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363AF0u) [[unlikely]] return; }
L_00363AF0:
    set32(c.r[4], c.r[21].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AFCu); set32(c.r[5], c.r[29].w[0] + 472u);  if (depth < kMaxDepth) unit_0056(c, 417u, depth + 1u); else { c.pc = 0x0035B500u; return; } if (c.pc != 0x00363AFCu) [[unlikely]] return; }
L_00363AFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 472u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363B0Cu) [[unlikely]] return; }
L_00363B0C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 21u, depth); } }
L_00363B14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B24u); set32(c.r[5], c.r[5].w[0] + 13006u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363B24u) [[unlikely]] return; }
L_00363B24:
    set32(c.r[4], c.r[21].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B30u); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0056(c, 417u, depth + 1u); else { c.pc = 0x0035B500u; return; } if (c.pc != 0x00363B30u) [[unlikely]] return; }
L_00363B30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363B40u) [[unlikely]] return; }
L_00363B40:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 26u, depth); } }
L_00363B48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 456u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B58u); set32(c.r[5], c.r[5].w[0] + 13012u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363B58u) [[unlikely]] return; }
L_00363B58:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B64u); set32(c.r[5], c.r[29].w[0] + 456u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363B64u) [[unlikely]] return; }
L_00363B64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 456u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363B74u) [[unlikely]] return; }
L_00363B74:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 31u, depth); } }
L_00363B7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B8Cu); set32(c.r[5], c.r[5].w[0] + 13027u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363B8Cu) [[unlikely]] return; }
L_00363B8C:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B98u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363B98u) [[unlikely]] return; }
L_00363B98:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363BA8u) [[unlikely]] return; }
L_00363BA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 36u, depth); } }
L_00363BB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BC0u); set32(c.r[5], c.r[5].w[0] + 13042u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363BC0u) [[unlikely]] return; }
L_00363BC0:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BCCu); set32(c.r[5], c.r[29].w[0] + 440u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363BCCu) [[unlikely]] return; }
L_00363BCC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363BDCu) [[unlikely]] return; }
L_00363BDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 41u, depth); } }
L_00363BE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BF4u); set32(c.r[5], c.r[5].w[0] + 13057u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363BF4u) [[unlikely]] return; }
L_00363BF4:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C00u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363C00u) [[unlikely]] return; }
L_00363C00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363C10u) [[unlikely]] return; }
L_00363C10:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 46u, depth); } }
L_00363C18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C28u); set32(c.r[5], c.r[5].w[0] + 13072u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363C28u) [[unlikely]] return; }
L_00363C28:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C34u); set32(c.r[5], c.r[29].w[0] + 424u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363C34u) [[unlikely]] return; }
L_00363C34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C44u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363C44u) [[unlikely]] return; }
L_00363C44:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 51u, depth); } }
L_00363C4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C5Cu); set32(c.r[5], c.r[5].w[0] + 13087u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363C5Cu) [[unlikely]] return; }
L_00363C5C:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C68u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363C68u) [[unlikely]] return; }
L_00363C68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363C78u) [[unlikely]] return; }
L_00363C78:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 56u, depth); } }
L_00363C80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C90u); set32(c.r[5], c.r[5].w[0] + 13107u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363C90u) [[unlikely]] return; }
L_00363C90:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C9Cu); set32(c.r[5], c.r[29].w[0] + 408u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363C9Cu) [[unlikely]] return; }
L_00363C9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363CACu) [[unlikely]] return; }
L_00363CAC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 61u, depth); } }
L_00363CB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CC4u); set32(c.r[5], c.r[5].w[0] + 13127u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363CC4u) [[unlikely]] return; }
L_00363CC4:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CD0u); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363CD0u) [[unlikely]] return; }
L_00363CD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CE0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363CE0u) [[unlikely]] return; }
L_00363CE0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 66u, depth); } }
L_00363CE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 392u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CF8u); set32(c.r[5], c.r[5].w[0] + 13147u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363CF8u) [[unlikely]] return; }
L_00363CF8:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D04u); set32(c.r[5], c.r[29].w[0] + 392u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363D04u) [[unlikely]] return; }
L_00363D04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 392u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363D14u) [[unlikely]] return; }
L_00363D14:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 71u, depth); } }
L_00363D1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D2Cu); set32(c.r[5], c.r[5].w[0] + 13167u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363D2Cu) [[unlikely]] return; }
L_00363D2C:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D38u); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363D38u) [[unlikely]] return; }
L_00363D38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363D48u) [[unlikely]] return; }
L_00363D48:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 76u, depth); } }
L_00363D50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D60u); set32(c.r[5], c.r[5].w[0] + 13187u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363D60u) [[unlikely]] return; }
L_00363D60:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D6Cu); set32(c.r[5], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363D6Cu) [[unlikely]] return; }
L_00363D6C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363D7Cu) [[unlikely]] return; }
L_00363D7C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 81u, depth); } }
L_00363D84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D94u); set32(c.r[5], c.r[5].w[0] + 13207u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363D94u) [[unlikely]] return; }
L_00363D94:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363DA0u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363DA0u) [[unlikely]] return; }
L_00363DA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363DB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363DB0u) [[unlikely]] return; }
L_00363DB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 86u, depth); } }
L_00363DB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363DC8u); set32(c.r[5], c.r[5].w[0] + 13227u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363DC8u) [[unlikely]] return; }
L_00363DC8:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363DD4u); set32(c.r[5], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363DD4u) [[unlikely]] return; }
L_00363DD4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363DE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363DE4u) [[unlikely]] return; }
L_00363DE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 91u, depth); } }
L_00363DEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363DFCu); set32(c.r[5], c.r[5].w[0] + 13247u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363DFCu) [[unlikely]] return; }
L_00363DFC:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E08u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363E08u) [[unlikely]] return; }
L_00363E08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363E18u) [[unlikely]] return; }
L_00363E18:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 96u, depth); } }
L_00363E20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E30u); set32(c.r[5], c.r[5].w[0] + 13260u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00363E30u) [[unlikely]] return; }
L_00363E30:
    set32(c.r[4], c.r[21].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E3Cu); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00363E3Cu) [[unlikely]] return; }
L_00363E3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363E4Cu) [[unlikely]] return; }
L_00363E4C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 101u, depth); } }
L_00363E54:
    st32((c.r[21].w[0] + 12u), 0u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[21].w[0] + 220u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E68u); st32((c.r[21].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0056(c, 445u, depth + 1u); else { c.pc = 0x0035B810u; return; } if (c.pc != 0x00363E68u) [[unlikely]] return; }
L_00363E68:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E74u); set32(c.r[5], c.r[21].w[0] + 220u);  if (depth < kMaxDepth) unit_0056(c, 96u, depth + 1u); else { c.pc = 0x00358880u; return; } if (c.pc != 0x00363E74u) [[unlikely]] return; }
L_00363E74:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E80u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0056(c, 93u, depth + 1u); else { c.pc = 0x00358830u; return; } if (c.pc != 0x00363E80u) [[unlikely]] return; }
L_00363E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 106u, depth); } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_00363E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363E94:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363EA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363EA0u) [[unlikely]] return; }
L_00363EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363EA8:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363EB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363EB4u) [[unlikely]] return; }
L_00363EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363EBC:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363EC8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363EC8u) [[unlikely]] return; }
L_00363EC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363ED0:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363EDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363EDCu) [[unlikely]] return; }
L_00363EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363EE4:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363EF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363EF0u) [[unlikely]] return; }
L_00363EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363EF8:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363F04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363F04u) [[unlikely]] return; }
L_00363F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363F0C:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363F18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363F18u) [[unlikely]] return; }
L_00363F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363F20:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363F2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363F2Cu) [[unlikely]] return; }
L_00363F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363F34:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363F40u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363F40u) [[unlikely]] return; }
L_00363F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363F48:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363F54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363F54u) [[unlikely]] return; }
L_00363F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363F5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363F68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363F68u) [[unlikely]] return; }
L_00363F68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363F78u); set32(c.r[5], c.r[5].w[0] + 13274u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00363F78u) [[unlikely]] return; }
L_00363F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363AA8u | kUnwind; return; } goto L_00363AA8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363AA8u | kUnwind; return; } goto L_00363AA8; } }
    c.budget -= 1;
L_00363F90:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363F9Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363F9Cu) [[unlikely]] return; }
L_00363F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363FA4:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363FB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363FB0u) [[unlikely]] return; }
L_00363FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363FB8:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363FC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00363FC4u) [[unlikely]] return; }
L_00363FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 161u, depth); } }
L_00363FCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363FD8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00363FD8u) [[unlikely]] return; }
L_00363FD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363FE8u); set32(c.r[5], c.r[5].w[0] + 13281u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00363FE8u) [[unlikely]] return; }
L_00363FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0059(c, 1u, depth); } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 200u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003637C0u | kUnwind; return; } goto L_003637C0; } }
    [[clang::musttail]] return unit_0059(c, 1u, depth);
}

}

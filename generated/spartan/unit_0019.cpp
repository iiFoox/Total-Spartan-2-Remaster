#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0019[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7,
    0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0,
    40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58,
    0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0,
    0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0,
    0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 143, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0,
    0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0,
    0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0,
    0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276,
    0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 296, 297, 0, 0, 0, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308,
    0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0,
    317, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0,
    325, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 348,
    0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0,
    370, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0,
    0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0,
    0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 409,
    0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0,
    0, 424, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0,
    0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0,
    0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0,
    451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0,
    0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0,
    0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 477, 0,
    0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 487, 0,
    0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0,
    0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0,
    514, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0,
    0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 541, 0,
    0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0,
    0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0,
    558, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0,
    0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 566, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0,
    0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0,
};

void unit_0019(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00264000;
    case 2u: goto L_00264018;
    case 3u: goto L_0026403C;
    case 4u: goto L_00264060;
    case 5u: goto L_00264068;
    case 6u: goto L_00264074;
    case 7u: goto L_0026407C;
    case 8u: goto L_00264090;
    case 9u: goto L_002640A0;
    case 10u: goto L_002640B8;
    case 11u: goto L_002640C4;
    case 12u: goto L_002640D4;
    case 13u: goto L_002640E8;
    case 14u: goto L_0026410C;
    case 15u: goto L_00264128;
    case 16u: goto L_00264134;
    case 17u: goto L_00264144;
    case 18u: goto L_00264168;
    case 19u: goto L_00264190;
    case 20u: goto L_002641AC;
    case 21u: goto L_002641B8;
    case 22u: goto L_002641C8;
    case 23u: goto L_002641EC;
    case 24u: goto L_00264214;
    case 25u: goto L_00264230;
    case 26u: goto L_0026423C;
    case 27u: goto L_00264250;
    case 28u: goto L_002642B4;
    case 29u: goto L_002642C4;
    case 30u: goto L_00264308;
    case 31u: goto L_00264338;
    case 32u: goto L_00264364;
    case 33u: goto L_0026436C;
    case 34u: goto L_002643A4;
    case 35u: goto L_002643B4;
    case 36u: goto L_002643C0;
    case 37u: goto L_002643D4;
    case 38u: goto L_002643E0;
    case 39u: goto L_002643F4;
    case 40u: goto L_00264400;
    case 41u: goto L_00264414;
    case 42u: goto L_00264420;
    case 43u: goto L_00264450;
    case 44u: goto L_002644EC;
    case 45u: goto L_00264518;
    case 46u: goto L_0026452C;
    case 47u: goto L_00264588;
    case 48u: goto L_002645D0;
    case 49u: goto L_0026460C;
    case 50u: goto L_0026462C;
    case 51u: goto L_00264654;
    case 52u: goto L_00264684;
    case 53u: goto L_002646B0;
    case 54u: goto L_002646B8;
    case 55u: goto L_002646CC;
    case 56u: goto L_002646DC;
    case 57u: goto L_002646E8;
    case 58u: goto L_002646FC;
    case 59u: goto L_00264708;
    case 60u: goto L_0026471C;
    case 61u: goto L_00264728;
    case 62u: goto L_0026473C;
    case 63u: goto L_00264748;
    case 64u: goto L_00264760;
    case 65u: goto L_00264770;
    case 66u: goto L_00264780;
    case 67u: goto L_002647B4;
    case 68u: goto L_002647C0;
    case 69u: goto L_002647D0;
    case 70u: goto L_00264800;
    case 71u: goto L_00264824;
    case 72u: goto L_00264848;
    case 73u: goto L_0026486C;
    case 74u: goto L_00264874;
    case 75u: goto L_00264884;
    case 76u: goto L_002648C0;
    case 77u: goto L_002648D0;
    case 78u: goto L_002648E8;
    case 79u: goto L_0026490C;
    case 80u: goto L_00264930;
    case 81u: goto L_00264938;
    case 82u: goto L_00264958;
    case 83u: goto L_002649A0;
    case 84u: goto L_002649A8;
    case 85u: goto L_002649B8;
    case 86u: goto L_002649C8;
    case 87u: goto L_002649EC;
    case 88u: goto L_00264A04;
    case 89u: goto L_00264A18;
    case 90u: goto L_00264A48;
    case 91u: goto L_00264A50;
    case 92u: goto L_00264A58;
    case 93u: goto L_00264A64;
    case 94u: goto L_00264A84;
    case 95u: goto L_00264A90;
    case 96u: goto L_00264AAC;
    case 97u: goto L_00264ABC;
    case 98u: goto L_00264AC8;
    case 99u: goto L_00264ADC;
    case 100u: goto L_00264AE8;
    case 101u: goto L_00264B08;
    case 102u: goto L_00264B30;
    case 103u: goto L_00264B54;
    case 104u: goto L_00264B78;
    case 105u: goto L_00264B80;
    case 106u: goto L_00264B90;
    case 107u: goto L_00264BB0;
    case 108u: goto L_00264BE0;
    case 109u: goto L_00264C10;
    case 110u: goto L_00264C18;
    case 111u: goto L_00264C30;
    case 112u: goto L_00264C5C;
    case 113u: goto L_00264C6C;
    case 114u: goto L_00264C78;
    case 115u: goto L_00264C8C;
    case 116u: goto L_00264C98;
    case 117u: goto L_00264CAC;
    case 118u: goto L_00264CB8;
    case 119u: goto L_00264CD8;
    case 120u: goto L_00264CF0;
    case 121u: goto L_00264D14;
    case 122u: goto L_00264D38;
    case 123u: goto L_00264D40;
    case 124u: goto L_00264D60;
    case 125u: goto L_00264D9C;
    case 126u: goto L_00264DA4;
    case 127u: goto L_00264DB4;
    case 128u: goto L_00264DC4;
    case 129u: goto L_00264DD8;
    case 130u: goto L_00264DE8;
    case 131u: goto L_00264DF4;
    case 132u: goto L_00264E08;
    case 133u: goto L_00264E14;
    case 134u: goto L_00264E34;
    case 135u: goto L_00264E5C;
    case 136u: goto L_00264EA0;
    case 137u: goto L_00264EC0;
    case 138u: goto L_00264EE8;
    case 139u: goto L_00264EF4;
    case 140u: goto L_00264F34;
    case 141u: goto L_00264F58;
    case 142u: goto L_00264F7C;
    case 143u: goto L_00264F84;
    case 144u: goto L_00264F8C;
    case 145u: goto L_00264F94;
    case 146u: goto L_00264FA0;
    case 147u: goto L_00264FC4;
    case 148u: goto L_00264FE8;
    case 149u: goto L_00264FF0;
    case 150u: goto L_0026500C;
    case 151u: goto L_00265014;
    case 152u: goto L_00265024;
    case 153u: goto L_0026502C;
    case 154u: goto L_00265034;
    case 155u: goto L_00265058;
    case 156u: goto L_00265064;
    case 157u: goto L_00265090;
    case 158u: goto L_002650A0;
    case 159u: goto L_002650AC;
    case 160u: goto L_002650CC;
    case 161u: goto L_002650E8;
    case 162u: goto L_002650F0;
    case 163u: goto L_00265114;
    case 164u: goto L_00265138;
    case 165u: goto L_00265140;
    case 166u: goto L_0026515C;
    case 167u: goto L_00265164;
    case 168u: goto L_00265174;
    case 169u: goto L_00265184;
    case 170u: goto L_00265198;
    case 171u: goto L_002651A8;
    case 172u: goto L_002651B4;
    case 173u: goto L_002651D4;
    case 174u: goto L_002651FC;
    case 175u: goto L_00265220;
    case 176u: goto L_00265248;
    case 177u: goto L_0026526C;
    case 178u: goto L_00265290;
    case 179u: goto L_00265298;
    case 180u: goto L_002652C0;
    case 181u: goto L_00265304;
    case 182u: goto L_00265348;
    case 183u: goto L_00265388;
    case 184u: goto L_00265390;
    case 185u: goto L_002653A0;
    case 186u: goto L_002653B8;
    case 187u: goto L_002653C8;
    case 188u: goto L_002653D4;
    case 189u: goto L_002653E8;
    case 190u: goto L_002653F4;
    case 191u: goto L_00265408;
    case 192u: goto L_00265414;
    case 193u: goto L_00265428;
    case 194u: goto L_00265434;
    case 195u: goto L_00265454;
    case 196u: goto L_00265480;
    case 197u: goto L_002654B0;
    case 198u: goto L_00265608;
    case 199u: goto L_00265720;
    case 200u: goto L_00265730;
    case 201u: goto L_0026573C;
    case 202u: goto L_00265748;
    case 203u: goto L_00265754;
    case 204u: goto L_002657B0;
    case 205u: goto L_002657E4;
    case 206u: goto L_00265808;
    case 207u: goto L_0026582C;
    case 208u: goto L_00265834;
    case 209u: goto L_00265854;
    case 210u: goto L_00265880;
    case 211u: goto L_00265888;
    case 212u: goto L_00265898;
    case 213u: goto L_002658B4;
    case 214u: goto L_002658C4;
    case 215u: goto L_002658D0;
    case 216u: goto L_002658E4;
    case 217u: goto L_002658F0;
    case 218u: goto L_00265910;
    case 219u: goto L_00265940;
    case 220u: goto L_00265974;
    case 221u: goto L_00265998;
    case 222u: goto L_002659BC;
    case 223u: goto L_002659C4;
    case 224u: goto L_002659E4;
    case 225u: goto L_00265A10;
    case 226u: goto L_00265A18;
    case 227u: goto L_00265A28;
    case 228u: goto L_00265A44;
    case 229u: goto L_00265A54;
    case 230u: goto L_00265A60;
    case 231u: goto L_00265A74;
    case 232u: goto L_00265A80;
    case 233u: goto L_00265AA0;
    case 234u: goto L_00265AD0;
    case 235u: goto L_00265B18;
    case 236u: goto L_00265B24;
    case 237u: goto L_00265B30;
    case 238u: goto L_00265B50;
    case 239u: goto L_00265B74;
    case 240u: goto L_00265B98;
    case 241u: goto L_00265BA0;
    case 242u: goto L_00265BAC;
    case 243u: goto L_00265BB8;
    case 244u: goto L_00265BC0;
    case 245u: goto L_00265BE8;
    case 246u: goto L_00265C04;
    case 247u: goto L_00265C1C;
    case 248u: goto L_00265C28;
    case 249u: goto L_00265C44;
    case 250u: goto L_00265C54;
    case 251u: goto L_00265C68;
    case 252u: goto L_00265C74;
    case 253u: goto L_00265C84;
    case 254u: goto L_00265CA8;
    case 255u: goto L_00265CB8;
    case 256u: goto L_00265CC0;
    case 257u: goto L_00265CF4;
    case 258u: goto L_00265D30;
    case 259u: goto L_00265D68;
    case 260u: goto L_00265D8C;
    case 261u: goto L_00265DB0;
    case 262u: goto L_00265DB8;
    case 263u: goto L_00265DD8;
    case 264u: goto L_00265E08;
    case 265u: goto L_00265E48;
    case 266u: goto L_00265E50;
    case 267u: goto L_00265E60;
    case 268u: goto L_00265E7C;
    case 269u: goto L_00265E94;
    case 270u: goto L_00265EA0;
    case 271u: goto L_00265EB4;
    case 272u: goto L_00265EC0;
    case 273u: goto L_00265ECC;
    case 274u: goto L_00265ED8;
    case 275u: goto L_00265EEC;
    case 276u: goto L_00265EFC;
    case 277u: goto L_00265F08;
    case 278u: goto L_00265F1C;
    case 279u: goto L_00265F28;
    case 280u: goto L_00265F3C;
    case 281u: goto L_00265F48;
    case 282u: goto L_00265F68;
    case 283u: goto L_00265F90;
    case 284u: goto L_0026602C;
    case 285u: goto L_00266050;
    case 286u: goto L_00266060;
    case 287u: goto L_00266070;
    case 288u: goto L_002660A0;
    case 289u: goto L_00266124;
    case 290u: goto L_00266148;
    case 291u: goto L_0026616C;
    case 292u: goto L_00266174;
    case 293u: goto L_00266220;
    case 294u: goto L_00266224;
    case 295u: goto L_00266254;
    case 296u: goto L_00266258;
    case 297u: goto L_0026625C;
    case 298u: goto L_0026627C;
    case 299u: goto L_002662B4;
    case 300u: goto L_002662E4;
    case 301u: goto L_00266314;
    case 302u: goto L_00266344;
    case 303u: goto L_00266374;
    case 304u: goto L_002663B4;
    case 305u: goto L_002663BC;
    case 306u: goto L_002663CC;
    case 307u: goto L_002663E4;
    case 308u: goto L_002663FC;
    case 309u: goto L_00266408;
    case 310u: goto L_0026641C;
    case 311u: goto L_0026642C;
    case 312u: goto L_00266440;
    case 313u: goto L_00266450;
    case 314u: goto L_002664D0;
    case 315u: goto L_002664E0;
    case 316u: goto L_002664EC;
    case 317u: goto L_00266500;
    case 318u: goto L_0026650C;
    case 319u: goto L_00266520;
    case 320u: goto L_0026652C;
    case 321u: goto L_00266540;
    case 322u: goto L_0026654C;
    case 323u: goto L_00266560;
    case 324u: goto L_0026656C;
    case 325u: goto L_00266580;
    case 326u: goto L_0026658C;
    case 327u: goto L_002665A0;
    case 328u: goto L_002665AC;
    case 329u: goto L_002665CC;
    case 330u: goto L_00266610;
    case 331u: goto L_00266648;
    case 332u: goto L_0026666C;
    case 333u: goto L_00266690;
    case 334u: goto L_00266698;
    case 335u: goto L_002666B8;
    case 336u: goto L_002666E8;
    case 337u: goto L_00266718;
    case 338u: goto L_00266758;
    case 339u: goto L_00266760;
    case 340u: goto L_00266770;
    case 341u: goto L_00266788;
    case 342u: goto L_002667A0;
    case 343u: goto L_002667AC;
    case 344u: goto L_002667C0;
    case 345u: goto L_002667D0;
    case 346u: goto L_002667DC;
    case 347u: goto L_002667F0;
    case 348u: goto L_002667FC;
    case 349u: goto L_00266810;
    case 350u: goto L_0026681C;
    case 351u: goto L_00266830;
    case 352u: goto L_0026683C;
    case 353u: goto L_0026685C;
    case 354u: goto L_00266890;
    case 355u: goto L_00266900;
    case 356u: goto L_00266950;
    case 357u: goto L_00266960;
    case 358u: goto L_00266974;
    case 359u: goto L_00266998;
    case 360u: goto L_002669BC;
    case 361u: goto L_002669C4;
    case 362u: goto L_002669E4;
    case 363u: goto L_00266A28;
    case 364u: goto L_00266A68;
    case 365u: goto L_00266A70;
    case 366u: goto L_00266A80;
    case 367u: goto L_00266AA0;
    case 368u: goto L_00266AE4;
    case 369u: goto L_00266AF4;
    case 370u: goto L_00266B00;
    case 371u: goto L_00266B14;
    case 372u: goto L_00266B20;
    case 373u: goto L_00266B34;
    case 374u: goto L_00266B40;
    case 375u: goto L_00266B60;
    case 376u: goto L_00266B90;
    case 377u: goto L_00266BA0;
    case 378u: goto L_00266BB8;
    case 379u: goto L_00266BDC;
    case 380u: goto L_00266C00;
    case 381u: goto L_00266C08;
    case 382u: goto L_00266C28;
    case 383u: goto L_00266C54;
    case 384u: goto L_00266C5C;
    case 385u: goto L_00266C6C;
    case 386u: goto L_00266C84;
    case 387u: goto L_00266C94;
    case 388u: goto L_00266CA0;
    case 389u: goto L_00266CB4;
    case 390u: goto L_00266CC0;
    case 391u: goto L_00266CE0;
    case 392u: goto L_00266D10;
    case 393u: goto L_00266D38;
    case 394u: goto L_00266D5C;
    case 395u: goto L_00266D80;
    case 396u: goto L_00266D88;
    case 397u: goto L_00266DA8;
    case 398u: goto L_00266DEC;
    case 399u: goto L_00266E30;
    case 400u: goto L_00266E70;
    case 401u: goto L_00266E78;
    case 402u: goto L_00266E88;
    case 403u: goto L_00266EA0;
    case 404u: goto L_00266EB0;
    case 405u: goto L_00266EBC;
    case 406u: goto L_00266ED0;
    case 407u: goto L_00266EDC;
    case 408u: goto L_00266EF0;
    case 409u: goto L_00266EFC;
    case 410u: goto L_00266F10;
    case 411u: goto L_00266F1C;
    case 412u: goto L_00266F3C;
    case 413u: goto L_00266F70;
    case 414u: goto L_00266F88;
    case 415u: goto L_00266FAC;
    case 416u: goto L_00266FD0;
    case 417u: goto L_00266FD8;
    case 418u: goto L_00266FF8;
    case 419u: goto L_00267038;
    case 420u: goto L_00267040;
    case 421u: goto L_00267050;
    case 422u: goto L_00267068;
    case 423u: goto L_00267078;
    case 424u: goto L_00267084;
    case 425u: goto L_00267098;
    case 426u: goto L_002670A4;
    case 427u: goto L_002670C4;
    case 428u: goto L_002670F0;
    case 429u: goto L_00267100;
    case 430u: goto L_00267124;
    case 431u: goto L_00267148;
    case 432u: goto L_00267150;
    case 433u: goto L_0026716C;
    case 434u: goto L_00267174;
    case 435u: goto L_00267184;
    case 436u: goto L_0026719C;
    case 437u: goto L_002671AC;
    case 438u: goto L_002671B8;
    case 439u: goto L_002671D8;
    case 440u: goto L_00267200;
    case 441u: goto L_00267218;
    case 442u: goto L_0026723C;
    case 443u: goto L_00267260;
    case 444u: goto L_00267268;
    case 445u: goto L_00267288;
    case 446u: goto L_002672B4;
    case 447u: goto L_002672BC;
    case 448u: goto L_002672CC;
    case 449u: goto L_002672E4;
    case 450u: goto L_002672F4;
    case 451u: goto L_00267300;
    case 452u: goto L_00267314;
    case 453u: goto L_00267320;
    case 454u: goto L_00267340;
    case 455u: goto L_00267370;
    case 456u: goto L_00267388;
    case 457u: goto L_002673AC;
    case 458u: goto L_002673D0;
    case 459u: goto L_002673D8;
    case 460u: goto L_002673F8;
    case 461u: goto L_00267424;
    case 462u: goto L_0026742C;
    case 463u: goto L_0026743C;
    case 464u: goto L_00267454;
    case 465u: goto L_00267464;
    case 466u: goto L_00267470;
    case 467u: goto L_00267484;
    case 468u: goto L_00267490;
    case 469u: goto L_002674B0;
    case 470u: goto L_002674E0;
    case 471u: goto L_002674F0;
    case 472u: goto L_00267514;
    case 473u: goto L_00267538;
    case 474u: goto L_00267540;
    case 475u: goto L_00267560;
    case 476u: goto L_00267568;
    case 477u: goto L_00267578;
    case 478u: goto L_00267590;
    case 479u: goto L_002675A0;
    case 480u: goto L_002675AC;
    case 481u: goto L_002675CC;
    case 482u: goto L_002675F0;
    case 483u: goto L_00267618;
    case 484u: goto L_0026763C;
    case 485u: goto L_00267660;
    case 486u: goto L_00267668;
    case 487u: goto L_00267678;
    case 488u: goto L_00267694;
    case 489u: goto L_002676D8;
    case 490u: goto L_0026771C;
    case 491u: goto L_00267734;
    case 492u: goto L_00267740;
    case 493u: goto L_00267748;
    case 494u: goto L_00267758;
    case 495u: goto L_00267778;
    case 496u: goto L_00267794;
    case 497u: goto L_002677A4;
    case 498u: goto L_002677B0;
    case 499u: goto L_002677C4;
    case 500u: goto L_002677D0;
    case 501u: goto L_002677E4;
    case 502u: goto L_002677F0;
    case 503u: goto L_00267818;
    case 504u: goto L_00267820;
    case 505u: goto L_00267864;
    case 506u: goto L_00267890;
    case 507u: goto L_002678AC;
    case 508u: goto L_002678D0;
    case 509u: goto L_002678F4;
    case 510u: goto L_002678FC;
    case 511u: goto L_00267928;
    case 512u: goto L_0026795C;
    case 513u: goto L_00267974;
    case 514u: goto L_00267980;
    case 515u: goto L_00267988;
    case 516u: goto L_00267998;
    case 517u: goto L_002679B4;
    case 518u: goto L_002679C4;
    case 519u: goto L_002679D0;
    case 520u: goto L_002679E4;
    case 521u: goto L_002679F0;
    case 522u: goto L_00267A18;
    case 523u: goto L_00267A20;
    case 524u: goto L_00267A64;
    case 525u: goto L_00267A90;
    case 526u: goto L_00267AB0;
    case 527u: goto L_00267AD0;
    case 528u: goto L_00267AF4;
    case 529u: goto L_00267B18;
    case 530u: goto L_00267B20;
    case 531u: goto L_00267B40;
    case 532u: goto L_00267B84;
    case 533u: goto L_00267BC4;
    case 534u: goto L_00267BCC;
    case 535u: goto L_00267BDC;
    case 536u: goto L_00267BFC;
    case 537u: goto L_00267C3C;
    case 538u: goto L_00267C4C;
    case 539u: goto L_00267C58;
    case 540u: goto L_00267C6C;
    case 541u: goto L_00267C78;
    case 542u: goto L_00267C8C;
    case 543u: goto L_00267C98;
    case 544u: goto L_00267CB8;
    case 545u: goto L_00267CE0;
    case 546u: goto L_00267CF8;
    case 547u: goto L_00267D1C;
    case 548u: goto L_00267D40;
    case 549u: goto L_00267D48;
    case 550u: goto L_00267D68;
    case 551u: goto L_00267D94;
    case 552u: goto L_00267D9C;
    case 553u: goto L_00267DAC;
    case 554u: goto L_00267DC4;
    case 555u: goto L_00267DD4;
    case 556u: goto L_00267DE0;
    case 557u: goto L_00267DF4;
    case 558u: goto L_00267E00;
    case 559u: goto L_00267E20;
    case 560u: goto L_00267E50;
    case 561u: goto L_00267E68;
    case 562u: goto L_00267E8C;
    case 563u: goto L_00267EB0;
    case 564u: goto L_00267EB8;
    case 565u: goto L_00267ED8;
    case 566u: goto L_00267F04;
    case 567u: goto L_00267F0C;
    case 568u: goto L_00267F1C;
    case 569u: goto L_00267F34;
    case 570u: goto L_00267F44;
    case 571u: goto L_00267F50;
    case 572u: goto L_00267F64;
    case 573u: goto L_00267F70;
    case 574u: goto L_00267F90;
    case 575u: goto L_00267FC0;
    case 576u: goto L_00267FE8;
    default: bad_entry(c, 0x00264000u); return;
    }
L_00264000:
    set32(c.r[3], ld32((c.r[2].w[0] - 31948u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264018u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00264018u) [[unlikely]] return; }
L_00264018:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264068; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00264068; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026403Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026403Cu) [[unlikely]] return; }
L_0026403C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264060u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00264060u) [[unlikely]] return; }
L_00264060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264068u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00264068u) [[unlikely]] return; }
L_00264068:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264074u); st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0019(c, 27u, depth + 1u); else { c.pc = 0x00264250u; return; } if (c.pc != 0x00264074u) [[unlikely]] return; }
L_00264074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026407Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 72u, depth + 1u); else { c.pc = 0x002687A0u; return; } if (c.pc != 0x0026407Cu) [[unlikely]] return; }
L_0026407C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 31888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264090u); set32(c.r[5], c.r[5].w[0] - 31920u);  if (depth < kMaxDepth) unit_0007(c, 391u, depth + 1u); else { c.pc = 0x0021FC10u; return; } if (c.pc != 0x00264090u) [[unlikely]] return; }
L_00264090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026411C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002640A0u); set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));  if (depth < kMaxDepth) unit_0006(c, 176u, depth + 1u); else { c.pc = 0x0021B770u; return; } if (c.pc != 0x002640A0u) [[unlikely]] return; }
L_002640A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002640E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002640B8u); set32(c.r[4], c.r[4].w[0] - 28000u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002640B8u) [[unlikely]] return; }
L_002640B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002640C4u); set32(c.r[4], c.r[4].w[0] - 27952u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002640C4u) [[unlikely]] return; }
L_002640C4:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00264178; } }
L_002640D4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_00264240; } }
L_002640E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002640E8u); set32(c.r[4], ld32((c.r[28].w[0] - 30252u)));  if (depth < kMaxDepth) unit_0006(c, 170u, depth + 1u); else { c.pc = 0x0021B730u; return; } if (c.pc != 0x002640E8u) [[unlikely]] return; }
L_002640E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002641A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    st32((c.r[2].w[0] - 31948u), 0u);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002641FC; } }
L_0026410C:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00264240; } }
L_0026411C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264128u); set32(c.r[4], c.r[4].w[0] - 28000u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264128u) [[unlikely]] return; }
L_00264128:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264134u); set32(c.r[4], c.r[4].w[0] - 27920u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264134u) [[unlikely]] return; }
L_00264134:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00264150; } }
L_00264144:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_00264240; } }
L_00264150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264168u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00264168u) [[unlikely]] return; }
L_00264168:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264144u | kUnwind; return; } goto L_00264144; } }
L_00264178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264190u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00264190u) [[unlikely]] return; }
L_00264190:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002640D4u | kUnwind; return; } goto L_002640D4; } }
L_002641A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002641ACu); set32(c.r[4], c.r[4].w[0] - 28000u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002641ACu) [[unlikely]] return; }
L_002641AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002641B8u); set32(c.r[4], c.r[4].w[0] - 27888u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002641B8u) [[unlikely]] return; }
L_002641B8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002641D4; } }
L_002641C8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_00264240; } }
L_002641D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002641ECu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x002641ECu) [[unlikely]] return; }
L_002641EC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002641C8u | kUnwind; return; } goto L_002641C8; } }
L_002641FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264214u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00264214u) [[unlikely]] return; }
L_00264214:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026410Cu | kUnwind; return; } goto L_0026410C; } }
L_00264224:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264230u); set32(c.r[4], c.r[4].w[0] - 28000u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264230u) [[unlikely]] return; }
L_00264230:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026423Cu); set32(c.r[4], c.r[4].w[0] - 27856u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026423Cu) [[unlikely]] return; }
L_0026423C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00264240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002642CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002642CC; } }
    set32(c.r[2], c.r[16].w[0] - 6u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002642CC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00264428; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00264428; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00264428; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002642B4u); set32(c.r[4], c.r[4].w[0] - 27792u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002642B4u) [[unlikely]] return; }
L_002642B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002642C4u); set32(c.r[4], c.r[4].w[0] - 27760u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002642C4u) [[unlikely]] return; }
L_002642C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00264434; } }
L_002642CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 31948u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00264408; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 31944u), c.r[16].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264398; } }
    set32(c.r[2], 0u + 81u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00264308:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002643C8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_00264338:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002643E8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 8;
L_00264364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026436Cu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026436Cu) [[unlikely]] return; }
L_0026436C:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00264390; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00264390; } }
    set32(c.r[3], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 31952u), c.r[3].w[0]);
    c.budget -= 3;
L_00264390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00264434; } }
L_00264398:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002643A4u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002643A4u) [[unlikely]] return; }
L_002643A4:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002643B4u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002643B4u) [[unlikely]] return; }
L_002643B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002643C0u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002643C0u) [[unlikely]] return; }
L_002643C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264308u | kUnwind; return; } goto L_00264308; } }
L_002643C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002643D4u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002643D4u) [[unlikely]] return; }
L_002643D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002643E0u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002643E0u) [[unlikely]] return; }
L_002643E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264338u | kUnwind; return; } goto L_00264338; } }
L_002643E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002643F4u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002643F4u) [[unlikely]] return; }
L_002643F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264400u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00264400u) [[unlikely]] return; }
L_00264400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264364u | kUnwind; return; } goto L_00264364; } }
L_00264408:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264414u); set32(c.r[4], c.r[4].w[0] - 27792u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264414u) [[unlikely]] return; }
L_00264414:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264420u); set32(c.r[4], c.r[4].w[0] - 27728u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264420u) [[unlikely]] return; }
L_00264420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00264434; } }
L_00264428:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 31952u), c.r[16].w[0]);
    c.budget -= 3;
L_00264434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00264450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[13], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[28].w[0] - 30244u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[12], ld32((c.r[5].w[0])));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[11], 0u + 999u);
    st32((c.r[10].w[0] - 31968u), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[9].w[0] - 31964u), c.r[10].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[8].w[0] - 31960u), c.r[9].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[7].w[0] - 31956u), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[6].w[0] - 31936u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[4].w[0] - 31932u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[3].w[0] - 31928u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 31968u)));
    c.budget -= 30;
    { const bool t = c.r[2].d[0] == c.r[11].d[0];  if (t) { goto L_00264564; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30256u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002645A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 30248u), c.r[13].w[0]);
    st32((c.r[2].w[0] - 31800u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002644ECu); st32((c.r[2].w[0] - 31784u), 0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002644ECu) [[unlikely]] return; }
L_002644EC:
    set32(c.r[3], 0u - 16u);
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[28].w[0] - 30248u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[2].w[0] - 31804u), c.r[5].w[0]);  if (t) { goto L_00264594; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00264594; } }
L_00264518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[2].w[0] - 31952u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002645AC; } }
L_0026452C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] - 31952u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00264550; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 31808u), c.r[3].w[0]);  if (t) { goto L_00264558; } }
L_00264550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 31808u), 0u);
    c.budget -= 2;
L_00264558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 31808u);  if (t) { goto L_002645BC; } }
L_00264564:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31936u)));
    set32(c.r[3], ld32((c.r[3].w[0] - 31936u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 31960u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264588u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 23u, depth + 1u); else { c.pc = 0x0021C358u; return; } if (c.pc != 0x00264588u) [[unlikely]] return; }
L_00264588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 31808u);  if (t) { goto L_002645BC; } }
L_00264594:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 31952u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264518u | kUnwind; return; } goto L_00264518; } }
L_002645A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 31804u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264518u | kUnwind; return; } goto L_00264518; } }
L_002645AC:
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 31952u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026452Cu | kUnwind; return; } goto L_0026452C; } }
L_002645BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002645D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00260000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 18272u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], c.r[28].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 28u), c.r[6].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[28].w[0] - 30260u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026460Cu); st32((c.r[2].w[0] - 31948u), 0u);  if (depth < kMaxDepth) unit_0006(c, 168u, depth + 1u); else { c.pc = 0x0021B720u; return; } if (c.pc != 0x0026460Cu) [[unlikely]] return; }
L_0026460C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[28].w[0] - 30252u), c.r[2].w[0]);  if (t) { goto L_00264730; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026462Cu); st32((c.r[2].w[0] - 31948u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 82u, depth + 1u); else { c.pc = 0x0021CA60u; return; } if (c.pc != 0x0026462Cu) [[unlikely]] return; }
L_0026462C:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 31944u), 0u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002646C0; } }
    set32(c.r[2], 0u + 81u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00264654:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002646F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_00264684:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264710; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_002646B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002646B8u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x002646B8u) [[unlikely]] return; }
L_002646B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026474C; } }
L_002646C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002646CCu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002646CCu) [[unlikely]] return; }
L_002646CC:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002646DCu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002646DCu) [[unlikely]] return; }
L_002646DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002646E8u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002646E8u) [[unlikely]] return; }
L_002646E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264654u | kUnwind; return; } goto L_00264654; } }
L_002646F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002646FCu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002646FCu) [[unlikely]] return; }
L_002646FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264708u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00264708u) [[unlikely]] return; }
L_00264708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264684u | kUnwind; return; } goto L_00264684; } }
L_00264710:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026471Cu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026471Cu) [[unlikely]] return; }
L_0026471C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264728u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00264728u) [[unlikely]] return; }
L_00264728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002646B0u | kUnwind; return; } goto L_002646B0; } }
L_00264730:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026473Cu); set32(c.r[4], c.r[4].w[0] - 27696u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026473Cu) [[unlikely]] return; }
L_0026473C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264748u); set32(c.r[4], c.r[4].w[0] - 27664u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264748u) [[unlikely]] return; }
L_00264748:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0026474C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00264760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264770u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00264770u) [[unlikely]] return; }
L_00264770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264780u); set32(c.r[4], c.r[4].w[0] - 31920u);  if (depth < kMaxDepth) unit_0007(c, 385u, depth + 1u); else { c.pc = 0x0021FAA8u; return; } if (c.pc != 0x00264780u) [[unlikely]] return; }
L_00264780:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12340000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 31888u);
    c.r[5].d[0] = c.r[2].d[0] | 17185ull;
    set32(c.r[6], c.r[6].w[0] + 17488u);
    set32(c.r[7], c.r[7].w[0] - 31744u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002647B4u); set32(c.r[10], c.r[10].w[0] - 31920u);  if (depth < kMaxDepth) unit_0007(c, 388u, depth + 1u); else { c.pc = 0x0021FB40u; return; } if (c.pc != 0x002647B4u) [[unlikely]] return; }
L_002647B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002647C0u); set32(c.r[4], c.r[4].w[0] - 31920u);  if (depth < kMaxDepth) unit_0007(c, 415u, depth + 1u); else { c.pc = 0x0021FF58u; return; } if (c.pc != 0x002647C0u) [[unlikely]] return; }
L_002647C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002647D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[2], ld32((c.r[28].w[0] - 30200u)));
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002648A8; } }
L_00264800:
    c.r[2].d[0] = c.r[4].d[0] & 65280ull;
    c.r[19].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[22], c.r[2].w[0] >> 8);
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002648B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264824u); set32(c.r[21], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00264824u) [[unlikely]] return; }
L_00264824:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264874; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00264874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264848u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00264848u) [[unlikely]] return; }
L_00264848:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026486Cu); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026486Cu) [[unlikely]] return; }
L_0026486C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264874u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00264874u) [[unlikely]] return; }
L_00264874:
    set32(c.r[2], ld32((c.r[28].w[0] - 30468u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_002648D8; } }
L_00264884:
    set32(c.r[2], ld32((c.r[28].w[0] - 30468u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264884u | kUnwind; return; } goto L_00264884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002648D8; } }
L_002648A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30200u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264800u | kUnwind; return; } goto L_00264800; } }
L_002648B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002648C0u); set32(c.r[4], c.r[4].w[0] - 27632u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002648C0u) [[unlikely]] return; }
L_002648C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002648D0u); set32(c.r[4], c.r[4].w[0] - 27584u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002648D0u) [[unlikely]] return; }
L_002648D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00264E6C; } }
L_002648D8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_002649C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002648E8u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x002648E8u) [[unlikely]] return; }
L_002648E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264938; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00264938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026490Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026490Cu) [[unlikely]] return; }
L_0026490C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264930u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00264930u) [[unlikely]] return; }
L_00264930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264938u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00264938u) [[unlikely]] return; }
L_00264938:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00264AA0; } }
    set32(c.r[2], 0u + 73u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00264958:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264AD0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] - 32768u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[7].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 15;
L_002649A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002649A8u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x002649A8u) [[unlikely]] return; }
L_002649A8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00264AF0; } }
L_002649B8:
    set32(c.r[2], 0u - 1u);
    st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);
    c.budget -= 2;
L_002649C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002649C8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 72u, depth + 1u); else { c.pc = 0x002687A0u; return; } if (c.pc != 0x002649C8u) [[unlikely]] return; }
L_002649C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[3].w[0] - 32768u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[18].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002649ECu); st32((c.r[28].w[0] - 30480u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 197u, depth + 1u); else { c.pc = 0x002654B0u; return; } if (c.pc != 0x002649ECu) [[unlikely]] return; }
L_002649EC:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 17u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264A78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264A78; } }
L_00264A04:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 30480u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264B18; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00264A18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264A58; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 32576u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00264A48; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00264B28; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[19].d[0];  if (t) { goto L_00264B28; } }
    c.budget -= 1;
L_00264A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A50u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 72u, depth + 1u); else { c.pc = 0x002687A0u; return; } if (c.pc != 0x00264A50u) [[unlikely]] return; }
L_00264A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A58u);  if (depth < kMaxDepth) unit_0019(c, 136u, depth + 1u); else { c.pc = 0x00264EA0u; return; } if (c.pc != 0x00264A58u) [[unlikely]] return; }
L_00264A58:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264A64u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 197u, depth + 1u); else { c.pc = 0x002654B0u; return; } if (c.pc != 0x00264A64u) [[unlikely]] return; }
L_00264A64:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 17u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264A04u | kUnwind; return; } goto L_00264A04; } }
    c.budget -= 1;
L_00264A78:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00264CE8; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.budget -= 1;
L_00264A84:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00264E44; } }
L_00264A90:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00264E6C; } }
L_00264AA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264AACu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264AACu) [[unlikely]] return; }
L_00264AAC:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264ABCu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264ABCu) [[unlikely]] return; }
L_00264ABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264AC8u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264AC8u) [[unlikely]] return; }
L_00264AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264958u | kUnwind; return; } goto L_00264958; } }
L_00264AD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264ADCu); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00264ADCu) [[unlikely]] return; }
L_00264ADC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264AE8u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00264AE8u) [[unlikely]] return; }
L_00264AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002649A0u | kUnwind; return; } goto L_002649A0; } }
L_00264AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B08u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00264B08u) [[unlikely]] return; }
L_00264B08:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002649B8u | kUnwind; return; } goto L_002649B8; } }
L_00264B18:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30480u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264A18u | kUnwind; return; } goto L_00264A18; } }
L_00264B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B30u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00264B30u) [[unlikely]] return; }
L_00264B30:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264B80; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00264B80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B54u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00264B54u) [[unlikely]] return; }
L_00264B54:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B78u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00264B78u) [[unlikely]] return; }
L_00264B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264B80u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00264B80u) [[unlikely]] return; }
L_00264B80:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00264C40; } }
    c.budget -= 1;
L_00264B90:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264C50; } }
    set32(c.r[2], 0u + 9u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.budget -= 4;
L_00264BB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264C80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_00264BE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264CA0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_00264C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C18u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00264C18u) [[unlikely]] return; }
L_00264C18:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    st8((c.r[28].w[0] - 30324u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00264CC0; } }
L_00264C30:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264A48u | kUnwind; return; } goto L_00264A48; } }
    c.budget -= 1;
L_00264C40:
    st32((c.r[28].w[0] - 32576u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30448u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264B90u | kUnwind; return; } goto L_00264B90; } }
L_00264C50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C5Cu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264C5Cu) [[unlikely]] return; }
L_00264C5C:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C6Cu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264C6Cu) [[unlikely]] return; }
L_00264C6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C78u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264C78u) [[unlikely]] return; }
L_00264C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264BB0u | kUnwind; return; } goto L_00264BB0; } }
L_00264C80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C8Cu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00264C8Cu) [[unlikely]] return; }
L_00264C8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264C98u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00264C98u) [[unlikely]] return; }
L_00264C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264BE0u | kUnwind; return; } goto L_00264BE0; } }
L_00264CA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264CACu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00264CACu) [[unlikely]] return; }
L_00264CAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264CB8u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00264CB8u) [[unlikely]] return; }
L_00264CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264C10u | kUnwind; return; } goto L_00264C10; } }
L_00264CC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264CD8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00264CD8u) [[unlikely]] return; }
L_00264CD8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264C30u | kUnwind; return; } goto L_00264C30; } }
L_00264CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264CF0u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00264CF0u) [[unlikely]] return; }
L_00264CF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264D40; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00264D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264D14u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00264D14u) [[unlikely]] return; }
L_00264D14:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264D38u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00264D38u) [[unlikely]] return; }
L_00264D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264D40u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00264D40u) [[unlikely]] return; }
L_00264D40:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00264DCC; } }
    set32(c.r[2], 0u + 73u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00264D60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264DFC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[5].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 12;
L_00264D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264DA4u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00264DA4u) [[unlikely]] return; }
L_00264DA4:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00264E1C; } }
L_00264DB4:
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264DC4u); st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 72u, depth + 1u); else { c.pc = 0x002687A0u; return; } if (c.pc != 0x00264DC4u) [[unlikely]] return; }
L_00264DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264A84u | kUnwind; return; } goto L_00264A84; } }
L_00264DCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264DD8u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264DD8u) [[unlikely]] return; }
L_00264DD8:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264DE8u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264DE8u) [[unlikely]] return; }
L_00264DE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264DF4u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264DF4u) [[unlikely]] return; }
L_00264DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264D60u | kUnwind; return; } goto L_00264D60; } }
L_00264DFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E08u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00264E08u) [[unlikely]] return; }
L_00264E08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E14u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00264E14u) [[unlikely]] return; }
L_00264E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264D9Cu | kUnwind; return; } goto L_00264D9C; } }
L_00264E1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E34u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00264E34u) [[unlikely]] return; }
L_00264E34:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264DB4u | kUnwind; return; } goto L_00264DB4; } }
L_00264E44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264E5Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00264E5Cu) [[unlikely]] return; }
L_00264E5C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264A90u | kUnwind; return; } goto L_00264A90; } }
L_00264E6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00264EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30360u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264F2C; } }
    st32((c.r[28].w[0] - 30204u), 0u);
    c.budget -= 1;
L_00264EC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30208u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00264EF4; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30356u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00264EF4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264EE8u); set32(c.r[4], c.r[4].w[0] - 27536u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264EE8u) [[unlikely]] return; }
L_00264EE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264EF4u); set32(c.r[4], c.r[4].w[0] - 27488u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264EF4u) [[unlikely]] return; }
L_00264EF4:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30356u));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30360u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 30208u), c.r[4].w[0]);  if (t) { goto L_00264F10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026520C; } }
L_00264F10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00264F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00264F24; } }
L_00264F20:
    set32(c.r[2], ld32((c.r[28].w[0] - 30476u)));
    c.budget -= 1;
L_00264F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00265210; } }
L_00264F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264F34u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00264F34u) [[unlikely]] return; }
L_00264F34:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265070; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00265070; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264F58u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00264F58u) [[unlikely]] return; }
L_00264F58:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264F7Cu); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00264F7Cu) [[unlikely]] return; }
L_00264F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264F84u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00264F84u) [[unlikely]] return; }
L_00264F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 30204u)));  if (t) { goto L_00265074; } }
L_00264F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264F94u); set32(c.r[4], c.r[4].w[0] - 27440u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00264F94u) [[unlikely]] return; }
L_00264F94:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30360u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264FA0u); st32((c.r[28].w[0] - 30204u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00264FA0u) [[unlikely]] return; }
L_00264FA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00264FF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00264FF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264FC4u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00264FC4u) [[unlikely]] return; }
L_00264FC4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264FE8u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00264FE8u) [[unlikely]] return; }
L_00264FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264FF0u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00264FF0u) [[unlikely]] return; }
L_00264FF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00265084; } }
    set32(c.r[2], 0u + 55u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.budget -= 3;
L_0026500C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265014u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00265014u) [[unlikely]] return; }
L_00265014:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002650B4; } }
L_00265024:
    set32(c.r[2], 0u - 1u);
    st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);
    c.budget -= 2;
L_0026502C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265034u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 72u, depth + 1u); else { c.pc = 0x002687A0u; return; } if (c.pc != 0x00265034u) [[unlikely]] return; }
L_00265034:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026502Cu | kUnwind; return; } goto L_0026502C; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30352u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002650DC; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.budget -= 1;
L_00265058:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002651E4; } }
L_00265064:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264EC0u | kUnwind; return; } goto L_00264EC0; } }
L_00265070:
    set32(c.r[2], ld32((c.r[28].w[0] - 30204u)));
    c.budget -= 1;
L_00265074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264F94u | kUnwind; return; } goto L_00264F94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00264F8Cu | kUnwind; return; } goto L_00264F8C; } }
L_00265084:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265090u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265090u) [[unlikely]] return; }
L_00265090:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002650A0u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002650A0u) [[unlikely]] return; }
L_002650A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002650ACu); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002650ACu) [[unlikely]] return; }
L_002650AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026500Cu | kUnwind; return; } goto L_0026500C; } }
L_002650B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002650CCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x002650CCu) [[unlikely]] return; }
L_002650CC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265024u | kUnwind; return; } goto L_00265024; } }
L_002650DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002650E8u); set32(c.r[4], c.r[4].w[0] - 27360u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002650E8u) [[unlikely]] return; }
L_002650E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002650F0u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x002650F0u) [[unlikely]] return; }
L_002650F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265140; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00265140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265114u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00265114u) [[unlikely]] return; }
L_00265114:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265138u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00265138u) [[unlikely]] return; }
L_00265138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265140u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00265140u) [[unlikely]] return; }
L_00265140:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_0026518C; } }
    set32(c.r[2], 0u + 53u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.budget -= 3;
L_0026515C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265164u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00265164u) [[unlikely]] return; }
L_00265164:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002651BC; } }
L_00265174:
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265184u); st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 72u, depth + 1u); else { c.pc = 0x002687A0u; return; } if (c.pc != 0x00265184u) [[unlikely]] return; }
L_00265184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265058u | kUnwind; return; } goto L_00265058; } }
L_0026518C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265198u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265198u) [[unlikely]] return; }
L_00265198:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002651A8u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002651A8u) [[unlikely]] return; }
L_002651A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002651B4u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002651B4u) [[unlikely]] return; }
L_002651B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026515Cu | kUnwind; return; } goto L_0026515C; } }
L_002651BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002651D4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x002651D4u) [[unlikely]] return; }
L_002651D4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265174u | kUnwind; return; } goto L_00265174; } }
L_002651E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002651FCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x002651FCu) [[unlikely]] return; }
L_002651FC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265064u | kUnwind; return; } goto L_00265064; } }
L_0026520C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00265210:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00265220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265248u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00265248u) [[unlikely]] return; }
L_00265248:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265298; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00265298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026526Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026526Cu) [[unlikely]] return; }
L_0026526C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265290u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00265290u) [[unlikely]] return; }
L_00265290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265298u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00265298u) [[unlikely]] return; }
L_00265298:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[28].w[0] - 30296u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_002653AC; } }
    set32(c.r[2], 0u + 52u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_002652C0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002653DC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[19].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 14;
L_00265304:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002653FC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[18].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 14;
L_00265348:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026541C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[17].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_00265388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265390u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00265390u) [[unlikely]] return; }
L_00265390:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0026543C; } }
L_002653A0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00265464; } }
L_002653AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002653B8u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002653B8u) [[unlikely]] return; }
L_002653B8:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002653C8u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002653C8u) [[unlikely]] return; }
L_002653C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002653D4u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002653D4u) [[unlikely]] return; }
L_002653D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002652C0u | kUnwind; return; } goto L_002652C0; } }
L_002653DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002653E8u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002653E8u) [[unlikely]] return; }
L_002653E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002653F4u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002653F4u) [[unlikely]] return; }
L_002653F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265304u | kUnwind; return; } goto L_00265304; } }
L_002653FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265408u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00265408u) [[unlikely]] return; }
L_00265408:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265414u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00265414u) [[unlikely]] return; }
L_00265414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265348u | kUnwind; return; } goto L_00265348; } }
L_0026541C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265428u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00265428u) [[unlikely]] return; }
L_00265428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265434u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00265434u) [[unlikely]] return; }
L_00265434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265388u | kUnwind; return; } goto L_00265388; } }
L_0026543C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265454u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00265454u) [[unlikely]] return; }
L_00265454:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002653A0u | kUnwind; return; } goto L_002653A0; } }
L_00265464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00265480:
    set32(c.r[2], ld32((c.r[28].w[0] - 30348u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30344u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30340u)));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 32560u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[28].w[0] - 32560u));  c.pc = t; return; }
L_002654B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30336u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30432u)));
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30436u)));
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30448u)));
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30360u));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30352u));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30356u));
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 30320u)));
    st32((c.r[5].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30316u)));
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30296u)));
    st32((c.r[5].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00265714; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 30208u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026575C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026575C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265778; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265778; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] << 1);
    st8((c.r[5].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 60u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 30768u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st16((c.r[5].w[0] + 32u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + 30016u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    mmi::divu(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    st8((c.r[5].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::multu(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] >> 5);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x91A20000u);
    c.r[2].d[0] = c.r[2].d[0] | 46021ull;
    st8((c.r[5].w[0] + 67u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::multu(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] >> 11);
    mmi::divu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x36B00000u);
    c.r[2].d[0] = c.r[2].d[0] | 28273ull;
    st8((c.r[5].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::multu(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[6].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] >> 17);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st32((c.r[5].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 43;
L_00265608:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 30864u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 30256u);
    c.r[8].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[13], c.r[6].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 30352u);
    set32(c.r[12], c.r[6].w[0] + c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 30304u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[8].d[0] = c.r[8].d[0] & 32767ull;
    set32(c.r[3], c.r[3].w[0] + 31968u);
    set32(c.r[11], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[5].w[0] + 64u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[14], ld32((c.r[7].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 32160u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 29824u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[10], c.r[6].w[0] + c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 30544u);
    st32((c.r[5].w[0] + 56u), c.r[14].w[0]);
    set32(c.r[9], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[7].w[0] + 30400u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[7].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] + 30448u);
    set32(c.r[7], c.r[6].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 32352u);
    set32(c.r[4], c.r[4].w[0] + 32544u);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[5].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    st8((c.r[5].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[11].w[0]));
    st8((c.r[5].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[10].w[0])));
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    st32((c.r[5].w[0] + 36u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[5].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    st16((c.r[5].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 67;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_00265798; } }
L_00265714:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265720u); set32(c.r[4], c.r[4].w[0] - 27296u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265720u) [[unlikely]] return; }
L_00265720:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265730u); set32(c.r[4], c.r[4].w[0] - 28432u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265730u) [[unlikely]] return; }
L_00265730:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026573Cu); set32(c.r[4], c.r[4].w[0] - 28400u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026573Cu) [[unlikely]] return; }
L_0026573C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265748u); set32(c.r[4], c.r[4].w[0] - 27248u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265748u) [[unlikely]] return; }
L_00265748:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265754u); set32(c.r[4], c.r[4].w[0] - 27200u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265754u) [[unlikely]] return; }
L_00265754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00265798; } }
L_0026575C:
    st8((c.r[5].w[0] + 17u), static_cast<std::uint8_t>(0u));
    st16((c.r[5].w[0] + 32u), static_cast<std::uint16_t>(0u));
    st8((c.r[5].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 67u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265608u | kUnwind; return; } goto L_00265608; } }
L_00265778:
    set32(c.r[2], 0u + 6u);
    st8((c.r[5].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[5].w[0] + 32u), static_cast<std::uint16_t>(0u));
    st8((c.r[5].w[0] + 66u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 67u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 72u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265608u | kUnwind; return; } goto L_00265608; } }
L_00265798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002657B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002657DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00265920; } }
L_002657DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002657E4u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x002657E4u) [[unlikely]] return; }
L_002657E4:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265834; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00265834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265808u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00265808u) [[unlikely]] return; }
L_00265808:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026582Cu); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026582Cu) [[unlikely]] return; }
L_0026582C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265834u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00265834u) [[unlikely]] return; }
L_00265834:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_002658A8; } }
    set32(c.r[2], 0u + 47u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00265854:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002658D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_00265880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265888u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00265888u) [[unlikely]] return; }
L_00265888:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002658F8; } }
L_00265898:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00265920; } }
L_002658A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658B4u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002658B4u) [[unlikely]] return; }
L_002658B4:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658C4u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002658C4u) [[unlikely]] return; }
L_002658C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658D0u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002658D0u) [[unlikely]] return; }
L_002658D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265854u | kUnwind; return; } goto L_00265854; } }
L_002658D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658E4u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002658E4u) [[unlikely]] return; }
L_002658E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002658F0u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002658F0u) [[unlikely]] return; }
L_002658F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265880u | kUnwind; return; } goto L_00265880; } }
L_002658F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265910u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00265910u) [[unlikely]] return; }
L_00265910:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265898u | kUnwind; return; } goto L_00265898; } }
L_00265920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00265940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026596C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00265AB0; } }
L_0026596C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265974u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00265974u) [[unlikely]] return; }
L_00265974:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002659C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002659C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265998u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00265998u) [[unlikely]] return; }
L_00265998:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002659BCu); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x002659BCu) [[unlikely]] return; }
L_002659BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002659C4u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x002659C4u) [[unlikely]] return; }
L_002659C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00265A38; } }
    set32(c.r[2], 0u + 46u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_002659E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265A68; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_00265A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A18u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00265A18u) [[unlikely]] return; }
L_00265A18:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00265A88; } }
L_00265A28:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00265AB0; } }
L_00265A38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A44u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265A44u) [[unlikely]] return; }
L_00265A44:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A54u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265A54u) [[unlikely]] return; }
L_00265A54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A60u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265A60u) [[unlikely]] return; }
L_00265A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002659E4u | kUnwind; return; } goto L_002659E4; } }
L_00265A68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A74u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00265A74u) [[unlikely]] return; }
L_00265A74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265A80u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00265A80u) [[unlikely]] return; }
L_00265A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265A10u | kUnwind; return; } goto L_00265A10; } }
L_00265A88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265AA0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00265AA0u) [[unlikely]] return; }
L_00265AA0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265A28u | kUnwind; return; } goto L_00265A28; } }
L_00265AB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00265AD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00265B38; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00265B38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B18u); set32(c.r[4], c.r[4].w[0] - 27168u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265B18u) [[unlikely]] return; }
L_00265B18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B24u); set32(c.r[4], c.r[4].w[0] - 27136u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265B24u) [[unlikely]] return; }
L_00265B24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B30u); set32(c.r[4], c.r[4].w[0] - 27104u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265B30u) [[unlikely]] return; }
L_00265B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00265D04; } }
L_00265B38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00265C38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B50u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00265B50u) [[unlikely]] return; }
L_00265B50:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265BA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00265BA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B74u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00265B74u) [[unlikely]] return; }
L_00265B74:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265B98u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00265B98u) [[unlikely]] return; }
L_00265B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265BA0u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00265BA0u) [[unlikely]] return; }
L_00265BA0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265BACu); st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x00265BACu) [[unlikely]] return; }
L_00265BAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 30212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00265BD8; } }
L_00265BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265BC0u); set32(c.r[4], ld32((c.r[28].w[0] - 30216u)));  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0021BCC0u; return; } if (c.pc != 0x00265BC0u) [[unlikely]] return; }
L_00265BC0:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265BB8u | kUnwind; return; } goto L_00265BB8; } }
    c.budget -= 1;
L_00265BD8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 30212u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265BE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x00265BE8u) [[unlikely]] return; }
L_00265BE8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 96u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C04u); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x00265C04u) [[unlikely]] return; }
L_00265C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 30216u), c.r[2].w[0]);  if (t) { goto L_00265C5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00265CB8; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.budget -= 1;
L_00265C1C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00265CDC; } }
L_00265C28:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00265D04; } }
L_00265C38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C44u); set32(c.r[4], c.r[4].w[0] - 27168u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265C44u) [[unlikely]] return; }
L_00265C44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C54u); set32(c.r[4], c.r[4].w[0] - 27040u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265C54u) [[unlikely]] return; }
L_00265C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00265D04; } }
L_00265C5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C68u); set32(c.r[4], c.r[4].w[0] - 27168u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265C68u) [[unlikely]] return; }
L_00265C68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265C74u); set32(c.r[4], c.r[4].w[0] - 26976u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265C74u) [[unlikely]] return; }
L_00265C74:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[28].w[0] - 30212u), 0u);  if (t) { goto L_00265C90; } }
L_00265C84:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_00265D04; } }
L_00265C90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265CA8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00265CA8u) [[unlikely]] return; }
L_00265CA8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265C84u | kUnwind; return; } goto L_00265C84; } }
L_00265CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265CC0u); set32(c.r[4], ld32((c.r[28].w[0] - 30216u)));  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0021BCC0u; return; } if (c.pc != 0x00265CC0u) [[unlikely]] return; }
L_00265CC0:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265CB8u | kUnwind; return; } goto L_00265CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265C1Cu | kUnwind; return; } goto L_00265C1C; } }
L_00265CDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265CF4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00265CF4u) [[unlikely]] return; }
L_00265CF4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265C28u | kUnwind; return; } goto L_00265C28; } }
L_00265D04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00265D30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00265E70; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00265EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265D68u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00265D68u) [[unlikely]] return; }
L_00265D68:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265DB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00265DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265D8Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00265D8Cu) [[unlikely]] return; }
L_00265D8C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265DB0u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00265DB0u) [[unlikely]] return; }
L_00265DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265DB8u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00265DB8u) [[unlikely]] return; }
L_00265DB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00265EE0; } }
    set32(c.r[2], 0u + 99u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00265DD8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265F10; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_00265E08:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00265F30; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[17].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_00265E48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E50u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00265E50u) [[unlikely]] return; }
L_00265E50:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00265F50; } }
L_00265E60:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00265F78; } }
L_00265E70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E7Cu); set32(c.r[4], c.r[4].w[0] - 26864u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265E7Cu) [[unlikely]] return; }
L_00265E7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 26816u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265E94u); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265E94u) [[unlikely]] return; }
L_00265E94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265EA0u); set32(c.r[4], c.r[4].w[0] - 26768u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265EA0u) [[unlikely]] return; }
L_00265EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00265F78; } }
L_00265EA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265EB4u); set32(c.r[4], c.r[4].w[0] - 26704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265EB4u) [[unlikely]] return; }
L_00265EB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265EC0u); set32(c.r[4], c.r[4].w[0] - 26656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265EC0u) [[unlikely]] return; }
L_00265EC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265ECCu); set32(c.r[4], c.r[4].w[0] - 26608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265ECCu) [[unlikely]] return; }
L_00265ECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265ED8u); set32(c.r[4], c.r[4].w[0] - 26560u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265ED8u) [[unlikely]] return; }
L_00265ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00265F78; } }
L_00265EE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265EECu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265EECu) [[unlikely]] return; }
L_00265EEC:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265EFCu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265EFCu) [[unlikely]] return; }
L_00265EFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F08u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00265F08u) [[unlikely]] return; }
L_00265F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265DD8u | kUnwind; return; } goto L_00265DD8; } }
L_00265F10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F1Cu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00265F1Cu) [[unlikely]] return; }
L_00265F1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F28u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00265F28u) [[unlikely]] return; }
L_00265F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265E08u | kUnwind; return; } goto L_00265E08; } }
L_00265F30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F3Cu); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00265F3Cu) [[unlikely]] return; }
L_00265F3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F48u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00265F48u) [[unlikely]] return; }
L_00265F48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265E48u | kUnwind; return; } goto L_00265E48; } }
L_00265F50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00265F68u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00265F68u) [[unlikely]] return; }
L_00265F68:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00265E60u | kUnwind; return; } goto L_00265E60; } }
L_00265F78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00265F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] >> 8);
    st32((c.r[5].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] >> 40;
    st32((c.r[5].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[5].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 33;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 24u);  if (t) { goto L_00266044; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266078; } }
L_0026602C:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00266080; } }
L_00266044:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266050u); set32(c.r[4], c.r[4].w[0] - 26528u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266050u) [[unlikely]] return; }
L_00266050:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266060u); set32(c.r[4], c.r[4].w[0] - 26944u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266060u) [[unlikely]] return; }
L_00266060:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266070u); set32(c.r[4], c.r[4].w[0] - 26912u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266070u) [[unlikely]] return; }
L_00266070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00266080; } }
L_00266078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026602Cu | kUnwind; return; } goto L_0026602C; } }
L_00266080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002660A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 30328u)));
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_002663D8; } }
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00266410; } }
    c.r[17].d[0] = c.r[18].d[0] & 65535ull;
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00266434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266124u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00266124u) [[unlikely]] return; }
L_00266124:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266174; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00266174; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266148u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00266148u) [[unlikely]] return; }
L_00266148:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026616Cu); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026616Cu) [[unlikely]] return; }
L_0026616C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266174u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00266174u) [[unlikely]] return; }
L_00266174:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 30208u);
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[4], 0u + 3u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 32592u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 32352u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00266458; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 32544u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 32448u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[28].w[0] - 32544u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = c.r[7].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[22].w[0]));  if (t) { goto L_00266474; } }
    set32(c.r[2], 0u + 32767u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] - c.r[7].w[0]);  if (t) { goto L_00266474; } }
L_00266220:
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_00266224:
    set32(c.r[2], c.r[28].w[0] - 32536u);
    st32((c.r[28].w[0] - 30276u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026649C; } }
    set32(c.r[2], 0u + 32767u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] - c.r[5].w[0]);  if (t) { goto L_0026649C; } }
L_00266254:
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_00266258:
    st32((c.r[28].w[0] - 30272u), c.r[3].w[0]);
    c.budget -= 1;
L_0026625C:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002664C4; } }
    set32(c.r[2], 0u + 44u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_0026627C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002664F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    set32(c.r[3], c.r[20].w[0] << 8);
    c.r[5].d[0] = c.r[3].d[0] | c.r[19].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 11;
L_002662B4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266514; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_002662E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266534; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[30].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_00266314:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30276u)));  if (t) { goto L_00266554; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_00266344:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30272u)));  if (t) { goto L_00266574; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_00266374:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266594; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[23].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[23].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_002663B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002663BCu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x002663BCu) [[unlikely]] return; }
L_002663BC:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002665B4; } }
L_002663CC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_002665DC; } }
L_002663D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002663E4u); set32(c.r[4], c.r[4].w[0] - 26496u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002663E4u) [[unlikely]] return; }
L_002663E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 26448u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002663FCu); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002663FCu) [[unlikely]] return; }
L_002663FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266408u); set32(c.r[4], c.r[4].w[0] - 26768u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266408u) [[unlikely]] return; }
L_00266408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_002665E0; } }
L_00266410:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026641Cu); set32(c.r[4], c.r[4].w[0] - 26496u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026641Cu) [[unlikely]] return; }
L_0026641C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026642Cu); set32(c.r[4], c.r[4].w[0] - 26400u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026642Cu) [[unlikely]] return; }
L_0026642C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002665DC; } }
L_00266434:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266440u); set32(c.r[4], c.r[4].w[0] - 26496u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266440u) [[unlikely]] return; }
L_00266440:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266450u); set32(c.r[4], c.r[4].w[0] - 26352u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266450u) [[unlikely]] return; }
L_00266450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002665DC; } }
L_00266458:
    c.r[3].d[0] = c.r[21].d[0] << 48;
    c.r[2].d[0] = c.r[22].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[28].w[0] - 30276u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30272u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026625Cu | kUnwind; return; } goto L_0026625C; } }
L_00266474:
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));  if (t) { goto L_00266488; } }
    set32(c.r[2], c.r[2].w[0] + 4095u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    c.budget -= 2;
L_00266488:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266224u | kUnwind; return; } goto L_00266224; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32767u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266220u | kUnwind; return; } goto L_00266220; } }
L_0026649C:
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));  if (t) { goto L_002664B0; } }
    set32(c.r[2], c.r[2].w[0] + 4095u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    c.budget -= 2;
L_002664B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266258u | kUnwind; return; } goto L_00266258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32767u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266254u | kUnwind; return; } goto L_00266254; } }
L_002664C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002664D0u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002664D0u) [[unlikely]] return; }
L_002664D0:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002664E0u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002664E0u) [[unlikely]] return; }
L_002664E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002664ECu); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002664ECu) [[unlikely]] return; }
L_002664EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026627Cu | kUnwind; return; } goto L_0026627C; } }
L_002664F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266500u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266500u) [[unlikely]] return; }
L_00266500:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026650Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026650Cu) [[unlikely]] return; }
L_0026650C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002662B4u | kUnwind; return; } goto L_002662B4; } }
L_00266514:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266520u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266520u) [[unlikely]] return; }
L_00266520:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026652Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026652Cu) [[unlikely]] return; }
L_0026652C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002662E4u | kUnwind; return; } goto L_002662E4; } }
L_00266534:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266540u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266540u) [[unlikely]] return; }
L_00266540:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026654Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026654Cu) [[unlikely]] return; }
L_0026654C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266314u | kUnwind; return; } goto L_00266314; } }
L_00266554:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266560u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266560u) [[unlikely]] return; }
L_00266560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026656Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026656Cu) [[unlikely]] return; }
L_0026656C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266344u | kUnwind; return; } goto L_00266344; } }
L_00266574:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266580u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266580u) [[unlikely]] return; }
L_00266580:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026658Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026658Cu) [[unlikely]] return; }
L_0026658C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266374u | kUnwind; return; } goto L_00266374; } }
L_00266594:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665A0u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002665A0u) [[unlikely]] return; }
L_002665A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665ACu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002665ACu) [[unlikely]] return; }
L_002665AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002663B4u | kUnwind; return; } goto L_002663B4; } }
L_002665B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002665CCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x002665CCu) [[unlikely]] return; }
L_002665CC:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002663CCu | kUnwind; return; } goto L_002663CC; } }
L_002665DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002665E0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00266610:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0026677C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266648u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00266648u) [[unlikely]] return; }
L_00266648:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266698; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00266698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026666Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026666Cu) [[unlikely]] return; }
L_0026666C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266690u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00266690u) [[unlikely]] return; }
L_00266690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266698u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00266698u) [[unlikely]] return; }
L_00266698:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_002667B4; } }
    set32(c.r[2], 0u + 43u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_002666B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002667E4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_002666E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266804; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_00266718:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266824; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[17].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_00266758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266760u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00266760u) [[unlikely]] return; }
L_00266760:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00266844; } }
L_00266770:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026686C; } }
L_0026677C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266788u); set32(c.r[4], c.r[4].w[0] - 26304u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266788u) [[unlikely]] return; }
L_00266788:
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 26448u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667A0u); set32(c.r[6], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002667A0u) [[unlikely]] return; }
L_002667A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667ACu); set32(c.r[4], c.r[4].w[0] - 26768u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002667ACu) [[unlikely]] return; }
L_002667AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00266870; } }
L_002667B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667C0u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002667C0u) [[unlikely]] return; }
L_002667C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667D0u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002667D0u) [[unlikely]] return; }
L_002667D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667DCu); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002667DCu) [[unlikely]] return; }
L_002667DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002666B8u | kUnwind; return; } goto L_002666B8; } }
L_002667E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667F0u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002667F0u) [[unlikely]] return; }
L_002667F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002667FCu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002667FCu) [[unlikely]] return; }
L_002667FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002666E8u | kUnwind; return; } goto L_002666E8; } }
L_00266804:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266810u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266810u) [[unlikely]] return; }
L_00266810:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026681Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026681Cu) [[unlikely]] return; }
L_0026681C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266718u | kUnwind; return; } goto L_00266718; } }
L_00266824:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266830u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266830u) [[unlikely]] return; }
L_00266830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026683Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026683Cu) [[unlikely]] return; }
L_0026683C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266758u | kUnwind; return; } goto L_00266758; } }
L_00266844:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026685Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026685Cu) [[unlikely]] return; }
L_0026685C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266770u | kUnwind; return; } goto L_00266770; } }
L_0026686C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00266870:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00266890:
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[4].w[0] + 12u);  if (t) { goto L_002668C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002668EC; } }
L_002668C0:
    set32(c.r[3], c.r[6].w[0] << 4);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 11;
L_002668EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00266900:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], c.r[6].w[0] + 12u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[6].w[0] + 8u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00266944; } }
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00266968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00266B70; } }
L_00266944:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266950u); set32(c.r[4], c.r[4].w[0] - 26256u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266950u) [[unlikely]] return; }
L_00266950:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266960u); set32(c.r[4], c.r[4].w[0] - 26224u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266960u) [[unlikely]] return; }
L_00266960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00266B70; } }
L_00266968:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266974u); set32(c.r[17], c.r[7].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00266974u) [[unlikely]] return; }
L_00266974:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002669C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002669C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266998u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00266998u) [[unlikely]] return; }
L_00266998:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002669BCu); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x002669BCu) [[unlikely]] return; }
L_002669BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002669C4u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x002669C4u) [[unlikely]] return; }
L_002669C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00266AD8; } }
    set32(c.r[2], 0u + 28u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_002669E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266B08; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[18].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 14;
L_00266A28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266B28; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[17].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_00266A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266A70u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00266A70u) [[unlikely]] return; }
L_00266A70:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00266B48; } }
L_00266A80:
    set32(c.r[4], ld32((c.r[28].w[0] - 30192u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_00266AD0; } }
    c.r[3].d[0] = ld16((c.r[28].w[0] - 30196u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00266AD0; } }
L_00266AA0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00266ABC; } }
    st32((c.r[4].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00266AD0; } }
L_00266ABC:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266AA0u | kUnwind; return; } goto L_00266AA0; } }
    c.budget -= 1;
L_00266AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00266B70; } }
L_00266AD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266AE4u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266AE4u) [[unlikely]] return; }
L_00266AE4:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266AF4u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266AF4u) [[unlikely]] return; }
L_00266AF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B00u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266B00u) [[unlikely]] return; }
L_00266B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002669E4u | kUnwind; return; } goto L_002669E4; } }
L_00266B08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B14u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266B14u) [[unlikely]] return; }
L_00266B14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B20u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266B20u) [[unlikely]] return; }
L_00266B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266A28u | kUnwind; return; } goto L_00266A28; } }
L_00266B28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B34u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266B34u) [[unlikely]] return; }
L_00266B34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B40u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266B40u) [[unlikely]] return; }
L_00266B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266A68u | kUnwind; return; } goto L_00266A68; } }
L_00266B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266B60u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00266B60u) [[unlikely]] return; }
L_00266B60:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266A80u | kUnwind; return; } goto L_00266A80; } }
L_00266B70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00266B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00266BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266BB8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00266BB8u) [[unlikely]] return; }
L_00266BB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266C08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00266C08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266BDCu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00266BDCu) [[unlikely]] return; }
L_00266BDC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C00u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00266C00u) [[unlikely]] return; }
L_00266C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C08u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00266C08u) [[unlikely]] return; }
L_00266C08:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00266C78; } }
    set32(c.r[2], 0u + 42u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00266C28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266CA8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_00266C54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C5Cu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00266C5Cu) [[unlikely]] return; }
L_00266C5C:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00266CC8; } }
L_00266C6C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00266CF0; } }
L_00266C78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C84u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266C84u) [[unlikely]] return; }
L_00266C84:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266C94u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266C94u) [[unlikely]] return; }
L_00266C94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266CA0u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266CA0u) [[unlikely]] return; }
L_00266CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266C28u | kUnwind; return; } goto L_00266C28; } }
L_00266CA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266CB4u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266CB4u) [[unlikely]] return; }
L_00266CB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266CC0u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266CC0u) [[unlikely]] return; }
L_00266CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266C54u | kUnwind; return; } goto L_00266C54; } }
L_00266CC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266CE0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00266CE0u) [[unlikely]] return; }
L_00266CE0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266C6Cu | kUnwind; return; } goto L_00266C6C; } }
L_00266CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00266D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266D38u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00266D38u) [[unlikely]] return; }
L_00266D38:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266D88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00266D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266D5Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00266D5Cu) [[unlikely]] return; }
L_00266D5C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266D80u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00266D80u) [[unlikely]] return; }
L_00266D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266D88u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00266D88u) [[unlikely]] return; }
L_00266D88:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00266E94; } }
    set32(c.r[2], 0u + 41u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00266DA8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266EC4; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[19].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 14;
L_00266DEC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266EE4; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[18].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 14;
L_00266E30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266F04; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[17].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_00266E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266E78u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00266E78u) [[unlikely]] return; }
L_00266E78:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00266F24; } }
L_00266E88:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00266F4C; } }
L_00266E94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EA0u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266EA0u) [[unlikely]] return; }
L_00266EA0:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EB0u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266EB0u) [[unlikely]] return; }
L_00266EB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EBCu); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00266EBCu) [[unlikely]] return; }
L_00266EBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266DA8u | kUnwind; return; } goto L_00266DA8; } }
L_00266EC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266ED0u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266ED0u) [[unlikely]] return; }
L_00266ED0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EDCu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266EDCu) [[unlikely]] return; }
L_00266EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266DECu | kUnwind; return; } goto L_00266DEC; } }
L_00266EE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EF0u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266EF0u) [[unlikely]] return; }
L_00266EF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266EFCu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266EFCu) [[unlikely]] return; }
L_00266EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266E30u | kUnwind; return; } goto L_00266E30; } }
L_00266F04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F10u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266F10u) [[unlikely]] return; }
L_00266F10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F1Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00266F1Cu) [[unlikely]] return; }
L_00266F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266E70u | kUnwind; return; } goto L_00266E70; } }
L_00266F24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F3Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00266F3Cu) [[unlikely]] return; }
L_00266F3C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266E88u | kUnwind; return; } goto L_00266E88; } }
L_00266F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00266F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266F88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00266F88u) [[unlikely]] return; }
L_00266F88:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00266FD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00266FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FACu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00266FACu) [[unlikely]] return; }
L_00266FAC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FD0u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00266FD0u) [[unlikely]] return; }
L_00266FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00266FD8u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00266FD8u) [[unlikely]] return; }
L_00266FD8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_0026705C; } }
    set32(c.r[2], 0u + 40u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00266FF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026708C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[17].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_00267038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267040u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00267040u) [[unlikely]] return; }
L_00267040:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002670AC; } }
L_00267050:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_002670D4; } }
L_0026705C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267068u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267068u) [[unlikely]] return; }
L_00267068:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267078u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267078u) [[unlikely]] return; }
L_00267078:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267084u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267084u) [[unlikely]] return; }
L_00267084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00266FF8u | kUnwind; return; } goto L_00266FF8; } }
L_0026708C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267098u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267098u) [[unlikely]] return; }
L_00267098:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002670A4u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002670A4u) [[unlikely]] return; }
L_002670A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267038u | kUnwind; return; } goto L_00267038; } }
L_002670AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002670C4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x002670C4u) [[unlikely]] return; }
L_002670C4:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267050u | kUnwind; return; } goto L_00267050; } }
L_002670D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002670F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267100u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00267100u) [[unlikely]] return; }
L_00267100:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267150; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00267150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267124u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00267124u) [[unlikely]] return; }
L_00267124:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267148u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00267148u) [[unlikely]] return; }
L_00267148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267150u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00267150u) [[unlikely]] return; }
L_00267150:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00267190; } }
    set32(c.r[2], 0u + 39u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.budget -= 3;
L_0026716C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267174u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00267174u) [[unlikely]] return; }
L_00267174:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002671C0; } }
L_00267184:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_002671E8; } }
L_00267190:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026719Cu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026719Cu) [[unlikely]] return; }
L_0026719C:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002671ACu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002671ACu) [[unlikely]] return; }
L_002671AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002671B8u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002671B8u) [[unlikely]] return; }
L_002671B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026716Cu | kUnwind; return; } goto L_0026716C; } }
L_002671C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002671D8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x002671D8u) [[unlikely]] return; }
L_002671D8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267184u | kUnwind; return; } goto L_00267184; } }
L_002671E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00267200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267218u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00267218u) [[unlikely]] return; }
L_00267218:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267268; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00267268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026723Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026723Cu) [[unlikely]] return; }
L_0026723C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267260u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00267260u) [[unlikely]] return; }
L_00267260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267268u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00267268u) [[unlikely]] return; }
L_00267268:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_002672D8; } }
    set32(c.r[2], 0u + 37u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00267288:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267308; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_002672B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672BCu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x002672BCu) [[unlikely]] return; }
L_002672BC:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00267328; } }
L_002672CC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00267350; } }
L_002672D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672E4u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002672E4u) [[unlikely]] return; }
L_002672E4:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002672F4u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002672F4u) [[unlikely]] return; }
L_002672F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267300u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267300u) [[unlikely]] return; }
L_00267300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267288u | kUnwind; return; } goto L_00267288; } }
L_00267308:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267314u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267314u) [[unlikely]] return; }
L_00267314:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267320u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267320u) [[unlikely]] return; }
L_00267320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002672B4u | kUnwind; return; } goto L_002672B4; } }
L_00267328:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267340u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00267340u) [[unlikely]] return; }
L_00267340:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002672CCu | kUnwind; return; } goto L_002672CC; } }
L_00267350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00267370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267388u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00267388u) [[unlikely]] return; }
L_00267388:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002673D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002673D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002673ACu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x002673ACu) [[unlikely]] return; }
L_002673AC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002673D0u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x002673D0u) [[unlikely]] return; }
L_002673D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002673D8u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x002673D8u) [[unlikely]] return; }
L_002673D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00267448; } }
    set32(c.r[2], 0u + 35u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_002673F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267478; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_00267424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026742Cu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026742Cu) [[unlikely]] return; }
L_0026742C:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00267498; } }
L_0026743C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_002674C0; } }
L_00267448:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267454u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267454u) [[unlikely]] return; }
L_00267454:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267464u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267464u) [[unlikely]] return; }
L_00267464:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267470u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267470u) [[unlikely]] return; }
L_00267470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002673F8u | kUnwind; return; } goto L_002673F8; } }
L_00267478:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267484u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267484u) [[unlikely]] return; }
L_00267484:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267490u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267490u) [[unlikely]] return; }
L_00267490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267424u | kUnwind; return; } goto L_00267424; } }
L_00267498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674B0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x002674B0u) [[unlikely]] return; }
L_002674B0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026743Cu | kUnwind; return; } goto L_0026743C; } }
L_002674C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002674E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002674F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x002674F0u) [[unlikely]] return; }
L_002674F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267540; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00267540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267514u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00267514u) [[unlikely]] return; }
L_00267514:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267538u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00267538u) [[unlikely]] return; }
L_00267538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267540u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00267540u) [[unlikely]] return; }
L_00267540:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 30240u), 0u);  if (t) { goto L_00267584; } }
    set32(c.r[2], 0u + 33u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.budget -= 3;
L_00267560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267568u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00267568u) [[unlikely]] return; }
L_00267568:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002675B4; } }
L_00267578:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_002675DC; } }
L_00267584:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267590u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267590u) [[unlikely]] return; }
L_00267590:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002675A0u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002675A0u) [[unlikely]] return; }
L_002675A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002675ACu); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002675ACu) [[unlikely]] return; }
L_002675AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267560u | kUnwind; return; } goto L_00267560; } }
L_002675B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002675CCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x002675CCu) [[unlikely]] return; }
L_002675CC:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267578u | kUnwind; return; } goto L_00267578; } }
L_002675DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002675F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267618u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00267618u) [[unlikely]] return; }
L_00267618:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267668; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00267668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026763Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026763Cu) [[unlikely]] return; }
L_0026763C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267660u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00267660u) [[unlikely]] return; }
L_00267660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267668u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00267668u) [[unlikely]] return; }
L_00267668:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00267768; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    c.budget -= 1;
L_00267678:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00267788; } }
    set32(c.r[2], 0u + 31u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00267694:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002677B8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[19].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 14;
L_002676D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002677D8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[17].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 14;
L_0026771C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002677F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267734u); set32(c.r[4], c.r[4].w[0] - 26176u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267734u) [[unlikely]] return; }
L_00267734:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267740u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267740u) [[unlikely]] return; }
L_00267740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267748u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00267748u) [[unlikely]] return; }
L_00267748:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026784C; } }
L_00267758:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00267874; } }
L_00267768:
    set32(c.r[19], ld32((c.r[28].w[0] - 30240u)));
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 30240u), c.r[2].w[0]);  if (t) { goto L_00267780; } }
L_00267778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267678u | kUnwind; return; } goto L_00267678; } }
L_00267780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30240u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267778u | kUnwind; return; } goto L_00267778; } }
L_00267788:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267794u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267794u) [[unlikely]] return; }
L_00267794:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002677A4u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002677A4u) [[unlikely]] return; }
L_002677A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002677B0u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002677B0u) [[unlikely]] return; }
L_002677B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267694u | kUnwind; return; } goto L_00267694; } }
L_002677B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002677C4u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002677C4u) [[unlikely]] return; }
L_002677C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002677D0u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002677D0u) [[unlikely]] return; }
L_002677D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002676D8u | kUnwind; return; } goto L_002676D8; } }
L_002677D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002677E4u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002677E4u) [[unlikely]] return; }
L_002677E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002677F0u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002677F0u) [[unlikely]] return; }
L_002677F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026771Cu | kUnwind; return; } goto L_0026771C; } }
L_002677F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267818u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00267818u) [[unlikely]] return; }
L_00267818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267820u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00267820u) [[unlikely]] return; }
L_00267820:
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0026783C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0026783C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267740u | kUnwind; return; } goto L_00267740; } }
L_0026784C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267864u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00267864u) [[unlikely]] return; }
L_00267864:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267758u | kUnwind; return; } goto L_00267758; } }
L_00267874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00267890:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002678ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x002678ACu) [[unlikely]] return; }
L_002678AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002678FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002678FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002678D0u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x002678D0u) [[unlikely]] return; }
L_002678D0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002678F4u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x002678F4u) [[unlikely]] return; }
L_002678F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002678FCu);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x002678FCu) [[unlikely]] return; }
L_002678FC:
    st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);
    set32(c.r[2], 0u - 1u);
    c.r[16].d[0] = ld8((c.r[28].w[0] - 30236u));
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st8((c.r[28].w[0] - 30236u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002679A8; } }
    set32(c.r[2], 0u + 29u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00267928:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002679D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 10;
L_0026795C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002679F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267974u); set32(c.r[4], c.r[4].w[0] - 26176u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267974u) [[unlikely]] return; }
L_00267974:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267980u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267980u) [[unlikely]] return; }
L_00267980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267988u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00267988u) [[unlikely]] return; }
L_00267988:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00267A4C; } }
L_00267998:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00267A74; } }
L_002679A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002679B4u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002679B4u) [[unlikely]] return; }
L_002679B4:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002679C4u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002679C4u) [[unlikely]] return; }
L_002679C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002679D0u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002679D0u) [[unlikely]] return; }
L_002679D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267928u | kUnwind; return; } goto L_00267928; } }
L_002679D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002679E4u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002679E4u) [[unlikely]] return; }
L_002679E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002679F0u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002679F0u) [[unlikely]] return; }
L_002679F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026795Cu | kUnwind; return; } goto L_0026795C; } }
L_002679F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00267A18u) [[unlikely]] return; }
L_00267A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00267A20u) [[unlikely]] return; }
L_00267A20:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00267A3C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00267A3C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267980u | kUnwind; return; } goto L_00267980; } }
L_00267A4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267A64u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00267A64u) [[unlikely]] return; }
L_00267A64:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267998u | kUnwind; return; } goto L_00267998; } }
L_00267A74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00267A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x05760000u);
    set32(c.r[3], c.r[4].w[0] << 12);
    c.r[2].d[0] = c.r[2].d[0] | 6641ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 10);  c.pc = t; return; }
L_00267AB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267AD0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00267AD0u) [[unlikely]] return; }
L_00267AD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267B20; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00267B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267AF4u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00267AF4u) [[unlikely]] return; }
L_00267AF4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B18u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00267B18u) [[unlikely]] return; }
L_00267B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267B20u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00267B20u) [[unlikely]] return; }
L_00267B20:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00267C30; } }
    set32(c.r[2], 0u + 28u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00267B40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267C60; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[18].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 14;
L_00267B84:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267C80; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[17].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_00267BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267BCCu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00267BCCu) [[unlikely]] return; }
L_00267BCC:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00267CA0; } }
L_00267BDC:
    set32(c.r[5], ld32((c.r[28].w[0] - 30192u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00267C28; } }
    c.r[4].d[0] = ld16((c.r[28].w[0] - 30196u));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00267C28; } }
L_00267BFC:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_00267C18; } }
    st32((c.r[5].w[0] + 12u), c.r[18].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00267C28; } }
L_00267C18:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267BFCu | kUnwind; return; } goto L_00267BFC; } }
L_00267C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00267CC8; } }
L_00267C30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C3Cu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267C3Cu) [[unlikely]] return; }
L_00267C3C:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C4Cu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267C4Cu) [[unlikely]] return; }
L_00267C4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C58u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267C58u) [[unlikely]] return; }
L_00267C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267B40u | kUnwind; return; } goto L_00267B40; } }
L_00267C60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C6Cu); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267C6Cu) [[unlikely]] return; }
L_00267C6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C78u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267C78u) [[unlikely]] return; }
L_00267C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267B84u | kUnwind; return; } goto L_00267B84; } }
L_00267C80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C8Cu); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267C8Cu) [[unlikely]] return; }
L_00267C8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267C98u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267C98u) [[unlikely]] return; }
L_00267C98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267BC4u | kUnwind; return; } goto L_00267BC4; } }
L_00267CA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267CB8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00267CB8u) [[unlikely]] return; }
L_00267CB8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267BDCu | kUnwind; return; } goto L_00267BDC; } }
L_00267CC8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00267CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267CF8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00267CF8u) [[unlikely]] return; }
L_00267CF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267D48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00267D48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D1Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00267D1Cu) [[unlikely]] return; }
L_00267D1C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D40u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00267D40u) [[unlikely]] return; }
L_00267D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D48u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00267D48u) [[unlikely]] return; }
L_00267D48:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00267DB8; } }
    set32(c.r[2], 0u + 25u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00267D68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267DE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_00267D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267D9Cu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00267D9Cu) [[unlikely]] return; }
L_00267D9C:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00267E08; } }
L_00267DAC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00267E30; } }
L_00267DB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DC4u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267DC4u) [[unlikely]] return; }
L_00267DC4:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DD4u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267DD4u) [[unlikely]] return; }
L_00267DD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DE0u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267DE0u) [[unlikely]] return; }
L_00267DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267D68u | kUnwind; return; } goto L_00267D68; } }
L_00267DE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267DF4u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267DF4u) [[unlikely]] return; }
L_00267DF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E00u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267E00u) [[unlikely]] return; }
L_00267E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267D94u | kUnwind; return; } goto L_00267D94; } }
L_00267E08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E20u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00267E20u) [[unlikely]] return; }
L_00267E20:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267DACu | kUnwind; return; } goto L_00267DAC; } }
L_00267E30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00267E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00267E68u) [[unlikely]] return; }
L_00267E68:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267EB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00267EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267E8Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00267E8Cu) [[unlikely]] return; }
L_00267E8C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267EB0u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00267EB0u) [[unlikely]] return; }
L_00267EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267EB8u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00267EB8u) [[unlikely]] return; }
L_00267EB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00267F28; } }
    set32(c.r[2], 0u + 24u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00267ED8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00267F58; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_00267F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F0Cu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00267F0Cu) [[unlikely]] return; }
L_00267F0C:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00267F78; } }
L_00267F1C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00267FA0; } }
L_00267F28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F34u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267F34u) [[unlikely]] return; }
L_00267F34:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F44u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267F44u) [[unlikely]] return; }
L_00267F44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F50u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00267F50u) [[unlikely]] return; }
L_00267F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267ED8u | kUnwind; return; } goto L_00267ED8; } }
L_00267F58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F64u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267F64u) [[unlikely]] return; }
L_00267F64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F70u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00267F70u) [[unlikely]] return; }
L_00267F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267F04u | kUnwind; return; } goto L_00267F04; } }
L_00267F78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267F90u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00267F90u) [[unlikely]] return; }
L_00267F90:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00267F1Cu | kUnwind; return; } goto L_00267F1C; } }
L_00267FA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00267FC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00267FE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00267FE8u) [[unlikely]] return; }
L_00267FE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_001A(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { [[clang::musttail]] return unit_001A(c, 5u, depth); } }
    [[clang::musttail]] return unit_001A(c, 2u, depth);
}

}

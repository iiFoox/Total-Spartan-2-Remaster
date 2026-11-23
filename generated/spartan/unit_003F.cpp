#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0,
    80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 96, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0,
    0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135,
    0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 218, 0, 0, 0, 0, 0,
    0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0,
    258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0,
    266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0,
    274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0,
    282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0,
    290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0,
    298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0,
    306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0,
    314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0,
    322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0,
    330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0,
    338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352,
    0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 394, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002FC000;
    case 2u: goto L_002FC020;
    case 3u: goto L_002FC02C;
    case 4u: goto L_002FC03C;
    case 5u: goto L_002FC044;
    case 6u: goto L_002FC060;
    case 7u: goto L_002FC068;
    case 8u: goto L_002FC160;
    case 9u: goto L_002FC19C;
    case 10u: goto L_002FC1AC;
    case 11u: goto L_002FC1BC;
    case 12u: goto L_002FC1C4;
    case 13u: goto L_002FC1DC;
    case 14u: goto L_002FC1FC;
    case 15u: goto L_002FC20C;
    case 16u: goto L_002FC21C;
    case 17u: goto L_002FC228;
    case 18u: goto L_002FC244;
    case 19u: goto L_002FC254;
    case 20u: goto L_002FC264;
    case 21u: goto L_002FC280;
    case 22u: goto L_002FC290;
    case 23u: goto L_002FC29C;
    case 24u: goto L_002FC2B0;
    case 25u: goto L_002FC2F4;
    case 26u: goto L_002FC33C;
    case 27u: goto L_002FC34C;
    case 28u: goto L_002FC358;
    case 29u: goto L_002FC36C;
    case 30u: goto L_002FC378;
    case 31u: goto L_002FC3B0;
    case 32u: goto L_002FC3C0;
    case 33u: goto L_002FC3D0;
    case 34u: goto L_002FC434;
    case 35u: goto L_002FC43C;
    case 36u: goto L_002FC440;
    case 37u: goto L_002FC44C;
    case 38u: goto L_002FC470;
    case 39u: goto L_002FC498;
    case 40u: goto L_002FC4C0;
    case 41u: goto L_002FC504;
    case 42u: goto L_002FC538;
    case 43u: goto L_002FC558;
    case 44u: goto L_002FC58C;
    case 45u: goto L_002FC598;
    case 46u: goto L_002FC5C4;
    case 47u: goto L_002FC5F0;
    case 48u: goto L_002FC618;
    case 49u: goto L_002FC638;
    case 50u: goto L_002FC68C;
    case 51u: goto L_002FC6B4;
    case 52u: goto L_002FC6D4;
    case 53u: goto L_002FC730;
    case 54u: goto L_002FC764;
    case 55u: goto L_002FC784;
    case 56u: goto L_002FC7A0;
    case 57u: goto L_002FC7B8;
    case 58u: goto L_002FC800;
    case 59u: goto L_002FC824;
    case 60u: goto L_002FC850;
    case 61u: goto L_002FC910;
    case 62u: goto L_002FC92C;
    case 63u: goto L_002FC940;
    case 64u: goto L_002FC94C;
    case 65u: goto L_002FC970;
    case 66u: goto L_002FC98C;
    case 67u: goto L_002FC9A0;
    case 68u: goto L_002FC9C0;
    case 69u: goto L_002FC9F8;
    case 70u: goto L_002FCA0C;
    case 71u: goto L_002FCA30;
    case 72u: goto L_002FCAA4;
    case 73u: goto L_002FCAAC;
    case 74u: goto L_002FCAC0;
    case 75u: goto L_002FCAC8;
    case 76u: goto L_002FCADC;
    case 77u: goto L_002FCAE8;
    case 78u: goto L_002FCAF0;
    case 79u: goto L_002FCAF8;
    case 80u: goto L_002FCB00;
    case 81u: goto L_002FCB08;
    case 82u: goto L_002FCB10;
    case 83u: goto L_002FCB28;
    case 84u: goto L_002FCB30;
    case 85u: goto L_002FCB38;
    case 86u: goto L_002FCB40;
    case 87u: goto L_002FCB54;
    case 88u: goto L_002FCB78;
    case 89u: goto L_002FCB9C;
    case 90u: goto L_002FCBA8;
    case 91u: goto L_002FCBB4;
    case 92u: goto L_002FCBB8;
    case 93u: goto L_002FCBC8;
    case 94u: goto L_002FCBD0;
    case 95u: goto L_002FCBEC;
    case 96u: goto L_002FCC04;
    case 97u: goto L_002FCC0C;
    case 98u: goto L_002FCC10;
    case 99u: goto L_002FCC78;
    case 100u: goto L_002FCC8C;
    case 101u: goto L_002FCC98;
    case 102u: goto L_002FCCAC;
    case 103u: goto L_002FCCCC;
    case 104u: goto L_002FCD00;
    case 105u: goto L_002FCD38;
    case 106u: goto L_002FCD8C;
    case 107u: goto L_002FCD98;
    case 108u: goto L_002FCE00;
    case 109u: goto L_002FCE1C;
    case 110u: goto L_002FCE38;
    case 111u: goto L_002FCE48;
    case 112u: goto L_002FCE54;
    case 113u: goto L_002FCE70;
    case 114u: goto L_002FCE8C;
    case 115u: goto L_002FCE94;
    case 116u: goto L_002FCEB4;
    case 117u: goto L_002FCEC0;
    case 118u: goto L_002FCED0;
    case 119u: goto L_002FCED8;
    case 120u: goto L_002FCEF4;
    case 121u: goto L_002FCF64;
    case 122u: goto L_002FCFCC;
    case 123u: goto L_002FD020;
    case 124u: goto L_002FD030;
    case 125u: goto L_002FD040;
    case 126u: goto L_002FD048;
    case 127u: goto L_002FD060;
    case 128u: goto L_002FD06C;
    case 129u: goto L_002FD084;
    case 130u: goto L_002FD090;
    case 131u: goto L_002FD0A8;
    case 132u: goto L_002FD0B4;
    case 133u: goto L_002FD0CC;
    case 134u: goto L_002FD0E8;
    case 135u: goto L_002FD0FC;
    case 136u: goto L_002FD10C;
    case 137u: goto L_002FD118;
    case 138u: goto L_002FD124;
    case 139u: goto L_002FD130;
    case 140u: goto L_002FD140;
    case 141u: goto L_002FD14C;
    case 142u: goto L_002FD154;
    case 143u: goto L_002FD170;
    case 144u: goto L_002FD180;
    case 145u: goto L_002FD18C;
    case 146u: goto L_002FD198;
    case 147u: goto L_002FD1A8;
    case 148u: goto L_002FD1B4;
    case 149u: goto L_002FD1BC;
    case 150u: goto L_002FD1D0;
    case 151u: goto L_002FD1E0;
    case 152u: goto L_002FD1FC;
    case 153u: goto L_002FD210;
    case 154u: goto L_002FD220;
    case 155u: goto L_002FD22C;
    case 156u: goto L_002FD240;
    case 157u: goto L_002FD250;
    case 158u: goto L_002FD260;
    case 159u: goto L_002FD278;
    case 160u: goto L_002FD288;
    case 161u: goto L_002FD298;
    case 162u: goto L_002FD2B0;
    case 163u: goto L_002FD2D0;
    case 164u: goto L_002FD330;
    case 165u: goto L_002FD358;
    case 166u: goto L_002FD440;
    case 167u: goto L_002FD4A4;
    case 168u: goto L_002FD4DC;
    case 169u: goto L_002FD4FC;
    case 170u: goto L_002FD520;
    case 171u: goto L_002FD540;
    case 172u: goto L_002FD564;
    case 173u: goto L_002FD588;
    case 174u: goto L_002FD5AC;
    case 175u: goto L_002FD5D0;
    case 176u: goto L_002FD618;
    case 177u: goto L_002FD62C;
    case 178u: goto L_002FD670;
    case 179u: goto L_002FD690;
    case 180u: goto L_002FD6B0;
    case 181u: goto L_002FD6D0;
    case 182u: goto L_002FD6DC;
    case 183u: goto L_002FD6E8;
    case 184u: goto L_002FD6F4;
    case 185u: goto L_002FD718;
    case 186u: goto L_002FD728;
    case 187u: goto L_002FD738;
    case 188u: goto L_002FD74C;
    case 189u: goto L_002FD75C;
    case 190u: goto L_002FD76C;
    case 191u: goto L_002FD784;
    case 192u: goto L_002FD794;
    case 193u: goto L_002FD7A0;
    case 194u: goto L_002FD7BC;
    case 195u: goto L_002FD7CC;
    case 196u: goto L_002FD7DC;
    case 197u: goto L_002FD7F4;
    case 198u: goto L_002FD804;
    case 199u: goto L_002FD814;
    case 200u: goto L_002FD840;
    case 201u: goto L_002FD884;
    case 202u: goto L_002FD93C;
    case 203u: goto L_002FD970;
    case 204u: goto L_002FD980;
    case 205u: goto L_002FD9C4;
    case 206u: goto L_002FD9D0;
    case 207u: goto L_002FDA24;
    case 208u: goto L_002FDA88;
    case 209u: goto L_002FDACC;
    case 210u: goto L_002FDB2C;
    case 211u: goto L_002FDBA0;
    case 212u: goto L_002FDC08;
    case 213u: goto L_002FDC74;
    case 214u: goto L_002FDCD0;
    case 215u: goto L_002FDD50;
    case 216u: goto L_002FDDDC;
    case 217u: goto L_002FDDE4;
    case 218u: goto L_002FDDE8;
    case 219u: goto L_002FDE08;
    case 220u: goto L_002FDE60;
    case 221u: goto L_002FDE98;
    case 222u: goto L_002FDEC0;
    case 223u: goto L_002FDEF8;
    case 224u: goto L_002FDF20;
    case 225u: goto L_002FDF2C;
    case 226u: goto L_002FDF54;
    case 227u: goto L_002FDF5C;
    case 228u: goto L_002FDF68;
    case 229u: goto L_002FDF84;
    case 230u: goto L_002FDFAC;
    case 231u: goto L_002FDFD4;
    case 232u: goto L_002FDFF4;
    case 233u: goto L_002FE01C;
    case 234u: goto L_002FE044;
    case 235u: goto L_002FE064;
    case 236u: goto L_002FE0D0;
    case 237u: goto L_002FE0D8;
    case 238u: goto L_002FE10C;
    case 239u: goto L_002FE12C;
    case 240u: goto L_002FE148;
    case 241u: goto L_002FE178;
    case 242u: goto L_002FE194;
    case 243u: goto L_002FE1C8;
    case 244u: goto L_002FE1E0;
    case 245u: goto L_002FE230;
    case 246u: goto L_002FE240;
    case 247u: goto L_002FE25C;
    case 248u: goto L_002FE288;
    case 249u: goto L_002FE2B0;
    case 250u: goto L_002FE2F8;
    case 251u: goto L_002FE340;
    case 252u: goto L_002FE3A4;
    case 253u: goto L_002FE408;
    case 254u: goto L_002FE440;
    case 255u: goto L_002FE450;
    case 256u: goto L_002FE460;
    case 257u: goto L_002FE470;
    case 258u: goto L_002FE480;
    case 259u: goto L_002FE490;
    case 260u: goto L_002FE4A0;
    case 261u: goto L_002FE4B0;
    case 262u: goto L_002FE4C0;
    case 263u: goto L_002FE4D0;
    case 264u: goto L_002FE4E0;
    case 265u: goto L_002FE4F0;
    case 266u: goto L_002FE500;
    case 267u: goto L_002FE510;
    case 268u: goto L_002FE520;
    case 269u: goto L_002FE530;
    case 270u: goto L_002FE540;
    case 271u: goto L_002FE550;
    case 272u: goto L_002FE560;
    case 273u: goto L_002FE570;
    case 274u: goto L_002FE580;
    case 275u: goto L_002FE590;
    case 276u: goto L_002FE5A0;
    case 277u: goto L_002FE5B0;
    case 278u: goto L_002FE5C0;
    case 279u: goto L_002FE5D0;
    case 280u: goto L_002FE5E0;
    case 281u: goto L_002FE5F0;
    case 282u: goto L_002FE600;
    case 283u: goto L_002FE610;
    case 284u: goto L_002FE620;
    case 285u: goto L_002FE630;
    case 286u: goto L_002FE640;
    case 287u: goto L_002FE650;
    case 288u: goto L_002FE660;
    case 289u: goto L_002FE670;
    case 290u: goto L_002FE680;
    case 291u: goto L_002FE690;
    case 292u: goto L_002FE6A0;
    case 293u: goto L_002FE6B0;
    case 294u: goto L_002FE6C0;
    case 295u: goto L_002FE6D0;
    case 296u: goto L_002FE6E0;
    case 297u: goto L_002FE6F0;
    case 298u: goto L_002FE700;
    case 299u: goto L_002FE710;
    case 300u: goto L_002FE720;
    case 301u: goto L_002FE730;
    case 302u: goto L_002FE740;
    case 303u: goto L_002FE750;
    case 304u: goto L_002FE760;
    case 305u: goto L_002FE770;
    case 306u: goto L_002FE780;
    case 307u: goto L_002FE790;
    case 308u: goto L_002FE7A0;
    case 309u: goto L_002FE7B0;
    case 310u: goto L_002FE7C0;
    case 311u: goto L_002FE7D0;
    case 312u: goto L_002FE7E0;
    case 313u: goto L_002FE7F0;
    case 314u: goto L_002FE800;
    case 315u: goto L_002FE810;
    case 316u: goto L_002FE820;
    case 317u: goto L_002FE830;
    case 318u: goto L_002FE840;
    case 319u: goto L_002FE850;
    case 320u: goto L_002FE860;
    case 321u: goto L_002FE870;
    case 322u: goto L_002FE880;
    case 323u: goto L_002FE890;
    case 324u: goto L_002FE8A0;
    case 325u: goto L_002FE8B0;
    case 326u: goto L_002FE8C0;
    case 327u: goto L_002FE8D0;
    case 328u: goto L_002FE8E0;
    case 329u: goto L_002FE8F0;
    case 330u: goto L_002FE900;
    case 331u: goto L_002FE910;
    case 332u: goto L_002FE920;
    case 333u: goto L_002FE930;
    case 334u: goto L_002FE940;
    case 335u: goto L_002FE950;
    case 336u: goto L_002FE960;
    case 337u: goto L_002FE970;
    case 338u: goto L_002FE980;
    case 339u: goto L_002FE990;
    case 340u: goto L_002FE9A0;
    case 341u: goto L_002FE9B4;
    case 342u: goto L_002FE9F8;
    case 343u: goto L_002FEA40;
    case 344u: goto L_002FEA44;
    case 345u: goto L_002FEAA8;
    case 346u: goto L_002FEBAC;
    case 347u: goto L_002FEC20;
    case 348u: goto L_002FEC4C;
    case 349u: goto L_002FECD0;
    case 350u: goto L_002FECF0;
    case 351u: goto L_002FED10;
    case 352u: goto L_002FED7C;
    case 353u: goto L_002FED84;
    case 354u: goto L_002FEDA4;
    case 355u: goto L_002FEDFC;
    case 356u: goto L_002FEEC0;
    case 357u: goto L_002FEF98;
    case 358u: goto L_002FEFE8;
    case 359u: goto L_002FF004;
    case 360u: goto L_002FF00C;
    case 361u: goto L_002FF080;
    case 362u: goto L_002FF0B0;
    case 363u: goto L_002FF0D4;
    case 364u: goto L_002FF0F0;
    case 365u: goto L_002FF148;
    case 366u: goto L_002FF290;
    case 367u: goto L_002FF31C;
    case 368u: goto L_002FF330;
    case 369u: goto L_002FF388;
    case 370u: goto L_002FF3C0;
    case 371u: goto L_002FF418;
    case 372u: goto L_002FF4E0;
    case 373u: goto L_002FF520;
    case 374u: goto L_002FF5A0;
    case 375u: goto L_002FF5C4;
    case 376u: goto L_002FF5DC;
    case 377u: goto L_002FF600;
    case 378u: goto L_002FF62C;
    case 379u: goto L_002FF650;
    case 380u: goto L_002FF660;
    case 381u: goto L_002FF69C;
    case 382u: goto L_002FF72C;
    case 383u: goto L_002FF850;
    case 384u: goto L_002FF960;
    case 385u: goto L_002FF9D0;
    case 386u: goto L_002FF9FC;
    case 387u: goto L_002FFAA0;
    case 388u: goto L_002FFBC0;
    case 389u: goto L_002FFC20;
    case 390u: goto L_002FFC8C;
    case 391u: goto L_002FFDB4;
    case 392u: goto L_002FFED0;
    case 393u: goto L_002FFF40;
    case 394u: goto L_002FFF8C;
    case 395u: goto L_002FFF90;
    default: bad_entry(c, 0x002FC000u); return;
    }
L_002FC000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC020; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC020u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 83u, depth + 1u); else { c.pc = 0x0025E610u; return; } if (c.pc != 0x002FC020u) [[unlikely]] return; }
L_002FC020:
    st32((c.r[28].w[0] - 29600u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC02Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 94u, depth + 1u); else { c.pc = 0x0025EDF0u; return; } if (c.pc != 0x002FC02Cu) [[unlikely]] return; }
L_002FC02C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC03Cu); set32(c.r[5], c.r[5].w[0] - 6284u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FC03Cu) [[unlikely]] return; }
L_002FC03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC044u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FC044u) [[unlikely]] return; }
L_002FC044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC050; } }
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 1;
L_002FC050:
    st32((c.r[28].w[0] - 29604u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC060u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002FC060u) [[unlikely]] return; }
L_002FC060:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002FC068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 13328u);
    set32(c.r[16], c.r[17].w[0] + 288u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13308u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13296u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13284u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13272u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st32((c.r[17].w[0] + 124u), 0u);
    set32(c.r[2], 0u + 48u);
    st32((c.r[17].w[0] + 132u), 0u);
    st32((c.r[17].w[0] + 136u), 0u);
    st32((c.r[17].w[0] + 140u), 0u);
    st32((c.r[17].w[0] + 144u), 0u);
    st32((c.r[17].w[0] + 148u), 0u);
    st32((c.r[17].w[0] + 152u), 0u);
    st32((c.r[17].w[0] + 156u), 0u);
    st32((c.r[17].w[0] + 160u), 0u);
    st32((c.r[17].w[0] + 164u), 0u);
    st32((c.r[17].w[0] + 168u), 0u);
    st32((c.r[17].w[0] + 172u), 0u);
    st32((c.r[17].w[0] + 176u), 0u);
    st32((c.r[17].w[0] + 180u), 0u);
    st32((c.r[17].w[0] + 184u), 0u);
    st32((c.r[17].w[0] + 188u), 0u);
    st8((c.r[17].w[0] + 200u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 204u), 0u);
    st32((c.r[17].w[0] + 208u), 0u);
    st32((c.r[17].w[0] + 212u), 0u);
    st32((c.r[17].w[0] + 216u), 0u);
    st32((c.r[17].w[0] + 220u), 0u);
    st32((c.r[17].w[0] + 224u), 0u);
    st32((c.r[17].w[0] + 228u), 0u);
    st32((c.r[17].w[0] + 232u), 0u);
    st32((c.r[17].w[0] + 236u), 0u);
    st32((c.r[17].w[0] + 240u), 0u);
    st32((c.r[17].w[0] + 244u), 0u);
    st32((c.r[17].w[0] + 248u), 0u);
    st32((c.r[17].w[0] + 252u), 0u);
    st32((c.r[17].w[0] + 256u), 0u);
    st32((c.r[17].w[0] + 260u), 0u);
    st32((c.r[17].w[0] + 268u), 0u);
    st32((c.r[17].w[0] + 272u), 0u);
    st32((c.r[17].w[0] + 276u), 0u);
    st32((c.r[17].w[0] + 280u), 0u);
    st8((c.r[17].w[0] + 299u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 298u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 296u), static_cast<std::uint16_t>(0u));
    c.budget -= 62;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC160u); st32((c.r[17].w[0] + 300u), 0u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x002FC160u) [[unlikely]] return; }
L_002FC160:
    st32((c.r[16].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[3], 0u + 56u);
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.r[6].d[0] = c.r[6].d[0] | 19ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[17].w[0] + 192u), 0u);
    st8((c.r[17].w[0] + 196u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 196u));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC19Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FC19Cu) [[unlikely]] return; }
L_002FC19C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC1ACu); set32(c.r[5], c.r[5].w[0] + 13536u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FC1ACu) [[unlikely]] return; }
L_002FC1AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC1BCu); set32(c.r[5], c.r[5].w[0] - 6126u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FC1BCu) [[unlikely]] return; }
L_002FC1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC1C4u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FC1C4u) [[unlikely]] return; }
L_002FC1C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC1DC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 196u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC1DCu); set32(c.r[6], c.r[29].w[0] + 896u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002FC1DCu) [[unlikely]] return; }
L_002FC1DC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 196u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC1FCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FC1FCu) [[unlikely]] return; }
L_002FC1FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC20Cu); set32(c.r[5], c.r[5].w[0] + 13536u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FC20Cu) [[unlikely]] return; }
L_002FC20C:
    set32(c.r[4], c.r[17].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC21Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002FC21Cu) [[unlikely]] return; }
L_002FC21C:
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC228u); set32(c.r[5], c.r[29].w[0] + 896u);  if (depth < kMaxDepth) unit_0021(c, 244u, depth + 1u); else { c.pc = 0x00286E80u; return; } if (c.pc != 0x002FC228u) [[unlikely]] return; }
L_002FC228:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 196u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 896u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC244u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FC244u) [[unlikely]] return; }
L_002FC244:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC254u); set32(c.r[5], c.r[5].w[0] - 6133u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FC254u) [[unlikely]] return; }
L_002FC254:
    set32(c.r[4], c.r[17].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC264u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002FC264u) [[unlikely]] return; }
L_002FC264:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 196u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 896u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC280u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FC280u) [[unlikely]] return; }
L_002FC280:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 896u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC290u); set32(c.r[5], c.r[5].w[0] + 13536u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FC290u) [[unlikely]] return; }
L_002FC290:
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC29Cu); set32(c.r[5], c.r[29].w[0] + 896u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002FC29Cu) [[unlikely]] return; }
L_002FC29C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC2B0u); set32(c.r[6], c.r[6].w[0] + 4512u);  if (depth < kMaxDepth) unit_0041(c, 131u, depth + 1u); else { c.pc = 0x00305280u; return; } if (c.pc != 0x002FC2B0u) [[unlikely]] return; }
L_002FC2B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 3648u));
    set32(c.r[16], c.r[29].w[0] + 356u);
    c.r[7].d[0] = ld8((c.r[2].w[0] + 3649u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 3652u);
    set32(c.r[4], 0u + 128u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[29].w[0] + 352u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3650u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3651u));
    st8((c.r[29].w[0] + 353u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 354u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 355u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 17;
L_002FC2F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC2F4u | kUnwind; return; } goto L_002FC2F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3908u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3909u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 4512u);
    st8((c.r[29].w[0] + 612u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC33Cu); st8((c.r[29].w[0] + 613u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FC33Cu) [[unlikely]] return; }
L_002FC33C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC34Cu); set32(c.r[5], c.r[5].w[0] - 6052u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FC34Cu) [[unlikely]] return; }
L_002FC34C:
    set32(c.r[4], c.r[17].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC358u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_003F(c, 180u, depth + 1u); else { c.pc = 0x002FD6B0u; return; } if (c.pc != 0x002FC358u) [[unlikely]] return; }
L_002FC358:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 37u);
    set32(c.r[4], c.r[4].w[0] + 9992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC36Cu); st8((c.r[17].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x002FC36Cu) [[unlikely]] return; }
L_002FC36C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC378u); set32(c.r[4], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x002FC378u) [[unlikely]] return; }
L_002FC378:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 298u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st8((c.r[17].w[0] + 298u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 308u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 298u));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1152u);  c.pc = t; return; }
L_002FC3B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FC3C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FC3D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FC82C; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FC82C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FC738; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FC78C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC434u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FC434u) [[unlikely]] return; }
L_002FC434:
    set32(c.r[2], ld32((c.r[18].w[0] + 124u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    c.budget -= 2;
L_002FC43C:
    set32(c.r[2], ld32((c.r[18].w[0] + 192u)));
    c.budget -= 1;
L_002FC440:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC44Cu); set32(c.r[4], c.r[2].w[0] + 3504u);  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x002FC44Cu) [[unlikely]] return; }
L_002FC44C:
    set32(c.r[2], ld32((c.r[18].w[0] + 192u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 132u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[6], ld32((c.r[18].w[0] + 140u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 136u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC470u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002FC470u) [[unlikely]] return; }
L_002FC470:
    set32(c.r[2], ld32((c.r[18].w[0] + 192u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[6], ld32((c.r[18].w[0] + 156u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC498u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FC498u) [[unlikely]] return; }
L_002FC498:
    set32(c.r[2], ld32((c.r[18].w[0] + 192u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[5], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[6], ld32((c.r[18].w[0] + 172u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC4C0u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FC4C0u) [[unlikely]] return; }
L_002FC4C0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 77u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002FC4EC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 216u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FC4EC; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002FC4EC:
    set32(c.r[5], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29220u));
    set32(c.r[5], ld32((c.r[5].w[0] + 216u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = ld8((c.r[5].w[0] + 29u));  if (t) { goto L_002FC7A8; } }
L_002FC504:
    c.r[3].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002FC514; } }
    c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002FC514:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FC534; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[3], 0u + 38u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002FC534; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FC534:
    st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002FC538:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 284u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FC7C8; } }
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29220u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002FC7F0; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 77u));
    c.budget -= 1;
L_002FC558:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FC594; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 29632u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FC810; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC58Cu); set32(c.r[5], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FC58Cu) [[unlikely]] return; }
L_002FC58C:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[28].w[0] - 29836u), c.r[3].w[0]);
    c.budget -= 2;
L_002FC594:
    set32(c.r[3], ld32((c.r[18].w[0] + 192u)));
    c.budget -= 1;
L_002FC598:
    set32(c.r[6], ld32((c.r[18].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FC5C4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 212u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC5C4u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FC5C4u) [[unlikely]] return; }
L_002FC5C4:
    set32(c.r[6], ld32((c.r[18].w[0] + 232u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FC5F0; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 220u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC5F0u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FC5F0u) [[unlikely]] return; }
L_002FC5F0:
    set32(c.r[6], ld32((c.r[18].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FC618; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 252u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 256u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC618u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002FC618u) [[unlikely]] return; }
L_002FC618:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FC6B4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29600u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC638u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FC638u) [[unlikely]] return; }
L_002FC638:
    set32(c.r[3], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 232u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FC68C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 264u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FC660; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002FC67C; } }
L_002FC660:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002FC67C:
    set32(c.r[5], ld32((c.r[18].w[0] + 220u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC68Cu); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FC68Cu) [[unlikely]] return; }
L_002FC68C:
    set32(c.r[3], ld32((c.r[18].w[0] + 192u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 248u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FC6B4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 236u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC6B4u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FC6B4u) [[unlikely]] return; }
L_002FC6B4:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FC82C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29600u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC6D4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FC6D4u) [[unlikely]] return; }
L_002FC6D4:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32212u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FC82C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 32216u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FC6F8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002FC714; } }
L_002FC6F8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002FC714:
    set32(c.r[2], ld32((c.r[18].w[0] + 192u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 160u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 172u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC730u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FC730u) [[unlikely]] return; }
L_002FC730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002FC830; } }
L_002FC738:
    set32(c.r[16], ld32((c.r[28].w[0] - 29604u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FC770; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC764u); set32(c.r[5], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FC764u) [[unlikely]] return; }
L_002FC764:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC43Cu | kUnwind; return; } goto L_002FC43C; } }
L_002FC770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC784u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FC784u) [[unlikely]] return; }
L_002FC784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 192u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC440u | kUnwind; return; } goto L_002FC440; } }
L_002FC78C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC7A0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FC7A0u) [[unlikely]] return; }
L_002FC7A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC43Cu | kUnwind; return; } goto L_002FC43C; } }
L_002FC7A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC7B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 146u, depth + 1u); else { c.pc = 0x002A19B0u; return; } if (c.pc != 0x002FC7B8u) [[unlikely]] return; }
L_002FC7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC504u | kUnwind; return; } goto L_002FC504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 284u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC538u | kUnwind; return; } goto L_002FC538; } }
L_002FC7C8:
    set32(c.r[7], ld32((c.r[18].w[0] + 316u)));
    set32(c.r[6], 0u + 255u);
    set32(c.r[5], 0u + 200u);
    set32(c.r[4], 0u + 140u);
    set32(c.r[3], 0u + 128u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC6B4u | kUnwind; return; } goto L_002FC6B4; } }
L_002FC7F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC800u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 146u, depth + 1u); else { c.pc = 0x002A19B0u; return; } if (c.pc != 0x002FC800u) [[unlikely]] return; }
L_002FC800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC6B4u | kUnwind; return; } goto L_002FC6B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 77u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC558u | kUnwind; return; } goto L_002FC558; } }
L_002FC810:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC824u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FC824u) [[unlikely]] return; }
L_002FC824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 192u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC598u | kUnwind; return; } goto L_002FC598; } }
L_002FC82C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002FC830:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FC850:
    set32(c.r[5], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002FC904; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 284u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FC904; } }
    set32(c.r[8], ld32((c.r[5].w[0] + 348u)));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(576ll);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 312u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[4].w[0] + 296u);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], ld32((c.r[4].w[0] + 288u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 1056u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0] + 1064u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 1056u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0] + 1064u), c.r[3].w[0]);
    c.budget -= 39;
L_002FC904:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FC910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FC92C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC92Cu);  if (depth < kMaxDepth) unit_001F(c, 369u, depth + 1u); else { c.pc = 0x0027F9B0u; return; } if (c.pc != 0x002FC92Cu) [[unlikely]] return; }
L_002FC92C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FC940:
    set32(c.r[3], ld32((c.r[4].w[0] + 756u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FC954; } }
L_002FC94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC95C; } }
L_002FC954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 756u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC94Cu | kUnwind; return; } goto L_002FC94C; } }
L_002FC95C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FC970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 756u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 1168u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FC994; } }
L_002FC98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002FC9A8; } }
L_002FC994:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC9A0u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 149u, depth + 1u); else { c.pc = 0x0041A160u; return; } if (c.pc != 0x002FC9A0u) [[unlikely]] return; }
L_002FC9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1168u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC98Cu | kUnwind; return; } goto L_002FC98C; } }
L_002FC9A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FC9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 64u);
    st32((c.r[4].w[0] + 756u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 756u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC9F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002FC9F8u) [[unlikely]] return; }
L_002FC9F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA0Cu); set32(c.r[6], 0u + 11u);  if (depth < kMaxDepth) unit_0086(c, 151u, depth + 1u); else { c.pc = 0x0041A200u; return; } if (c.pc != 0x002FCA0Cu) [[unlikely]] return; }
L_002FCA0C:
    st32((c.r[17].w[0] + 1168u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FCA30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FCC78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 13216u);
    set32(c.r[2], c.r[2].w[0] - 13208u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 760u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13196u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13184u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13172u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13160u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAA4u); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002FCAA4u) [[unlikely]] return; }
L_002FCAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAACu); set32(c.r[4], ld32((c.r[28].w[0] - 29632u)));  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002FCAACu) [[unlikely]] return; }
L_002FCAAC:
    set32(c.r[18], ld32((c.r[28].w[0] - 29632u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002FCAC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002FCAC0u) [[unlikely]] return; }
L_002FCAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FCAC8u) [[unlikely]] return; }
L_002FCAC8:
    set32(c.r[4], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FCAE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCADCu);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FCADCu) [[unlikely]] return; }
L_002FCADC:
    st32((c.r[17].w[0] + 808u), 0u);
    c.budget -= 1;
L_002FCAE0:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002FCAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAF0u); set32(c.r[4], c.r[18].w[0] + 88u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FCAF0u) [[unlikely]] return; }
L_002FCAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAF8u); set32(c.r[4], c.r[18].w[0] + 104u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FCAF8u) [[unlikely]] return; }
L_002FCAF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB00u); set32(c.r[4], c.r[18].w[0] + 120u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FCB00u) [[unlikely]] return; }
L_002FCB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB08u); set32(c.r[4], c.r[18].w[0] + 152u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FCB08u) [[unlikely]] return; }
L_002FCB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB10u); set32(c.r[4], c.r[18].w[0] + 136u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FCB10u) [[unlikely]] return; }
L_002FCB10:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCAE8u | kUnwind; return; } goto L_002FCAE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB28u); set32(c.r[4], c.r[17].w[0] + 812u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FCB28u) [[unlikely]] return; }
L_002FCB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB30u); set32(c.r[4], c.r[17].w[0] + 824u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FCB30u) [[unlikely]] return; }
L_002FCB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB38u); set32(c.r[4], c.r[17].w[0] + 840u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FCB38u) [[unlikely]] return; }
L_002FCB38:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002FCB40:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FCB58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x002FCB54u) [[unlikely]] return; }
L_002FCB54:
    c.budget -= 1;
L_002FCB58:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.r[2].d[0] = c.r[19].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCB40u | kUnwind; return; } goto L_002FCB40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB78u); set32(c.r[4], c.r[17].w[0] + 860u);  if (depth < kMaxDepth) unit_0021(c, 202u, depth + 1u); else { c.pc = 0x002869D0u; return; } if (c.pc != 0x002FCB78u) [[unlikely]] return; }
L_002FCB78:
    set32(c.r[2], c.r[17].w[0] + 888u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCB9C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[4], c.r[17].w[0] + 896u);
    set32(c.r[5], c.r[5].w[0] + 21712u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCB9Cu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002FCB9Cu) [[unlikely]] return; }
L_002FCB9C:
    set32(c.r[4], c.r[17].w[0] + 860u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCBA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 199u, depth + 1u); else { c.pc = 0x00286950u; return; } if (c.pc != 0x002FCBA8u) [[unlikely]] return; }
L_002FCBA8:
    set32(c.r[2], c.r[17].w[0] + 812u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCC80; } }
L_002FCBB4:
    set32(c.r[4], c.r[17].w[0] + 760u);
    c.budget -= 1;
L_002FCBB8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FCCB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCBC8u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002FCBC8u) [[unlikely]] return; }
L_002FCBC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCCB4; } }
L_002FCBD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCC10; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29600u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FCBF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCBECu);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FCBECu) [[unlikely]] return; }
L_002FCBEC:
    st32((c.r[28].w[0] - 29600u), 0u);
    c.budget -= 1;
L_002FCBF0:
    set32(c.r[18], ld32((c.r[28].w[0] - 29604u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002FCC0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002FCC04u) [[unlikely]] return; }
L_002FCC04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FCC0Cu) [[unlikely]] return; }
L_002FCC0C:
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002FCC10:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FCC60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 15024u);
    set32(c.r[2], c.r[2].w[0] - 15016u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15004u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14980u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14968u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 18;
L_002FCC60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002FCC78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FCC78u) [[unlikely]] return; }
L_002FCC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FCCE0; } }
L_002FCC80:
    set32(c.r[4], c.r[17].w[0] + 840u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FCC8Cu) [[unlikely]] return; }
L_002FCC8C:
    set32(c.r[4], c.r[17].w[0] + 824u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FCC98u) [[unlikely]] return; }
L_002FCC98:
    set32(c.r[4], c.r[17].w[0] + 812u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCBB4u | kUnwind; return; } goto L_002FCBB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCCACu);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FCCACu) [[unlikely]] return; }
L_002FCCAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 760u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCBB8u | kUnwind; return; } goto L_002FCBB8; } }
L_002FCCB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[17].w[0] + 84u);
    set32(c.r[5], c.r[5].w[0] - 21344u);
    set32(c.r[6], 0u + 84u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCCCCu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002FCCCCu) [[unlikely]] return; }
L_002FCCCC:
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCC10u | kUnwind; return; } goto L_002FCC10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCBD0u | kUnwind; return; } goto L_002FCBD0; } }
L_002FCCE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FCD00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] + 3616u);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 14;
L_002FCD38:
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[16], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 256u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[16].w[0] + 264u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002FCDC0; } }
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], 0u + 82u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002FCD80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002FCDC0; } }
    c.budget -= 1;
L_002FCD80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCD8Cu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x002FCD8Cu) [[unlikely]] return; }
L_002FCD8C:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCD98u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x002FCD98u) [[unlikely]] return; }
L_002FCD98:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 18u));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_002FCDC0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FCD38u | kUnwind; return; } goto L_002FCD38; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002FCE00:
    set32(c.r[29], c.r[29].w[0] - 1296u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE1Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002FCE1Cu) [[unlikely]] return; }
L_002FCE1C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCEFC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE38u); set32(c.r[5], c.r[5].w[0] - 6324u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FCE38u) [[unlikely]] return; }
L_002FCE38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE48u); set32(c.r[5], c.r[5].w[0] - 6292u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FCE48u) [[unlikely]] return; }
L_002FCE48:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE54u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0025EED0u; return; } if (c.pc != 0x002FCE54u) [[unlikely]] return; }
L_002FCE54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[5].w[0] - 6384u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE70u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 189u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x002FCE70u) [[unlikely]] return; }
L_002FCE70:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE8Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 165u, depth + 1u); else { c.pc = 0x0025F870u; return; } if (c.pc != 0x002FCE8Cu) [[unlikely]] return; }
L_002FCE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCE94u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FCE94u) [[unlikely]] return; }
L_002FCE94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCEB4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEB4u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 83u, depth + 1u); else { c.pc = 0x0025E610u; return; } if (c.pc != 0x002FCEB4u) [[unlikely]] return; }
L_002FCEB4:
    st32((c.r[28].w[0] - 29600u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEC0u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0017(c, 94u, depth + 1u); else { c.pc = 0x0025EDF0u; return; } if (c.pc != 0x002FCEC0u) [[unlikely]] return; }
L_002FCEC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCED0u); set32(c.r[5], c.r[5].w[0] - 6284u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FCED0u) [[unlikely]] return; }
L_002FCED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCED8u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FCED8u) [[unlikely]] return; }
L_002FCED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCEE4; } }
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 1;
L_002FCEE4:
    st32((c.r[28].w[0] - 29604u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEF4u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002FCEF4u) [[unlikely]] return; }
L_002FCEF4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002FCEFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 13216u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00300000u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13196u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13184u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13172u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] - 13160u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 84u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 11568u);
    set32(c.r[6], c.r[6].w[0] - 21344u);
    set32(c.r[7], 0u + 84u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF64u); set32(c.r[8], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002FCF64u) [[unlikely]] return; }
L_002FCF64:
    st32((c.r[16].w[0] + 800u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    st32((c.r[16].w[0] + 812u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    st32((c.r[16].w[0] + 816u), 0u);
    set32(c.r[4], c.r[16].w[0] + 896u);
    st32((c.r[16].w[0] + 820u), 0u);
    set32(c.r[5], c.r[5].w[0] + 21824u);
    st32((c.r[16].w[0] + 824u), 0u);
    set32(c.r[6], c.r[6].w[0] + 21712u);
    st32((c.r[16].w[0] + 828u), 0u);
    set32(c.r[7], 0u + 32u);
    st32((c.r[16].w[0] + 832u), 0u);
    set32(c.r[8], 0u + 8u);
    st32((c.r[16].w[0] + 836u), 0u);
    st32((c.r[16].w[0] + 840u), 0u);
    st32((c.r[16].w[0] + 844u), 0u);
    st32((c.r[16].w[0] + 848u), 0u);
    st32((c.r[16].w[0] + 852u), 0u);
    st32((c.r[16].w[0] + 860u), 0u);
    st32((c.r[16].w[0] + 864u), 0u);
    st32((c.r[16].w[0] + 868u), 0u);
    st32((c.r[16].w[0] + 872u), 0u);
    st32((c.r[16].w[0] + 876u), 0u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCFCCu); st32((c.r[16].w[0] + 880u), 0u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002FCFCCu) [[unlikely]] return; }
L_002FCFCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[5].d[0] = c.r[4].d[0] | 39322ull;
    set32(c.r[3], c.r[2].w[0] << 6);
    st8((c.r[28].w[0] - 29620u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FEE0000u);
    st32((c.r[28].w[0] - 29628u), 0u);
    st32((c.r[28].w[0] - 29624u), 0u);
    c.r[4].d[0] = c.r[2].d[0] | 5243ull;
    st32((c.r[16].w[0] + 64u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    st32((c.r[16].w[0] + 72u), c.r[5].w[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 756u), 0u);
    set32(c.r[4], c.r[29].w[0] + 1040u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD020u); st32((c.r[16].w[0] + 808u), 0u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FD020u) [[unlikely]] return; }
L_002FD020:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD030u); set32(c.r[5], c.r[5].w[0] - 6033u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD030u) [[unlikely]] return; }
L_002FD030:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD040u); set32(c.r[5], c.r[5].w[0] - 6027u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD040u) [[unlikely]] return; }
L_002FD040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD048u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FD048u) [[unlikely]] return; }
L_002FD048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD060; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD060u); set32(c.r[6], c.r[29].w[0] + 1040u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002FD060u) [[unlikely]] return; }
L_002FD060:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD06Cu); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FD06Cu) [[unlikely]] return; }
L_002FD06C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD084; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 82u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD084u); set32(c.r[6], c.r[29].w[0] + 1040u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002FD084u) [[unlikely]] return; }
L_002FD084:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD090u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FD090u) [[unlikely]] return; }
L_002FD090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD0A8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 83u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD0A8u); set32(c.r[6], c.r[29].w[0] + 1040u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002FD0A8u) [[unlikely]] return; }
L_002FD0A8:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD0B4u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FD0B4u) [[unlikely]] return; }
L_002FD0B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD0CC; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD0CCu); set32(c.r[6], c.r[29].w[0] + 1040u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002FD0CCu) [[unlikely]] return; }
L_002FD0CC:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[29].w[0] + 768u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD0E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0041(c, 131u, depth + 1u); else { c.pc = 0x00305280u; return; } if (c.pc != 0x002FD0E8u) [[unlikely]] return; }
L_002FD0E8:
    set32(c.r[4], c.r[29].w[0] + 768u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD0FCu); set32(c.r[7], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0041(c, 165u, depth + 1u); else { c.pc = 0x003055E0u; return; } if (c.pc != 0x002FD0FCu) [[unlikely]] return; }
L_002FD0FC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 496u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD204; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 497u));
    c.budget -= 1;
L_002FD10C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD234; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 498u));
    c.budget -= 1;
L_002FD118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD268; } }
    set32(c.r[17], c.r[29].w[0] + 500u);
    c.budget -= 1;
L_002FD124:
    set32(c.r[4], c.r[29].w[0] + 1040u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD130u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FD130u) [[unlikely]] return; }
L_002FD130:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD140u); set32(c.r[5], c.r[5].w[0] - 6017u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD140u) [[unlikely]] return; }
L_002FD140:
    set32(c.r[4], c.r[16].w[0] + 760u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD14Cu); set32(c.r[5], c.r[29].w[0] + 1040u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002FD14Cu) [[unlikely]] return; }
L_002FD14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD154u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FD154u) [[unlikely]] return; }
L_002FD154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD160; } }
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 1;
L_002FD160:
    st32((c.r[28].w[0] - 29632u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD170u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FD170u) [[unlikely]] return; }
L_002FD170:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD180u); set32(c.r[5], c.r[5].w[0] - 6009u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD180u) [[unlikely]] return; }
L_002FD180:
    set32(c.r[4], ld32((c.r[28].w[0] - 29632u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD18Cu); set32(c.r[5], c.r[29].w[0] + 1040u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002FD18Cu) [[unlikely]] return; }
L_002FD18C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD198u); set32(c.r[4], c.r[29].w[0] + 1040u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FD198u) [[unlikely]] return; }
L_002FD198:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1A8u); set32(c.r[5], c.r[5].w[0] - 6253u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD1A8u) [[unlikely]] return; }
L_002FD1A8:
    set32(c.r[4], c.r[16].w[0] + 860u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1B4u); set32(c.r[5], c.r[29].w[0] + 1040u);  if (depth < kMaxDepth) unit_0021(c, 209u, depth + 1u); else { c.pc = 0x00286B00u; return; } if (c.pc != 0x002FD1B4u) [[unlikely]] return; }
L_002FD1B4:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002FD1BC:
    c.r[6].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 768u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1D0u); set32(c.r[7], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0041(c, 165u, depth + 1u); else { c.pc = 0x003055E0u; return; } if (c.pc != 0x002FD1D0u) [[unlikely]] return; }
L_002FD1D0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD2A0; } }
    c.budget -= 1;
L_002FD1E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD1BCu | kUnwind; return; } goto L_002FD1BC; } }
    set32(c.r[4], c.r[16].w[0] + 888u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD1FCu); set32(c.r[5], c.r[29].w[0] + 768u);  if (depth < kMaxDepth) unit_003F(c, 104u, depth + 1u); else { c.pc = 0x002FCD00u; return; } if (c.pc != 0x002FD1FCu) [[unlikely]] return; }
L_002FD1FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002FD2B8; } }
L_002FD204:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD210u); set32(c.r[5], c.r[29].w[0] + 500u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FD210u) [[unlikely]] return; }
L_002FD210:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD220u); set32(c.r[5], c.r[5].w[0] - 5994u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD220u) [[unlikely]] return; }
L_002FD220:
    set32(c.r[4], c.r[16].w[0] + 812u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD22Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0021(c, 244u, depth + 1u); else { c.pc = 0x00286E80u; return; } if (c.pc != 0x002FD22Cu) [[unlikely]] return; }
L_002FD22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[29].w[0] + 497u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD10Cu | kUnwind; return; } goto L_002FD10C; } }
L_002FD234:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD240u); set32(c.r[5], c.r[29].w[0] + 500u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FD240u) [[unlikely]] return; }
L_002FD240:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD250u); set32(c.r[5], c.r[5].w[0] - 5980u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD250u) [[unlikely]] return; }
L_002FD250:
    set32(c.r[4], c.r[16].w[0] + 824u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD260u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002FD260u) [[unlikely]] return; }
L_002FD260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[29].w[0] + 498u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD118u | kUnwind; return; } goto L_002FD118; } }
L_002FD268:
    st8((c.r[16].w[0] + 856u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD278u); set32(c.r[5], c.r[29].w[0] + 500u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FD278u) [[unlikely]] return; }
L_002FD278:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD288u); set32(c.r[5], c.r[5].w[0] - 6133u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD288u) [[unlikely]] return; }
L_002FD288:
    set32(c.r[4], c.r[16].w[0] + 840u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD298u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002FD298u) [[unlikely]] return; }
L_002FD298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[29].w[0] + 500u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD124u | kUnwind; return; } goto L_002FD124; } }
L_002FD2A0:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD2B0u); set32(c.r[4], c.r[2].w[0] + 84u);  if (depth < kMaxDepth) unit_003F(c, 180u, depth + 1u); else { c.pc = 0x002FD6B0u; return; } if (c.pc != 0x002FD2B0u) [[unlikely]] return; }
L_002FD2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD1E0u | kUnwind; return; } goto L_002FD1E0; } }
L_002FD2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1296u);  c.pc = t; return; }
L_002FD2D0:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 80u), 0u);  c.pc = t; return; }
L_002FD330:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD430; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 888u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD430; } }
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[28].w[0] - 32224u);
    set32(c.r[11], c.r[11].w[0] + 3376u);
    c.budget -= 4;
L_002FD358:
    set32(c.r[7], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1152u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD420; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1160u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD420; } }
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[10], ld32((c.r[28].w[0] - 29808u)));
    c.r[12].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[10], ld32((c.r[10].w[0] + 348u)));
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[8].w[0] + 896u);
    set32(c.r[7], ld32((c.r[8].w[0] + 920u)));
    set32(c.r[9], c.r[3].w[0] + 8u);
    set32(c.r[3], c.r[12].w[0] << 6);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[3], ld32((c.r[8].w[0] + 896u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[10], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[10].w[0] + 1064u)));
    set32(c.r[7], ld32((c.r[10].w[0] + 1056u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[9].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[10].w[0] + 1064u), c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[10].w[0] + 1064u)));
    set32(c.r[7], ld32((c.r[10].w[0] + 1056u)));
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[10].w[0] + 1064u), c.r[3].w[0]);
    c.budget -= 43;
L_002FD420:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD358u | kUnwind; return; } goto L_002FD358; } }
L_002FD430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FD440:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 756u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FD5B4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 212u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FD5B4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD5B4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1536u)));
    set32(c.r[6], c.r[29].w[0] + 72u);
    set32(c.r[7], c.r[29].w[0] + 76u);
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD4A4u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_003F(c, 200u, depth + 1u); else { c.pc = 0x002FD840u; return; } if (c.pc != 0x002FD4A4u) [[unlikely]] return; }
L_002FD4A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[4].w[0] - 14752u)));
    st32((c.r[3].w[0] - 216u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 756u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 836u)));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FD4DC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 824u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 832u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD4DCu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00259BF0u; return; } if (c.pc != 0x002FD4DCu) [[unlikely]] return; }
L_002FD4DC:
    set32(c.r[17], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FD520; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 756u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FD56C; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_002FD4FC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FD520; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD520u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00259BF0u; return; } if (c.pc != 0x002FD520u) [[unlikely]] return; }
L_002FD520:
    set32(c.r[17], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FD5B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 756u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FD590; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_002FD540:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FD5B4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 28u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD564u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00259BF0u; return; } if (c.pc != 0x002FD564u) [[unlikely]] return; }
L_002FD564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002FD5B8; } }
L_002FD56C:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD588u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00259BF0u; return; } if (c.pc != 0x002FD588u) [[unlikely]] return; }
L_002FD588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 32u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD4FCu | kUnwind; return; } goto L_002FD4FC; } }
L_002FD590:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD5ACu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0016(c, 82u, depth + 1u); else { c.pc = 0x00259BF0u; return; } if (c.pc != 0x002FD5ACu) [[unlikely]] return; }
L_002FD5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[17].w[0] + 32u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD540u | kUnwind; return; } goto L_002FD540; } }
L_002FD5B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002FD5B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FD5D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 756u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FD6A0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FD6A0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD620; } }
L_002FD618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002FD6A4; } }
L_002FD620:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD62Cu); set32(c.r[6], c.r[29].w[0] + 111u);  if (depth < kMaxDepth) unit_0002(c, 32u, depth + 1u); else { c.pc = 0x00209170u; return; } if (c.pc != 0x002FD62Cu) [[unlikely]] return; }
L_002FD62C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD6A0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 756u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1536u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD698; } }
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FD698; } }
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 84u);
    c.budget -= 7;
L_002FD670:
    set32(c.r[7], ld32((c.r[4].w[0] + 348u)));
    set32(c.r[9], c.r[29].w[0] + 32u);
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD690u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0002(c, 22u, depth + 1u); else { c.pc = 0x00208B80u; return; } if (c.pc != 0x002FD690u) [[unlikely]] return; }
L_002FD690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD618u | kUnwind; return; } goto L_002FD618; } }
L_002FD698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 504u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD670u | kUnwind; return; } goto L_002FD670; } }
L_002FD6A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002FD6A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002FD6B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FD740; } }
L_002FD6D0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 261u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD778; } }
L_002FD6DC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD7AC; } }
L_002FD6E8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD7E8; } }
L_002FD6F4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 260u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD820; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD820; } }
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD718u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FD718u) [[unlikely]] return; }
L_002FD718:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD728u); set32(c.r[5], c.r[5].w[0] - 6152u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD728u) [[unlikely]] return; }
L_002FD728:
    set32(c.r[4], c.r[17].w[0] + 68u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD738u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002FD738u) [[unlikely]] return; }
L_002FD738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FD824; } }
L_002FD740:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD74Cu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FD74Cu) [[unlikely]] return; }
L_002FD74C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD75Cu); set32(c.r[5], c.r[5].w[0] - 5980u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD75Cu) [[unlikely]] return; }
L_002FD75C:
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD76Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002FD76Cu) [[unlikely]] return; }
L_002FD76C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD6D0u | kUnwind; return; } goto L_002FD6D0; } }
L_002FD778:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD784u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FD784u) [[unlikely]] return; }
L_002FD784:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD794u); set32(c.r[5], c.r[5].w[0] - 5980u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD794u) [[unlikely]] return; }
L_002FD794:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD7A0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0021(c, 244u, depth + 1u); else { c.pc = 0x00286E80u; return; } if (c.pc != 0x002FD7A0u) [[unlikely]] return; }
L_002FD7A0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD6DCu | kUnwind; return; } goto L_002FD6DC; } }
L_002FD7AC:
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD7BCu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FD7BCu) [[unlikely]] return; }
L_002FD7BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD7CCu); set32(c.r[5], c.r[5].w[0] - 6133u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD7CCu) [[unlikely]] return; }
L_002FD7CC:
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD7DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002FD7DCu) [[unlikely]] return; }
L_002FD7DC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD6E8u | kUnwind; return; } goto L_002FD6E8; } }
L_002FD7E8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD7F4u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FD7F4u) [[unlikely]] return; }
L_002FD7F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD804u); set32(c.r[5], c.r[5].w[0] - 5971u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FD804u) [[unlikely]] return; }
L_002FD804:
    set32(c.r[4], c.r[17].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD814u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002FD814u) [[unlikely]] return; }
L_002FD814:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD6F4u | kUnwind; return; } goto L_002FD6F4; } }
L_002FD820:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002FD824:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_002FD840:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 756u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.r[21].d[0] = ld8((c.r[4].w[0] + 29u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD884u); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0094(c, 58u, depth + 1u); else { c.pc = 0x00450C40u; return; } if (c.pc != 0x002FD884u) [[unlikely]] return; }
L_002FD884:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002FD89C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002FD89C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FD89C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002FD93C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002FD8C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 6448u);  if (t) { goto L_002FD8E8; } }
L_002FD8C0:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1581u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD8D8; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_002FD8D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002FD8E8:
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[13] = 0u;
    set32(c.r[4], c.r[4].w[0] - 10496u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[7], 0u + 20u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 128u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 132u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 136u), c.r[8].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD93Cu); st32((c.r[29].w[0] + 152u), c.f[2]);  if (depth < kMaxDepth) unit_0021(c, 345u, depth + 1u); else { c.pc = 0x00287B90u; return; } if (c.pc != 0x002FD93Cu) [[unlikely]] return; }
L_002FD93C:
    st8((c.r[20].w[0] + 1152u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 1u);
    st8((c.r[20].w[0] + 1153u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1154u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1155u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1156u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1157u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1158u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 1159u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 888u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] + 756u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD970u); set32(c.r[4], c.r[2].w[0] + 3504u);  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x002FD970u) [[unlikely]] return; }
L_002FD970:
    c.r[5].d[0] = c.r[22].d[0] & 255ull;
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; st32((c.r[18].w[0]), 0u);  if (t) { goto L_002FD9D8; } }
L_002FD980:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002FD9FC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FDA6C; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_002FDB7C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FDBE4; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FDC4C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FDC4C; } }
L_002FD9C4:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29620u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDD14; } }
L_002FD9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_002FDD28; } }
L_002FD9D8:
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 84u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD980u | kUnwind; return; } goto L_002FD980; } }
L_002FD9FC:
    set32(c.r[3], c.r[20].w[0] + 504u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD9C4u | kUnwind; return; } goto L_002FD9C4; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[28].w[0] - 28336u);
    st8((c.r[20].w[0] + 1152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 64u);
    st8((c.r[20].w[0] + 888u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA24u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_000F(c, 414u, depth + 1u); else { c.pc = 0x0023FB10u; return; } if (c.pc != 0x002FDA24u) [[unlikely]] return; }
L_002FDA24:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FDA40; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(160ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(120ll);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_002FDA50; } }
L_002FDA40:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(253ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.budget -= 4;
L_002FDA50:
    set32(c.r[3], ld32((c.r[20].w[0] + 924u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD9C4u | kUnwind; return; } goto L_002FD9C4; } }
L_002FDA6C:
    set32(c.r[3], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 212u)));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDB70; } }
L_002FDA88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD9C4u | kUnwind; return; } goto L_002FD9C4; } }
    st32((c.r[19].w[0]), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FDB10; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[28].w[0] - 28336u);
    st8((c.r[20].w[0] + 1158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 64u);
    st8((c.r[20].w[0] + 888u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDACCu); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_000F(c, 414u, depth + 1u); else { c.pc = 0x0023FB10u; return; } if (c.pc != 0x002FDACCu) [[unlikely]] return; }
L_002FDACC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FDAE8; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(160ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(120ll);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_002FDAF8; } }
L_002FDAE8:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(253ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.budget -= 4;
L_002FDAF8:
    set32(c.r[3], ld32((c.r[20].w[0] + 1116u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD9C4u | kUnwind; return; } goto L_002FD9C4; } }
L_002FDB10:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[28].w[0] - 28336u);
    st8((c.r[20].w[0] + 1156u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 64u);
    st8((c.r[20].w[0] + 888u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDB2Cu); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_000F(c, 414u, depth + 1u); else { c.pc = 0x0023FB10u; return; } if (c.pc != 0x002FDB2Cu) [[unlikely]] return; }
L_002FDB2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FDB48; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(160ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(120ll);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_002FDB58; } }
L_002FDB48:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(253ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.budget -= 4;
L_002FDB58:
    set32(c.r[3], ld32((c.r[20].w[0] + 1052u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD9C4u | kUnwind; return; } goto L_002FD9C4; } }
L_002FDB70:
    set32(c.r[3], c.r[20].w[0] + 588u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDA88u | kUnwind; return; } goto L_002FDA88; } }
L_002FDB7C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD9C4u | kUnwind; return; } goto L_002FD9C4; } }
    st32((c.r[19].w[0]), 0u);
    set32(c.r[4], c.r[28].w[0] - 28336u);
    st8((c.r[20].w[0] + 1153u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], 0u + 64u);
    st8((c.r[20].w[0] + 888u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDBA0u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_000F(c, 414u, depth + 1u); else { c.pc = 0x0023FB10u; return; } if (c.pc != 0x002FDBA0u) [[unlikely]] return; }
L_002FDBA0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FDBBC; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(160ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(120ll);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_002FDBCC; } }
L_002FDBBC:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(253ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.budget -= 4;
L_002FDBCC:
    set32(c.r[3], ld32((c.r[20].w[0] + 956u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD9C4u | kUnwind; return; } goto L_002FD9C4; } }
L_002FDBE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD9C4u | kUnwind; return; } goto L_002FD9C4; } }
    st32((c.r[19].w[0]), 0u);
    set32(c.r[4], c.r[28].w[0] - 28336u);
    st8((c.r[20].w[0] + 1154u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], 0u + 64u);
    st8((c.r[20].w[0] + 888u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC08u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_000F(c, 414u, depth + 1u); else { c.pc = 0x0023FB10u; return; } if (c.pc != 0x002FDC08u) [[unlikely]] return; }
L_002FDC08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FDC24; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(160ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(120ll);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_002FDC34; } }
L_002FDC24:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(253ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.budget -= 4;
L_002FDC34:
    set32(c.r[3], ld32((c.r[20].w[0] + 988u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD9C4u | kUnwind; return; } goto L_002FD9C4; } }
L_002FDC4C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD9C4u | kUnwind; return; } goto L_002FD9C4; } }
    st32((c.r[19].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 1159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[28].w[0] - 28336u);
    st8((c.r[20].w[0] + 888u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDC74u); set32(c.r[6], 0u + 128u);  if (depth < kMaxDepth) unit_000F(c, 414u, depth + 1u); else { c.pc = 0x0023FB10u; return; } if (c.pc != 0x002FDC74u) [[unlikely]] return; }
L_002FDC74:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FDC90; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(160ll);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(120ll);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_002FDCA0; } }
L_002FDC90:
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(253ll);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.budget -= 4;
L_002FDCA0:
    set32(c.r[3], ld32((c.r[20].w[0] + 1148u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[28].w[0] - 28336u);
    set32(c.r[5], 0u + 64u);
    set32(c.r[6], 0u + 128u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[20].w[0] + 1155u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDCD0u); st8((c.r[20].w[0] + 888u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 414u, depth + 1u); else { c.pc = 0x0023FB10u; return; } if (c.pc != 0x002FDCD0u) [[unlikely]] return; }
L_002FDCD0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FDCEC; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(160ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(120ll);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);  if (t) { goto L_002FDCFC; } }
L_002FDCEC:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(253ll);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(255ll);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.budget -= 4;
L_002FDCFC:
    set32(c.r[3], ld32((c.r[20].w[0] + 1020u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD9C4u | kUnwind; return; } goto L_002FD9C4; } }
L_002FDD14:
    set32(c.r[3], ld32((c.r[28].w[0] - 29628u)));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29624u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD9D0u | kUnwind; return; } goto L_002FD9D0; } }
L_002FDD28:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002FDD50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 756u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FE410; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FE410; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FE410; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE0E0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 800u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FE134; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDDDCu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FDDDCu) [[unlikely]] return; }
L_002FDDDC:
    set32(c.r[2], ld32((c.r[20].w[0] + 800u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    c.budget -= 2;
L_002FDDE4:
    set32(c.r[2], ld32((c.r[20].w[0] + 756u)));
    c.budget -= 1;
L_002FDDE8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 136u);
    set32(c.r[7], c.r[29].w[0] + 140u);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1536u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 140u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE08u); st32((c.r[29].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_003F(c, 200u, depth + 1u); else { c.pc = 0x002FD840u; return; } if (c.pc != 0x002FDE08u) [[unlikely]] return; }
L_002FDE08:
    set32(c.r[3], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1568u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FDE28; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1568u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0])));  if (t) { goto L_002FDE2C; } }
L_002FDE28:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FDE2C:
    c.r[17].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[20].w[0] + 857u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 820u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FDE60; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 812u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[20].w[0] + 816u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE60u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002FDE60u) [[unlikely]] return; }
L_002FDE60:
    set32(c.r[6], ld32((c.r[20].w[0] + 836u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FDEC0; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 857u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FDEA0; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 828u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[20].w[0] + 832u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE98u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FDE98u) [[unlikely]] return; }
L_002FDE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 852u)));  if (t) { goto L_002FDEC4; } }
L_002FDEA0:
    set32(c.r[5], ld32((c.r[20].w[0] + 824u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[20].w[0] + 832u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDEC0u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FDEC0u) [[unlikely]] return; }
L_002FDEC0:
    set32(c.r[6], ld32((c.r[20].w[0] + 852u)));
    c.budget -= 1;
L_002FDEC4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FE150; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 857u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FDF00; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 844u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[20].w[0] + 848u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDEF8u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FDEF8u) [[unlikely]] return; }
L_002FDEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0] + 77u));  if (t) { goto L_002FE154; } }
L_002FDF00:
    set32(c.r[5], ld32((c.r[20].w[0] + 840u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[20].w[0] + 848u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF20u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FDF20u) [[unlikely]] return; }
L_002FDF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE150; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 29632u)));
    c.budget -= 1;
L_002FDF2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FE164; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDF54u); set32(c.r[5], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FDF54u) [[unlikely]] return; }
L_002FDF54:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[28].w[0] - 29836u), c.r[3].w[0]);
    c.budget -= 2;
L_002FDF5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002FE180; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_002FDF68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002FDFD4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FE268; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_002FDF84:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FDFAC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDFACu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FDFACu) [[unlikely]] return; }
L_002FDFAC:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FDFD4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDFD4u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002FDFD4u) [[unlikely]] return; }
L_002FDFD4:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002FE044; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FE290; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 1;
L_002FDFF4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FE01C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE01Cu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FE01Cu) [[unlikely]] return; }
L_002FE01C:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FE044; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 56u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE044u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002FE044u) [[unlikely]] return; }
L_002FE044:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FE410; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29600u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE064u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FE064u) [[unlikely]] return; }
L_002FE064:
    set32(c.r[3], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 852u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FE340; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 857u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[20].w[0] + 856u));  if (t) { goto L_002FE300; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 844u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00980000u);
    c.r[2].d[0] = c.r[2].d[0] | 38527ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002FE2B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002FE0A8; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002FE0C4; } }
L_002FE0A8:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002FE0C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE0D0u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FE0D0u) [[unlikely]] return; }
L_002FE0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 136u)));  if (t) { goto L_002FE344; } }
L_002FE0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_002FE414; } }
L_002FE0E0:
    set32(c.r[16], ld32((c.r[28].w[0] - 29604u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FE118; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE10Cu); set32(c.r[5], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FE10Cu) [[unlikely]] return; }
L_002FE10C:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDDE4u | kUnwind; return; } goto L_002FDDE4; } }
L_002FE118:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE12Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FE12Cu) [[unlikely]] return; }
L_002FE12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 756u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDDE8u | kUnwind; return; } goto L_002FDDE8; } }
L_002FE134:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE148u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FE148u) [[unlikely]] return; }
L_002FE148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDDE4u | kUnwind; return; } goto L_002FDDE4; } }
L_002FE150:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 77u));
    c.budget -= 1;
L_002FE154:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDF5Cu | kUnwind; return; } goto L_002FDF5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 29632u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDF2Cu | kUnwind; return; } goto L_002FDF2C; } }
L_002FE164:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE178u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FE178u) [[unlikely]] return; }
L_002FE178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDF5Cu | kUnwind; return; } goto L_002FDF5C; } }
L_002FE180:
    set32(c.r[3], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1568u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE194u); c.f[12] = ld32((c.r[3].w[0] + 360u));  if (depth < kMaxDepth) unit_0079(c, 133u, depth + 1u); else { c.pc = 0x003E5CC0u; return; } if (c.pc != 0x002FE194u) [[unlikely]] return; }
L_002FE194:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 876u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 1568u)));
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002FE1F8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 19072u);
    c.budget -= 3;
L_002FE1C8:
    c.r[1].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FE238; } }
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 3;
L_002FE1E0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE1C8u | kUnwind; return; } goto L_002FE1C8; } }
    c.budget -= 1;
L_002FE1F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 880u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[9].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 860u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 868u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 872u)));
    set32(c.r[10], ld32((c.r[20].w[0] + 876u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE230u); set32(c.r[11], c.r[11].w[0] - 19072u);  if (depth < kMaxDepth) unit_0017(c, 14u, depth + 1u); else { c.pc = 0x0025C5F0u; return; } if (c.pc != 0x002FE230u) [[unlikely]] return; }
L_002FE230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 136u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDF68u | kUnwind; return; } goto L_002FDF68; } }
L_002FE238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE240u); set32(c.r[4], c.r[28].w[0] - 28336u);  if (depth < kMaxDepth) unit_000F(c, 418u, depth + 1u); else { c.pc = 0x0023FC90u; return; } if (c.pc != 0x002FE240u) [[unlikely]] return; }
L_002FE240:
    set32(c.r[3], 0u + 50u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE1E0u | kUnwind; return; } goto L_002FE1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE25Cu); set32(c.r[4], c.r[28].w[0] - 28336u);  if (depth < kMaxDepth) unit_000F(c, 416u, depth + 1u); else { c.pc = 0x0023FBE0u; return; } if (c.pc != 0x002FE25Cu) [[unlikely]] return; }
L_002FE25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE1E0u | kUnwind; return; } goto L_002FE1E0; } }
    c.budget -= 1;
L_002FE268:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE288u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FE288u) [[unlikely]] return; }
L_002FE288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 32u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDF84u | kUnwind; return; } goto L_002FDF84; } }
L_002FE290:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE2B0u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FE2B0u) [[unlikely]] return; }
L_002FE2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 32u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDFF4u | kUnwind; return; } goto L_002FDFF4; } }
L_002FE2B8:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002FE2CC; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002FE2E8; } }
L_002FE2CC:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002FE2E8:
    set32(c.r[5], ld32((c.r[20].w[0] + 840u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE2F8u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FE2F8u) [[unlikely]] return; }
L_002FE2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE340; } }
L_002FE300:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002FE314; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002FE330; } }
L_002FE314:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002FE330:
    set32(c.r[5], ld32((c.r[20].w[0] + 840u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE340u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FE340u) [[unlikely]] return; }
L_002FE340:
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_002FE344:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FE3A4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], ld32((c.r[4].w[0] + 348u)));  if (t) { goto L_002FE3A4; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FE374; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002FE390; } }
L_002FE374:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002FE390:
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE3A4u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FE3A4u) [[unlikely]] return; }
L_002FE3A4:
    set32(c.r[6], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FE410; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], ld32((c.r[4].w[0] + 348u)));  if (t) { goto L_002FE410; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FE3D8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002FE3F4; } }
L_002FE3D8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002FE3F4:
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 32u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE408u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FE408u) [[unlikely]] return; }
L_002FE408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE0D8u | kUnwind; return; } goto L_002FE0D8; } }
L_002FE410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002FE414:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002FE440:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 756u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00207D20u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 188u, depth); }
L_002FE450:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE4A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE4B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE4C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE4D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE4E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FDD50u | kUnwind; return; } goto L_002FDD50; }
L_002FE4F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD5D0u | kUnwind; return; } goto L_002FD5D0; }
L_002FE500:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD440u | kUnwind; return; } goto L_002FD440; }
L_002FE510:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE440u | kUnwind; return; } goto L_002FE440; }
L_002FE520:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FD330u | kUnwind; return; } goto L_002FD330; }
L_002FE530:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC3D0u | kUnwind; return; } goto L_002FC3D0; }
L_002FE540:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC3C0u | kUnwind; return; } goto L_002FC3C0; }
L_002FE550:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC3B0u | kUnwind; return; } goto L_002FC3B0; }
L_002FE560:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC910u | kUnwind; return; } goto L_002FC910; }
L_002FE570:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC850u | kUnwind; return; } goto L_002FC850; }
L_002FE580:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB7B0u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 425u, depth); }
L_002FE590:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB740u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 422u, depth); }
L_002FE5A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB730u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 421u, depth); }
L_002FE5B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBBF0u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 444u, depth); }
L_002FE5C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBB30u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 443u, depth); }
L_002FE5D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FADD0u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 348u, depth); }
L_002FE5E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FAD60u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 345u, depth); }
L_002FE5F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FAD50u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 344u, depth); }
L_002FE600:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB130u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 365u, depth); }
L_002FE610:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB070u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 364u, depth); }
L_002FE620:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00207030u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 151u, depth); }
L_002FE630:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002095A0u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 53u, depth); }
L_002FE640:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9FA0u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 239u, depth); }
L_002FE650:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208AC0u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 19u, depth); }
L_002FE660:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE4D0u | kUnwind; return; } goto L_002FE4D0; }
L_002FE670:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00206F10u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 144u, depth); }
L_002FE680:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002094F0u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 48u, depth); }
L_002FE690:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9B70u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 215u, depth); }
L_002FE6A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208A70u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 16u, depth); }
L_002FE6B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE4C0u | kUnwind; return; } goto L_002FE4C0; }
L_002FE6C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9820u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 191u, depth); }
L_002FE6D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9810u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 190u, depth); }
L_002FE6E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9800u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 189u, depth); }
L_002FE6F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9AF0u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 211u, depth); }
L_002FE700:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE4B0u | kUnwind; return; } goto L_002FE4B0; }
L_002FE710:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9160u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 136u, depth); }
L_002FE720:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9150u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 135u, depth); }
L_002FE730:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9140u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 134u, depth); }
L_002FE740:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9170u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 137u, depth); }
L_002FE750:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE4A0u | kUnwind; return; } goto L_002FE4A0; }
L_002FE760:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8B30u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 98u, depth); }
L_002FE770:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8AA0u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 94u, depth); }
L_002FE780:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8A90u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 93u, depth); }
L_002FE790:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8D20u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 111u, depth); }
L_002FE7A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE490u | kUnwind; return; } goto L_002FE490; }
L_002FE7B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8410u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 34u, depth); }
L_002FE7C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8400u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 33u, depth); }
L_002FE7D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F83F0u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 32u, depth); }
L_002FE7E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F84D0u | kUnwind; return; } [[clang::musttail]] return unit_003E(c, 40u, depth); }
L_002FE7F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE480u | kUnwind; return; } goto L_002FE480; }
L_002FE800:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7B60u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 407u, depth); }
L_002FE810:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7B50u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 406u, depth); }
L_002FE820:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7B40u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 405u, depth); }
L_002FE830:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7C40u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 415u, depth); }
L_002FE840:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE470u | kUnwind; return; } goto L_002FE470; }
L_002FE850:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F75D0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 365u, depth); }
L_002FE860:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F75C0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 364u, depth); }
L_002FE870:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F75B0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 363u, depth); }
L_002FE880:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7700u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 375u, depth); }
L_002FE890:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE460u | kUnwind; return; } goto L_002FE460; }
L_002FE8A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6CF0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 297u, depth); }
L_002FE8B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6C30u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 293u, depth); }
L_002FE8C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6C20u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 292u, depth); }
L_002FE8D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7110u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 320u, depth); }
L_002FE8E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7050u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 319u, depth); }
L_002FE8F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6210u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 198u, depth); }
L_002FE900:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6200u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 197u, depth); }
L_002FE910:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F61F0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 196u, depth); }
L_002FE920:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6350u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 208u, depth); }
L_002FE930:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE450u | kUnwind; return; } goto L_002FE450; }
L_002FE940:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F52F0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 54u, depth); }
L_002FE950:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4D30u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 23u, depth); }
L_002FE960:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00209470u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 44u, depth); }
L_002FE970:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4D10u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 21u, depth); }
L_002FE980:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 56u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00208A20u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 13u, depth); }
L_002FE990:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4D20u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 22u, depth); }
L_002FE9A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u - 1u);
    c.budget -= 5;
L_002FE9B4:
    c.r[9].d[0] = c.r[5].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_002FEC00; } }
    c.r[1].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(46ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FEC00; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[11].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[1].d[0] = 0ll < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_002FEA28; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 2;
L_002FE9F8:
    set32(c.r[3], c.r[10].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[3].d[0];  if (t) { goto L_002FEA18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_002FEA30; } }
    c.budget -= 1;
L_002FEA18:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE9F8u | kUnwind; return; } goto L_002FE9F8; } }
L_002FEA28:
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_002FEA30:
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FE9B4u | kUnwind; return; } goto L_002FE9B4; } }
    c.budget -= 1;
L_002FEA40:
    set32(c.r[11], 0u + 23u);
    c.budget -= 1;
L_002FEA44:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 106u)));
    set32(c.r[3], c.r[11].w[0] - 1u);
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[6], c.r[5].w[0] + 1u);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 100u)));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_002FEBE0; } }
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.r[1].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002FEBA0; } }
    c.r[5].d[0] = c.r[3].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002FEAA0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.r[5].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002FEAA0; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002FEAA0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FEBA0; } }
L_002FEAA8:
    set32(c.r[5], c.r[3].w[0] << 1);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 106u)));
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] - 8u);
    set32(c.r[13], c.r[5].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0])));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] - 2u)));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] - 4u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] - 6u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] - 8u)));
    st16((c.r[6].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 106u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] - 10u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] - 12u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] - 14u)));
    set32(c.r[13], c.r[12].w[0] + 1u);
    set32(c.r[12], c.r[12].w[0] << 1);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[12], c.r[12].w[0] + c.r[4].w[0]);
    st16((c.r[12].w[0] + 12u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 106u)));
    set32(c.r[12], c.r[11].w[0] + 1u);
    set32(c.r[11], c.r[11].w[0] << 1);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[12].w[0]));
    set32(c.r[11], c.r[11].w[0] + c.r[4].w[0]);
    st16((c.r[11].w[0] + 12u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 106u)));
    set32(c.r[11], c.r[10].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] << 1);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[11].w[0]));
    set32(c.r[10], c.r[10].w[0] + c.r[4].w[0]);
    st16((c.r[10].w[0] + 12u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 106u)));
    set32(c.r[10], c.r[9].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] << 1);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[9], c.r[9].w[0] + c.r[4].w[0]);
    st16((c.r[9].w[0] + 12u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 106u)));
    set32(c.r[9], c.r[8].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] << 1);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[8], c.r[8].w[0] + c.r[4].w[0]);
    st16((c.r[8].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 106u)));
    set32(c.r[8], c.r[7].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] << 1);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 106u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 1);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 62;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[6].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEAA8u | kUnwind; return; } goto L_002FEAA8; } }
L_002FEBA0:
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002FEBE0; } }
L_002FEBAC:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 106u)));
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 1);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[6].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEBACu | kUnwind; return; } goto L_002FEBAC; } }
    c.budget -= 1;
L_002FEBE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 106u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 102u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002FEC14; } }
L_002FEC00:
    c.r[1].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEA44u | kUnwind; return; } goto L_002FEA44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEA40u | kUnwind; return; } goto L_002FEA40; } }
L_002FEC14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002FEC20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 96u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[7], 0u - 1u);
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002FEC80; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_002FEC4C:
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FEC70; } }
    c.f[1] = c.f[0];
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_002FEC70:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEC4Cu | kUnwind; return; } goto L_002FEC4C; } }
L_002FEC80:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_002FECD8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 102u)));
    set32(c.r[3], c.r[7].w[0] << 3);
    st16((c.r[4].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st16((c.r[4].w[0] + 102u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 102u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002FECE0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 106u)));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_002FECD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002FECF8; } }
L_002FECD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FECF8; } }
L_002FECE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FECF0u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (depth < kMaxDepth) unit_003F(c, 340u, depth + 1u); else { c.pc = 0x002FE9A0u; return; } if (c.pc != 0x002FECF0u) [[unlikely]] return; }
L_002FECF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FECD0u | kUnwind; return; } goto L_002FECD0; } }
L_002FECF8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FED10:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 204u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002FF004; } }
    set32(c.r[18], c.r[29].w[0] + 250u);
    set32(c.r[21], c.r[29].w[0] + 226u);
    set32(c.r[17], c.r[29].w[0] + 242u);
    set32(c.r[22], c.r[29].w[0] + 228u);
    set32(c.r[16], c.r[29].w[0] + 244u);
    set32(c.r[23], c.r[29].w[0] + 212u);
    set32(c.r[30], c.r[29].w[0] + 216u);
    c.budget -= 7;
L_002FED7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED84u); set32(c.r[4], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_003F(c, 370u, depth + 1u); else { c.pc = 0x002FF3C0u; return; } if (c.pc != 0x002FED84u) [[unlikely]] return; }
L_002FED84:
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    set32(c.r[3], 0u - 1u);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.f[20] = 0u;
    st32((c.r[29].w[0] + 248u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 252u), c.f[0]);  if (t) { goto L_002FF01C; } }
L_002FEDA4:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 102u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002FF074; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FEDD8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002FEDEC; } }
L_002FEDD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
L_002FEDEC:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FF0C4; } }
L_002FEDFC:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FEFE8; } }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 26u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FEFE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29592u)));
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[28].w[0] - 32192u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[7], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[9].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[8].w[0] >> (c.r[5].w[0] & 31u));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 16;
    { const bool t = c.r[5].d[0] == c.r[7].d[0];  if (t) { goto L_002FEFE8; } }
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[6], c.r[8].w[0] >> (c.r[6].w[0] & 31u));
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[7].d[0]; c.f[6] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);  if (t) { goto L_002FEF18; } }
    set32(c.r[5], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002FEFE8; } }
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[4].d[0] << 48;
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[4].w[0] - 1u);
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (t) { goto L_002FEF10; } }
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 3;
L_002FEEC0:
    set32(c.r[4], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[29].w[0] + 224u), c.f[1]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0])));
    c.budget -= 9;
    { const bool t = c.r[6].d[0] != c.r[4].d[0]; st32((c.r[29].w[0] + 228u), c.f[0]);  if (t) { goto L_002FEF00; } }
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[22].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 224u)));
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 240u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002FEF18; } }
    c.budget -= 1;
L_002FEF00:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEEC0u | kUnwind; return; } goto L_002FEEC0; } }
L_002FEF10:
    set32(c.r[5], 0u - 1u);
    c.budget -= 2;
L_002FEF18:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[6], ld32((c.r[28].w[0] - 32192u)));
    set32(c.r[4], 0u - 1u);
    st16((c.r[29].w[0] + 240u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[20].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    c.f[5] = ld32((c.r[3].w[0] + 8u));
    c.f[4] = ld32((c.r[20].w[0] + 88u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[6], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[23].w[0]), c.f[2]);
    st32((c.r[30].w[0]), c.f[4]);
    c.budget -= 28;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; st32((c.r[6].w[0] + 4u), c.f[6]);  if (t) { goto L_002FF088; } }
    set32(c.r[7], ld32((c.r[20].w[0])));
    set32(c.r[8], c.r[5].w[0] + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
L_002FEF98:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_002FF1AC; } }
    set32(c.r[5], c.r[8].w[0] >> 1);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[2].w[0] + 4u);  if (t) { goto L_002FF1AC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF98u | kUnwind; return; } goto L_002FEF98; } }
L_002FEFE8:
    set32(c.r[19], c.r[19].w[0] + 12u);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEDFCu | kUnwind; return; } goto L_002FEDFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));  if (t) { goto L_002FF0C8; } }
L_002FF004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF00Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 347u, depth + 1u); else { c.pc = 0x002FEC20u; return; } if (c.pc != 0x002FF00Cu) [[unlikely]] return; }
L_002FF00C:
    set32(c.r[3], 0u + 2u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_002FF250; } }
L_002FF01C:
    set32(c.r[7], ld32((c.r[28].w[0] - 32192u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29592u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] << (c.r[4].w[0] & 31u));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ~(c.r[6].d[0] | 0ull);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29592u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 32192u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[3].w[0] + 4u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEDA4u | kUnwind; return; } goto L_002FEDA4; } }
L_002FF074:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 248u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF080u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 340u, depth + 1u); else { c.pc = 0x002FE9A0u; return; } if (c.pc != 0x002FF080u) [[unlikely]] return; }
L_002FF080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002FF250; } }
L_002FF088:
    set32(c.r[6], ld32((c.r[28].w[0] - 32192u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF0B0u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_003F(c, 372u, depth + 1u); else { c.pc = 0x002FF4E0u; return; } if (c.pc != 0x002FF0B0u) [[unlikely]] return; }
L_002FF0B0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEFE8u | kUnwind; return; } goto L_002FEFE8; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002FF0C4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 1;
L_002FF0C8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002FF1D0; } }
L_002FF0D4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 96u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002FF138; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], 0u - 1u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_002FF0F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002FF128; } }
    set32(c.r[2], c.r[7].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 248u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[2], c.r[29].w[0] + 252u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = ld32((c.r[2].w[0]));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.f[0]);  if (t) { goto L_002FF148; } }
L_002FF128:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF0F0u | kUnwind; return; } goto L_002FF0F0; } }
L_002FF138:
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002FF210; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FF148:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF004u | kUnwind; return; } goto L_002FF004; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF004u | kUnwind; return; } goto L_002FF004; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 23508u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[2].w[0] + 23508u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[2].w[0] - 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_002FF24C; } }
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FED7Cu | kUnwind; return; } goto L_002FED7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF004u | kUnwind; return; } goto L_002FF004; } }
L_002FF1AC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 240u)));
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEFE8u | kUnwind; return; } goto L_002FEFE8; } }
L_002FF1D0:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 32192u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29592u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF0D4u | kUnwind; return; } goto L_002FF0D4; } }
L_002FF210:
    set32(c.r[2], c.r[29].w[0] + 252u);
    set32(c.r[4], ld32((c.r[20].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[5], c.r[7].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 248u)));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF148u | kUnwind; return; } goto L_002FF148; } }
L_002FF24C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002FF250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002FF290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    c.f[5] = ld32((c.r[5].w[0]));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[4].w[0] + 64u), c.f[5]);
    st32((c.r[4].w[0] + 68u), c.f[4]);
    st32((c.r[4].w[0] + 72u), c.f[3]);
    st32((c.r[4].w[0] + 76u), c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);
    st32((c.r[4].w[0] + 80u), c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[4].w[0] + 84u), c.f[2]);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[4].w[0] + 88u), c.f[2]);
    st32((c.r[4].w[0] + 92u), c.f[1]);
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 44u), c.f[0]);
    st16((c.r[29].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF31Cu); set32(c.r[5], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_003F(c, 372u, depth + 1u); else { c.pc = 0x002FF4E0u; return; } if (c.pc != 0x002FF31Cu) [[unlikely]] return; }
L_002FF31C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FF330:
    set32(c.r[5], 0u - 1u);
    st16((c.r[4].w[0] + 100u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 102u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 104u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 98u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 168u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002FF3B0; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u + 3u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), 0u);
    set32(c.r[6], ld32((c.r[28].w[0] - 32192u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29588u)));
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] << (c.r[6].w[0] & 31u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = ~(c.r[5].d[0] | 0ull);  if (t) { goto L_002FF3B0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FF388:
    set32(c.r[3], ld32((c.r[28].w[0] - 29592u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29588u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 44u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF388u | kUnwind; return; } goto L_002FF388; } }
L_002FF3B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 96u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_002FF3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FF4C8; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[8], ld32((c.r[5].w[0])));
    st16((c.r[29].w[0] + 10u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[29].w[0] + 8u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[6].w[0] + c.r[5].w[0]);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 4u)));
    c.f[2] = ld32((c.r[7].w[0] + 8u));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 6u)));
    set32(c.r[6], c.r[8].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[6].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[29].w[0] + 12u), c.f[0]);  if (t) { goto L_002FF4A0; } }
L_002FF418:
    set32(c.r[12], c.r[3].w[0] << 1);
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[7].d[0];  if (t) { goto L_002FF450; } }
    set32(c.r[8], c.r[12].w[0] + 1u);
    set32(c.r[6], c.r[12].w[0] << 3);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FF450; } }
    c.r[12].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_002FF450:
    set32(c.r[6], c.r[12].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[9], c.r[6].w[0] + 4u);  if (t) { goto L_002FF4A0; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[8], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[12].w[0] << 1);
    st16((c.r[8].w[0] + 4u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 2u)));
    st16((c.r[8].w[0] + 6u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[9].w[0] + 4u));
    st32((c.r[8].w[0] + 8u), c.f[0]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF418u | kUnwind; return; } goto L_002FF418; } }
    c.budget -= 1;
L_002FF4A0:
    set32(c.r[3], c.r[3].w[0] << 3);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[4].w[0]), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_002FF4D8; } }
L_002FF4C8:
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0]), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_002FF4D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FF4E0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 700u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FF568; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[8].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[7], c.r[2].w[0] + 4u);  if (t) { goto L_002FF570; } }
L_002FF520:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[2], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[8].w[0] >> 1);
    set32(c.r[2], c.r[8].w[0] >> 1);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[7], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF520u | kUnwind; return; } goto L_002FF520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));  if (t) { goto L_002FF574; } }
L_002FF568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FF594; } }
L_002FF570:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.budget -= 1;
L_002FF574:
    set32(c.r[2], c.r[8].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[2], 0u + 1u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_002FF594:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FF5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FF5DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF5C4u);  if (depth < kMaxDepth) unit_0038(c, 389u, depth + 1u); else { c.pc = 0x002E2950u; return; } if (c.pc != 0x002FF5C4u) [[unlikely]] return; }
L_002FF5C4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002FF5DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF5DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FF5DCu) [[unlikely]] return; }
L_002FF5DC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FF600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st16((c.r[2].w[0] - 7144u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 18064u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[2].w[0] - 7142u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF62Cu); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x002FF62Cu) [[unlikely]] return; }
L_002FF62C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st16((c.r[3].w[0] + 3784u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 7136u);
    st16((c.r[2].w[0] + 3786u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF650u); set32(c.r[6], 0u + 8192u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x002FF650u) [[unlikely]] return; }
L_002FF650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FF660:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF69Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003F(c, 393u, depth + 1u); else { c.pc = 0x002FFF40u; return; } if (c.pc != 0x002FF69Cu) [[unlikely]] return; }
L_002FF69C:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] << 37;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FF70C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x04000000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 10922u)));
    c.r[2].d[0] = c.r[2].d[0] << 38;
    c.r[2].d[0] = c.r[2].d[0] >> 54;
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1364ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FF714; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 10920u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(341ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FF71C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002FF99C; } }
L_002FF70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002FF99C; } }
L_002FF714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002FF99C; } }
L_002FF71C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF72Cu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 393u, depth + 1u); else { c.pc = 0x002FFF40u; return; } if (c.pc != 0x002FF72Cu) [[unlikely]] return; }
L_002FF72C:
    c.r[3].d[0] = c.r[22].d[0] << 48;
    set32(c.r[12], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[11].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[20].d[0] << 48;
    set32(c.r[9], c.r[3].w[0] << 16);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[10].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[13].d[0] = c.r[3].d[0] & 65535ull;
    c.r[12].d[0] = c.r[12].d[0] & c.r[11].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 4u), c.r[12].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[8].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[7], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 26);
    c.r[11].d[0] = c.r[20].d[0] & c.r[11].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    c.r[10].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.r[15].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[2].w[0]), c.r[10].w[0]);
    c.r[3].d[0] = c.r[16].d[0] << 48;
    set32(c.r[10], ld32((c.r[2].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[12].d[0] = c.r[3].d[0] & 1023ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFC000000u);
    set32(c.r[14], c.r[12].w[0] << 16);
    c.r[13].d[0] = c.r[3].d[0] | 65535ull;
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] - 2u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st32((c.r[2].w[0]), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[15].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[13].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[14].d[0];
    c.budget -= 57;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[2].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_002FF988; } }
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] - 10u);  if (t) { goto L_002FF940; } }
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002FF840; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FF840; } }
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_002FF840:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FF940; } }
    set32(c.r[4], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    c.budget -= 2;
L_002FF850:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[14], c.r[12].w[0] + 1u);
    set32(c.r[13], c.r[12].w[0] + 2u);
    set32(c.r[11], c.r[12].w[0] + 3u);
    set32(c.r[10], c.r[12].w[0] + 4u);
    set32(c.r[9], c.r[12].w[0] + 5u);
    set32(c.r[8], c.r[12].w[0] + 6u);
    set32(c.r[7], c.r[12].w[0] + 7u);
    set32(c.r[5], c.r[5].w[0] + c.r[12].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + 8u);
    set32(c.r[6], c.r[19].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8192u)));
    c.r[5].d[0] = c.r[12].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st16((c.r[4].w[0] + 8192u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] + c.r[14].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[19].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8192u)));
    st16((c.r[4].w[0] + 8194u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] + c.r[13].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[19].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8192u)));
    st16((c.r[4].w[0] + 8196u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[19].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8192u)));
    st16((c.r[4].w[0] + 8198u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[19].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8192u)));
    st16((c.r[4].w[0] + 8200u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[19].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8192u)));
    st16((c.r[4].w[0] + 8202u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[19].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8192u)));
    st16((c.r[4].w[0] + 8204u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[19].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8192u)));
    st16((c.r[4].w[0] + 8206u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 59;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF850u | kUnwind; return; } goto L_002FF850; } }
    c.budget -= 1;
L_002FF940:
    c.r[1].d[0] = c.r[12].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FF988; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[16].w[0] - 2u);
    set32(c.r[3], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[12].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_002FF960:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8192u)));
    c.r[2].d[0] = c.r[12].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    st16((c.r[5].w[0] + 8192u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FF960u | kUnwind; return; } goto L_002FF960; } }
L_002FF988:
    st16((c.r[21].w[0] + 10922u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 10920u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[21].w[0] + 10920u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002FF99C:
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
L_002FF9D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF9FCu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 393u, depth + 1u); else { c.pc = 0x002FFF40u; return; } if (c.pc != 0x002FF9FCu) [[unlikely]] return; }
L_002FF9FC:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] << 36;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FFBF8; } }
    c.r[2].d[0] = c.r[3].d[0] & 65535ull;
    st16((c.r[16].w[0] + 98u), static_cast<std::uint16_t>(0u));
    c.r[13].d[0] = c.r[2].d[0] << 48;
    st16((c.r[16].w[0] + 100u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[3].d[0] << 38;
    st16((c.r[16].w[0] + 102u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].d[0] = c.r[2].d[0] >> 54;
    set32(c.r[12], 0u + 1u);
    c.r[11].d[0] = c.r[3].d[0] << 48;
    set32(c.r[2], 0u - 1u);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[10], c.r[11].w[0] - 1u);
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[2], c.r[10].w[0] << 1);
    st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[1].d[0] = c.r[10].sd[0] < 2ll ? 1ull : 0ull;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 48);
    c.budget -= 22;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_002FFBF0; } }
    set32(c.r[2], c.r[11].w[0] - 2u);
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[9], c.r[11].w[0] - 9u);  if (t) { goto L_002FFBA0; } }
    c.budget -= 2;
    { const bool t = c.r[10].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FFA98; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[10].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FFA98; } }
    c.r[2].d[0] = c.r[12].d[0] & 255ull;
    c.budget -= 1;
L_002FFA98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FFBA0; } }
L_002FFAA0:
    set32(c.r[2], c.r[12].w[0] << 1);
    c.r[7].d[0] = c.r[13].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[14], c.r[7].w[0] + 6u);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    c.r[14].d[0] = c.r[14].d[0] << 48;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8192u)));
    set32(c.r[2], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[14], c.r[14].w[0] << 1);
    set32(c.r[14], c.r[19].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[12].w[0] + 8u);
    set32(c.r[3], c.r[2].w[0] << 1);
    st16((c.r[8].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] + 2u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8192u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[7].w[0] + 3u);
    set32(c.r[5], c.r[19].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st16((c.r[8].w[0] + 14u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8192u)));
    set32(c.r[2], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[7].w[0] + 5u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[7], c.r[7].w[0] + 7u);
    st16((c.r[8].w[0] + 16u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8192u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[5].d[0] = c.r[7].d[0] << 48;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[13].w[0] + 8u);
    set32(c.r[6], c.r[19].w[0] + c.r[6].w[0]);
    c.r[13].d[0] = c.r[5].d[0] << 48;
    st16((c.r[8].w[0] + 18u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].d[0] = c.r[12].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8192u)));
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 48);
    st16((c.r[8].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8192u)));
    st16((c.r[8].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0] + 8192u)));
    st16((c.r[8].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8192u)));
    c.budget -= 63;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[8].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFAA0u | kUnwind; return; } goto L_002FFAA0; } }
    c.budget -= 1;
L_002FFBA0:
    c.r[1].d[0] = c.r[12].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FFBF0; } }
    c.r[2].d[0] = c.r[13].d[0] << 48;
    set32(c.r[5], c.r[11].w[0] - 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_002FFBC0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 8192u)));
    set32(c.r[2], c.r[12].w[0] << 1);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[2], c.r[13].w[0] + 1u);
    c.r[13].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[12].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 48);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFBC0u | kUnwind; return; } goto L_002FFBC0; } }
    c.budget -= 1;
L_002FFBF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002FFBFC; } }
L_002FFBF8:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_002FFBFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FFC20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 106u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10922u)));
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1364ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002FFC7C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10920u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(341ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FFC84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002FFF1C; } }
L_002FFC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002FFF1C; } }
L_002FFC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFC8Cu);  if (depth < kMaxDepth) unit_003F(c, 393u, depth + 1u); else { c.pc = 0x002FFF40u; return; } if (c.pc != 0x002FFC8Cu) [[unlikely]] return; }
L_002FFC8C:
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FFF18; } }
    c.r[5].d[0] = c.r[17].d[0] << 48;
    c.r[4].d[0] = c.r[21].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[8].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[20].d[0] << 48;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[7].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[8].d[0] = c.r[7].d[0] | c.r[8].d[0];
    set32(c.r[6], 0u - 1u);
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    c.r[7].d[0] = c.r[6].d[0] << 32;
    set32(c.r[13], ld32((c.r[2].w[0])));
    c.r[6].d[0] = 0ull | 65535ull;
    c.r[12].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[7].d[0] = c.r[16].d[0] << 48;
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[7].d[0] = c.r[7].d[0] & 1023ull;
    c.r[10].d[0] = c.r[8].d[0] | 65535ull;
    set32(c.r[9], c.r[7].w[0] << 16);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[5].d[0] = c.r[13].d[0] & c.r[5].d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFC000000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[8].d[0] = c.r[7].d[0] | 65535ull;
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFBFF0000u);
    set32(c.r[13], ld32((c.r[2].w[0])));
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[5], c.r[16].w[0] - 1u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    set32(c.r[7], c.r[7].w[0] << 26);
    c.r[1].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    c.r[3].d[0] = c.r[12].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 55;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002FFF00; } }
    set32(c.r[2], c.r[16].w[0] - 2u);
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] - 9u);  if (t) { goto L_002FFEB0; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002FFDAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[5].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FFDAC; } }
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_002FFDAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FFEB0; } }
L_002FFDB4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] << 1);
    c.r[14].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[13], c.r[19].w[0] + c.r[7].w[0]);
    c.r[12].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    set32(c.r[7], c.r[2].w[0] + 1u);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 18u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[8], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[2].w[0] + 2u);
    set32(c.r[11], c.r[19].w[0] + c.r[8].w[0]);
    c.r[7].d[0] = c.r[7].d[0] << 48;
    st16((c.r[13].w[0] + 8192u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    st16((c.r[11].w[0] + 8192u), static_cast<std::uint16_t>(c.r[12].w[0]));
    set32(c.r[7], c.r[7].w[0] << 1);
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 20u)));
    set32(c.r[8], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[2].w[0] + 3u);
    st16((c.r[8].w[0] + 8192u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 22u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[8], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[2].w[0] + 4u);
    st16((c.r[8].w[0] + 8192u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[9], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[2].w[0] + 5u);
    st16((c.r[9].w[0] + 8192u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 26u)));
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[9], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[2].w[0] + 6u);
    st16((c.r[9].w[0] + 8192u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[2], c.r[2].w[0] + 7u);
    c.r[7].d[0] = c.r[7].d[0] << 48;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    set32(c.r[7], c.r[7].w[0] << 1);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[7], c.r[19].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[7].w[0] + 8192u), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 8192u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 63;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFDB4u | kUnwind; return; } goto L_002FFDB4; } }
L_002FFEB0:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FFF00; } }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    set32(c.r[4], c.r[16].w[0] - 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_002FFED0:
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    st16((c.r[5].w[0] + 8192u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFED0u | kUnwind; return; } goto L_002FFED0; } }
    c.budget -= 1;
L_002FFF00:
    st16((c.r[19].w[0] + 10922u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10920u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 10920u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002FFF1C; } }
L_002FFF18:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002FFF1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002FFF40:
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 1023ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.r[7].d[0] = c.r[7].d[0] << 36;
    c.r[7].d[0] = c.r[7].d[0] >> 63;
    c.budget -= 15;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0040(c, 3u, depth); } }
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[7].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_002FFFDC; } }
L_002FFF8C:
    set32(c.r[10], 0u + 1u);
    c.budget -= 1;
L_002FFF90:
    set32(c.r[7], c.r[3].w[0] + c.r[10].w[0]);
    c.r[7].d[0] = c.r[7].d[0] & 1023ull;
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[9], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[9].w[0] + 4u)));
    c.r[7].d[0] = c.r[7].d[0] << 36;
    c.r[7].d[0] = c.r[7].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002FFFF4; } }
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.r[7].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_0040(c, 2u, depth); } }
    c.r[7].d[0] = c.r[8].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] >> 48;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { [[clang::musttail]] return unit_0040(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_002FFFF8; } }
L_002FFFDC:
    c.r[7].d[0] = c.r[8].d[0] << 32;
    c.r[7].d[0] = c.r[7].d[0] >> 48;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFF8Cu | kUnwind; return; } goto L_002FFF8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0040(c, 3u, depth); } }
L_002FFFF4:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_002FFFF8:
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 2;
    [[clang::musttail]] return unit_0040(c, 1u, depth);
}

}

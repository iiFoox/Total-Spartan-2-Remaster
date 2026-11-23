#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009C[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0,
    0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51,
    0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0,
    0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0,
    200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 249,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0,
    254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0,
    0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0,
    295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0,
    301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0,
    0, 308, 0, 309, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 319,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0,
    0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0,
    0, 351, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0,
    0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0,
    373, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 391,
    0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0,
    414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_009C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00470000;
    case 2u: goto L_00470004;
    case 3u: goto L_00470014;
    case 4u: goto L_00470020;
    case 5u: goto L_0047003C;
    case 6u: goto L_0047004C;
    case 7u: goto L_00470094;
    case 8u: goto L_00470098;
    case 9u: goto L_004700B0;
    case 10u: goto L_004700D4;
    case 11u: goto L_00470148;
    case 12u: goto L_00470198;
    case 13u: goto L_004701B0;
    case 14u: goto L_004701D4;
    case 15u: goto L_00470214;
    case 16u: goto L_0047021C;
    case 17u: goto L_0047022C;
    case 18u: goto L_00470234;
    case 19u: goto L_00470244;
    case 20u: goto L_0047024C;
    case 21u: goto L_0047025C;
    case 22u: goto L_00470264;
    case 23u: goto L_00470274;
    case 24u: goto L_00470288;
    case 25u: goto L_00470290;
    case 26u: goto L_004702A8;
    case 27u: goto L_004702B8;
    case 28u: goto L_004702C0;
    case 29u: goto L_004702E8;
    case 30u: goto L_00470364;
    case 31u: goto L_0047038C;
    case 32u: goto L_00470394;
    case 33u: goto L_004703BC;
    case 34u: goto L_00470438;
    case 35u: goto L_00470448;
    case 36u: goto L_0047047C;
    case 37u: goto L_00470498;
    case 38u: goto L_004704C0;
    case 39u: goto L_004704D8;
    case 40u: goto L_00470504;
    case 41u: goto L_00470520;
    case 42u: goto L_00470530;
    case 43u: goto L_00470540;
    case 44u: goto L_00470560;
    case 45u: goto L_004705C0;
    case 46u: goto L_00470634;
    case 47u: goto L_00470650;
    case 48u: goto L_00470674;
    case 49u: goto L_004706AC;
    case 50u: goto L_004706F4;
    case 51u: goto L_004706FC;
    case 52u: goto L_00470704;
    case 53u: goto L_0047070C;
    case 54u: goto L_00470714;
    case 55u: goto L_00470758;
    case 56u: goto L_00470770;
    case 57u: goto L_004707B8;
    case 58u: goto L_004707E8;
    case 59u: goto L_00470830;
    case 60u: goto L_00470838;
    case 61u: goto L_00470840;
    case 62u: goto L_00470848;
    case 63u: goto L_00470850;
    case 64u: goto L_00470894;
    case 65u: goto L_004708A4;
    case 66u: goto L_004708C0;
    case 67u: goto L_004708E0;
    case 68u: goto L_00470900;
    case 69u: goto L_00470910;
    case 70u: goto L_0047092C;
    case 71u: goto L_0047094C;
    case 72u: goto L_00470960;
    case 73u: goto L_00470980;
    case 74u: goto L_004709A4;
    case 75u: goto L_004709BC;
    case 76u: goto L_004709EC;
    case 77u: goto L_00470A24;
    case 78u: goto L_00470A44;
    case 79u: goto L_00470A58;
    case 80u: goto L_00470A68;
    case 81u: goto L_00470AA0;
    case 82u: goto L_00470AD0;
    case 83u: goto L_00470B08;
    case 84u: goto L_00470B2C;
    case 85u: goto L_00470B94;
    case 86u: goto L_00470BB4;
    case 87u: goto L_00470C14;
    case 88u: goto L_00470C40;
    case 89u: goto L_00470C84;
    case 90u: goto L_00470CA0;
    case 91u: goto L_00470CDC;
    case 92u: goto L_00470D60;
    case 93u: goto L_00470DE0;
    case 94u: goto L_00470E00;
    case 95u: goto L_00470E10;
    case 96u: goto L_00470E20;
    case 97u: goto L_00470E30;
    case 98u: goto L_00470E40;
    case 99u: goto L_00470E50;
    case 100u: goto L_00470E60;
    case 101u: goto L_00470E70;
    case 102u: goto L_00470E80;
    case 103u: goto L_00470EF8;
    case 104u: goto L_00470F18;
    case 105u: goto L_00470F38;
    case 106u: goto L_00470F50;
    case 107u: goto L_00470F8C;
    case 108u: goto L_00471010;
    case 109u: goto L_00471018;
    case 110u: goto L_00471024;
    case 111u: goto L_00471028;
    case 112u: goto L_00471040;
    case 113u: goto L_0047106C;
    case 114u: goto L_004710C4;
    case 115u: goto L_004710D8;
    case 116u: goto L_00471140;
    case 117u: goto L_00471188;
    case 118u: goto L_004711A0;
    case 119u: goto L_004711BC;
    case 120u: goto L_004711D8;
    case 121u: goto L_00471220;
    case 122u: goto L_00471238;
    case 123u: goto L_0047124C;
    case 124u: goto L_00471260;
    case 125u: goto L_00471270;
    case 126u: goto L_004712A0;
    case 127u: goto L_004712A4;
    case 128u: goto L_004712E8;
    case 129u: goto L_00471300;
    case 130u: goto L_00471320;
    case 131u: goto L_00471334;
    case 132u: goto L_00471358;
    case 133u: goto L_00471384;
    case 134u: goto L_004713A0;
    case 135u: goto L_0047143C;
    case 136u: goto L_00471500;
    case 137u: goto L_00471538;
    case 138u: goto L_00471540;
    case 139u: goto L_00471548;
    case 140u: goto L_00471550;
    case 141u: goto L_00471558;
    case 142u: goto L_00471560;
    case 143u: goto L_00471570;
    case 144u: goto L_00471578;
    case 145u: goto L_00471584;
    case 146u: goto L_0047158C;
    case 147u: goto L_004715D0;
    case 148u: goto L_004715E4;
    case 149u: goto L_0047161C;
    case 150u: goto L_00471624;
    case 151u: goto L_00471694;
    case 152u: goto L_004716B4;
    case 153u: goto L_004716D4;
    case 154u: goto L_004716DC;
    case 155u: goto L_00471704;
    case 156u: goto L_00471718;
    case 157u: goto L_0047175C;
    case 158u: goto L_004717D8;
    case 159u: goto L_00471824;
    case 160u: goto L_0047183C;
    case 161u: goto L_004718F8;
    case 162u: goto L_00471928;
    case 163u: goto L_00471940;
    case 164u: goto L_00471958;
    case 165u: goto L_00471970;
    case 166u: goto L_00471988;
    case 167u: goto L_004719A0;
    case 168u: goto L_004719D8;
    case 169u: goto L_004719FC;
    case 170u: goto L_00471A30;
    case 171u: goto L_00471AA8;
    case 172u: goto L_00471AB0;
    case 173u: goto L_00471AC4;
    case 174u: goto L_00471ADC;
    case 175u: goto L_00471AE8;
    case 176u: goto L_00471B78;
    case 177u: goto L_00471B80;
    case 178u: goto L_00471B94;
    case 179u: goto L_00471BAC;
    case 180u: goto L_00471BE0;
    case 181u: goto L_00471C40;
    case 182u: goto L_00471C78;
    case 183u: goto L_00471CA0;
    case 184u: goto L_00471CC4;
    case 185u: goto L_00471CE4;
    case 186u: goto L_00471D00;
    case 187u: goto L_00471D60;
    case 188u: goto L_00471E0C;
    case 189u: goto L_00471E70;
    case 190u: goto L_00471EA4;
    case 191u: goto L_00471EB0;
    case 192u: goto L_00471EB8;
    case 193u: goto L_00471EFC;
    case 194u: goto L_00471F0C;
    case 195u: goto L_00471F1C;
    case 196u: goto L_00471F2C;
    case 197u: goto L_00471F50;
    case 198u: goto L_00471F60;
    case 199u: goto L_00471F70;
    case 200u: goto L_00471F80;
    case 201u: goto L_00471F90;
    case 202u: goto L_00471FA4;
    case 203u: goto L_00471FAC;
    case 204u: goto L_00471FC0;
    case 205u: goto L_00471FE0;
    case 206u: goto L_00471FF0;
    case 207u: goto L_00472018;
    case 208u: goto L_00472024;
    case 209u: goto L_00472080;
    case 210u: goto L_00472090;
    case 211u: goto L_004720B0;
    case 212u: goto L_004720C0;
    case 213u: goto L_004720E0;
    case 214u: goto L_00472110;
    case 215u: goto L_00472118;
    case 216u: goto L_00472124;
    case 217u: goto L_0047213C;
    case 218u: goto L_00472174;
    case 219u: goto L_00472190;
    case 220u: goto L_004721D4;
    case 221u: goto L_004721DC;
    case 222u: goto L_00472220;
    case 223u: goto L_0047223C;
    case 224u: goto L_00472258;
    case 225u: goto L_00472270;
    case 226u: goto L_0047229C;
    case 227u: goto L_004722A0;
    case 228u: goto L_004722D0;
    case 229u: goto L_004722E8;
    case 230u: goto L_004722F8;
    case 231u: goto L_00472300;
    case 232u: goto L_00472348;
    case 233u: goto L_00472350;
    case 234u: goto L_00472370;
    case 235u: goto L_00472380;
    case 236u: goto L_004723B0;
    case 237u: goto L_004723E4;
    case 238u: goto L_004723F8;
    case 239u: goto L_0047240C;
    case 240u: goto L_00472418;
    case 241u: goto L_00472428;
    case 242u: goto L_0047244C;
    case 243u: goto L_004724A0;
    case 244u: goto L_004724B0;
    case 245u: goto L_004724C0;
    case 246u: goto L_004724D0;
    case 247u: goto L_004724E0;
    case 248u: goto L_004724F4;
    case 249u: goto L_004724FC;
    case 250u: goto L_00472510;
    case 251u: goto L_00472530;
    case 252u: goto L_00472540;
    case 253u: goto L_00472578;
    case 254u: goto L_00472580;
    case 255u: goto L_004725A0;
    case 256u: goto L_004725AC;
    case 257u: goto L_004725B8;
    case 258u: goto L_004725F0;
    case 259u: goto L_00472640;
    case 260u: goto L_00472660;
    case 261u: goto L_00472678;
    case 262u: goto L_004726C0;
    case 263u: goto L_004726E0;
    case 264u: goto L_00472710;
    case 265u: goto L_004727C0;
    case 266u: goto L_004727E0;
    case 267u: goto L_004727EC;
    case 268u: goto L_004727F8;
    case 269u: goto L_00472818;
    case 270u: goto L_00472824;
    case 271u: goto L_00472830;
    case 272u: goto L_00472850;
    case 273u: goto L_00472860;
    case 274u: goto L_00472880;
    case 275u: goto L_00472898;
    case 276u: goto L_004728C4;
    case 277u: goto L_004728D8;
    case 278u: goto L_004728F0;
    case 279u: goto L_00472918;
    case 280u: goto L_00472930;
    case 281u: goto L_00472950;
    case 282u: goto L_00472960;
    case 283u: goto L_00472974;
    case 284u: goto L_00472984;
    case 285u: goto L_004729A0;
    case 286u: goto L_00472A78;
    case 287u: goto L_00472A94;
    case 288u: goto L_00472AA8;
    case 289u: goto L_00472AC0;
    case 290u: goto L_00472ADC;
    case 291u: goto L_00472AF0;
    case 292u: goto L_00472B00;
    case 293u: goto L_00472B60;
    case 294u: goto L_00472B70;
    case 295u: goto L_00472B80;
    case 296u: goto L_00472B90;
    case 297u: goto L_00472BA0;
    case 298u: goto L_00472BC0;
    case 299u: goto L_00472BDC;
    case 300u: goto L_00472BF8;
    case 301u: goto L_00472C00;
    case 302u: goto L_00472C14;
    case 303u: goto L_00472C30;
    case 304u: goto L_00472C40;
    case 305u: goto L_00472C54;
    case 306u: goto L_00472C68;
    case 307u: goto L_00472C78;
    case 308u: goto L_00472C84;
    case 309u: goto L_00472C8C;
    case 310u: goto L_00472CA0;
    case 311u: goto L_00472CA8;
    case 312u: goto L_00472CC0;
    case 313u: goto L_00472D18;
    case 314u: goto L_00472D5C;
    case 315u: goto L_00472D88;
    case 316u: goto L_00472E38;
    case 317u: goto L_00472E68;
    case 318u: goto L_00472E70;
    case 319u: goto L_00472E7C;
    case 320u: goto L_00472EA8;
    case 321u: goto L_00472EEC;
    case 322u: goto L_00472F30;
    case 323u: goto L_00472F40;
    case 324u: goto L_00472F50;
    case 325u: goto L_00472F60;
    case 326u: goto L_00472FA0;
    case 327u: goto L_00472FD4;
    case 328u: goto L_00472FE8;
    case 329u: goto L_00472FF4;
    case 330u: goto L_00473000;
    case 331u: goto L_00473028;
    case 332u: goto L_0047303C;
    case 333u: goto L_00473050;
    case 334u: goto L_00473064;
    case 335u: goto L_00473078;
    case 336u: goto L_0047308C;
    case 337u: goto L_004730E0;
    case 338u: goto L_00473118;
    case 339u: goto L_0047313C;
    case 340u: goto L_00473168;
    case 341u: goto L_00473170;
    case 342u: goto L_004731B4;
    case 343u: goto L_004731C4;
    case 344u: goto L_004731D4;
    case 345u: goto L_00473200;
    case 346u: goto L_004732B0;
    case 347u: goto L_004732C0;
    case 348u: goto L_004732D0;
    case 349u: goto L_004732E0;
    case 350u: goto L_004732F0;
    case 351u: goto L_00473304;
    case 352u: goto L_0047330C;
    case 353u: goto L_00473320;
    case 354u: goto L_00473340;
    case 355u: goto L_00473350;
    case 356u: goto L_00473360;
    case 357u: goto L_00473374;
    case 358u: goto L_00473384;
    case 359u: goto L_004733A0;
    case 360u: goto L_00473410;
    case 361u: goto L_0047342C;
    case 362u: goto L_00473434;
    case 363u: goto L_00473444;
    case 364u: goto L_00473480;
    case 365u: goto L_004734BC;
    case 366u: goto L_004734E8;
    case 367u: goto L_0047351C;
    case 368u: goto L_00473540;
    case 369u: goto L_004735C0;
    case 370u: goto L_004735D0;
    case 371u: goto L_004735E0;
    case 372u: goto L_004735F0;
    case 373u: goto L_00473600;
    case 374u: goto L_00473614;
    case 375u: goto L_0047361C;
    case 376u: goto L_00473630;
    case 377u: goto L_00473650;
    case 378u: goto L_00473660;
    case 379u: goto L_00473678;
    case 380u: goto L_00473694;
    case 381u: goto L_004736A4;
    case 382u: goto L_004736CC;
    case 383u: goto L_004736E4;
    case 384u: goto L_004736F0;
    case 385u: goto L_0047370C;
    case 386u: goto L_00473728;
    case 387u: goto L_00473738;
    case 388u: goto L_00473748;
    case 389u: goto L_00473758;
    case 390u: goto L_00473768;
    case 391u: goto L_0047377C;
    case 392u: goto L_0047378C;
    case 393u: goto L_004737A8;
    case 394u: goto L_004737C0;
    case 395u: goto L_004737D4;
    case 396u: goto L_004737E4;
    case 397u: goto L_00473800;
    case 398u: goto L_00473880;
    case 399u: goto L_004738B4;
    case 400u: goto L_004738C0;
    case 401u: goto L_004738C8;
    case 402u: goto L_0047390C;
    case 403u: goto L_0047391C;
    case 404u: goto L_0047392C;
    case 405u: goto L_0047393C;
    case 406u: goto L_00473960;
    case 407u: goto L_004739B4;
    case 408u: goto L_004739D0;
    case 409u: goto L_004739E0;
    case 410u: goto L_00473A34;
    case 411u: goto L_00473A50;
    case 412u: goto L_00473A60;
    case 413u: goto L_00473A74;
    case 414u: goto L_00473A80;
    case 415u: goto L_00473B40;
    case 416u: goto L_00473B5C;
    case 417u: goto L_00473B68;
    case 418u: goto L_00473C30;
    case 419u: goto L_00473D00;
    case 420u: goto L_00473D30;
    case 421u: goto L_00473D50;
    case 422u: goto L_00473D80;
    case 423u: goto L_00473DC0;
    case 424u: goto L_00473E24;
    case 425u: goto L_00473E44;
    case 426u: goto L_00473E58;
    case 427u: goto L_00473E64;
    case 428u: goto L_00473EB0;
    case 429u: goto L_00473F1C;
    case 430u: goto L_00473FD0;
    default: bad_entry(c, 0x00470000u); return;
    }
L_00470000:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00470004:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 10220u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FFFCu | kUnwind; return; } [[clang::musttail]] return unit_009B(c, 385u, depth); } }
L_00470014:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00470020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047003Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x0047003Cu) [[unlikely]] return; }
L_0047003C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047004Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x0047004Cu) [[unlikely]] return; }
L_0047004C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470098; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 41u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00470078; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0047009C; } }
L_00470078:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 308u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00470098u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00470098u) [[unlikely]] return; }
    goto L_00470098;
L_00470094:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00470098:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0047009C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004700B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004700D4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x004700D4u) [[unlikely]] return; }
L_004700D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470198; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 42u));
    set32(c.r[3], 0u + 13u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0047012C; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0047012C; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0047013C; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00470118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00470140; } }
L_00470118:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047013C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0047019C; } }
L_0047012C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 97u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470198; } }
L_0047013C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00470140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470148u);  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x00470148u) [[unlikely]] return; }
L_00470148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470198; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 41u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00470174; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470174; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470198; } }
L_00470174:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 304u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00470198u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00470198u) [[unlikely]] return; }
L_00470198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0047019C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004701B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004701D4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x004701D4u) [[unlikely]] return; }
L_004701D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470504; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470504; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 42u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(18ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00470448; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21760u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00470214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047021Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 28u, depth + 1u); else { c.pc = 0x00284990u; return; } if (c.pc != 0x0047021Cu) [[unlikely]] return; }
L_0047021C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00470508; } }
L_0047022C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470234u); set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 80u, depth + 1u); else { c.pc = 0x002A1280u; return; } if (c.pc != 0x00470234u) [[unlikely]] return; }
L_00470234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00470448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470504; } }
L_00470244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047024Cu); set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 80u, depth + 1u); else { c.pc = 0x002A1280u; return; } if (c.pc != 0x0047024Cu) [[unlikely]] return; }
L_0047024C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470504; } }
L_0047025C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470264u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 29u, depth + 1u); else { c.pc = 0x002849A0u; return; } if (c.pc != 0x00470264u) [[unlikely]] return; }
L_00470264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00470448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470504; } }
L_00470274:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004704B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470504; } }
L_00470288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470290u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 29u, depth + 1u); else { c.pc = 0x002849A0u; return; } if (c.pc != 0x00470290u) [[unlikely]] return; }
L_00470290:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00470448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470504; } }
L_004702A8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004702B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004702B8u) [[unlikely]] return; }
L_004702B8:
    set32(c.r[8], ld32((c.r[18].w[0] + 44u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_004702C0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00470344; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_004702F4; } }
L_004702E8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004702C0u | kUnwind; return; } goto L_004702C0; } }
L_004702F4:
    c.r[3].d[0] = c.r[6].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00470318; } }
    c.r[1].d[0] = c.r[6].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00470314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470318; } }
L_00470314:
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 1;
L_00470318:
    c.r[3].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047033C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00470338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047033C; } }
L_00470338:
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 1;
L_0047033C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004702E8u | kUnwind; return; } goto L_004702E8; } }
L_00470344:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470504; } }
L_00470364:
    set32(c.r[3], ld32((c.r[17].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470504; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00470504; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047038Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047038Cu) [[unlikely]] return; }
L_0047038C:
    set32(c.r[8], ld32((c.r[18].w[0] + 44u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_00470394:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00470418; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_004703C8; } }
L_004703BC:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470394u | kUnwind; return; } goto L_00470394; } }
L_004703C8:
    c.r[3].d[0] = c.r[6].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004703EC; } }
    c.r[1].d[0] = c.r[6].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004703E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004703EC; } }
L_004703E8:
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 1;
L_004703EC:
    c.r[3].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00470410; } }
    c.r[1].d[0] = c.r[4].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0047040C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470410; } }
L_0047040C:
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 1;
L_00470410:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004703BCu | kUnwind; return; } goto L_004703BC; } }
L_00470418:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470504; } }
L_00470438:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 522u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00470504; } }
L_00470448:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00470468; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 40u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00470474; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470504; } }
L_00470468:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470504; } }
L_00470474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047047Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x0047047Cu) [[unlikely]] return; }
L_0047047C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470504; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 42u));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004704D0; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 41u));
    c.budget -= 1;
L_00470498:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004704E0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004704E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470504; } }
L_004704B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004704C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 29u, depth + 1u); else { c.pc = 0x002849A0u; return; } if (c.pc != 0x004704C0u) [[unlikely]] return; }
L_004704C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470448u | kUnwind; return; } goto L_00470448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470504; } }
L_004704D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004704D8u); set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 81u, depth + 1u); else { c.pc = 0x002A1290u; return; } if (c.pc != 0x004704D8u) [[unlikely]] return; }
L_004704D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[18].w[0] + 41u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470498u | kUnwind; return; } goto L_00470498; } }
L_004704E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00470504u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00470504u) [[unlikely]] return; }
L_00470504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00470508:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00470520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00470530:
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_00470540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 10220u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00470560:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004705B0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004705A8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004705A0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00470598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004705B4; } }
L_00470598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_004705B4; } }
L_004705A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_004705B4; } }
L_004705A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_004705B4; } }
L_004705B0:
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_004705B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004705C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00470634; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 17296u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047061C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047061C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047061C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0047061C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00470634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470634u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00470634u) [[unlikely]] return; }
L_00470634:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00470650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00470674u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00470674u) [[unlikely]] return; }
L_00470674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047071C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[6].w[0] + 1484u), c.r[2].w[0]);  if (t) { goto L_0047071C; } }
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 1488u), c.r[3].w[0]);  if (t) { goto L_0047071C; } }
L_004706AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470748; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470760; } }
    c.r[5].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004706E4; } }
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_004706E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  if (t) { goto L_0047074C; } }
L_004706F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004706FCu);  if (depth < kMaxDepth) unit_0022(c, 233u, depth + 1u); else { c.pc = 0x0028A5E0u; return; } if (c.pc != 0x004706FCu) [[unlikely]] return; }
L_004706FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470704u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 95u, depth + 1u); else { c.pc = 0x002B94C0u; return; } if (c.pc != 0x00470704u) [[unlikely]] return; }
L_00470704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470714; } }
L_0047070C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470714u);  if (depth < kMaxDepth) unit_0022(c, 230u, depth + 1u); else { c.pc = 0x0028A590u; return; } if (c.pc != 0x00470714u) [[unlikely]] return; }
L_00470714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00470764; } }
L_0047071C:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 92u);
    set32(c.r[4], c.r[5].w[0] + 544u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004706F4u | kUnwind; return; } goto L_004706F4; } }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004706ACu | kUnwind; return; } goto L_004706AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047070Cu | kUnwind; return; } goto L_0047070C; } }
L_00470748:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_0047074C:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470758u);  if (depth < kMaxDepth) unit_0022(c, 227u, depth + 1u); else { c.pc = 0x0028A520u; return; } if (c.pc != 0x00470758u) [[unlikely]] return; }
L_00470758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470714u | kUnwind; return; } goto L_00470714; } }
L_00470760:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00470764:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00470770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004708A4; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 220u));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0047089C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004707B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004707B8u) [[unlikely]] return; }
L_004707B8:
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[6].w[0] + 1484u), c.r[2].w[0]);  if (t) { goto L_00470858; } }
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 1488u), c.r[3].w[0]);  if (t) { goto L_00470858; } }
L_004707E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470884; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004708A4; } }
    c.r[5].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470820; } }
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00470820:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004708A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  if (t) { goto L_00470888; } }
L_00470830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470838u);  if (depth < kMaxDepth) unit_0022(c, 224u, depth + 1u); else { c.pc = 0x0028A4D0u; return; } if (c.pc != 0x00470838u) [[unlikely]] return; }
L_00470838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 95u, depth + 1u); else { c.pc = 0x002B94C0u; return; } if (c.pc != 0x00470840u) [[unlikely]] return; }
L_00470840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004708A8; } }
L_00470848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470850u);  if (depth < kMaxDepth) unit_0022(c, 221u, depth + 1u); else { c.pc = 0x0028A480u; return; } if (c.pc != 0x00470850u) [[unlikely]] return; }
L_00470850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004708A4; } }
L_00470858:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 95u);
    set32(c.r[4], c.r[5].w[0] + 544u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470830u | kUnwind; return; } goto L_00470830; } }
    set32(c.r[3], 0u + 94u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004707E8u | kUnwind; return; } goto L_004707E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470848u | kUnwind; return; } goto L_00470848; } }
L_00470884:
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_00470888:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470894u);  if (depth < kMaxDepth) unit_0022(c, 218u, depth + 1u); else { c.pc = 0x0028A410u; return; } if (c.pc != 0x00470894u) [[unlikely]] return; }
L_00470894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004708A4; } }
L_0047089C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004708A4u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x00470650u; return; } if (c.pc != 0x004708A4u) [[unlikely]] return; }
L_004708A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004708A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004708C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004708E0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004708E0u) [[unlikely]] return; }
L_004708E0:
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00470900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[5].w[0]);  c.pc = t; return; }
L_00470910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00470954; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_0047092C:
    set32(c.r[3], ld32((c.r[3].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470968; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 268u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00470968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047094Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 126u, depth + 1u); else { c.pc = 0x003ADEF0u; return; } if (c.pc != 0x0047094Cu) [[unlikely]] return; }
L_0047094C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0047096C; } }
L_00470954:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470960u); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_009B(c, 198u, depth + 1u); else { c.pc = 0x0046E240u; return; } if (c.pc != 0x00470960u) [[unlikely]] return; }
L_00470960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 28u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047092Cu | kUnwind; return; } goto L_0047092C; } }
L_00470968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0047096C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00470980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004709BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470A38; } }
L_004709A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004709B0; } }
    set32(c.r[6], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_004709B0:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004709BCu); set32(c.r[4], ld32((c.r[16].w[0] + 116u)));  if (depth < kMaxDepth) unit_009B(c, 210u, depth + 1u); else { c.pc = 0x0046E4A0u; return; } if (c.pc != 0x004709BCu) [[unlikely]] return; }
L_004709BC:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00470A4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 9;
L_004709EC:
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470A24; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470A24; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 268u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00470A24; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470A24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 127u, depth + 1u); else { c.pc = 0x003ADF50u; return; } if (c.pc != 0x00470A24u) [[unlikely]] return; }
L_00470A24:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], 0u + 211u);
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00470A8C; } }
L_00470A38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470A44u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x00470A44u) [[unlikely]] return; }
L_00470A44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004709A4u | kUnwind; return; } goto L_004709A4; } }
L_00470A4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470A58u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x00470A58u) [[unlikely]] return; }
L_00470A58:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00470A68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00470A68u) [[unlikely]] return; }
L_00470A68:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004709ECu | kUnwind; return; } goto L_004709EC; } }
L_00470A8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00470AA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00470AC0; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 268u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470AC0; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00470AC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00470AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00470B10; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00470B10; } }
L_00470B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00470C30; } }
L_00470B10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    set32(c.r[4], c.r[5].w[0] + 680u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[5], c.r[16].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470B2Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0054(c, 24u, depth + 1u); else { c.pc = 0x00350780u; return; } if (c.pc != 0x00470B2Cu) [[unlikely]] return; }
L_00470B2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00470C2C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 96u));
    c.f[1] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], c.r[5].w[0] + 32u);  if (t) { goto L_00470BD4; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00470BD4; } }
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00470BDC; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00470BDC; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00470B94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470C1C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1360u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 268u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00470BE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470BB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 128u, depth + 1u); else { c.pc = 0x003ADFB0u; return; } if (c.pc != 0x00470BB4u) [[unlikely]] return; }
L_00470BB4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00470C2C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1540u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1540u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470B08u | kUnwind; return; } goto L_00470B08; } }
L_00470BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470B94u | kUnwind; return; } goto L_00470B94; } }
L_00470BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470B94u | kUnwind; return; } goto L_00470B94; } }
L_00470BE4:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 544u);  if (t) { goto L_00470C2C; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8u));
    set32(c.r[3], 0u + 96u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00470C2C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470C14u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_0022(c, 215u, depth + 1u); else { c.pc = 0x0028A3A0u; return; } if (c.pc != 0x00470C14u) [[unlikely]] return; }
L_00470C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470B08u | kUnwind; return; } goto L_00470B08; } }
L_00470C1C:
    set32(c.r[3], 0u + 211u);
    st8((c.r[5].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00470B08u | kUnwind; return; } goto L_00470B08; } }
L_00470C2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00470C30:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00470C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00470C84; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00470C84; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 268u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00470C84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470C84u);  if (depth < kMaxDepth) unit_006B(c, 127u, depth + 1u); else { c.pc = 0x003ADF50u; return; } if (c.pc != 0x00470C84u) [[unlikely]] return; }
L_00470C84:
    st32((c.r[17].w[0] + 120u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00470CA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], 0u + 25u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470CDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x002B9620u; return; } if (c.pc != 0x00470CDCu) [[unlikely]] return; }
L_00470CDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 26512u);
    set32(c.r[3], c.r[3].w[0] + 17632u);
    st32((c.r[20].w[0] + 64u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 17964u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[20].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 112u), 0u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 116u), 0u);
    st32((c.r[20].w[0] + 68u), c.r[18].w[0]);
    st8((c.r[20].w[0] + 72u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[20].w[0] + 76u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 80u), c.r[19].w[0]);
    st8((c.r[20].w[0] + 84u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[20].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00470D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00470DE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 17632u);
    set32(c.r[2], c.r[2].w[0] + 17964u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00470DC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00470DC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00470DC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_00470DC8:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00470DE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470DE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00470DE0u) [[unlikely]] return; }
L_00470DE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00470E00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00470E10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 76u)));  c.pc = t; return; }
L_00470E20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));  c.pc = t; return; }
L_00470E30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00470AA0u | kUnwind; return; } goto L_00470AA0; }
L_00470E40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00470E10u | kUnwind; return; } goto L_00470E10; }
L_00470E50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00470E20u | kUnwind; return; } goto L_00470E20; }
L_00470E60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00470C40u | kUnwind; return; } goto L_00470C40; }
L_00470E70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00470E80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00470F38; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00470F38; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 65u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00470F20; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00470F20; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00470F20; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00470F00; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00470EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00470F3C; } }
L_00470EE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[4], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470EF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x00470EF8u) [[unlikely]] return; }
L_00470EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470F38; } }
L_00470F00:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[4], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470F18u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x00470F18u) [[unlikely]] return; }
L_00470F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00470F38; } }
L_00470F20:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[4], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00470F38u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x00470F38u) [[unlikely]] return; }
L_00470F38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00470F3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00470F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00471140; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 21968u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00470F8C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004711A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00471040; } }
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00471030; } }
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0047138C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047138C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047138C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004711B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471010u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x00471010u) [[unlikely]] return; }
L_00471010:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1348u)));
    c.budget -= 2;
L_00471018:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00471028u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00471028u) [[unlikely]] return; }
    goto L_00471028;
L_00471024:
    c.budget -= 1;
L_00471028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004711A0; } }
L_00471030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 76u), c.f[0]);
    c.budget -= 4;
L_00471040:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1360u)));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00471060; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29112u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 29112u), c.r[4].w[0]);
    c.budget -= 3;
L_00471060:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004711A0; } }
L_0047106C:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], ld32((c.r[4].w[0] + 1360u)));  if (t) { goto L_004711C4; } }
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004711C4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004710C0; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00471254; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004710C4; } }
L_004710C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 1;
L_004710C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00471278; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047133C; } }
L_004710D8:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 64u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0047138C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 76u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047134C; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047134C; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047138C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[28].w[0] - 28340u);  if (t) { goto L_00471350; } }
L_00471140:
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0047138C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047138C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047138C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00471378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471188u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x00471188u) [[unlikely]] return; }
L_00471188:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1348u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004711A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004711A0u) [[unlikely]] return; }
L_004711A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00471390; } }
L_004711A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471040u | kUnwind; return; } goto L_00471040; } }
L_004711B0:
    set32(c.r[5], ld32((c.r[4].w[0] + 1372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004711BCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x004711BCu) [[unlikely]] return; }
L_004711BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004711A0u | kUnwind; return; } goto L_004711A0; } }
L_004711C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004711D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x004711D8u) [[unlikely]] return; }
L_004711D8:
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0047138C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047138C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047138C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00471240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471220u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x00471220u) [[unlikely]] return; }
L_00471220:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1348u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00471238u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00471238u) [[unlikely]] return; }
L_00471238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004711A0u | kUnwind; return; } goto L_004711A0; } }
L_00471240:
    set32(c.r[5], ld32((c.r[4].w[0] + 1372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047124Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x0047124Cu) [[unlikely]] return; }
L_0047124C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004711A0u | kUnwind; return; } goto L_004711A0; } }
L_00471254:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471260u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x00471260u) [[unlikely]] return; }
L_00471260:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00471270u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00471270u) [[unlikely]] return; }
L_00471270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004710C4u | kUnwind; return; } goto L_004710C4; } }
L_00471278:
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.r[5].d[0] = ld16((c.r[6].w[0] + 544u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[6].w[0] + 544u);  if (t) { goto L_00471308; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00471308; } }
L_004712A0:
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 1;
L_004712A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0047138C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047138C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047138C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00471328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004712E8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x004712E8u) [[unlikely]] return; }
L_004712E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1348u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00471300u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00471300u) [[unlikely]] return; }
L_00471300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004711A0u | kUnwind; return; } goto L_004711A0; } }
L_00471308:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 220u));
    set32(c.r[3], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004712A0u | kUnwind; return; } goto L_004712A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471320u);  if (depth < kMaxDepth) unit_0023(c, 150u, depth + 1u); else { c.pc = 0x0028D810u; return; } if (c.pc != 0x00471320u) [[unlikely]] return; }
L_00471320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004712A4u | kUnwind; return; } goto L_004712A4; } }
L_00471328:
    set32(c.r[5], ld32((c.r[4].w[0] + 1372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471334u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x00471334u) [[unlikely]] return; }
L_00471334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004711A0u | kUnwind; return; } goto L_004711A0; } }
L_0047133C:
    set32(c.r[3], ld32((c.r[28].w[0] - 29112u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29112u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004710D8u | kUnwind; return; } goto L_004710D8; } }
L_0047134C:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 1;
L_00471350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471358u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00471358u) [[unlikely]] return; }
L_00471358:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004711A0u | kUnwind; return; } goto L_004711A0; } }
L_00471378:
    set32(c.r[5], ld32((c.r[4].w[0] + 1372u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471384u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x00471384u) [[unlikely]] return; }
L_00471384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004711A0u | kUnwind; return; } goto L_004711A0; } }
L_0047138C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00471390:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004713A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[21], ld32((c.r[6].w[0] + 1360u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047140C; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0047140C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 212u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00471A04; } }
L_0047140C:
    set32(c.r[5], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00471900; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[4].d[0];  if (t) { goto L_00471900; } }
    c.r[7].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[7].w[0] << 1);
    c.r[17].d[0] = ld8((c.r[4].w[0] + 40u));
    set32(c.r[4], c.r[8].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = ld16((c.r[4].w[0] + 46u));
    c.budget -= 6;
L_0047143C:
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00471450; } }
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 64u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00471450:
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_00471470; } }
    set32(c.r[5], c.r[7].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[20].w[0]);
    c.r[17].d[0] = ld8((c.r[5].w[0] + 40u));
    c.r[16].d[0] = ld16((c.r[4].w[0] + 46u));
    c.budget -= 4;
L_00471470:
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00471A04; } }
    set32(c.r[3], c.r[3].w[0] - 3u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00471508; } }
    c.f[7] = ld32((c.r[6].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[6] = ld32((c.r[19].w[0] + 32u));
    c.f[3] = ld32((c.r[6].w[0] + 40u));
    c.f[2] = ld32((c.r[19].w[0] + 40u));
    c.f[5] = ld32((c.r[6].w[0] + 36u));
    c.f[4] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = 0u;
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00471920; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00471508; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00471948; } }
L_00471500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_00471A08; } }
L_00471508:
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[23].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_0047161C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 22016u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00471538:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00471960; } }
L_00471540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00471A04; } }
L_00471548:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00471978; } }
L_00471550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00471A04; } }
L_00471558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0047161C; } }
L_00471560:
    set32(c.r[3], ld32((c.r[6].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 99u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_00471990; } }
L_00471570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00471A04; } }
L_00471578:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0047161C; } }
L_00471584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047158Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0047158Cu) [[unlikely]] return; }
L_0047158C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40200000u);
    set32(c.r[3], 0u + 3u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 64u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004719A8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1348u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_0047161C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 64u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_004719AC; } }
L_004715D0:
    c.r[2].d[0] = c.r[5].d[0] ^ 9ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004715E4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 185u, depth + 1u); else { c.pc = 0x00397090u; return; } if (c.pc != 0x004715E4u) [[unlikely]] return; }
L_004715E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004715F0; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004715F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[4].d[0] = c.r[3].d[0] | 46871ull;
    st32((c.r[20].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 64u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_004719B4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1348u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[20].d[0];  if (t) { goto L_004719B4; } }
L_0047161C:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; st8((c.r[20].w[0] + 65u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_004719BC; } }
L_00471624:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_004716E4; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004716D4; } }
    c.r[4].d[0] = ld8((c.r[20].w[0] + 65u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004716BC; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004716BC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004716BC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0047169C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0047167C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004716D4; } }
L_0047167C:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[4], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471694u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x00471694u) [[unlikely]] return; }
L_00471694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004716D4; } }
L_0047169C:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[4], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004716B4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x004716B4u) [[unlikely]] return; }
L_004716B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004716D4; } }
L_004716BC:
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[4], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004716D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x004716D4u) [[unlikely]] return; }
L_004716D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004719C4; } }
L_004716DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00471A04; } }
L_004716E4:
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1348u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[20].d[0];  if (t) { goto L_004718F0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 304u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00471704u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00471704u) [[unlikely]] return; }
L_00471704:
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471718u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x00471718u) [[unlikely]] return; }
L_00471718:
    set32(c.r[3], ld32((c.r[21].w[0] + 260u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00471890; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 160u));
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00471890; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 36u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[4], c.r[5].w[0] + 8u);
    set32(c.r[5], ld32((c.r[5].w[0] + 208u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004717B8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0047175C:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004717A4; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_004717A4; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_004717B8; } }
L_004717A4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047175Cu | kUnwind; return; } goto L_0047175C; } }
    c.budget -= 1;
L_004717B8:
    set32(c.r[6], ld32((c.r[4].w[0] + 200u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 200u), c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.r[5].d[0] = c.r[9].d[0] << 56;
    set32(c.r[7], 0u + 10u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 8;
L_004717D8:
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[10].w[0] + 8u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00471844; } }
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00800000u);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[8].w[0] + 1u);
    st32((c.r[10].w[0] + 16u), 0u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    c.budget -= 8;
L_00471824:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_004719E0; } }
L_0047183C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 40u)));  if (t) { goto L_0047187C; } }
L_00471844:
    set32(c.r[6], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[6].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_00471860; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00471860:
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004717D8u | kUnwind; return; } goto L_004717D8; } }
    breakpoint(c, 0x00471870u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
L_0047187C:
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[10].w[0]), c.r[6].w[0]);
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_00471890:
    set32(c.r[4], 0u + 7u);
    set32(c.r[7], 0u - 17u);
    st8((c.r[3].w[0] + 160u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st32((c.r[3].w[0] + 124u), 0u);
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[10], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[6], c.r[4].w[0] << 1);
    set32(c.r[5], 0u - 3u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[9].d[0] = ld8((c.r[10].w[0] + 811u));
    set32(c.r[3], 0u - 5u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 811u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], ld32((c.r[21].w[0] + 260u)));
    c.r[7].d[0] = ld8((c.r[8].w[0] + 112u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 112u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] + 112u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[8].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 24;
L_004718F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004719E8; } }
L_004718F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00471A04; } }
L_00471900:
    set32(c.r[4], ld32((c.r[6].w[0] + 1348u)));
    c.r[7].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[8], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = ld16((c.r[4].w[0] + 46u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld8((c.r[5].w[0] + 40u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047143Cu | kUnwind; return; } goto L_0047143C; } }
L_00471920:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00471930; } }
L_00471928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00471A04; } }
L_00471930:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471940u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x00471940u) [[unlikely]] return; }
L_00471940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471928u | kUnwind; return; } goto L_00471928; } }
L_00471948:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471958u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x00471958u) [[unlikely]] return; }
L_00471958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471500u | kUnwind; return; } goto L_00471500; } }
L_00471960:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471970u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x00471970u) [[unlikely]] return; }
L_00471970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471540u | kUnwind; return; } goto L_00471540; } }
L_00471978:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471988u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x00471988u) [[unlikely]] return; }
L_00471988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471550u | kUnwind; return; } goto L_00471550; } }
L_00471990:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004719A0u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0065(c, 185u, depth + 1u); else { c.pc = 0x00397090u; return; } if (c.pc != 0x004719A0u) [[unlikely]] return; }
L_004719A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471570u | kUnwind; return; } goto L_00471570; } }
L_004719A8:
    st8((c.r[20].w[0] + 64u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_004719AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047161Cu | kUnwind; return; } goto L_0047161C; } }
L_004719B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 64u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047161Cu | kUnwind; return; } goto L_0047161C; } }
L_004719BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471624u | kUnwind; return; } goto L_00471624; } }
L_004719C4:
    set32(c.r[6], ld32((c.r[20].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004719D8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004719D8u) [[unlikely]] return; }
L_004719D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004716DCu | kUnwind; return; } goto L_004716DC; } }
L_004719E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047183Cu | kUnwind; return; } goto L_0047183C; } }
L_004719E8:
    set32(c.r[6], ld32((c.r[20].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004719FCu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004719FCu) [[unlikely]] return; }
L_004719FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004718F8u | kUnwind; return; } goto L_004718F8; } }
L_00471A04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_00471A08:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00471A30:
    c.r[8].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00471B24; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_00471B24; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_00471B08; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 1360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00471AF0; } }
    set32(c.r[7], ld32((c.r[6].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 89u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00471A7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_00471ADC; } }
L_00471A7C:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00471AD8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 22096u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00471AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { goto L_00471ADC; } }
L_00471AB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 99u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00471AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 7u);  if (t) { goto L_00471ADC; } }
L_00471AC4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 99u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00471B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 7u);  if (t) { goto L_00471ADC; } }
L_00471AD8:
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_00471ADC:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
L_00471AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00471BD4; } }
L_00471AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471ADCu | kUnwind; return; } goto L_00471ADC; } }
L_00471AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471ADCu | kUnwind; return; } goto L_00471ADC; } }
L_00471B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471ADCu | kUnwind; return; } goto L_00471ADC; } }
L_00471B08:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[5].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 46u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471AE8u | kUnwind; return; } goto L_00471AE8; } }
L_00471B24:
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 1360u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00471BBC; } }
    set32(c.r[7], ld32((c.r[6].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 89u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00471B4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_00471BAC; } }
L_00471B4C:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00471BA8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 22064u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00471B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { goto L_00471BAC; } }
L_00471B80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 99u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00471BC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 7u);  if (t) { goto L_00471BAC; } }
L_00471B94:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 99u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00471BCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 7u);  if (t) { goto L_00471BAC; } }
L_00471BA8:
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_00471BAC:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471AE8u | kUnwind; return; } goto L_00471AE8; } }
L_00471BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471BACu | kUnwind; return; } goto L_00471BAC; } }
L_00471BC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471BACu | kUnwind; return; } goto L_00471BAC; } }
L_00471BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471BACu | kUnwind; return; } goto L_00471BAC; } }
L_00471BD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00471BE0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00471C2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 18016u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00471C2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16688u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00471C2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_00471C2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 5;
L_00471C2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00471C40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 72u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 1360u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00471C8C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 89u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00471C74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00471C78; } }
L_00471C74:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_00471C78:
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 6u);
    st8((c.r[4].w[0] + 65u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 68u), 0u);  if (t) { goto L_00471C94; } }
L_00471C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471C78u | kUnwind; return; } goto L_00471C78; } }
L_00471C94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00471CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471CC4u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x002B9620u; return; } if (c.pc != 0x00471CC4u) [[unlikely]] return; }
L_00471CC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 18016u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00471CE4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00471CE4u) [[unlikely]] return; }
L_00471CE4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00471D00:
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[6] = ld32((c.r[4].w[0] + 4u));
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = 0u;
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[0] = c.f[3] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[5]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00471D38; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00471D38:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00471D54; } }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 5;
L_00471D54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00471D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[8] = ld32((c.r[5].w[0] + 4u));
    c.f[7] = ld32((c.r[4].w[0] + 4u));
    c.f[11] = ld32((c.r[5].w[0]));
    c.f[10] = ld32((c.r[4].w[0]));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[4].w[0] + 8u));
    c.f[13] = ld32((c.r[29].w[0] + 12u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[8], c.f[7]);
    c.f[9] = fp::ee::sub(c.fcr31, c.f[11], c.f[10]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[9]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00471E14; } }
    c.f[2] = fp::ee::div(c.fcr31, c.f[12], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00471E2C; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00471E44; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[9], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[10], c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    st32((c.r[6].w[0] + 12u), c.f[13]);
    c.budget -= 10;
L_00471E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 16u);  if (t) { goto L_00471E60; } }
L_00471E14:
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[6].w[0]), c.f[11]);
    st32((c.r[6].w[0] + 4u), c.f[8]);
    st32((c.r[6].w[0] + 8u), c.f[5]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.f[0]);  if (t) { goto L_00471E5C; } }
L_00471E2C:
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[6].w[0]), c.f[11]);
    st32((c.r[6].w[0] + 4u), c.f[8]);
    st32((c.r[6].w[0] + 8u), c.f[5]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471E0Cu | kUnwind; return; } goto L_00471E0C; } }
L_00471E44:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[6].w[0]), c.f[10]);
    st32((c.r[6].w[0] + 4u), c.f[7]);
    st32((c.r[6].w[0] + 8u), c.f[4]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471E0Cu | kUnwind; return; } goto L_00471E0C; } }
L_00471E5C:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_00471E60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00471E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00471EFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 18352u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00471F04; } }
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 1;
L_00471EA4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00471F14; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_00471EB0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00471F24; } }
L_00471EB8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00471EE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00471EE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_00471EE4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00471EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471EFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00471EFCu) [[unlikely]] return; }
L_00471EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00471F34; } }
L_00471F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471F0Cu);  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x00471F0Cu) [[unlikely]] return; }
L_00471F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471EA4u | kUnwind; return; } goto L_00471EA4; } }
L_00471F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471F1Cu);  if (depth < kMaxDepth) unit_0021(c, 156u, depth + 1u); else { c.pc = 0x00286310u; return; } if (c.pc != 0x00471F1Cu) [[unlikely]] return; }
L_00471F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471EB0u | kUnwind; return; } goto L_00471EB0; } }
L_00471F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471F2Cu);  if (depth < kMaxDepth) unit_0021(c, 156u, depth + 1u); else { c.pc = 0x00286310u; return; } if (c.pc != 0x00471F2Cu) [[unlikely]] return; }
L_00471F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471EB8u | kUnwind; return; } goto L_00471EB8; } }
L_00471F34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00471F50:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00471F60:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00471F70:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00471F80:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00471F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471FA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00471FA4u) [[unlikely]] return; }
L_00471FA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00471FB4; } }
L_00471FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00471FC8; } }
L_00471FB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00471FC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00471FC0u) [[unlikely]] return; }
L_00471FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00471FACu | kUnwind; return; } goto L_00471FAC; } }
L_00471FC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00471FE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00471FF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
L_00472018:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004720A8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00472024:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00472090; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00472068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00472090; } }
L_00472068:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472080u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x00472080u) [[unlikely]] return; }
L_00472080:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472090u); set32(c.r[4], c.r[3].w[0] + 528u);  if (depth < kMaxDepth) unit_0048(c, 88u, depth + 1u); else { c.pc = 0x00322330u; return; } if (c.pc != 0x00472090u) [[unlikely]] return; }
L_00472090:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472024u | kUnwind; return; } goto L_00472024; } }
    c.budget -= 1;
L_004720A8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_004720B8; } }
L_004720B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004720C8; } }
L_004720B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004720C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004720C0u) [[unlikely]] return; }
L_004720C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004720B0u | kUnwind; return; } goto L_004720B0; } }
L_004720C8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004720E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00472120; } }
L_00472110:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_004721E8; } }
L_00472118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004721FC; } }
L_00472120:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00472124:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047213Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0047213Cu) [[unlikely]] return; }
L_0047213C:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004721AC; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 56u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00472180; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472174u); set32(c.r[4], c.r[3].w[0] + 528u);  if (depth < kMaxDepth) unit_0048(c, 88u, depth + 1u); else { c.pc = 0x00322330u; return; } if (c.pc != 0x00472174u) [[unlikely]] return; }
L_00472174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00472190; } }
    c.budget -= 1;
L_00472180:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472190u); set32(c.r[4], c.r[3].w[0] + 528u);  if (depth < kMaxDepth) unit_0048(c, 90u, depth + 1u); else { c.pc = 0x003223A0u; return; } if (c.pc != 0x00472190u) [[unlikely]] return; }
L_00472190:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472124u | kUnwind; return; } goto L_00472124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472110u | kUnwind; return; } goto L_00472110; } }
L_004721AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004721D4u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_0048(c, 90u, depth + 1u); else { c.pc = 0x003223A0u; return; } if (c.pc != 0x004721D4u) [[unlikely]] return; }
L_004721D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004721DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004721DCu) [[unlikely]] return; }
L_004721DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472190u | kUnwind; return; } goto L_00472190; } }
    c.budget -= 1;
L_004721E8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 56u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472118u | kUnwind; return; } goto L_00472118; } }
L_004721FC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00472220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047223Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0047223Cu) [[unlikely]] return; }
L_0047223C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004722BC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00472318; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00472258:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472270u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x00472270u) [[unlikely]] return; }
L_00472270:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00472320; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047229Cu); set32(c.r[4], c.r[3].w[0] + 528u);  if (depth < kMaxDepth) unit_0048(c, 90u, depth + 1u); else { c.pc = 0x003223A0u; return; } if (c.pc != 0x0047229Cu) [[unlikely]] return; }
L_0047229C:
    c.budget -= 1;
L_004722A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472258u | kUnwind; return; } goto L_00472258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00472318; } }
L_004722BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00472318; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004722D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004722E8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004722E8u) [[unlikely]] return; }
L_004722E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004722F8u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_0048(c, 88u, depth + 1u); else { c.pc = 0x00322330u; return; } if (c.pc != 0x004722F8u) [[unlikely]] return; }
L_004722F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472300u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x00472300u) [[unlikely]] return; }
L_00472300:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004722D0u | kUnwind; return; } goto L_004722D0; } }
    c.budget -= 1;
L_00472318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00472358; } }
L_00472320:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472348u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_0048(c, 90u, depth + 1u); else { c.pc = 0x003223A0u; return; } if (c.pc != 0x00472348u) [[unlikely]] return; }
L_00472348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472350u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x00472350u) [[unlikely]] return; }
L_00472350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004722A0u | kUnwind; return; } goto L_004722A0; } }
L_00472358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00472370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00472380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 12;
L_004723B0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004723C0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004723C0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004723B0u | kUnwind; return; } goto L_004723B0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004723E4u); set32(c.r[6], c.r[6].w[0] + 22192u);  if (depth < kMaxDepth) unit_0021(c, 154u, depth + 1u); else { c.pc = 0x002862D0u; return; } if (c.pc != 0x004723E4u) [[unlikely]] return; }
L_004723E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[19].w[0] + 40u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004723F8u); set32(c.r[6], c.r[6].w[0] + 22210u);  if (depth < kMaxDepth) unit_0021(c, 154u, depth + 1u); else { c.pc = 0x002862D0u; return; } if (c.pc != 0x004723F8u) [[unlikely]] return; }
L_004723F8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047240Cu); set32(c.r[6], c.r[6].w[0] + 22229u);  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x0047240Cu) [[unlikely]] return; }
L_0047240C:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00472418:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00472454; } }
    c.budget -= 1;
L_00472428:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472418u | kUnwind; return; } goto L_00472418; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047244Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047244Cu) [[unlikely]] return; }
L_0047244C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00472480; } }
L_00472454:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472428u | kUnwind; return; } goto L_00472428; } }
L_00472480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004724A0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004724B0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004724C0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004724D0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004724E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004724F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004724F4u) [[unlikely]] return; }
L_004724F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00472504; } }
L_004724FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00472518; } }
L_00472504:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00472510u) [[unlikely]] return; }
L_00472510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004724FCu | kUnwind; return; } goto L_004724FC; } }
L_00472518:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00472530:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 34u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00472540:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 64u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004726A0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 33u));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00472580; } }
L_00472578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004726A0; } }
L_00472580:
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004725A0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004725A0u) [[unlikely]] return; }
L_004725A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004725ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004725ACu) [[unlikely]] return; }
L_004725AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004725D8; } }
    c.budget -= 1;
L_004725B8:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[19].w[0] + 33u));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472580u | kUnwind; return; } goto L_00472580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472578u | kUnwind; return; } goto L_00472578; } }
L_004725D8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 252u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004725F0u); set32(c.r[20], c.r[2].w[0] + c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004725F0u) [[unlikely]] return; }
L_004725F0:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[3].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00472650; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.f[0] = 0u;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004725B8u | kUnwind; return; } goto L_004725B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004725B8u | kUnwind; return; } goto L_004725B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472640u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_0048(c, 88u, depth + 1u); else { c.pc = 0x00322330u; return; } if (c.pc != 0x00472640u) [[unlikely]] return; }
L_00472640:
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004725B8u | kUnwind; return; } goto L_004725B8; } }
L_00472650:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472660u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_0048(c, 90u, depth + 1u); else { c.pc = 0x003223A0u; return; } if (c.pc != 0x00472660u) [[unlikely]] return; }
L_00472660:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 252u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00472678u); set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00472678u) [[unlikely]] return; }
L_00472678:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004725B8u | kUnwind; return; } goto L_004725B8; } }
L_004726A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004726C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004726E0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004726E0u) [[unlikely]] return; }
L_004726E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00472820; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004727B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 20352u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004727B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 2;
L_00472710:
    set32(c.r[5], ld32((c.r[4].w[0] - 20360u)));
    set32(c.r[6], c.r[2].w[0] << 4);
    set32(c.r[7], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 523u));
    c.r[5].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00472798; } }
    c.r[5].d[0] = c.r[6].d[0] << 60;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00472798; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00472798; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 1316u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { goto L_00472798; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 33u));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_004727B0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[7].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 33u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
L_00472798:
    set32(c.r[5], ld32((c.r[3].w[0] - 20352u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472710u | kUnwind; return; } goto L_00472710; } }
    c.budget -= 1;
L_004727B0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 33u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00472810; } }
L_004727C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[17], c.r[3].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004727E0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004727E0u) [[unlikely]] return; }
L_004727E0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004727ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004727ECu) [[unlikely]] return; }
L_004727EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00472888; } }
    c.budget -= 1;
L_004727F8:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 33u));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004727C0u | kUnwind; return; } goto L_004727C0; } }
L_00472810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472818u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x00472818u) [[unlikely]] return; }
L_00472818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00472880; } }
L_00472820:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 33u));
    c.budget -= 1;
L_00472824:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00472920; } }
L_00472830:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472850u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x00472850u) [[unlikely]] return; }
L_00472850:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472860u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x00324C70u; return; } if (c.pc != 0x00472860u) [[unlikely]] return; }
L_00472860:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 33u));
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472830u | kUnwind; return; } goto L_00472830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00472920; } }
L_00472880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00472938; } }
L_00472888:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00472898u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00472898u) [[unlikely]] return; }
L_00472898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004728B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004727F8u | kUnwind; return; } goto L_004727F8; } }
    c.budget -= 1;
L_004728B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004728C4u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_0049(c, 72u, depth + 1u); else { c.pc = 0x00324DC0u; return; } if (c.pc != 0x004728C4u) [[unlikely]] return; }
L_004728C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004727F8u | kUnwind; return; } goto L_004727F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004728D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004728D8u) [[unlikely]] return; }
L_004728D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00472900; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_004728F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004727F8u | kUnwind; return; } goto L_004727F8; } }
L_00472900:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 252u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00472918u); set32(c.r[18], c.r[2].w[0] + c.r[17].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00472918u) [[unlikely]] return; }
L_00472918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004728F0u | kUnwind; return; } goto L_004728F0; } }
L_00472920:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472930u); st8((c.r[16].w[0] + 33u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x00472930u) [[unlikely]] return; }
L_00472930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472880u | kUnwind; return; } goto L_00472880; } }
L_00472938:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00472950:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BABE0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 213u, depth); }
L_00472960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472974u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00472974u) [[unlikely]] return; }
L_00472974:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472984u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00472984u) [[unlikely]] return; }
L_00472984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004729A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[10], 0u - 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[5], 0u - 3u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 12672u);
    c.r[12].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[2], c.r[2].w[0] + 18656u);
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = c.r[10].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 36u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 49;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00472AB0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] + 40u);
    set32(c.r[5], 0u + 26u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472A78u); set32(c.r[6], c.r[6].w[0] + 22249u);  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x00472A78u) [[unlikely]] return; }
L_00472A78:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00472AF0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[5], 0u + 26u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472A94u); set32(c.r[6], c.r[6].w[0] + 22267u);  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x00472A94u) [[unlikely]] return; }
L_00472A94:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] + 56u);
    set32(c.r[5], 0u + 26u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472AA8u); set32(c.r[6], c.r[6].w[0] + 22289u);  if (depth < kMaxDepth) unit_0021(c, 154u, depth + 1u); else { c.pc = 0x002862D0u; return; } if (c.pc != 0x00472AA8u) [[unlikely]] return; }
L_00472AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[18].w[0] + 33u));  if (t) { goto L_00472AF4; } }
L_00472AB0:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 33u));
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472AC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x00472AC0u) [[unlikely]] return; }
L_00472AC0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00472AF0; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 33u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472ADCu); set32(c.r[6], c.r[6].w[0] + 22267u);  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x00472ADCu) [[unlikely]] return; }
L_00472ADC:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 33u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[18].w[0] + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472AF0u); set32(c.r[6], c.r[6].w[0] + 22289u);  if (depth < kMaxDepth) unit_0021(c, 154u, depth + 1u); else { c.pc = 0x002862D0u; return; } if (c.pc != 0x00472AF0u) [[unlikely]] return; }
L_00472AF0:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 33u));
    c.budget -= 1;
L_00472AF4:
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00472B38; } }
L_00472B00:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 33u));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472B00u | kUnwind; return; } goto L_00472B00; } }
    c.budget -= 1;
L_00472B38:
    st8((c.r[18].w[0] + 64u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00472B60:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00472B70:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00472B80:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00472B90:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00472BA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
L_00472BC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00472BE0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00472BDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00472BDCu) [[unlikely]] return; }
L_00472BDC:
    c.budget -= 1;
L_00472BE0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472BC0u | kUnwind; return; } goto L_00472BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472BF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00472BF8u) [[unlikely]] return; }
L_00472BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00472C08; } }
L_00472C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00472C1C; } }
L_00472C08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472C14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00472C14u) [[unlikely]] return; }
L_00472C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472C00u | kUnwind; return; } goto L_00472C00; } }
L_00472C1C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00472C30:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { st32((c.r[4].w[0] + 36u), c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BABE0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 213u, depth); }
L_00472C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472C54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00472C54u) [[unlikely]] return; }
L_00472C54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00472C94; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472C68u); set32(c.r[4], c.r[2].w[0] + 2008u);  if (depth < kMaxDepth) unit_0048(c, 67u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x00472C68u) [[unlikely]] return; }
L_00472C68:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472C78u); set32(c.r[4], c.r[2].w[0] + 2008u);  if (depth < kMaxDepth) unit_0048(c, 83u, depth + 1u); else { c.pc = 0x003222A0u; return; } if (c.pc != 0x00472C78u) [[unlikely]] return; }
L_00472C78:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472C84u); set32(c.r[4], c.r[2].w[0] + 2008u);  if (depth < kMaxDepth) unit_0048(c, 71u, depth + 1u); else { c.pc = 0x00321BE0u; return; } if (c.pc != 0x00472C84u) [[unlikely]] return; }
L_00472C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472C8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x00472C8Cu) [[unlikely]] return; }
L_00472C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00472CAC; } }
L_00472C94:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472CA0u); set32(c.r[4], c.r[2].w[0] + 2008u);  if (depth < kMaxDepth) unit_0048(c, 67u, depth + 1u); else { c.pc = 0x00321B40u; return; } if (c.pc != 0x00472CA0u) [[unlikely]] return; }
L_00472CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472CA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x00472CA8u) [[unlikely]] return; }
L_00472CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00472CAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00472CC0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 84u));
    c.f[20] = ld32((c.r[4].w[0] + 36u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00472E84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00472D78; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00472D18:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00472D60; } }
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00472D60; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472D5Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x00472D5Cu) [[unlikely]] return; }
L_00472D5C:
    c.budget -= 1;
L_00472D60:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472D18u | kUnwind; return; } goto L_00472D18; } }
    c.budget -= 1;
L_00472D78:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 116u);
    set32(c.r[17], c.r[29].w[0] + 120u);
    c.budget -= 4;
L_00472D88:
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00472DA0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00472DBC; } }
L_00472DA0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00472DBC:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00472E38; } }
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.f[1] = ld32((c.r[16].w[0] + 36u));  if (t) { goto L_00472DE0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00472DFC; } }
L_00472DE0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00472DFC:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00472E38; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00472E38; } }
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[18].w[0]), 0u);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00472E38u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00472E38u) [[unlikely]] return; }
L_00472E38:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472D88u | kUnwind; return; } goto L_00472D88; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00472F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472E68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x00472E68u) [[unlikely]] return; }
L_00472E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472E70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x00472E70u) [[unlikely]] return; }
L_00472E70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472E7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00472E7Cu) [[unlikely]] return; }
L_00472E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00472F08; } }
L_00472E84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00472F08; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00472EA8:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00472EF0; } }
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00472EF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472EECu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x00472EECu) [[unlikely]] return; }
L_00472EEC:
    c.budget -= 1;
L_00472EF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472EA8u | kUnwind; return; } goto L_00472EA8; } }
    c.budget -= 1;
L_00472F08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00472F30:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAA40u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 195u, depth); }
L_00472F40:
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { st32((c.r[4].w[0] + 36u), c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BABE0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 213u, depth); }
L_00472F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00472F60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 32u), c.f[12]);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), c.f[12]);
    st32((c.r[4].w[0] + 40u), c.f[13]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 16;
L_00472FA0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00472FB0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00472FB0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472FA0u | kUnwind; return; } goto L_00472FA0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[19].w[0] + 68u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472FD4u); set32(c.r[6], c.r[6].w[0] + 22312u);  if (depth < kMaxDepth) unit_0021(c, 154u, depth + 1u); else { c.pc = 0x002862D0u; return; } if (c.pc != 0x00472FD4u) [[unlikely]] return; }
L_00472FD4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 76u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00472FE8u); set32(c.r[6], c.r[6].w[0] + 22328u);  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x00472FE8u) [[unlikely]] return; }
L_00472FE8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00472FF4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00473094; } }
L_00473000:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00472FF4u | kUnwind; return; } goto L_00472FF4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[19].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] + 22346u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473028u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x00473028u) [[unlikely]] return; }
L_00473028:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[19].w[0] + 60u);
    set32(c.r[4], c.r[4].w[0] + 22358u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047303Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x0047303Cu) [[unlikely]] return; }
L_0047303C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[19].w[0] + 56u);
    set32(c.r[4], c.r[4].w[0] + 22370u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473050u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x00473050u) [[unlikely]] return; }
L_00473050:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[19].w[0] + 52u);
    set32(c.r[4], c.r[4].w[0] + 22382u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473064u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x00473064u) [[unlikely]] return; }
L_00473064:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    set32(c.r[4], c.r[4].w[0] + 22394u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473078u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x00473078u) [[unlikely]] return; }
L_00473078:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[19].w[0] + 44u);
    set32(c.r[4], c.r[4].w[0] + 22406u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047308Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x0047308Cu) [[unlikely]] return; }
L_0047308C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004730C0; } }
L_00473094:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473000u | kUnwind; return; } goto L_00473000; } }
L_004730C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004730E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004731B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 18960u);
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_00473118:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00473148; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00473140; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047313Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047313Cu) [[unlikely]] return; }
L_0047313C:
    c.budget -= 1;
L_00473140:
    st32((c.r[18].w[0] + 44u), 0u);
    c.budget -= 2;
L_00473148:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473118u | kUnwind; return; } goto L_00473118; } }
    set32(c.r[4], c.r[17].w[0] + 76u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004731BC; } }
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 1;
L_00473168:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004731CC; } }
L_00473170:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0047319C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047319C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_0047319C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004731B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004731B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004731B4u) [[unlikely]] return; }
L_004731B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004731DC; } }
L_004731BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004731C4u);  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x004731C4u) [[unlikely]] return; }
L_004731C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473168u | kUnwind; return; } goto L_00473168; } }
L_004731CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004731D4u);  if (depth < kMaxDepth) unit_0021(c, 156u, depth + 1u); else { c.pc = 0x00286310u; return; } if (c.pc != 0x004731D4u) [[unlikely]] return; }
L_004731D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473170u | kUnwind; return; } goto L_00473170; } }
L_004731DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00473200:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[8], 0u - 2u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 3u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[5], c.r[5].w[0] - 12672u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 18960u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 42;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004732B0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004732C0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004732D0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004732E0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004732F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473304u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00473304u) [[unlikely]] return; }
L_00473304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00473314; } }
L_0047330C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00473328; } }
L_00473314:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473320u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00473320u) [[unlikely]] return; }
L_00473320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047330Cu | kUnwind; return; } goto L_0047330C; } }
L_00473328:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00473340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00473350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00473360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00473374u) [[unlikely]] return; }
L_00473374:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473384u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00473384u) [[unlikely]] return; }
L_00473384:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004733A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[10], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 19264u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[7].w[0]));  c.pc = t; return; }
L_00473410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 28364u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00473460; } }
L_0047342C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473434u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x00473434u) [[unlikely]] return; }
L_00473434:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00473444u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00473444u) [[unlikely]] return; }
L_00473444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_00473454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_00473464; } }
L_00473454:
    set32(c.r[16], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047342Cu | kUnwind; return; } goto L_0047342C; } }
L_00473460:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00473464:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00473480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0047351C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 19568u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28364u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_004734E0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_00473524; } }
L_004734BC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004734BCu | kUnwind; return; } goto L_004734BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_00473528; } }
L_004734E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[28].w[0] - 28364u), c.r[2].w[0]);
    c.budget -= 2;
L_004734E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00473504; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_00473504:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0047351C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047351Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0047351Cu) [[unlikely]] return; }
L_0047351C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00473530; } }
L_00473524:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00473528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004734E8u | kUnwind; return; } goto L_004734E8; } }
L_00473530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00473540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[8], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 19568u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28364u)));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 28364u), c.r[4].w[0]);  c.pc = t; return; }
L_004735C0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004735D0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004735E0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004735F0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00470000u < 16384u) { entry = entries_009C[(t - 0x00470000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00473600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473614u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00473614u) [[unlikely]] return; }
L_00473614:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00473624; } }
L_0047361C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00473638; } }
L_00473624:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473630u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00473630u) [[unlikely]] return; }
L_00473630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047361Cu | kUnwind; return; } goto L_0047361C; } }
L_00473638:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00473650:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00473660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473678u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00473678u) [[unlikely]] return; }
L_00473678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00473714; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00473760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473694u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x00473694u) [[unlikely]] return; }
L_00473694:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004736A4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004736A4u) [[unlikely]] return; }
L_004736A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00473784; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004736DC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004736CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004736CCu) [[unlikely]] return; }
L_004736CC:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_004736DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004736E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x004736E4u) [[unlikely]] return; }
L_004736E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004736F0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 191u, depth + 1u); else { c.pc = 0x0027DD30u; return; } if (c.pc != 0x004736F0u) [[unlikely]] return; }
L_004736F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047370Cu); set32(c.r[4], c.r[3].w[0] + 2060u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0031EB60u; return; } if (c.pc != 0x0047370Cu) [[unlikely]] return; }
L_0047370C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00473758; } }
L_00473714:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00473740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473728u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x00473728u) [[unlikely]] return; }
L_00473728:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473738u); set32(c.r[4], c.r[3].w[0] + 2060u);  if (depth < kMaxDepth) unit_0047(c, 163u, depth + 1u); else { c.pc = 0x0031E220u; return; } if (c.pc != 0x00473738u) [[unlikely]] return; }
L_00473738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00473758; } }
L_00473740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473748u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x00473748u) [[unlikely]] return; }
L_00473748:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473758u); set32(c.r[4], c.r[3].w[0] + 2060u);  if (depth < kMaxDepth) unit_0047(c, 175u, depth + 1u); else { c.pc = 0x0031E450u; return; } if (c.pc != 0x00473758u) [[unlikely]] return; }
L_00473758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004737B0; } }
L_00473760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473768u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x00473768u) [[unlikely]] return; }
L_00473768:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[16].w[0] + 28u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047377Cu); set32(c.r[4], c.r[2].w[0] + 2060u);  if (depth < kMaxDepth) unit_0047(c, 168u, depth + 1u); else { c.pc = 0x0031E360u; return; } if (c.pc != 0x0047377Cu) [[unlikely]] return; }
L_0047377C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473758u | kUnwind; return; } goto L_00473758; } }
L_00473784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047378Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x0047378Cu) [[unlikely]] return; }
L_0047378C:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[8], 0u + 20u);
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004737A8u); set32(c.r[4], c.r[3].w[0] + 2060u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0031EB60u; return; } if (c.pc != 0x004737A8u) [[unlikely]] return; }
L_004737A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473758u | kUnwind; return; } goto L_00473758; } }
L_004737B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004737C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004737D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004737D4u) [[unlikely]] return; }
L_004737D4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004737E4u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004737E4u) [[unlikely]] return; }
L_004737E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00473800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[11], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 19856u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 24u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 29u), static_cast<std::uint8_t>(c.r[8].w[0]));  c.pc = t; return; }
L_00473880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047390C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[17].w[0] + 56u);
    set32(c.r[2], c.r[2].w[0] + 18656u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00473914; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_004738B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00473924; } }
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 1;
L_004738C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00473934; } }
L_004738C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004738F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004738F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004738F4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0047390C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047390Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0047390Cu) [[unlikely]] return; }
L_0047390C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00473944; } }
L_00473914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047391Cu);  if (depth < kMaxDepth) unit_0021(c, 156u, depth + 1u); else { c.pc = 0x00286310u; return; } if (c.pc != 0x0047391Cu) [[unlikely]] return; }
L_0047391C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004738B4u | kUnwind; return; } goto L_004738B4; } }
L_00473924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047392Cu);  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x0047392Cu) [[unlikely]] return; }
L_0047392C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004738C0u | kUnwind; return; } goto L_004738C0; } }
L_00473934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047393Cu);  if (depth < kMaxDepth) unit_002B(c, 62u, depth + 1u); else { c.pc = 0x002AC740u; return; } if (c.pc != 0x0047393Cu) [[unlikely]] return; }
L_0047393C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004738C8u | kUnwind; return; } goto L_004738C8; } }
L_00473944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00473960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004739B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 19264u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047399C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_0047399C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004739B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004739B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004739B4u) [[unlikely]] return; }
L_004739B4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004739D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004739E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00473A34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 19856u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00473A1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_00473A1C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00473A34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473A34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00473A34u) [[unlikely]] return; }
L_00473A34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00473A50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00473A60:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] + 1360u);
    set32(c.r[5], 0u + 388u);
    set32(c.r[4], 0u + 1494u);
    c.budget -= 5;
L_00473A74:
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
L_00473A80:
    set32(c.r[3], c.r[11].w[0] + 333u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[11].w[0] + 335u);
    set32(c.r[3], c.r[11].w[0] + 334u);
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[11].w[0] + 336u);
    st16((c.r[9].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[11].w[0] + 337u);
    st16((c.r[9].w[0] + 8u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[8], c.r[11].w[0] + 338u);
    st16((c.r[9].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[7], c.r[11].w[0] + 339u);
    st16((c.r[9].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[9].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[11].w[0] + 340u);
    st16((c.r[9].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[11], c.r[11].w[0] + 8u);
    st16((c.r[9].w[0] + 18u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[11].sd[0] < 43ll ? 1ull : 0ull;
    st16((c.r[9].w[0] + 20u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[9].w[0] + 22u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 24u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[9].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[9].w[0] + 30u), static_cast<std::uint16_t>(0u));
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473A80u | kUnwind; return; } goto L_00473A80; } }
    set32(c.r[3], c.r[11].w[0] << 2);
    set32(c.r[6], c.r[11].w[0] + 333u);
    set32(c.r[7], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[12], c.r[12].w[0] + 1u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[11].w[0] + 334u);
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[11].w[0] + 335u);
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[12].sd[0] < 85ll ? 1ull : 0ull;
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[7].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[10].w[0] + 204u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[10].w[0] + 206u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 208u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473A74u | kUnwind; return; } goto L_00473A74; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00473B40:
    set32(c.r[3], 0u + 1u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[28].w[0] - 28360u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] + 1360u);
    set32(c.r[5], 0u + 388u);
    set32(c.r[4], 0u + 1494u);
    c.budget -= 7;
L_00473B5C:
    c.r[11].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
L_00473B68:
    set32(c.r[3], c.r[11].w[0] + 333u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[11].w[0] + 335u);
    set32(c.r[3], c.r[11].w[0] + 334u);
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[11].w[0] + 336u);
    st16((c.r[9].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[11].w[0] + 337u);
    st16((c.r[9].w[0] + 8u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[8], c.r[11].w[0] + 338u);
    st16((c.r[9].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[7], c.r[11].w[0] + 339u);
    st16((c.r[9].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[9].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[11].w[0] + 340u);
    st16((c.r[9].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[11], c.r[11].w[0] + 8u);
    st16((c.r[9].w[0] + 18u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[11].sd[0] < 43ll ? 1ull : 0ull;
    st16((c.r[9].w[0] + 20u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[9].w[0] + 22u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 24u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[9].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[9].w[0] + 30u), static_cast<std::uint16_t>(0u));
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473B68u | kUnwind; return; } goto L_00473B68; } }
    set32(c.r[3], c.r[11].w[0] << 2);
    set32(c.r[6], c.r[11].w[0] + 333u);
    set32(c.r[7], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[12], c.r[12].w[0] + 1u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[11].w[0] + 334u);
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[11].w[0] + 335u);
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[12].sd[0] < 85ll ? 1ull : 0ull;
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[7].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[10].w[0] + 204u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[10].w[0] + 206u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 208u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473B5Cu | kUnwind; return; } goto L_00473B5C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1360u);
    set32(c.r[4], c.r[4].w[0] + 19680u);
    c.budget -= 5;
L_00473C30:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] + 208u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[5].w[0] + 416u);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 624u);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 832u);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 1040u);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 1248u);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + 1456u);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1664u);
    c.r[3].d[0] = c.r[6].sd[0] < 77ll ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 128u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473C30u | kUnwind; return; } goto L_00473C30; } }
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + 1360u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 19680u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[7], c.r[8].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] + 208u);
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[7].w[0] + 416u);
    st32((c.r[6].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] + 624u);
    st32((c.r[6].w[0] + 48u), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] + 832u);
    st32((c.r[6].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 20960u), c.r[8].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[3].w[0] + 20976u), c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[5].w[0] + 20992u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 21008u), c.r[8].w[0]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 21024u), c.r[8].w[0]);  c.pc = t; return; }
L_00473D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00473D30; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00473D30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473D30u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00473D30u) [[unlikely]] return; }
L_00473D30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00473D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00473DA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[16].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] + 20160u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473D80u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0089(c, 33u, depth + 1u); else { c.pc = 0x00424BB0u; return; } if (c.pc != 0x00473D80u) [[unlikely]] return; }
L_00473D80:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00473DA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00473DA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00473DA4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00473DC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u - 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u - 3u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 105u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 5u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 105u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[4].w[0] + 36u)));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 105u));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 296u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[7].d[0] ^ 5ull;
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 105u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 296u));
    c.budget -= 25;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00473E4C; } }
L_00473E24:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 296u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00473F70; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00473F70; } }
L_00473E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00473FB8; } }
L_00473E4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473E58u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 188u, depth + 1u); else { c.pc = 0x00477910u; return; } if (c.pc != 0x00473E58u) [[unlikely]] return; }
L_00473E58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473E64u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 192u, depth + 1u); else { c.pc = 0x00477970u; return; } if (c.pc != 0x00473E64u) [[unlikely]] return; }
L_00473E64:
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00473F1C; } }
    c.f[1] = ld32((c.r[16].w[0] + 120u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00473F1C; } }
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00473F68; } }
L_00473EB0:
    set32(c.r[10], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00473F1C; } }
    c.r[9].d[0] = ld16((c.r[10].w[0] + 544u));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[5], 0u - 1u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00473F1Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x00473F1Cu) [[unlikely]] return; }
L_00473F1C:
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00473F34; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00473F34:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 156u));
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[3], 0u - 65u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 156u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 105u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473E24u | kUnwind; return; } goto L_00473E24; } }
L_00473F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473EB0u | kUnwind; return; } goto L_00473EB0; } }
L_00473F70:
    st32((c.r[16].w[0] + 80u), 0u);
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00473F9C; } }
    st32((c.r[16].w[0] + 136u), c.f[1]);
    c.budget -= 1;
L_00473F9C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 156u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00473E44u | kUnwind; return; } goto L_00473E44; } }
L_00473FB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00473FD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 296u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { [[clang::musttail]] return unit_009D(c, 9u, depth); } }
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    c.f[3] = 0u;
    c.budget -= 2;
    [[clang::musttail]] return unit_009D(c, 1u, depth);
}

}

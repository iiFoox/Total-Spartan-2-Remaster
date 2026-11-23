#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000A[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6,
    0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0,
    71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0,
    0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0,
    0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_000A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00228000;
    case 2u: goto L_00228010;
    case 3u: goto L_00228028;
    case 4u: goto L_00228058;
    case 5u: goto L_00228070;
    case 6u: goto L_0022807C;
    case 7u: goto L_00228088;
    case 8u: goto L_00228090;
    case 9u: goto L_00228098;
    case 10u: goto L_002280A8;
    case 11u: goto L_002280C8;
    case 12u: goto L_002280F8;
    case 13u: goto L_00228100;
    case 14u: goto L_0022812C;
    case 15u: goto L_00228148;
    case 16u: goto L_00228168;
    case 17u: goto L_00228188;
    case 18u: goto L_002281A0;
    case 19u: goto L_002281C4;
    case 20u: goto L_002281E0;
    case 21u: goto L_002281F0;
    case 22u: goto L_00228218;
    case 23u: goto L_00228258;
    case 24u: goto L_00228264;
    case 25u: goto L_00228284;
    case 26u: goto L_00228294;
    case 27u: goto L_002282B0;
    case 28u: goto L_002282B8;
    case 29u: goto L_002282D8;
    case 30u: goto L_002282EC;
    case 31u: goto L_0022830C;
    case 32u: goto L_00228318;
    case 33u: goto L_00228378;
    case 34u: goto L_002283CC;
    case 35u: goto L_002283E8;
    case 36u: goto L_00228410;
    case 37u: goto L_00228424;
    case 38u: goto L_00228498;
    case 39u: goto L_002284B0;
    case 40u: goto L_002284C8;
    case 41u: goto L_002284E0;
    case 42u: goto L_00228518;
    case 43u: goto L_00228528;
    case 44u: goto L_00228538;
    case 45u: goto L_00228558;
    case 46u: goto L_00228564;
    case 47u: goto L_00228590;
    case 48u: goto L_002285A8;
    case 49u: goto L_002285BC;
    case 50u: goto L_002285CC;
    case 51u: goto L_002285E0;
    case 52u: goto L_002285E8;
    case 53u: goto L_00228608;
    case 54u: goto L_0022861C;
    case 55u: goto L_00228640;
    case 56u: goto L_00228648;
    case 57u: goto L_00228690;
    case 58u: goto L_002286A4;
    case 59u: goto L_002286E4;
    case 60u: goto L_002286F8;
    case 61u: goto L_00228714;
    case 62u: goto L_00228728;
    case 63u: goto L_00228754;
    case 64u: goto L_00228760;
    case 65u: goto L_00228768;
    case 66u: goto L_0022877C;
    case 67u: goto L_002287A8;
    case 68u: goto L_002287C8;
    case 69u: goto L_002287F0;
    case 70u: goto L_002287F8;
    case 71u: goto L_00228800;
    case 72u: goto L_00228808;
    case 73u: goto L_00228824;
    case 74u: goto L_00228838;
    case 75u: goto L_00228858;
    case 76u: goto L_00228864;
    case 77u: goto L_00228890;
    case 78u: goto L_002288A8;
    case 79u: goto L_002288BC;
    case 80u: goto L_002288CC;
    case 81u: goto L_002288E0;
    case 82u: goto L_002288E8;
    case 83u: goto L_00228908;
    case 84u: goto L_0022891C;
    case 85u: goto L_00228940;
    case 86u: goto L_00228948;
    case 87u: goto L_00228A40;
    case 88u: goto L_00228A78;
    case 89u: goto L_00228A8C;
    case 90u: goto L_00228B00;
    case 91u: goto L_00228B14;
    case 92u: goto L_00228B34;
    case 93u: goto L_00228B40;
    case 94u: goto L_00228B7C;
    case 95u: goto L_00228BA8;
    case 96u: goto L_00228BC8;
    case 97u: goto L_00228CA8;
    case 98u: goto L_00228CB0;
    case 99u: goto L_00228CE0;
    case 100u: goto L_00228CE8;
    case 101u: goto L_00228D28;
    case 102u: goto L_00228D6C;
    case 103u: goto L_00228D74;
    case 104u: goto L_00228D8C;
    case 105u: goto L_00228D94;
    case 106u: goto L_00228DA0;
    case 107u: goto L_00228DB4;
    case 108u: goto L_00228DC4;
    case 109u: goto L_00228DE0;
    case 110u: goto L_00228DE8;
    case 111u: goto L_00228E08;
    case 112u: goto L_00228E1C;
    case 113u: goto L_00228E3C;
    case 114u: goto L_00228E48;
    case 115u: goto L_00228E98;
    case 116u: goto L_00228EC4;
    case 117u: goto L_00228ED8;
    case 118u: goto L_00228EFC;
    case 119u: goto L_00228F10;
    case 120u: goto L_00228F40;
    case 121u: goto L_00228F80;
    case 122u: goto L_00228F88;
    case 123u: goto L_00228F94;
    case 124u: goto L_00228FAC;
    case 125u: goto L_00228FC0;
    case 126u: goto L_00228FD0;
    case 127u: goto L_00228FF4;
    case 128u: goto L_00229008;
    case 129u: goto L_00229028;
    case 130u: goto L_00229030;
    case 131u: goto L_00229070;
    case 132u: goto L_00229084;
    case 133u: goto L_0022909C;
    case 134u: goto L_002290CC;
    case 135u: goto L_002290E0;
    case 136u: goto L_00229100;
    case 137u: goto L_00229108;
    case 138u: goto L_00229120;
    case 139u: goto L_00229134;
    case 140u: goto L_00229160;
    case 141u: goto L_00229174;
    case 142u: goto L_002291B4;
    case 143u: goto L_002291C8;
    case 144u: goto L_002291E4;
    case 145u: goto L_002291F8;
    case 146u: goto L_00229208;
    case 147u: goto L_00229220;
    case 148u: goto L_00229248;
    case 149u: goto L_00229264;
    case 150u: goto L_002292A4;
    case 151u: goto L_002292B8;
    case 152u: goto L_002292D4;
    case 153u: goto L_002292F0;
    case 154u: goto L_00229304;
    case 155u: goto L_00229318;
    case 156u: goto L_00229334;
    case 157u: goto L_00229374;
    case 158u: goto L_00229388;
    case 159u: goto L_002293BC;
    case 160u: goto L_002293D8;
    case 161u: goto L_002293F8;
    case 162u: goto L_00229408;
    case 163u: goto L_00229430;
    case 164u: goto L_00229440;
    case 165u: goto L_00229460;
    case 166u: goto L_00229470;
    case 167u: goto L_00229490;
    case 168u: goto L_002294A0;
    case 169u: goto L_002294CC;
    case 170u: goto L_002294D8;
    case 171u: goto L_00229530;
    case 172u: goto L_00229558;
    case 173u: goto L_00229568;
    case 174u: goto L_00229594;
    case 175u: goto L_002295CC;
    case 176u: goto L_002295E4;
    case 177u: goto L_002295FC;
    case 178u: goto L_00229620;
    case 179u: goto L_00229750;
    case 180u: goto L_0022979C;
    case 181u: goto L_002297C4;
    case 182u: goto L_00229804;
    case 183u: goto L_00229810;
    case 184u: goto L_00229844;
    case 185u: goto L_00229858;
    case 186u: goto L_00229870;
    case 187u: goto L_00229888;
    case 188u: goto L_002298B8;
    case 189u: goto L_002298E0;
    case 190u: goto L_002298F4;
    case 191u: goto L_00229904;
    case 192u: goto L_00229910;
    case 193u: goto L_0022994C;
    case 194u: goto L_00229968;
    case 195u: goto L_002299A8;
    case 196u: goto L_002299C8;
    case 197u: goto L_002299D0;
    case 198u: goto L_00229A10;
    case 199u: goto L_00229A78;
    case 200u: goto L_00229BF8;
    case 201u: goto L_00229C90;
    case 202u: goto L_00229D44;
    case 203u: goto L_00229D98;
    case 204u: goto L_00229DEC;
    case 205u: goto L_00229E18;
    case 206u: goto L_00229E30;
    case 207u: goto L_00229E4C;
    case 208u: goto L_00229E54;
    case 209u: goto L_00229E5C;
    case 210u: goto L_00229E68;
    case 211u: goto L_00229E70;
    case 212u: goto L_00229EB0;
    case 213u: goto L_00229EC4;
    case 214u: goto L_00229EC8;
    case 215u: goto L_00229F24;
    case 216u: goto L_00229F30;
    case 217u: goto L_00229F58;
    case 218u: goto L_00229F7C;
    case 219u: goto L_00229F90;
    case 220u: goto L_00229FC0;
    case 221u: goto L_00229FE8;
    case 222u: goto L_00229FF0;
    case 223u: goto L_0022A004;
    case 224u: goto L_0022A018;
    case 225u: goto L_0022A0E8;
    case 226u: goto L_0022A128;
    case 227u: goto L_0022A168;
    case 228u: goto L_0022A178;
    case 229u: goto L_0022A188;
    case 230u: goto L_0022A1A8;
    case 231u: goto L_0022A200;
    case 232u: goto L_0022A224;
    case 233u: goto L_0022A240;
    case 234u: goto L_0022A284;
    case 235u: goto L_0022A294;
    case 236u: goto L_0022A2D0;
    case 237u: goto L_0022A2E0;
    case 238u: goto L_0022A308;
    case 239u: goto L_0022A344;
    case 240u: goto L_0022A388;
    case 241u: goto L_0022A398;
    case 242u: goto L_0022A3C8;
    case 243u: goto L_0022A414;
    case 244u: goto L_0022A464;
    case 245u: goto L_0022A474;
    case 246u: goto L_0022A4A8;
    case 247u: goto L_0022A4D0;
    case 248u: goto L_0022A528;
    case 249u: goto L_0022A558;
    case 250u: goto L_0022A5AC;
    case 251u: goto L_0022A5E4;
    case 252u: goto L_0022A5F0;
    case 253u: goto L_0022A620;
    case 254u: goto L_0022A630;
    case 255u: goto L_0022A670;
    case 256u: goto L_0022A6C0;
    case 257u: goto L_0022A740;
    case 258u: goto L_0022A778;
    case 259u: goto L_0022A7A0;
    case 260u: goto L_0022A7B0;
    case 261u: goto L_0022A7E8;
    case 262u: goto L_0022A834;
    case 263u: goto L_0022A84C;
    case 264u: goto L_0022A884;
    case 265u: goto L_0022A8B0;
    case 266u: goto L_0022A908;
    case 267u: goto L_0022A968;
    case 268u: goto L_0022AA04;
    case 269u: goto L_0022AA34;
    case 270u: goto L_0022AA44;
    case 271u: goto L_0022AA88;
    case 272u: goto L_0022AACC;
    case 273u: goto L_0022AADC;
    case 274u: goto L_0022AAF8;
    case 275u: goto L_0022AB5C;
    case 276u: goto L_0022AB80;
    case 277u: goto L_0022ABB0;
    case 278u: goto L_0022ABC4;
    case 279u: goto L_0022ABF4;
    case 280u: goto L_0022AC04;
    case 281u: goto L_0022AC48;
    case 282u: goto L_0022AC7C;
    case 283u: goto L_0022AC90;
    case 284u: goto L_0022ACAC;
    case 285u: goto L_0022AE18;
    case 286u: goto L_0022AE5C;
    case 287u: goto L_0022AEA4;
    case 288u: goto L_0022AEB4;
    case 289u: goto L_0022AEE8;
    case 290u: goto L_0022AF38;
    case 291u: goto L_0022AF5C;
    case 292u: goto L_0022AF78;
    case 293u: goto L_0022AFBC;
    case 294u: goto L_0022AFCC;
    case 295u: goto L_0022B008;
    case 296u: goto L_0022B044;
    case 297u: goto L_0022B088;
    case 298u: goto L_0022B098;
    case 299u: goto L_0022B0C8;
    case 300u: goto L_0022B128;
    case 301u: goto L_0022B14C;
    case 302u: goto L_0022B208;
    case 303u: goto L_0022B214;
    case 304u: goto L_0022B244;
    case 305u: goto L_0022B254;
    case 306u: goto L_0022B298;
    case 307u: goto L_0022B2F0;
    case 308u: goto L_0022B31C;
    case 309u: goto L_0022B348;
    case 310u: goto L_0022B364;
    case 311u: goto L_0022B378;
    case 312u: goto L_0022B3A8;
    case 313u: goto L_0022B3B8;
    case 314u: goto L_0022B3F8;
    case 315u: goto L_0022B43C;
    case 316u: goto L_0022B484;
    case 317u: goto L_0022B494;
    case 318u: goto L_0022B4C8;
    case 319u: goto L_0022B514;
    case 320u: goto L_0022B538;
    case 321u: goto L_0022B55C;
    case 322u: goto L_0022B590;
    case 323u: goto L_0022B5A0;
    case 324u: goto L_0022B5D8;
    case 325u: goto L_0022B86C;
    case 326u: goto L_0022B8D0;
    case 327u: goto L_0022BA00;
    case 328u: goto L_0022BBC8;
    case 329u: goto L_0022BCAC;
    case 330u: goto L_0022BDA0;
    case 331u: goto L_0022BEC4;
    case 332u: goto L_0022BECC;
    case 333u: goto L_0022BF80;
    default: bad_entry(c, 0x00228000u); return;
    }
L_00228000:
    st32((c.r[3].w[0] - 9248u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 9228u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 4;
L_00228010:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00228028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9260u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00228060; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] - 9184u), c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228058u); set32(c.r[4], ld32((c.r[16].w[0] - 9248u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x00228058u) [[unlikely]] return; }
L_00228058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00228068; } }
L_00228060:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 2;
L_00228068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228070u); set32(c.r[4], ld32((c.r[2].w[0] - 9240u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x00228070u) [[unlikely]] return; }
L_00228070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022807Cu); set32(c.r[4], ld32((c.r[3].w[0] - 9236u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x0022807Cu) [[unlikely]] return; }
L_0022807C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228088u); set32(c.r[4], ld32((c.r[3].w[0] - 9232u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x00228088u) [[unlikely]] return; }
L_00228088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228090u); set32(c.r[4], ld32((c.r[16].w[0] - 9248u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x00228090u) [[unlikely]] return; }
L_00228090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228098u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00228098u) [[unlikely]] return; }
L_00228098:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002280A8u); c.r[4].d[0] = c.r[4].d[0] | 18ull;  if (depth < kMaxDepth) unit_0007(c, 287u, depth + 1u); else { c.pc = 0x0021EAE0u; return; } if (c.pc != 0x002280A8u) [[unlikely]] return; }
L_002280A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002280BC; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00225A30u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 151u, depth); }
L_002280BC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002280C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 9208u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_002280F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002280F8u);  if (depth < kMaxDepth) unit_000A(c, 18u, depth + 1u); else { c.pc = 0x002281A0u; return; } if (c.pc != 0x002280F8u) [[unlikely]] return; }
L_002280F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228100u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00228100u) [[unlikely]] return; }
L_00228100:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[17], ld32((c.r[5].w[0] + 22152u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[4].w[0] + 22160u), c.r[16].w[0]);
    st32((c.r[5].w[0] + 22152u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 22156u), c.r[28].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00228130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022812Cu);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0022812Cu) [[unlikely]] return; }
L_0022812C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00228130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00228148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], ld32((c.r[2].w[0] + 22152u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0022818C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9244u)));
    c.budget -= 2;
L_00228168:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00228190; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[28], ld32((c.r[2].w[0] + 22156u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00228188u); set32(c.r[4], ld32((c.r[3].w[0] + 22160u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00228188u) [[unlikely]] return; }
L_00228188:
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022818C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00228190:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002281A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002281C4u); st32((c.r[17].w[0] - 9244u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x002281C4u) [[unlikely]] return; }
L_002281C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32440u);
    c.r[4].d[0] = c.r[4].d[0] | 18ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002281E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 286u, depth + 1u); else { c.pc = 0x0021EA68u; return; } if (c.pc != 0x002281E0u) [[unlikely]] return; }
L_002281E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_002281F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002281F0u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x002281F0u) [[unlikely]] return; }
L_002281F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 1;
L_002281F4:
    st32((c.r[17].w[0] - 9244u), 0u);
    st32((c.r[2].w[0] - 9208u), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00228218:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228258u); st32((c.r[29].w[0] + 16u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0009(c, 408u, depth + 1u); else { c.pc = 0x00227F40u; return; } if (c.pc != 0x00228258u) [[unlikely]] return; }
L_00228258:
    set32(c.r[4], ld32((c.r[22].w[0] - 9240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228264u);  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x00228264u) [[unlikely]] return; }
L_00228264:
    set32(c.r[3], ld32((c.r[22].w[0] - 9240u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002284E4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 9252u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228284u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 62u, depth + 1u); else { c.pc = 0x00228728u; return; } if (c.pc != 0x00228284u) [[unlikely]] return; }
L_00228284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00228418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228294u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0021EEE0u; return; } if (c.pc != 0x00228294u) [[unlikely]] return; }
L_00228294:
    set32(c.r[2], ld32((c.r[17].w[0] - 9204u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022834C; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_002282D4; } }
L_002282B0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002282B8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002282B8u | kUnwind; return; } goto L_002282B8; } }
L_002282D4:
    set32(c.r[16], c.r[23].w[0] + 22656u);
    c.budget -= 1;
L_002282D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1431ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002282ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 359u, depth + 1u); else { c.pc = 0x0021F688u; return; } if (c.pc != 0x002282ECu) [[unlikely]] return; }
L_002282EC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0022833C; }
    set32(c.r[2], ld32((c.r[20].w[0] - 9264u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_00228310; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022830Cu); set32(c.r[4], c.r[4].w[0] + 28800u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0022830Cu) [[unlikely]] return; }
L_0022830C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_00228310:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00228318:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228318u | kUnwind; return; } goto L_00228318; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[23].w[0] + 22656u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002282D8u | kUnwind; return; } goto L_002282D8; } }
L_0022833C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002282B0u | kUnwind; return; } goto L_002282B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 9204u), 0u);  if (t) { goto L_00228358; } }
L_0022834C:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_00228358:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[4], c.r[21].w[0] + 22272u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 24);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0022839C; } }
    set32(c.r[6], c.r[4].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00228378:
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);  if (t) { goto L_0022839C; } }
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00228378u | kUnwind; return; } goto L_00228378; }
L_0022839C:
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[20].w[0] - 9264u)));  if (t) { goto L_002283B4; } }
    set32(c.r[2], c.r[21].w[0] + 22272u);
    st8((c.r[2].w[0] + 291u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[20].w[0] - 9264u)));
    c.budget -= 3;
L_002283B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002283CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 28832u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002283CCu); set32(c.r[5], c.r[5].w[0] + 22308u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002283CCu) [[unlikely]] return; }
L_002283CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[16], c.r[21].w[0] + 22272u);
    set32(c.r[5], 0u + 300u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002283E8u); st32((c.r[16].w[0] + 292u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x002283E8u) [[unlikely]] return; }
L_002283E8:
    set32(c.r[4], c.r[23].w[0] + 22656u);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 300u);
    set32(c.r[9], c.r[30].w[0] + 22592u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228410u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x00228410u) [[unlikely]] return; }
L_00228410:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0022842C; } }
L_00228418:
    set32(c.r[4], ld32((c.r[22].w[0] - 9240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228424u);  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x00228424u) [[unlikely]] return; }
L_00228424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002284E4; } }
L_0022842C:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    ldl(c.r[3], (c.r[2].w[0] + 7u));
    ldr(c.r[3], (c.r[2].w[0]));
    ldl(c.r[4], (c.r[2].w[0] + 15u));
    ldr(c.r[4], (c.r[2].w[0] + 8u));
    ldl(c.r[5], (c.r[2].w[0] + 23u));
    ldr(c.r[5], (c.r[2].w[0] + 16u));
    ldl(c.r[6], (c.r[2].w[0] + 31u));
    ldr(c.r[6], (c.r[2].w[0] + 24u));
    sdl(c.r[3], (c.r[19].w[0] + 7u));
    sdr(c.r[3], (c.r[19].w[0]));
    sdl(c.r[4], (c.r[19].w[0] + 15u));
    sdr(c.r[4], (c.r[19].w[0] + 8u));
    sdl(c.r[5], (c.r[19].w[0] + 23u));
    sdr(c.r[5], (c.r[19].w[0] + 16u));
    sdl(c.r[6], (c.r[19].w[0] + 31u));
    sdr(c.r[6], (c.r[19].w[0] + 24u));
    lwl(c.r[3], (c.r[2].w[0] + 35u));
    lwr(c.r[3], (c.r[2].w[0] + 32u));
    swl(c.r[3], (c.r[19].w[0] + 35u));
    swr(c.r[3], (c.r[19].w[0] + 32u));
    set32(c.r[3], ld32((c.r[20].w[0] - 9264u)));
    c.budget -= 24;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002284C8; } }
    set32(c.r[5], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228498u); set32(c.r[4], c.r[4].w[0] + 28856u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00228498u) [[unlikely]] return; }
L_00228498:
    set32(c.r[2], ld32((c.r[20].w[0] - 9264u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002284C8; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002284B0u); set32(c.r[4], c.r[4].w[0] + 28872u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002284B0u) [[unlikely]] return; }
L_002284B0:
    set32(c.r[2], ld32((c.r[20].w[0] - 9264u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002284C8; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002284C8u); set32(c.r[4], c.r[4].w[0] + 28888u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002284C8u) [[unlikely]] return; }
L_002284C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[30].w[0] + 22592u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[22].w[0] - 9240u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002284E0u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x002284E0u) [[unlikely]] return; }
L_002284E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002284E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00228518:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228528u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 22u, depth + 1u); else { c.pc = 0x00228218u; return; } if (c.pc != 0x00228528u) [[unlikely]] return; }
L_00228528:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00228538:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228558u); st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0009(c, 408u, depth + 1u); else { c.pc = 0x00227F40u; return; } if (c.pc != 0x00228558u) [[unlikely]] return; }
L_00228558:
    set32(c.r[4], ld32((c.r[16].w[0] - 9240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228564u);  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x00228564u) [[unlikely]] return; }
L_00228564:
    set32(c.r[3], ld32((c.r[16].w[0] - 9240u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00228598; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 9264u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_002285BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 9252u)));
    set32(c.r[4], c.r[4].w[0] + 28912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228590u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00228590u) [[unlikely]] return; }
L_00228590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00228678; } }
L_00228598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002285A8u); st32((c.r[2].w[0] - 9252u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_000A(c, 62u, depth + 1u); else { c.pc = 0x00228728u; return; } if (c.pc != 0x002285A8u) [[unlikely]] return; }
L_002285A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002285C4; } }
    set32(c.r[4], ld32((c.r[16].w[0] - 9240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002285BCu);  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x002285BCu) [[unlikely]] return; }
L_002285BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00228678; } }
L_002285C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002285CCu); c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0021EEE0u; return; } if (c.pc != 0x002285CCu) [[unlikely]] return; }
L_002285CC:
    set32(c.r[2], ld32((c.r[18].w[0] - 9220u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00228678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00228604; } }
L_002285E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002285E8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002285E8u | kUnwind; return; } goto L_002285E8; } }
L_00228604:
    set32(c.r[16], c.r[17].w[0] - 4720u);
    c.budget -= 1;
L_00228608:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1429ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022861Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 359u, depth + 1u); else { c.pc = 0x0021F688u; return; } if (c.pc != 0x0022861Cu) [[unlikely]] return; }
L_0022861C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0022866C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9264u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_00228644; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228640u); set32(c.r[4], c.r[4].w[0] + 28952u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00228640u) [[unlikely]] return; }
L_00228640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_00228644:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00228648:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228648u | kUnwind; return; } goto L_00228648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] - 4720u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228608u | kUnwind; return; } goto L_00228608; } }
L_0022866C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002285E0u | kUnwind; return; } goto L_002285E0; } }
    st32((c.r[18].w[0] - 9220u), 0u);
    c.budget -= 1;
L_00228678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00228690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002286A4u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_000A(c, 44u, depth + 1u); else { c.pc = 0x00228538u; return; } if (c.pc != 0x002286A4u) [[unlikely]] return; }
L_002286A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_002286B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00228718; } }
L_002286B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[16], c.r[2].w[0] - 9152u);
    set32(c.r[4], c.r[4].w[0] - 4720u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002286E4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x002286E4u) [[unlikely]] return; }
L_002286E4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00228700; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002286F8u); set32(c.r[4], ld32((c.r[2].w[0] - 9240u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x002286F8u) [[unlikely]] return; }
L_002286F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00228718; } }
L_00228700:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 9240u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228714u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x00228714u) [[unlikely]] return; }
L_00228714:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00228718:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00228728:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0022878C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9264u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00228754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228754u); set32(c.r[4], c.r[4].w[0] + 28976u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00228754u) [[unlikely]] return; }
L_00228754:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00228768; } }
L_00228760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228768u); set32(c.r[4], 0u + 4000u);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0021C998u; return; } if (c.pc != 0x00228768u) [[unlikely]] return; }
L_00228768:
    set32(c.r[2], ld32((c.r[17].w[0] - 9228u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228760u | kUnwind; return; } goto L_00228760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022877Cu); set32(c.r[4], c.r[16].w[0] - 4720u);  if (depth < kMaxDepth) unit_0007(c, 384u, depth + 1u); else { c.pc = 0x0021FA68u; return; } if (c.pc != 0x0022877Cu) [[unlikely]] return; }
L_0022877C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228760u | kUnwind; return; } goto L_00228760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002287B8; } }
L_0022878C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9228u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002287B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002287A8u); set32(c.r[4], c.r[4].w[0] - 4720u);  if (depth < kMaxDepth) unit_0007(c, 384u, depth + 1u); else { c.pc = 0x0021FA68u; return; } if (c.pc != 0x002287A8u) [[unlikely]] return; }
L_002287A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002287B4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002287B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002287B8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002287C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00228818; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9264u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002287F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002287F0u); set32(c.r[4], c.r[4].w[0] + 28992u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002287F0u) [[unlikely]] return; }
L_002287F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00228800; } }
L_002287F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228800u); set32(c.r[4], 0u + 4000u);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0021C998u; return; } if (c.pc != 0x00228800u) [[unlikely]] return; }
L_00228800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228808u); set32(c.r[4], c.r[16].w[0] - 2240u);  if (depth < kMaxDepth) unit_0007(c, 384u, depth + 1u); else { c.pc = 0x0021FA68u; return; } if (c.pc != 0x00228808u) [[unlikely]] return; }
L_00228808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002287F8u | kUnwind; return; } goto L_002287F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00228828; } }
L_00228818:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228824u); set32(c.r[4], c.r[4].w[0] - 2240u);  if (depth < kMaxDepth) unit_0007(c, 384u, depth + 1u); else { c.pc = 0x0021FA68u; return; } if (c.pc != 0x00228824u) [[unlikely]] return; }
L_00228824:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00228828:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00228838:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228858u); st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0009(c, 408u, depth + 1u); else { c.pc = 0x00227F40u; return; } if (c.pc != 0x00228858u) [[unlikely]] return; }
L_00228858:
    set32(c.r[4], ld32((c.r[16].w[0] - 9236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228864u);  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x00228864u) [[unlikely]] return; }
L_00228864:
    set32(c.r[3], ld32((c.r[16].w[0] - 9236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00228898; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 9264u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_002288BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 9256u)));
    set32(c.r[4], c.r[4].w[0] + 29008u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228890u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00228890u) [[unlikely]] return; }
L_00228890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00228978; } }
L_00228898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002288A8u); st32((c.r[2].w[0] - 9256u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_000A(c, 68u, depth + 1u); else { c.pc = 0x002287C8u; return; } if (c.pc != 0x002288A8u) [[unlikely]] return; }
L_002288A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002288C4; } }
    set32(c.r[4], ld32((c.r[16].w[0] - 9236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002288BCu);  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x002288BCu) [[unlikely]] return; }
L_002288BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00228978; } }
L_002288C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002288CCu); c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0021EEE0u; return; } if (c.pc != 0x002288CCu) [[unlikely]] return; }
L_002288CC:
    set32(c.r[2], ld32((c.r[18].w[0] - 9196u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_00228978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00228904; } }
L_002288E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_002288E8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002288E8u | kUnwind; return; } goto L_002288E8; } }
L_00228904:
    set32(c.r[16], c.r[17].w[0] - 2240u);
    c.budget -= 1;
L_00228908:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1427ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022891Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 359u, depth + 1u); else { c.pc = 0x0021F688u; return; } if (c.pc != 0x0022891Cu) [[unlikely]] return; }
L_0022891C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0022896C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 9264u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_00228944; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228940u); set32(c.r[4], c.r[4].w[0] + 29048u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00228940u) [[unlikely]] return; }
L_00228940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_00228944:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00228948:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228948u | kUnwind; return; } goto L_00228948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] - 2240u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228908u | kUnwind; return; } goto L_00228908; } }
L_0022896C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002288E0u | kUnwind; return; } goto L_002288E0; } }
    st32((c.r[18].w[0] - 9196u), 0u);
    c.budget -= 1;
L_00228978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00228A40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[30].d[0]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A78u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_000A(c, 68u, depth + 1u); else { c.pc = 0x002287C8u; return; } if (c.pc != 0x00228A78u) [[unlikely]] return; }
L_00228A78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00228CF8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228A8Cu); c.r[21].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0021EEE0u; return; } if (c.pc != 0x00228A8Cu) [[unlikely]] return; }
L_00228A8C:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 9244u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[21].w[0] - 9188u)));
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 9208u), c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[5].w[0] - 9204u), c.r[3].w[0]);
    st32((c.r[6].w[0] - 9220u), c.r[3].w[0]);
    set32(c.r[17], c.r[2].w[0] + 22696u);
    st32((c.r[7].w[0] - 9196u), c.r[3].w[0]);
    set32(c.r[18], c.r[16].w[0] + 22784u);
    st32((c.r[9].w[0] - 9200u), c.r[3].w[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[8].w[0] - 9224u), 0u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[21].w[0] - 9188u), c.r[4].w[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[20].w[0] - 9192u), c.r[3].w[0]);
    c.budget -= 29;
L_00228B00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1426ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 359u, depth + 1u); else { c.pc = 0x0021F688u; return; } if (c.pc != 0x00228B14u) [[unlikely]] return; }
L_00228B14:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_00228B64; }
    set32(c.r[2], ld32((c.r[23].w[0] - 9264u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[6], ld32((c.r[21].w[0] - 9188u)));  if (t) { goto L_00228B34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B34u); set32(c.r[4], c.r[22].w[0] + 29072u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00228B34u) [[unlikely]] return; }
L_00228B34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_00228B40:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228B40u | kUnwind; return; } goto L_00228B40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228B00u | kUnwind; return; } goto L_00228B00; } }
L_00228B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00228BBC; } }
    st32((c.r[16].w[0] + 22784u), c.r[19].w[0]);
    st32((c.r[20].w[0] - 9192u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228B7Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x00228B7Cu) [[unlikely]] return; }
L_00228B7C:
    set32(c.r[16], c.r[30].w[0] - 4672u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228BA8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x00228BA8u) [[unlikely]] return; }
L_00228BA8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00228BEC; } }
    st32((c.r[2].w[0] - 9244u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00228CF8; } }
L_00228BBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_00228BC8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228BC8u | kUnwind; return; } goto L_00228BC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228B00u | kUnwind; return; } goto L_00228B00; } }
L_00228BEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], 0u + 255u);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[4], ld32((c.r[4].w[0])));  if (t) { goto L_00228C74; } }
    set32(c.r[2], 0u + 254u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[6], 0u - 1u);  if (t) { goto L_00228C38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 9264u), c.r[16].w[0]);  if (t) { goto L_00228C74; } }
L_00228C38:
    set32(c.r[2], c.r[5].w[0] + 255u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 2u);  goto L_00228C74; }
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[4].w[0] + 255u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00228C78; } }
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_00228C74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 1;
L_00228C78:
    st32((c.r[3].w[0] - 9244u), 0u);
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] < 0; c.r[2].d[0] = c.r[19].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_00228CD8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00228CD8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00228CD8; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 9264u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00228CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228CA8u); set32(c.r[4], c.r[4].w[0] + 29104u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00228CA8u) [[unlikely]] return; }
L_00228CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228CB0u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00228028u; return; } if (c.pc != 0x00228CB0u) [[unlikely]] return; }
L_00228CB0:
    set32(c.r[4], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 9240u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 9236u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 9248u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 9212u), 0u);  if (t) { goto L_00228CF4; } }
L_00228CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228CE0u);  if (depth < kMaxDepth) unit_0009(c, 408u, depth + 1u); else { c.pc = 0x00227F40u; return; } if (c.pc != 0x00228CE0u) [[unlikely]] return; }
L_00228CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228CE8u);  if (depth < kMaxDepth) unit_000A(c, 18u, depth + 1u); else { c.pc = 0x002281A0u; return; } if (c.pc != 0x00228CE8u) [[unlikely]] return; }
L_00228CE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 9212u), c.r[2].w[0]);
    c.budget -= 3;
L_00228CF4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00228CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00228D28:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] - 9264u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00228D6C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D6Cu); set32(c.r[4], c.r[4].w[0] + 29120u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00228D6Cu) [[unlikely]] return; }
L_00228D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D74u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00228D74u) [[unlikely]] return; }
L_00228D74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0] - 9216u), c.r[3].w[0]);  if (t) { goto L_00228D8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D8Cu);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00228D8Cu) [[unlikely]] return; }
L_00228D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228D94u); c.r[19].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (depth < kMaxDepth) unit_0009(c, 408u, depth + 1u); else { c.pc = 0x00227F40u; return; } if (c.pc != 0x00228D94u) [[unlikely]] return; }
L_00228D94:
    set32(c.r[4], ld32((c.r[19].w[0] - 9236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DA0u);  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x00228DA0u) [[unlikely]] return; }
L_00228DA0:
    set32(c.r[3], ld32((c.r[19].w[0] - 9236u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 6u);  if (t) { goto L_00228F14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DB4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 68u, depth + 1u); else { c.pc = 0x002287C8u; return; } if (c.pc != 0x00228DB4u) [[unlikely]] return; }
L_00228DB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00228ECC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228DC4u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0021EEE0u; return; } if (c.pc != 0x00228DC4u) [[unlikely]] return; }
L_00228DC4:
    set32(c.r[2], ld32((c.r[17].w[0] - 9200u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00228E7C; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00228E04; } }
    c.budget -= 1;
L_00228DE0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00228DE8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228DE8u | kUnwind; return; } goto L_00228DE8; } }
L_00228E04:
    set32(c.r[16], c.r[21].w[0] + 22736u);
    c.budget -= 1;
L_00228E08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1434ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 359u, depth + 1u); else { c.pc = 0x0021F688u; return; } if (c.pc != 0x00228E1Cu) [[unlikely]] return; }
L_00228E1C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_00228E6C; }
    set32(c.r[2], ld32((c.r[22].w[0] - 9264u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_00228E40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E3Cu); set32(c.r[4], c.r[4].w[0] + 29144u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00228E3Cu) [[unlikely]] return; }
L_00228E3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_00228E40:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00228E48:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228E48u | kUnwind; return; } goto L_00228E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + 22736u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228E08u | kUnwind; return; } goto L_00228E08; } }
L_00228E6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228DE0u | kUnwind; return; } goto L_00228DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 9200u), 0u);  if (t) { goto L_00228E84; } }
L_00228E7C:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 2;
L_00228E84:
    set32(c.r[16], c.r[20].w[0] + 22800u);
    st32((c.r[20].w[0] + 22800u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228E98u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x00228E98u) [[unlikely]] return; }
L_00228E98:
    set32(c.r[17], c.r[23].w[0] - 4672u);
    set32(c.r[4], c.r[21].w[0] + 22736u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228EC4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x00228EC4u) [[unlikely]] return; }
L_00228EC4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0] - 9264u)));  goto L_00228EEC; }
L_00228ECC:
    set32(c.r[4], ld32((c.r[19].w[0] - 9236u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228ED8u);  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x00228ED8u) [[unlikely]] return; }
L_00228ED8:
    c.r[4].d[0] = c.r[18].d[0] ^ 8ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_00228F14; } }
L_00228EEC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00228EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228EFCu); set32(c.r[4], c.r[4].w[0] + 29176u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00228EFCu) [[unlikely]] return; }
L_00228EFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[19].w[0] - 9236u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F10u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x00228F10u) [[unlikely]] return; }
L_00228F10:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00228F14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00228F40:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] - 9264u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_00228F80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F80u); set32(c.r[4], c.r[4].w[0] + 29200u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00228F80u) [[unlikely]] return; }
L_00228F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F88u); c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (depth < kMaxDepth) unit_0009(c, 408u, depth + 1u); else { c.pc = 0x00227F40u; return; } if (c.pc != 0x00228F88u) [[unlikely]] return; }
L_00228F88:
    set32(c.r[4], ld32((c.r[20].w[0] - 9232u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228F94u);  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x00228F94u) [[unlikely]] return; }
L_00228F94:
    set32(c.r[3], ld32((c.r[20].w[0] - 9232u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] ^ 8ull;  if (t) { goto L_002290E4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00228FACu); c.r[19].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0021EEE0u; return; } if (c.pc != 0x00228FACu) [[unlikely]] return; }
L_00228FAC:
    set32(c.r[2], ld32((c.r[19].w[0] - 9200u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00229064; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00228FF0; } }
L_00228FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + 1u);  if (t) { goto L_002290F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_00228FD0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228FD0u | kUnwind; return; } goto L_00228FD0; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00228FF0:
    set32(c.r[16], c.r[21].w[0] + 22736u);
    c.budget -= 1;
L_00228FF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1436ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229008u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 359u, depth + 1u); else { c.pc = 0x0021F688u; return; } if (c.pc != 0x00229008u) [[unlikely]] return; }
L_00229008:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_00229054; }
    set32(c.r[2], ld32((c.r[22].w[0] - 9264u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_0022902C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229028u); set32(c.r[4], c.r[4].w[0] + 29144u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00229028u) [[unlikely]] return; }
L_00229028:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_0022902C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00229030:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229030u | kUnwind; return; } goto L_00229030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[21].w[0] + 22736u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228FF4u | kUnwind; return; } goto L_00228FF4; } }
L_00229054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 17ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00228FC0u | kUnwind; return; } goto L_00228FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] - 9200u), 0u);  if (t) { goto L_00229068; } }
L_00229064:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 1;
L_00229068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229070u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00229070u) [[unlikely]] return; }
L_00229070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] - 9216u), 0u);  if (t) { goto L_00229084; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229084u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00229084u) [[unlikely]] return; }
L_00229084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[16], c.r[2].w[0] + 22800u);
    st32((c.r[2].w[0] + 22800u), c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022909Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x0022909Cu) [[unlikely]] return; }
L_0022909C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[21].w[0] + 22736u);
    set32(c.r[17], c.r[2].w[0] - 2496u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002290CCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x002290CCu) [[unlikely]] return; }
L_002290CC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0] - 9264u)));  goto L_00229110; }
    set32(c.r[4], ld32((c.r[20].w[0] - 9232u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002290E0u);  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x002290E0u) [[unlikely]] return; }
L_002290E0:
    c.r[4].d[0] = c.r[18].d[0] ^ 8ull;
    c.budget -= 1;
L_002290E4:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];  if (t) { goto L_00229138; } }
L_002290F4:
    set32(c.r[4], ld32((c.r[20].w[0] - 9232u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229100u);  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x00229100u) [[unlikely]] return; }
L_00229100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229108u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 101u, depth + 1u); else { c.pc = 0x00228D28u; return; } if (c.pc != 0x00229108u) [[unlikely]] return; }
L_00229108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0022913C; } }
L_00229110:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00229120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229120u); set32(c.r[4], c.r[4].w[0] + 29176u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00229120u) [[unlikely]] return; }
L_00229120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[20].w[0] - 9232u)));
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229134u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x00229134u) [[unlikely]] return; }
L_00229134:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00229138:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0022913C:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00229160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229174u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_000A(c, 74u, depth + 1u); else { c.pc = 0x00228838u; return; } if (c.pc != 0x00229174u) [[unlikely]] return; }
L_00229174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00229184; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002291E8; } }
L_00229184:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[16], c.r[2].w[0] - 4672u);
    set32(c.r[4], c.r[4].w[0] - 2240u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002291B4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x002291B4u) [[unlikely]] return; }
L_002291B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_002291D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002291C8u); set32(c.r[4], ld32((c.r[2].w[0] - 9236u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x002291C8u) [[unlikely]] return; }
L_002291C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002291E8; } }
L_002291D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 9236u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002291E4u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x002291E4u) [[unlikely]] return; }
L_002291E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002291E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002291F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229208u);  if (depth < kMaxDepth) unit_000A(c, 140u, depth + 1u); else { c.pc = 0x00229160u; return; } if (c.pc != 0x00229208u) [[unlikely]] return; }
L_00229208:
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00229220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[18], c.r[17].w[0] - 3584u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229248u); set32(c.r[4], 0u + 34u);  if (depth < kMaxDepth) unit_000A(c, 74u, depth + 1u); else { c.pc = 0x00228838u; return; } if (c.pc != 0x00229248u) [[unlikely]] return; }
L_00229248:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[17].w[0] - 3584u), c.r[16].w[0]);  goto L_00229258; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002292D8; } }
L_00229258:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229264u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x00229264u) [[unlikely]] return; }
L_00229264:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[8], ld32((c.r[4].w[0] - 2196u)));
    set32(c.r[16], c.r[2].w[0] - 4672u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[10], ld32((c.r[6].w[0] - 2192u)));
    set32(c.r[5], ld32((c.r[3].w[0] - 2200u)));
    set32(c.r[4], c.r[4].w[0] - 2240u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292A4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x002292A4u) [[unlikely]] return; }
L_002292A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_002292C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292B8u); set32(c.r[4], ld32((c.r[2].w[0] - 9236u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x002292B8u) [[unlikely]] return; }
L_002292B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002292D8; } }
L_002292C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 9236u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002292D4u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x002292D4u) [[unlikely]] return; }
L_002292D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002292D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002292F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229304u); set32(c.r[4], c.r[4].w[0] + 29224u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00229304u) [[unlikely]] return; }
L_00229304:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00229318:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229334u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_000A(c, 74u, depth + 1u); else { c.pc = 0x00228838u; return; } if (c.pc != 0x00229334u) [[unlikely]] return; }
L_00229334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00229344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002293C0; } }
L_00229344:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[16], c.r[2].w[0] - 4672u);
    set32(c.r[4], c.r[4].w[0] - 2240u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229374u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x00229374u) [[unlikely]] return; }
L_00229374:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00229390; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229388u); set32(c.r[4], ld32((c.r[2].w[0] - 9236u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x00229388u) [[unlikely]] return; }
L_00229388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002293C0; } }
L_00229390:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    ldl(c.r[4], (c.r[2].w[0] + 7u));
    ldr(c.r[4], (c.r[2].w[0]));
    sdl(c.r[4], (c.r[17].w[0] + 7u));
    c.r[3].d[0] = c.r[16].d[0] | c.r[3].d[0];
    sdr(c.r[4], (c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[5].w[0] - 9236u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002293BCu); set32(c.r[16], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x002293BCu) [[unlikely]] return; }
L_002293BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002293C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002293D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] - 2184u), 0u);
    set32(c.r[8], c.r[8].w[0] + 22808u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002293F8u); set32(c.r[7], 0u + 5u);  if (depth < kMaxDepth) unit_000A(c, 179u, depth + 1u); else { c.pc = 0x00229750u; return; } if (c.pc != 0x002293F8u) [[unlikely]] return; }
L_002293F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00229408:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 1u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 2184u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229430u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 179u, depth + 1u); else { c.pc = 0x00229750u; return; } if (c.pc != 0x00229430u) [[unlikely]] return; }
L_00229430:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00229440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] + 22808u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229460u); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_000A(c, 179u, depth + 1u); else { c.pc = 0x00229750u; return; } if (c.pc != 0x00229460u) [[unlikely]] return; }
L_00229460:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00229470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] + 22808u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229490u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_000A(c, 179u, depth + 1u); else { c.pc = 0x00229750u; return; } if (c.pc != 0x00229490u) [[unlikely]] return; }
L_00229490:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002294A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] - 2184u), 0u);
    set32(c.r[8], c.r[8].w[0] + 22808u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002294CCu); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_000A(c, 179u, depth + 1u); else { c.pc = 0x00229750u; return; } if (c.pc != 0x002294CCu) [[unlikely]] return; }
L_002294CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002294D8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 128u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[22].w[0] - 9264u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_00229530; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229530u); set32(c.r[4], c.r[4].w[0] + 29264u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00229530u) [[unlikely]] return; }
L_00229530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 2184u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_00229548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00229630; } }
L_00229548:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229558u); set32(c.r[5], c.r[18].w[0] << 11);  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x00229558u) [[unlikely]] return; }
L_00229558:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00229604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[19].w[0] << 11);  if (t) { goto L_0022957C; } }
L_00229568:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[6], c.r[19].w[0] << 11);  if (t) { goto L_0022957C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], ld32((c.r[22].w[0] - 9264u)));  if (t) { goto L_002295EC; } }
    set32(c.r[6], c.r[19].w[0] << 11);
    c.budget -= 1;
L_0022957C:
    set32(c.r[5], c.r[18].w[0] - c.r[19].w[0]);
    set32(c.r[6], c.r[20].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229594u); set32(c.r[8], c.r[21].w[0] + 22808u);  if (depth < kMaxDepth) unit_000A(c, 179u, depth + 1u); else { c.pc = 0x00229750u; return; } if (c.pc != 0x00229594u) [[unlikely]] return; }
L_00229594:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[16], c.r[2].w[0] >> 16);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + c.r[17].w[0]);  if (t) { goto L_002295D4; } }
    set32(c.r[2], ld32((c.r[22].w[0] - 9264u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[23].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002295E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29312u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295CCu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002295CCu) [[unlikely]] return; }
L_002295CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002295E4; } }
L_002295D4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002295E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295E4u); set32(c.r[4], 0u + 600u);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0021C998u; return; } if (c.pc != 0x002295E4u) [[unlikely]] return; }
L_002295E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[18].d[0]; set32(c.r[2], ld32((c.r[22].w[0] - 9264u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229568u | kUnwind; return; } goto L_00229568; } }
L_002295EC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_002295FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002295FCu); set32(c.r[4], c.r[4].w[0] + 29384u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002295FCu) [[unlikely]] return; }
L_002295FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[23].w[0]);  if (t) { goto L_0022962C; } }
L_00229604:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 22808u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229620u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_000A(c, 179u, depth + 1u); else { c.pc = 0x00229750u; return; } if (c.pc != 0x00229620u) [[unlikely]] return; }
L_00229620:
    set32(c.r[16], c.r[2].w[0] >> 16);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[30].w[0]), c.r[16].w[0]);
    c.budget -= 3;
L_0022962C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00229630:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00229750:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[17], c.r[23].w[0] - 9024u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022979Cu); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_000A(c, 44u, depth + 1u); else { c.pc = 0x00228538u; return; } if (c.pc != 0x0022979Cu) [[unlikely]] return; }
L_0022979C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_002297AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022988C; } }
L_002297AC:
    set32(c.r[4], ld32((c.r[22].w[0] - 9264u)));
    c.budget -= 3;
    if (c.r[4].sd[0] <= 0) { st32((c.r[23].w[0] - 9024u), c.r[21].w[0]);  goto L_002297CC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002297C4u); set32(c.r[4], c.r[4].w[0] + 29488u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002297C4u) [[unlikely]] return; }
L_002297C4:
    set32(c.r[4], ld32((c.r[22].w[0] - 9264u)));
    st32((c.r[23].w[0] - 9024u), c.r[21].w[0]);
    c.budget -= 2;
L_002297CC:
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 12u), c.r[20].w[0]);  if (t) { goto L_002297F4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[17].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_002297F4:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00229804; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229804u); set32(c.r[4], c.r[4].w[0] + 29512u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00229804u) [[unlikely]] return; }
L_00229804:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229810u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x00229810u) [[unlikely]] return; }
L_00229810:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[16], c.r[2].w[0] - 9152u);
    set32(c.r[4], c.r[4].w[0] - 4720u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 9u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 20u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229844u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x00229844u) [[unlikely]] return; }
L_00229844:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[22].w[0] - 9264u)));  goto L_00229860; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229858u); set32(c.r[4], ld32((c.r[2].w[0] - 9240u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x00229858u) [[unlikely]] return; }
L_00229858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0022988C; } }
L_00229860:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00229870; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229870u); set32(c.r[4], c.r[4].w[0] + 29536u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00229870u) [[unlikely]] return; }
L_00229870:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 9240u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229888u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x00229888u) [[unlikely]] return; }
L_00229888:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022988C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002298B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], c.r[16].w[0] + 22976u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002298E0u); c.r[17].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0021EEE0u; return; } if (c.pc != 0x002298E0u) [[unlikely]] return; }
L_002298E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[16].w[0] + 22976u);
    c.r[5].d[0] = c.r[5].d[0] | 1793ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002298F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 359u, depth + 1u); else { c.pc = 0x0021F688u; return; } if (c.pc != 0x002298F4u) [[unlikely]] return; }
L_002298F4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], 0u + 10000u);  if (t) { goto L_0022990C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229904u); set32(c.r[4], c.r[17].w[0] + 29552u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00229904u) [[unlikely]] return; }
L_00229904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00229950; } }
L_0022990C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00229910:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229910u | kUnwind; return; } goto L_00229910; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002298E0u | kUnwind; return; } goto L_002298E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 2176u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022994Cu); st32((c.r[3].w[0] - 2172u), 0u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0022994Cu) [[unlikely]] return; }
L_0022994C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00229950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00229968:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_002299B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + 22848u);
    st32((c.r[3].w[0] + 22848u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[8].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002299A8u); st32((c.r[2].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x002299A8u) [[unlikely]] return; }
L_002299A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002299BC; } }
L_002299B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_002299D8; } }
L_002299BC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002299D8; } }
    c.budget -= 1;
L_002299C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002299D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0021BCC0u; return; } if (c.pc != 0x002299D0u) [[unlikely]] return; }
L_002299D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002299C8u | kUnwind; return; } goto L_002299C8; } }
L_002299D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00229A10:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[3], c.r[29].w[0] + 208u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    set32(c.r[2], c.r[16].w[0] + 22912u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 200u), c.r[5].d[0]);
    c.r[12].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 208u), c.r[6].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[6], c.r[2].w[0] + 4u);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 216u), c.r[7].d[0]);
    set32(c.r[5], 0u + 5u);
    st64((c.r[29].w[0] + 224u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 232u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 240u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 248u), c.r[11].d[0]);
    st32((c.r[16].w[0] + 22912u), c.r[2].w[0]);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[3].w[0] - 8u)));
    c.budget -= 26;
L_00229A78:
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], ld32((c.r[3].w[0] - 8u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229A78u | kUnwind; return; } goto L_00229A78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_00229AA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[11], 0u + 1u);
    set32(c.r[18], ld32((c.r[2].w[0] - 2176u)));
    c.budget -= 3;
L_00229AA8:
    c.r[2].d[0] = 0ull | 33120ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00229B14; } }
    set32(c.r[3], c.r[12].w[0] + 22912u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 12u)));  if (t) { goto L_00229AEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[20], ld32((c.r[2].w[0] - 2152u)));
    st32((c.r[2].w[0] - 2152u), c.r[3].w[0]);
    st32((c.r[4].w[0] - 2140u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[28].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 2128u), c.r[3].w[0]);  if (t) { goto L_00229B4C; } }
L_00229AEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[20], ld32((c.r[2].w[0] - 2148u)));
    st32((c.r[2].w[0] - 2148u), c.r[3].w[0]);
    st32((c.r[4].w[0] - 2136u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[28].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 2124u), c.r[3].w[0]);  if (t) { goto L_00229B4C; } }
L_00229B14:
    c.r[2].d[0] = 0ull | 33136ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull | 33072ull;  if (t) { goto L_00229B50; } }
    set32(c.r[3], c.r[12].w[0] + 22912u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[20], ld32((c.r[4].w[0] - 2144u)));
    st32((c.r[4].w[0] - 2144u), c.r[2].w[0]);
    st32((c.r[5].w[0] - 2132u), c.r[6].w[0]);
    c.r[3].d[0] = c.r[28].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 2120u), c.r[3].w[0]);
    c.budget -= 11;
L_00229B4C:
    c.r[2].d[0] = 0ull | 33072ull;
    c.budget -= 1;
L_00229B50:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 16u), 0u);  if (t) { goto L_00229B6C; } }
    c.r[2].d[0] = 0ull | 33184ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 33200ull;  if (t) { goto L_00229B6C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull | 33088ull;  if (t) { goto L_00229BAC; } }
L_00229B6C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00229B80; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 2172u)));
    c.r[19].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_00229B80:
    set32(c.r[9], c.r[12].w[0] + 22912u);
    set32(c.r[2], ld32((c.r[12].w[0] + 22912u)));
    set32(c.r[5], ld32((c.r[9].w[0] + 4u)));
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[9].w[0] + 8u)));
    set32(c.r[4], c.r[13].w[0] + 22976u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] | c.r[5].d[0];
    set32(c.r[8], 0u + 64u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 64u);  if (t) { goto L_00229D3C; } }
L_00229BAC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[2].d[0] = 0ull | 33216ull;  if (t) { goto L_00229C10; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00229BC8; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 2172u)));
    c.r[19].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_00229BC8:
    set32(c.r[7], c.r[12].w[0] + 22912u);
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[4], c.r[13].w[0] + 22976u);
    set32(c.r[5], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[8], 0u + 64u);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[5].d[0] | 33088ull;
    set32(c.r[10], 0u + 64u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229BF8u); c.r[11].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x00229BF8u) [[unlikely]] return; }
L_00229BF8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].d[0] = 0ull | 33120ull;  if (t) { goto L_00229D60; } }
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 33120ull;  if (t) { goto L_00229D60; } }
L_00229C10:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 33232ull;  if (t) { goto L_00229C20; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00229CB4; } }
L_00229C20:
    set32(c.r[16], c.r[12].w[0] + 22912u);
    c.r[3].d[0] = 0ull | 33232ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00229C40; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00229C40:
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[10], ld32((c.r[16].w[0] + 16u)));  if (t) { goto L_00229C54; } }
    set32(c.r[9], c.r[29].w[0] + 16u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 2;
L_00229C54:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00229C68; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 2172u)));
    c.r[19].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_00229C68:
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[13].w[0] + 22976u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229C90u); c.r[11].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x00229C90u) [[unlikely]] return; }
L_00229C90:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  goto L_00229CA4; }
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
L_00229CA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull | 33120ull;  goto L_00229D60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00229D58; } }
L_00229CB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 28672ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(241ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00229D04; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00229CE0; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 2172u)));
    c.r[19].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_00229CE0:
    set32(c.r[2], c.r[12].w[0] + 22912u);
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], c.r[13].w[0] + 22976u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00229D38; } }
L_00229D04:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_00229D18; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 2172u)));
    c.r[19].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_00229D18:
    set32(c.r[2], c.r[12].w[0] + 22912u);
    c.r[6].d[0] = c.r[11].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[13].w[0] + 22976u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 64u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 8;
L_00229D38:
    set32(c.r[10], 0u + 16u);
    c.budget -= 1;
L_00229D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229D44u); c.r[11].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x00229D44u) [[unlikely]] return; }
L_00229D44:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 22912u)));  if (t) { goto L_00229D58; } }
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 22912u)));
    c.budget -= 3;
L_00229D58:
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull | 33120ull;
    c.budget -= 2;
L_00229D60:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull | 33136ull;  if (t) { goto L_00229D70; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_00229D78; } }
L_00229D70:
    st32((c.r[29].w[0] + 16u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 2;
L_00229D78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00229D98:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[20].w[0] - 2092u)));
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 48u), c.r[16].d[0]);  if (t) { goto L_00229E3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 29592u);
    st32((c.r[29].w[0] + 24u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229DECu); set32(c.r[18], 0u - 1u);  if (depth < kMaxDepth) unit_0006(c, 198u, depth + 1u); else { c.pc = 0x0021B920u; return; } if (c.pc != 0x00229DECu) [[unlikely]] return; }
L_00229DEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; st32((c.r[20].w[0] - 2092u), c.r[2].w[0]);  if (t) { goto L_00229DFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 101u);  if (t) { goto L_00229F9C; } }
L_00229DFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 29608u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229E18u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0006(c, 198u, depth + 1u); else { c.pc = 0x0021B920u; return; } if (c.pc != 0x00229E18u) [[unlikely]] return; }
L_00229E18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[18].d[0]; st32((c.r[2].w[0] - 2088u), c.r[16].w[0]);  if (t) { goto L_00229E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229E30u); set32(c.r[4], ld32((c.r[20].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x00229E30u) [[unlikely]] return; }
L_00229E30:
    st32((c.r[20].w[0] - 2092u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 101u);  if (t) { goto L_00229F9C; } }
L_00229E3C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229E4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 261u, depth + 1u); else { c.pc = 0x0022A7E8u; return; } if (c.pc != 0x00229E4Cu) [[unlikely]] return; }
L_00229E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229E54u); set32(c.r[4], ld32((c.r[20].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 206u, depth + 1u); else { c.pc = 0x0021B960u; return; } if (c.pc != 0x00229E54u) [[unlikely]] return; }
L_00229E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229E5Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0021EEE0u; return; } if (c.pc != 0x00229E5Cu) [[unlikely]] return; }
L_00229E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00229E9C; } }
    c.budget -= 1;
L_00229E68:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 2;
L_00229E70:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const std::uint32_t n = c.r[3].w[0]; if (n > 1u && c.budget >= 7) { const std::uint32_t q = static_cast<std::uint32_t>(c.budget) / 7u, s = n - 1u < q ? n - 1u : q; set32(c.r[3], n - s); c.budget -= static_cast<std::int32_t>(s * 7u); } }
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229E70u | kUnwind; return; } goto L_00229E70; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00229F88; } }
L_00229E9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], c.r[16].w[0] + 23040u);
    c.r[5].d[0] = c.r[5].d[0] | 1024ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229EB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 359u, depth + 1u); else { c.pc = 0x0021F688u; return; } if (c.pc != 0x00229EB0u) [[unlikely]] return; }
L_00229EB0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[18], c.r[16].w[0] + 23040u);  if (t) { goto L_00229EE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229EC4u); set32(c.r[4], c.r[4].w[0] + 29632u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00229EC4u) [[unlikely]] return; }
L_00229EC4:
    c.budget -= 1;
L_00229EC8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229EC8u | kUnwind; return; } goto L_00229EC8; } }
L_00229EE4:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00229E68u | kUnwind; return; } goto L_00229E68; } }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[21].w[0] + 28608u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 23168u);
    st32((c.r[29].w[0]), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 254u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 48u);
    set32(c.r[10], 0u + 12u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F24u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x00229F24u) [[unlikely]] return; }
L_00229F24:
    set32(c.r[4], ld32((c.r[20].w[0] - 2092u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F30u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x00229F30u) [[unlikely]] return; }
L_00229F30:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_00229F44; }
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_00229F9C; } }
L_00229F44:
    c.r[2].d[0] = c.r[2].sd[0] < 522ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00229F64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F58u); set32(c.r[4], c.r[4].w[0] + 29656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00229F58u) [[unlikely]] return; }
L_00229F58:
    st32((c.r[19].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 120u);  if (t) { goto L_00229F9C; } }
L_00229F64:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 526ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_00229F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F7Cu); set32(c.r[4], c.r[4].w[0] + 29696u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00229F7Cu) [[unlikely]] return; }
L_00229F7C:
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 121u);  if (t) { goto L_00229F9C; } }
L_00229F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229F90u); set32(c.r[4], c.r[4].w[0] + 29632u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00229F90u) [[unlikely]] return; }
L_00229F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_00229F9C; } }
L_00229F98:
    set32(c.r[2], ld32((c.r[21].w[0] + 28608u)));
    c.budget -= 1;
L_00229F9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00229FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 2092u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0022A004; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229FE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 261u, depth + 1u); else { c.pc = 0x0022A7E8u; return; } if (c.pc != 0x00229FE8u) [[unlikely]] return; }
L_00229FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00229FF0u); set32(c.r[4], ld32((c.r[16].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x00229FF0u) [[unlikely]] return; }
L_00229FF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[3].w[0] - 2088u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A004u); st32((c.r[16].w[0] - 2092u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x0022A004u) [[unlikely]] return; }
L_0022A004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022A018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] - 2088u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B950u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 204u, depth); }
L_0022A0E8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[18], c.r[3].w[0] + 23040u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022A11C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022A18C; } }
L_0022A11C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A128u); set32(c.r[4], ld32((c.r[16].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022A128u) [[unlikely]] return; }
L_0022A128:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022A138; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022A18C; } }
L_0022A138:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[7].w[0] + 23168u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[7].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[5], 0u + 21u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 48u);
    set32(c.r[9], c.r[19].w[0] + 28608u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A168u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022A168u) [[unlikely]] return; }
L_0022A168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022A180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A178u); set32(c.r[4], ld32((c.r[16].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022A178u) [[unlikely]] return; }
L_0022A178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022A18C; } }
L_0022A180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A188u); set32(c.r[4], ld32((c.r[16].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022A188u) [[unlikely]] return; }
L_0022A188:
    set32(c.r[2], ld32((c.r[19].w[0] + 28608u)));
    c.budget -= 1;
L_0022A18C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0022A1A8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    set32(c.r[22], c.r[2].w[0] + 23040u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0022A1F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022A2A8; } }
L_0022A1F4:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A200u); set32(c.r[4], ld32((c.r[18].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022A200u) [[unlikely]] return; }
L_0022A200:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022A2A8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0022A21C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022A22C; } }
L_0022A21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A224u); set32(c.r[4], ld32((c.r[18].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022A224u) [[unlikely]] return; }
L_0022A224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0022A2A8; } }
L_0022A22C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 23236u);
    set32(c.r[6], 0u + 1023u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A240u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 72u, depth + 1u); else { c.pc = 0x00235488u; return; } if (c.pc != 0x0022A240u) [[unlikely]] return; }
L_0022A240:
    set32(c.r[3], c.r[16].w[0] - 20u);
    st32((c.r[16].w[0] - 20u), c.r[20].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    st32((c.r[3].w[0] + 8u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[3].w[0] + 4u), c.r[21].w[0]);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[3].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 24552u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A284u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022A284u) [[unlikely]] return; }
L_0022A284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0022A29C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A294u); set32(c.r[4], ld32((c.r[18].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022A294u) [[unlikely]] return; }
L_0022A294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022A2A8; } }
L_0022A29C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022A2A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0022A2D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A2E0u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_000A(c, 230u, depth + 1u); else { c.pc = 0x0022A1A8u; return; } if (c.pc != 0x0022A2E0u) [[unlikely]] return; }
L_0022A2E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0022A2F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 11u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.budget -= 3;
L_0022A2F8:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0022A308:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[17], c.r[3].w[0] + 23040u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022A338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022A3AC; } }
L_0022A338:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A344u); set32(c.r[4], ld32((c.r[18].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022A344u) [[unlikely]] return; }
L_0022A344:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022A354; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022A3AC; } }
L_0022A354:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    st32((c.r[7].w[0] + 23168u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 23168u);
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 24552u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A388u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022A388u) [[unlikely]] return; }
L_0022A388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0022A3A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A398u); set32(c.r[4], ld32((c.r[18].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022A398u) [[unlikely]] return; }
L_0022A398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022A3AC; } }
L_0022A3A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022A3AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022A3C8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[19], c.r[2].w[0] + 23040u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022A408; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022A488; } }
L_0022A408:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A414u); set32(c.r[4], ld32((c.r[20].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022A414u) [[unlikely]] return; }
L_0022A414:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022A424; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022A488; } }
L_0022A424:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[3].w[0] + 23168u);
    st32((c.r[3].w[0] + 23168u), c.r[16].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 24552u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A464u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022A464u) [[unlikely]] return; }
L_0022A464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0022A47C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A474u); set32(c.r[4], ld32((c.r[20].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022A474u) [[unlikely]] return; }
L_0022A474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022A488; } }
L_0022A47C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022A488:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022A4A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0022A500; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[7].d[0] = c.r[6].d[0] | c.r[3].d[0];  if (t) { goto L_0022A500; } }
    set32(c.r[8], c.r[4].w[0] + 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 2;
L_0022A4D0:
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A4D0u | kUnwind; return; } goto L_0022A4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0022A508; } }
L_0022A500:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 2;
L_0022A508:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0022A550; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[7].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_0022A550; } }
    set32(c.r[8], c.r[4].w[0] + 80u);
    c.budget -= 2;
L_0022A528:
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A528u | kUnwind; return; } goto L_0022A528; } }
L_0022A550:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[9].w[0] - 2088u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B950u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 204u, depth); }
L_0022A558:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[21], c.r[2].w[0] + 23040u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0022A5A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022A644; } }
L_0022A5A0:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5ACu); set32(c.r[4], ld32((c.r[22].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022A5ACu) [[unlikely]] return; }
L_0022A5AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022A5BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022A644; } }
L_0022A5BC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[17], c.r[2].w[0] + 23168u);
    set32(c.r[16], c.r[16].w[0] + 24320u);
    st32((c.r[2].w[0] + 23168u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[18].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5E4u); st32((c.r[17].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x0022A5E4u) [[unlikely]] return; }
L_0022A5E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A5F0u); set32(c.r[5], 0u + 192u);  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x0022A5F0u) [[unlikely]] return; }
L_0022A5F0:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 23384u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A620u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022A620u) [[unlikely]] return; }
L_0022A620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_0022A638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A630u); set32(c.r[4], ld32((c.r[22].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022A630u) [[unlikely]] return; }
L_0022A630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022A644; } }
L_0022A638:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022A644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0022A670:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], c.r[20].w[0] + 23040u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0022A6B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022A7C4; } }
L_0022A6B4:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A6C0u); set32(c.r[4], ld32((c.r[21].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022A6C0u) [[unlikely]] return; }
L_0022A6C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022A6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022A7C4; } }
L_0022A6D0:
    c.r[2].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    set32(c.r[6], c.r[19].w[0] + 23168u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 23168u), c.r[18].w[0]);  if (t) { goto L_0022A6F0; } }
    st32((c.r[6].w[0] + 20u), c.r[16].w[0]);
    st32((c.r[6].w[0] + 24u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), 0u);  if (t) { goto L_0022A71C; } }
L_0022A6F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] | 65520ull;
    set32(c.r[4], c.r[17].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 11;
L_0022A71C:
    set32(c.r[2], c.r[19].w[0] + 23168u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0022A768; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[7].w[0] + 23168u);
    c.budget -= 4;
L_0022A740:
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 32u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0022A740u | kUnwind; return; } goto L_0022A740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022A770; } }
L_0022A768:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.budget -= 2;
L_0022A770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A778u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0022A778u) [[unlikely]] return; }
L_0022A778:
    set32(c.r[4], c.r[20].w[0] + 23040u);
    set32(c.r[7], c.r[19].w[0] + 23168u);
    set32(c.r[9], c.r[18].w[0] + 28608u);
    set32(c.r[11], c.r[16].w[0] - 24552u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A7A0u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022A7A0u) [[unlikely]] return; }
L_0022A7A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0022A7B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A7B0u); set32(c.r[4], ld32((c.r[21].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022A7B0u) [[unlikely]] return; }
L_0022A7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022A7C4; } }
L_0022A7B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022A7C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0022A7E8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] - 2096u)));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0022A828; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0022A888; } }
L_0022A828:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A834u); set32(c.r[4], ld32((c.r[17].w[0] - 2088u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022A834u) [[unlikely]] return; }
L_0022A834:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[16].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  if (t) { goto L_0022A84C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], ld32((c.r[17].w[0] - 2088u)));  if (t) { goto L_0022A84C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A84Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 206u, depth + 1u); else { c.pc = 0x0021B960u; return; } if (c.pc != 0x0022A84Cu) [[unlikely]] return; }
L_0022A84C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_0022A85C; } }
    set32(c.r[2], ld32((c.r[19].w[0] - 2096u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0022A85C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0022A888; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[19].w[0] - 2096u), 0u);  if (t) { goto L_0022A878; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28608u)));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0022A878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A884u); set32(c.r[4], ld32((c.r[2].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022A884u) [[unlikely]] return; }
L_0022A884:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0022A888:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022A8B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 23080u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];  if (t) { goto L_0022A8CC; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0022A8CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23084u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022A8E8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_0022A8E8:
    set32(c.r[3], ld32((c.r[2].w[0] + 23088u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_0022A900; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
L_0022A900:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[2].w[0] - 2088u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B950u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 204u, depth); }
L_0022A908:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[2], c.r[22].w[0] + 23040u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0022A95C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022AA58; } }
L_0022A95C:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022A968u); set32(c.r[4], ld32((c.r[23].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022A968u) [[unlikely]] return; }
L_0022A968:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022A978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022AA58; } }
L_0022A978:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[17].w[0] + 23168u);
    set32(c.r[2], c.r[4].w[0] + 24320u);
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[3].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0022A9A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0022A9A4; } }
L_0022A9A0:
    st32((c.r[3].w[0] + 20u), 0u);
    c.budget -= 1;
L_0022A9A4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 23168u);  if (t) { goto L_0022A9B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0022A9C0; } }
L_0022A9B8:
    set32(c.r[2], c.r[17].w[0] + 23168u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 2;
L_0022A9C0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 23168u);  if (t) { goto L_0022A9D4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0022A9DC; } }
L_0022A9D4:
    set32(c.r[2], c.r[17].w[0] + 23168u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 2;
L_0022A9DC:
    set32(c.r[16], c.r[4].w[0] + 24320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[2].w[0] + 23080u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 23084u), c.r[20].w[0]);
    set32(c.r[5], 0u + 192u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA04u); st32((c.r[6].w[0] + 23088u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x0022AA04u) [[unlikely]] return; }
L_0022AA04:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    set32(c.r[4], c.r[22].w[0] + 23040u);
    set32(c.r[7], c.r[17].w[0] + 23168u);
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 22352u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA34u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022AA34u) [[unlikely]] return; }
L_0022AA34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022AA4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AA44u); set32(c.r[4], ld32((c.r[23].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022AA44u) [[unlikely]] return; }
L_0022AA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022AA58; } }
L_0022AA4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022AA58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0022AA88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 23040u);
    set32(c.r[7], c.r[7].w[0] + 23168u);
    set32(c.r[11], c.r[11].w[0] - 24552u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 53u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 48u);
    set32(c.r[9], c.r[16].w[0] + 28608u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AACCu); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022AACCu) [[unlikely]] return; }
L_0022AACC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0022AAE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AADCu); set32(c.r[4], c.r[4].w[0] + 29736u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0022AADCu) [[unlikely]] return; }
L_0022AADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022AAE8; } }
L_0022AAE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 28608u)));
    c.budget -= 1;
L_0022AAE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022AAF8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    set32(c.r[23], c.r[2].w[0] + 23040u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 36u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0022AB50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022AC18; } }
L_0022AB50:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB5Cu); set32(c.r[4], ld32((c.r[21].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022AB5Cu) [[unlikely]] return; }
L_0022AB5C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022AC18; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0022AB78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022AB88; } }
L_0022AB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AB80u); set32(c.r[4], ld32((c.r[21].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022AB80u) [[unlikely]] return; }
L_0022AB80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0022AC18; } }
L_0022AB88:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 23216u);
    st32((c.r[2].w[0] + 23216u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[16].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[6], 0u + 1023u);
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ABB0u); st32((c.r[16].w[0] + 16u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_000D(c, 72u, depth + 1u); else { c.pc = 0x00235488u; return; } if (c.pc != 0x0022ABB0u) [[unlikely]] return; }
L_0022ABB0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; st8((c.r[16].w[0] + 1043u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0022ABC4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ABC4u); set32(c.r[5], c.r[17].w[0] << 6);  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x0022ABC4u) [[unlikely]] return; }
L_0022ABC4:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 24552u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ABF4u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022ABF4u) [[unlikely]] return; }
L_0022ABF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_0022AC0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC04u); set32(c.r[4], ld32((c.r[21].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022AC04u) [[unlikely]] return; }
L_0022AC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022AC18; } }
L_0022AC0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022AC18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0022AC48:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0022ACB4; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], c.r[18].w[0] + 24512u);
    c.r[16].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0022AC7Cu) [[unlikely]] return; }
L_0022AC7C:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], 0u + 1023u);  goto L_0022AC94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AC90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0022AC90u) [[unlikely]] return; }
L_0022AC90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0022AC94:
    set32(c.r[2], c.r[18].w[0] + 24512u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022ACACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0022ACACu) [[unlikely]] return; }
L_0022ACAC:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0022ACB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[4], ld32((c.r[2].w[0] - 2088u)));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021B950u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 204u, depth); }
L_0022AE18:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[18], c.r[2].w[0] + 23040u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022AE50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022AEC8; } }
L_0022AE50:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AE5Cu); set32(c.r[4], ld32((c.r[19].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022AE5Cu) [[unlikely]] return; }
L_0022AE5C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022AE6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022AEC8; } }
L_0022AE6C:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[7].w[0] + 23168u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    st32((c.r[7].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[7].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 24552u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AEA4u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022AEA4u) [[unlikely]] return; }
L_0022AEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_0022AEBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AEB4u); set32(c.r[4], ld32((c.r[19].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022AEB4u) [[unlikely]] return; }
L_0022AEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022AEC8; } }
L_0022AEBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022AEC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0022AEE8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[21], c.r[2].w[0] + 23040u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0022AF2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022AFE0; } }
L_0022AF2C:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF38u); set32(c.r[4], ld32((c.r[18].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022AF38u) [[unlikely]] return; }
L_0022AF38:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022AFE0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0022AF54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022AF64; } }
L_0022AF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF5Cu); set32(c.r[4], ld32((c.r[18].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022AF5Cu) [[unlikely]] return; }
L_0022AF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0022AFE0; } }
L_0022AF64:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 23236u);
    set32(c.r[6], 0u + 1023u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AF78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 72u, depth + 1u); else { c.pc = 0x00235488u; return; } if (c.pc != 0x0022AF78u) [[unlikely]] return; }
L_0022AF78:
    set32(c.r[3], c.r[16].w[0] - 20u);
    st32((c.r[16].w[0] - 20u), c.r[20].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    st32((c.r[3].w[0] + 4u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[3].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 24552u);
    set32(c.r[5], 0u + 15u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AFBCu); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022AFBCu) [[unlikely]] return; }
L_0022AFBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_0022AFD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022AFCCu); set32(c.r[4], ld32((c.r[18].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022AFCCu) [[unlikely]] return; }
L_0022AFCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022AFE0; } }
L_0022AFD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022AFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0022B008:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[17], c.r[3].w[0] + 23040u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022B038; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022B0AC; } }
L_0022B038:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B044u); set32(c.r[4], ld32((c.r[18].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022B044u) [[unlikely]] return; }
L_0022B044:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022B054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022B0AC; } }
L_0022B054:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    st32((c.r[7].w[0] + 23168u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 23168u);
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 24552u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B088u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022B088u) [[unlikely]] return; }
L_0022B088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_0022B0A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B098u); set32(c.r[4], ld32((c.r[18].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022B098u) [[unlikely]] return; }
L_0022B098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022B0AC; } }
L_0022B0A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022B0AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0022B0C8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    set32(c.r[23], c.r[2].w[0] + 23040u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 36u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0022B11C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022B268; } }
L_0022B11C:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B128u); set32(c.r[4], ld32((c.r[21].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022B128u) [[unlikely]] return; }
L_0022B128:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022B268; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0022B144; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022B154; } }
L_0022B144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B14Cu); set32(c.r[4], ld32((c.r[21].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022B14Cu) [[unlikely]] return; }
L_0022B14C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0022B268; } }
L_0022B154:
    c.r[17].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[16], c.r[2].w[0] + 23216u);
    st32((c.r[2].w[0] + 23216u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] + 23104u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[9], c.r[2].w[0] + 23104u);
    ldl(c.r[6], (c.r[22].w[0] + 7u));
    ldr(c.r[6], (c.r[22].w[0]));
    ldl(c.r[7], (c.r[22].w[0] + 15u));
    ldr(c.r[7], (c.r[22].w[0] + 8u));
    ldl(c.r[8], (c.r[22].w[0] + 23u));
    ldr(c.r[8], (c.r[22].w[0] + 16u));
    sdl(c.r[6], (c.r[9].w[0] + 7u));
    sdr(c.r[6], (c.r[9].w[0]));
    sdl(c.r[7], (c.r[9].w[0] + 15u));
    sdr(c.r[7], (c.r[9].w[0] + 8u));
    sdl(c.r[8], (c.r[9].w[0] + 23u));
    sdr(c.r[8], (c.r[9].w[0] + 16u));
    ldl(c.r[6], (c.r[22].w[0] + 31u));
    ldr(c.r[6], (c.r[22].w[0] + 24u));
    ldl(c.r[7], (c.r[22].w[0] + 39u));
    ldr(c.r[7], (c.r[22].w[0] + 32u));
    ldl(c.r[8], (c.r[22].w[0] + 47u));
    ldr(c.r[8], (c.r[22].w[0] + 40u));
    sdl(c.r[6], (c.r[9].w[0] + 31u));
    sdr(c.r[6], (c.r[9].w[0] + 24u));
    sdl(c.r[7], (c.r[9].w[0] + 39u));
    sdr(c.r[7], (c.r[9].w[0] + 32u));
    sdl(c.r[8], (c.r[9].w[0] + 47u));
    sdr(c.r[8], (c.r[9].w[0] + 40u));
    ldl(c.r[6], (c.r[22].w[0] + 55u));
    ldr(c.r[6], (c.r[22].w[0] + 48u));
    ldl(c.r[7], (c.r[22].w[0] + 63u));
    ldr(c.r[7], (c.r[22].w[0] + 56u));
    sdl(c.r[6], (c.r[9].w[0] + 55u));
    sdr(c.r[6], (c.r[9].w[0] + 48u));
    sdl(c.r[7], (c.r[9].w[0] + 63u));
    sdr(c.r[7], (c.r[9].w[0] + 56u));
    set32(c.r[6], 0u + 1023u);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B208u); st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 72u, depth + 1u); else { c.pc = 0x00235488u; return; } if (c.pc != 0x0022B208u) [[unlikely]] return; }
L_0022B208:
    st8((c.r[16].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B214u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0022B214u) [[unlikely]] return; }
L_0022B214:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 24552u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B244u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022B244u) [[unlikely]] return; }
L_0022B244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_0022B25C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B254u); set32(c.r[4], ld32((c.r[21].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022B254u) [[unlikely]] return; }
L_0022B254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022B268; } }
L_0022B25C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022B268:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0022B298:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[22], c.r[2].w[0] + 23040u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0022B2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022B3CC; } }
L_0022B2E4:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B2F0u); set32(c.r[4], ld32((c.r[21].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022B2F0u) [[unlikely]] return; }
L_0022B2F0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022B3CC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0022B314; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0022B314; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022B324; } }
L_0022B314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B31Cu); set32(c.r[4], ld32((c.r[21].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022B31Cu) [[unlikely]] return; }
L_0022B31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0022B3CC; } }
L_0022B324:
    set32(c.r[3], 0u + 16u);
    set32(c.r[17], c.r[2].w[0] + 23216u);
    st32((c.r[2].w[0] + 23216u), c.r[20].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B348u); set32(c.r[6], 0u + 1023u);  if (depth < kMaxDepth) unit_000D(c, 72u, depth + 1u); else { c.pc = 0x00235488u; return; } if (c.pc != 0x0022B348u) [[unlikely]] return; }
L_0022B348:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 23136u);
    st8((c.r[17].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B364u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_000D(c, 72u, depth + 1u); else { c.pc = 0x00235488u; return; } if (c.pc != 0x0022B364u) [[unlikely]] return; }
L_0022B364:
    set32(c.r[16], c.r[16].w[0] - 32u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B378u); st8((c.r[16].w[0] + 63u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0022B378u) [[unlikely]] return; }
L_0022B378:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 24552u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B3A8u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022B3A8u) [[unlikely]] return; }
L_0022B3A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_0022B3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B3B8u); set32(c.r[4], ld32((c.r[21].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022B3B8u) [[unlikely]] return; }
L_0022B3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022B3CC; } }
L_0022B3C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022B3CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0022B3F8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[18], c.r[2].w[0] + 23040u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0022B430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022B4A8; } }
L_0022B430:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B43Cu); set32(c.r[4], ld32((c.r[19].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022B43Cu) [[unlikely]] return; }
L_0022B43C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022B44C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022B4A8; } }
L_0022B44C:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[7].w[0] + 23168u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    st32((c.r[7].w[0] + 4u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[7].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 24552u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 48u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B484u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022B484u) [[unlikely]] return; }
L_0022B484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 17u);  if (t) { goto L_0022B49C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B494u); set32(c.r[4], ld32((c.r[19].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022B494u) [[unlikely]] return; }
L_0022B494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022B4A8; } }
L_0022B49C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022B4A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0022B4C8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[20], c.r[2].w[0] + 23040u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0022B508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 100u);  if (t) { goto L_0022B5B4; } }
L_0022B508:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B514u); set32(c.r[4], ld32((c.r[17].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 208u, depth + 1u); else { c.pc = 0x0021B970u; return; } if (c.pc != 0x0022B514u) [[unlikely]] return; }
L_0022B514:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 200u);  if (t) { goto L_0022B5B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0022B530; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0022B540; } }
L_0022B530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B538u); set32(c.r[4], ld32((c.r[17].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022B538u) [[unlikely]] return; }
L_0022B538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 210u);  if (t) { goto L_0022B5B4; } }
L_0022B540:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 23216u);
    st32((c.r[2].w[0] + 23216u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B55Cu); set32(c.r[6], 0u + 1023u);  if (depth < kMaxDepth) unit_000D(c, 72u, depth + 1u); else { c.pc = 0x00235488u; return; } if (c.pc != 0x0022B55Cu) [[unlikely]] return; }
L_0022B55C:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00230000u);
    st8((c.r[16].w[0] + 1043u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 28608u);
    set32(c.r[11], c.r[11].w[0] - 24552u);
    set32(c.r[5], 0u + 18u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], 0u + 1044u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B590u); set32(c.r[10], 0u + 4u);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x0022B590u) [[unlikely]] return; }
L_0022B590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_0022B5A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B5A0u); set32(c.r[4], ld32((c.r[17].w[0] - 2092u)));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0021B940u; return; } if (c.pc != 0x0022B5A0u) [[unlikely]] return; }
L_0022B5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 91u);  if (t) { goto L_0022B5B4; } }
L_0022B5A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 2096u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0022B5B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0022B5D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[11] = c.f[12];
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 40u), c.f[22]);
    st32((c.r[29].w[0] + 32u), c.f[21]);
    set32(c.r[4], c.f[11]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st32((c.r[29].w[0] + 24u), c.f[20]);  if (t) { goto L_0022B628; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] > 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0022B9E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[29].w[0] + 40u));  if (t) { goto L_0022B9EC; } }
L_0022B628:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3EFF0000u);  if (t) { goto L_0022B650; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[11], c.f[11]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0022B9E8; } }
    c.budget -= 1;
L_0022B650:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x23000000u);  if (t) { goto L_0022B780; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0022B9E8; } }
    c.f[21] = fp::ee::mul(c.fcr31, c.f[11], c.f[11]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50733ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13152ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22316ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45199ull;
    c.f[9] = c.r[1].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53560ull;
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[8] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[10] = c.r[1].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[7]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[9]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[8]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[22]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[11], c.f[12]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[11], c.f[0]);
    c.budget -= 66;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[10], c.f[0]);  if (t) { goto L_0022B9E8; } }
L_0022B780:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0022B8B0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[10] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[11], c.f[10]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50733ull;
    c.f[1] = c.r[1].w[0];
    c.f[21] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22316ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13152ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45199ull;
    c.f[9] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53560ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[8] = c.r[1].w[0];
    c.f[12] = c.f[21];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[7]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[9]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[10]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[8]);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B86Cu); c.f[20] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 9u, depth + 1u); else { c.pc = 0x0022C330u; return; } if (c.pc != 0x0022B86Cu) [[unlikely]] return; }
L_0022B86C:
    c.f[13] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[2] = c.r[1].w[0];
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[22]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[13]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[13], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);  if (t) { goto L_0022B9E4; } }
    c.budget -= 1;
L_0022B8B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[11]);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022B8D0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 9u, depth + 1u); else { c.pc = 0x0022C330u; return; } if (c.pc != 0x0022B8D0u) [[unlikely]] return; }
L_0022B8D0:
    c.f[11] = c.f[0];
    c.f[13] = c.f[11];
    st32((c.r[29].w[0]), c.f[0]);
    set32(c.r[2], 0u - 4096u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[11] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[11], c.f[11]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[9] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50733ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13152ull;
    c.f[4] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22316ull;
    c.f[7] = c.r[1].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[21], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45199ull;
    c.f[10] = c.r[1].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[13], c.f[11]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[5] = c.r[1].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53560ull;
    c.f[6] = c.r[1].w[0];
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[9]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[7]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[8]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[10]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[12] = fp::ee::div(c.fcr31, c.f[20], c.f[22]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[13]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[11], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 69;
L_0022B9E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0022B9E8:
    c.f[22] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 1;
L_0022B9EC:
    c.f[21] = ld32((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022BA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.f[12]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 40u), c.f[22]);
    st32((c.r[29].w[0] + 32u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[16].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; st32((c.r[29].w[0] + 24u), c.f[20]);  if (t) { goto L_0022BA60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[12], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_0022BD80; } }
    c.budget -= 1;
L_0022BA60:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3EFF0000u);  if (t) { goto L_0022BA88; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[12]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0022BD84; } }
    c.budget -= 1;
L_0022BA88:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x31FF0000u);  if (t) { goto L_0022BBC0; } }
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.f[20] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);  goto L_0022BAD8; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62153ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = c.f[12];  if (t) { goto L_0022BBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0022BD84; } }
    c.budget -= 1;
L_0022BAD8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50733ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13152ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22316ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45199ull;
    c.f[8] = c.r[1].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53560ull;
    c.f[5] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[7]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[8]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[7] = fp::ee::div(c.fcr31, c.f[21], c.f[22]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[12], c.f[7]);
    c.budget -= 57;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);  if (t) { goto L_0022BD80; } }
    c.budget -= 1;
L_0022BBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BBC8u);  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0022D790u; return; } if (c.pc != 0x0022BBC8u) [[unlikely]] return; }
L_0022BBC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[10] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[7] = fp::ee::sub(c.fcr31, c.f[10], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38110000u);
    c.r[1].d[0] = c.r[1].d[0] | 61192ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A4F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32516ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBD240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4422ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D9D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50733ull;
    c.f[1] = c.r[1].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[7], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 2728ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF300000u);
    c.r[1].d[0] = c.r[1].d[0] | 13152ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40010000u);
    c.r[1].d[0] = c.r[1].d[0] | 22316ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBEA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 45199ull;
    c.f[9] = c.r[1].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0190000u);
    c.r[1].d[0] = c.r[1].d[0] | 53560ull;
    c.f[5] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43690ull;
    c.f[8] = c.r[1].w[0];
    c.f[12] = c.f[20];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[7]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[9]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[1], c.f[10]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[8]);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BCACu); c.f[21] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 9u, depth + 1u); else { c.pc = 0x0022C330u; return; } if (c.pc != 0x0022BCACu) [[unlikely]] return; }
L_0022BCAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F790000u);
    c.r[2].d[0] = c.r[2].d[0] | 39321ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[8] = c.f[0];  if (t) { goto L_0022BD00; } }
    c.f[7] = fp::ee::div(c.fcr31, c.f[21], c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[8], c.f[7]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[8], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (t) { goto L_0022BD74; } }
    c.budget -= 1;
L_0022BD00:
    set32(c.r[2], c.f[8]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 4096u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[7] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[7], c.f[7]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[6] = c.r[1].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[8], c.f[7]);
    c.f[5] = fp::ee::div(c.fcr31, c.f[21], c.f[22]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[8], c.f[8]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[7], c.f[7]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[4]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[6], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[22]);
    c.f[20] = fp::ee::sub(c.fcr31, c.f[6], c.f[0]);
    c.budget -= 29;
L_0022BD74:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] > 0; c.f[0] = c.f[20];  if (t) { goto L_0022BD80; } }
    c.f[0] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_0022BD80:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0022BD84:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[22] = ld32((c.r[29].w[0] + 40u));
    c.f[21] = ld32((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0022BDA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[1] = c.f[12];
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[6], c.f[13]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[8].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[5], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[7].d[0] = c.r[5].d[0] & c.r[2].d[0];  if (t) { goto L_0022BDE0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_000B(c, 51u, depth); }
L_0022BDE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 30));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & 2ull;
    set32(c.r[3], c.r[5].w[0] >> 31);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (t) { goto L_0022BE44; } }
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_0022BF70; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_0022BE30; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_0022BE48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_0022BF70; } }
L_0022BE30:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0022BF74; }
L_0022BE44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.budget -= 1;
L_0022BE48:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[7].w[0] - c.r[8].w[0]);  if (t) { goto L_0022BE80; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] < 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0022BF70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));  if (t) { goto L_0022BF78; } }
L_0022BE80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 23));
    c.r[2].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022BED4; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] >= 0; c.r[2].d[0] = c.r[3].sd[0] < -60ll ? 1ull : 0ull;  if (t) { goto L_0022BEB0; } }
    c.f[2] = 0u;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0022BED4; } }
L_0022BEB0:
    c.f[12] = fp::ee::div(c.fcr31, c.f[1], c.f[13]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BEC4u);  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0022D790u; return; } if (c.pc != 0x0022BEC4u) [[unlikely]] return; }
L_0022BEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0022BECCu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 51u, depth + 1u); else { c.pc = 0x0022D3E8u; return; } if (c.pc != 0x0022BECCu) [[unlikely]] return; }
L_0022BECC:
    c.f[2] = c.f[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0022BED4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0022BF08; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 2u);  goto L_0022BEF8; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.f[0] = c.f[2];  if (t) { goto L_0022BF70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BF50; } }
    c.budget -= 1;
L_0022BEF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0022BF28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0022BF50; } }
L_0022BF08:
    st32((c.r[29].w[0]), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.f[2] = c.r[3].w[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[2];  if (t) { goto L_0022BF70; } }
    c.budget -= 1;
L_0022BF28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34220000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_0022BF70; } }
    c.budget -= 1;
L_0022BF50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34220000u);
    c.r[1].d[0] = c.r[1].d[0] | 8552ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 8;
L_0022BF70:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0022BF74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 1;
L_0022BF78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0022BF80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.f[1] = c.f[12];
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[18], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | 4056ull;
    c.r[16].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 56u), c.r[31].d[0]);  if (t) { goto L_0022BFD0; } }
    st32((c.r[17].w[0]), c.f[1]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { [[clang::musttail]] return unit_000B(c, 8u, depth); } }
    c.budget -= 1;
L_0022BFD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40160000u);
    c.r[2].d[0] = c.r[2].d[0] | 52195ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x43490000u);  if (t) { [[clang::musttail]] return unit_000B(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[3], 0u - 16u);  if (t) { [[clang::musttail]] return unit_000B(c, 2u, depth); } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 3968ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[3].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.budget -= 5;
    [[clang::musttail]] return unit_000B(c, 1u, depth);
}

}

#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001B[4096] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 46, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0,
    0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0,
    0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0,
    98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0,
};

void unit_001B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0026C000;
    case 2u: goto L_0026C00C;
    case 3u: goto L_0026C014;
    case 4u: goto L_0026C02C;
    case 5u: goto L_0026C060;
    case 6u: goto L_0026C094;
    case 7u: goto L_0026C0A0;
    case 8u: goto L_0026C0A8;
    case 9u: goto L_0026C0E0;
    case 10u: goto L_0026C158;
    case 11u: goto L_0026C170;
    case 12u: goto L_0026C19C;
    case 13u: goto L_0026C1BC;
    case 14u: goto L_0026C200;
    case 15u: goto L_0026C230;
    case 16u: goto L_0026C260;
    case 17u: goto L_0026C290;
    case 18u: goto L_0026C2C4;
    case 19u: goto L_0026C2F4;
    case 20u: goto L_0026C320;
    case 21u: goto L_0026C328;
    case 22u: goto L_0026C338;
    case 23u: goto L_0026C364;
    case 24u: goto L_0026C394;
    case 25u: goto L_0026C3A0;
    case 26u: goto L_0026C3B8;
    case 27u: goto L_0026C3D4;
    case 28u: goto L_0026C408;
    case 29u: goto L_0026C43C;
    case 30u: goto L_0026C448;
    case 31u: goto L_0026C450;
    case 32u: goto L_0026C49C;
    case 33u: goto L_0026C4BC;
    case 34u: goto L_0026C4C8;
    case 35u: goto L_0026C4D8;
    case 36u: goto L_0026C4FC;
    case 37u: goto L_0026C518;
    case 38u: goto L_0026C528;
    case 39u: goto L_0026C534;
    case 40u: goto L_0026C544;
    case 41u: goto L_0026C568;
    case 42u: goto L_0026C590;
    case 43u: goto L_0026C634;
    case 44u: goto L_0026C638;
    case 45u: goto L_0026C66C;
    case 46u: goto L_0026C670;
    case 47u: goto L_0026C674;
    case 48u: goto L_0026C718;
    case 49u: goto L_0026C728;
    case 50u: goto L_0026C734;
    case 51u: goto L_0026C748;
    case 52u: goto L_0026C754;
    case 53u: goto L_0026C768;
    case 54u: goto L_0026C774;
    case 55u: goto L_0026C788;
    case 56u: goto L_0026C794;
    case 57u: goto L_0026C7A8;
    case 58u: goto L_0026C7B4;
    case 59u: goto L_0026C7C8;
    case 60u: goto L_0026C7D4;
    case 61u: goto L_0026C7E8;
    case 62u: goto L_0026C7F4;
    case 63u: goto L_0026C808;
    case 64u: goto L_0026C814;
    case 65u: goto L_0026C834;
    case 66u: goto L_0026C880;
    case 67u: goto L_0026C8B8;
    case 68u: goto L_0026C908;
    case 69u: goto L_0026C938;
    case 70u: goto L_0026C944;
    case 71u: goto L_0026C950;
    case 72u: goto L_0026C964;
    case 73u: goto L_0026C974;
    case 74u: goto L_0026C998;
    case 75u: goto L_0026C9B0;
    case 76u: goto L_0026C9CC;
    case 77u: goto L_0026CA10;
    case 78u: goto L_0026CA20;
    case 79u: goto L_0026CA38;
    case 80u: goto L_0026CA5C;
    case 81u: goto L_0026CA80;
    case 82u: goto L_0026CA88;
    case 83u: goto L_0026CB10;
    case 84u: goto L_0026CC68;
    case 85u: goto L_0026CC80;
    case 86u: goto L_0026CC94;
    case 87u: goto L_0026CCD0;
    case 88u: goto L_0026CCF8;
    case 89u: goto L_0026CD20;
    case 90u: goto L_0026CD48;
    case 91u: goto L_0026CD90;
    case 92u: goto L_0026CDC8;
    case 93u: goto L_0026CDD4;
    case 94u: goto L_0026CDE8;
    case 95u: goto L_0026CE40;
    case 96u: goto L_0026CE60;
    case 97u: goto L_0026CE78;
    case 98u: goto L_0026CE80;
    case 99u: goto L_0026CE88;
    case 100u: goto L_0026CED4;
    case 101u: goto L_0026CEE4;
    case 102u: goto L_0026CF68;
    case 103u: goto L_0026CFD0;
    case 104u: goto L_0026D080;
    case 105u: goto L_0026D0B8;
    case 106u: goto L_0026D0C4;
    case 107u: goto L_0026D0D4;
    case 108u: goto L_0026D0E0;
    case 109u: goto L_0026D0EC;
    case 110u: goto L_0026D134;
    case 111u: goto L_0026D150;
    case 112u: goto L_0026D1BC;
    case 113u: goto L_0026D1D0;
    case 114u: goto L_0026D1F0;
    case 115u: goto L_0026D1FC;
    case 116u: goto L_0026D218;
    case 117u: goto L_0026D248;
    case 118u: goto L_0026D2B4;
    case 119u: goto L_0026D2D0;
    case 120u: goto L_0026D334;
    case 121u: goto L_0026D340;
    case 122u: goto L_0026D348;
    case 123u: goto L_0026D360;
    case 124u: goto L_0026D36C;
    case 125u: goto L_0026D3A0;
    case 126u: goto L_0026D3D0;
    case 127u: goto L_0026D3E4;
    case 128u: goto L_0026D428;
    case 129u: goto L_0026D458;
    case 130u: goto L_0026D470;
    case 131u: goto L_0026D4BC;
    case 132u: goto L_0026D4C4;
    case 133u: goto L_0026D4D4;
    case 134u: goto L_0026D4FC;
    case 135u: goto L_0026D590;
    case 136u: goto L_0026D5C0;
    case 137u: goto L_0026D5D4;
    case 138u: goto L_0026D614;
    case 139u: goto L_0026D650;
    case 140u: goto L_0026D66C;
    case 141u: goto L_0026D6B8;
    case 142u: goto L_0026D6E0;
    case 143u: goto L_0026D714;
    case 144u: goto L_0026D744;
    case 145u: goto L_0026D75C;
    case 146u: goto L_0026D7A0;
    case 147u: goto L_0026D7D0;
    case 148u: goto L_0026D7E8;
    case 149u: goto L_0026D8B0;
    case 150u: goto L_0026D8C0;
    case 151u: goto L_0026D8E8;
    case 152u: goto L_0026D8F8;
    case 153u: goto L_0026D90C;
    case 154u: goto L_0026D940;
    case 155u: goto L_0026D970;
    case 156u: goto L_0026D980;
    case 157u: goto L_0026D9FC;
    case 158u: goto L_0026DA2C;
    case 159u: goto L_0026DA44;
    case 160u: goto L_0026DA84;
    case 161u: goto L_0026DAB4;
    case 162u: goto L_0026DACC;
    case 163u: goto L_0026DB14;
    case 164u: goto L_0026DB2C;
    case 165u: goto L_0026DB70;
    case 166u: goto L_0026DBA0;
    case 167u: goto L_0026DBB4;
    case 168u: goto L_0026DC0C;
    case 169u: goto L_0026DC10;
    case 170u: goto L_0026DC48;
    case 171u: goto L_0026DC68;
    case 172u: goto L_0026DC98;
    case 173u: goto L_0026DCB8;
    case 174u: goto L_0026DCF8;
    case 175u: goto L_0026DD04;
    case 176u: goto L_0026DD10;
    case 177u: goto L_0026DD54;
    case 178u: goto L_0026DD58;
    case 179u: goto L_0026DD60;
    case 180u: goto L_0026DD68;
    case 181u: goto L_0026DD8C;
    case 182u: goto L_0026DD98;
    case 183u: goto L_0026DDA8;
    case 184u: goto L_0026DDC8;
    case 185u: goto L_0026DDE0;
    case 186u: goto L_0026DE40;
    case 187u: goto L_0026DE58;
    case 188u: goto L_0026DE84;
    case 189u: goto L_0026DEB4;
    case 190u: goto L_0026DECC;
    case 191u: goto L_0026DF0C;
    case 192u: goto L_0026DF48;
    case 193u: goto L_0026DF64;
    case 194u: goto L_0026DFB0;
    case 195u: goto L_0026DFE0;
    case 196u: goto L_0026E00C;
    case 197u: goto L_0026E03C;
    case 198u: goto L_0026E054;
    case 199u: goto L_0026E090;
    case 200u: goto L_0026E0C0;
    case 201u: goto L_0026E0D8;
    case 202u: goto L_0026E108;
    case 203u: goto L_0026E118;
    case 204u: goto L_0026E140;
    case 205u: goto L_0026E150;
    case 206u: goto L_0026E158;
    case 207u: goto L_0026E188;
    case 208u: goto L_0026E1E0;
    case 209u: goto L_0026E1EC;
    case 210u: goto L_0026E210;
    case 211u: goto L_0026E34C;
    case 212u: goto L_0026E368;
    case 213u: goto L_0026E384;
    case 214u: goto L_0026E3A0;
    case 215u: goto L_0026E3BC;
    case 216u: goto L_0026E3E4;
    case 217u: goto L_0026E414;
    case 218u: goto L_0026E480;
    case 219u: goto L_0026E498;
    case 220u: goto L_0026E4A4;
    case 221u: goto L_0026E504;
    case 222u: goto L_0026E594;
    case 223u: goto L_0026E5FC;
    case 224u: goto L_0026E618;
    case 225u: goto L_0026E634;
    case 226u: goto L_0026E65C;
    case 227u: goto L_0026E67C;
    case 228u: goto L_0026E684;
    case 229u: goto L_0026E68C;
    case 230u: goto L_0026E69C;
    case 231u: goto L_0026E6BC;
    case 232u: goto L_0026E700;
    case 233u: goto L_0026E82C;
    case 234u: goto L_0026E848;
    case 235u: goto L_0026E880;
    case 236u: goto L_0026EA70;
    case 237u: goto L_0026EAD4;
    case 238u: goto L_0026EAE0;
    case 239u: goto L_0026EB98;
    case 240u: goto L_0026EBA8;
    case 241u: goto L_0026EEA0;
    case 242u: goto L_0026EEB0;
    case 243u: goto L_0026EF10;
    case 244u: goto L_0026EF90;
    case 245u: goto L_0026F010;
    case 246u: goto L_0026F090;
    case 247u: goto L_0026F0AC;
    case 248u: goto L_0026F0E0;
    case 249u: goto L_0026F118;
    case 250u: goto L_0026F170;
    case 251u: goto L_0026F1A4;
    case 252u: goto L_0026F1B4;
    case 253u: goto L_0026F22C;
    case 254u: goto L_0026F2A0;
    case 255u: goto L_0026F2C0;
    case 256u: goto L_0026F2EC;
    case 257u: goto L_0026F2F4;
    case 258u: goto L_0026F310;
    case 259u: goto L_0026F340;
    case 260u: goto L_0026F3A0;
    case 261u: goto L_0026F3E0;
    case 262u: goto L_0026F45C;
    case 263u: goto L_0026F46C;
    case 264u: goto L_0026F484;
    case 265u: goto L_0026F4A0;
    case 266u: goto L_0026F4E0;
    case 267u: goto L_0026F530;
    case 268u: goto L_0026F5B4;
    case 269u: goto L_0026F5D8;
    case 270u: goto L_0026F63C;
    case 271u: goto L_0026F648;
    case 272u: goto L_0026F654;
    case 273u: goto L_0026F658;
    case 274u: goto L_0026F688;
    case 275u: goto L_0026F6B8;
    case 276u: goto L_0026F6DC;
    case 277u: goto L_0026F700;
    case 278u: goto L_0026F730;
    case 279u: goto L_0026F750;
    case 280u: goto L_0026F7A8;
    case 281u: goto L_0026F7DC;
    case 282u: goto L_0026F7EC;
    case 283u: goto L_0026F864;
    case 284u: goto L_0026F8D8;
    case 285u: goto L_0026F8F8;
    case 286u: goto L_0026F910;
    case 287u: goto L_0026F93C;
    case 288u: goto L_0026F944;
    case 289u: goto L_0026F97C;
    case 290u: goto L_0026F9C0;
    case 291u: goto L_0026FA24;
    case 292u: goto L_0026FA5C;
    case 293u: goto L_0026FA84;
    case 294u: goto L_0026FAA8;
    case 295u: goto L_0026FAD0;
    case 296u: goto L_0026FAE8;
    case 297u: goto L_0026FB10;
    case 298u: goto L_0026FB34;
    case 299u: goto L_0026FB48;
    case 300u: goto L_0026FB60;
    case 301u: goto L_0026FB6C;
    case 302u: goto L_0026FBB0;
    case 303u: goto L_0026FBF0;
    case 304u: goto L_0026FC1C;
    case 305u: goto L_0026FC30;
    case 306u: goto L_0026FC60;
    case 307u: goto L_0026FCA0;
    case 308u: goto L_0026FCCC;
    case 309u: goto L_0026FCE0;
    case 310u: goto L_0026FD10;
    case 311u: goto L_0026FD50;
    case 312u: goto L_0026FD7C;
    case 313u: goto L_0026FD90;
    case 314u: goto L_0026FDC0;
    case 315u: goto L_0026FE00;
    case 316u: goto L_0026FE2C;
    case 317u: goto L_0026FE40;
    case 318u: goto L_0026FE70;
    case 319u: goto L_0026FEC0;
    case 320u: goto L_0026FEEC;
    case 321u: goto L_0026FF10;
    case 322u: goto L_0026FF48;
    case 323u: goto L_0026FF54;
    case 324u: goto L_0026FF60;
    case 325u: goto L_0026FF84;
    case 326u: goto L_0026FFA4;
    case 327u: goto L_0026FFB0;
    case 328u: goto L_0026FFC8;
    case 329u: goto L_0026FFD4;
    case 330u: goto L_0026FFE4;
    default: bad_entry(c, 0x0026C000u); return;
    }
L_0026C000:
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C00Cu); st32((c.r[3].w[0]), c.r[21].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026C00Cu) [[unlikely]] return; }
L_0026C00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C014u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026C014u) [[unlikely]] return; }
L_0026C014:
    set32(c.r[2], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[21].w[0]);  if (t) { goto L_0026C348; } }
    set32(c.r[2], 0u + 129u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0026C3C8; } }
L_0026C02C:
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C3AC; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026C088; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 30208u);
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
L_0026C060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026C3C0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C3C0; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C060u | kUnwind; return; } goto L_0026C060; } }
    c.budget -= 1;
L_0026C088:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C094u); set32(c.r[4], c.r[4].w[0] - 25440u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C094u) [[unlikely]] return; }
L_0026C094:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C0A0u); set32(c.r[4], c.r[4].w[0] - 25408u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C0A0u) [[unlikely]] return; }
L_0026C0A0:
    set32(c.r[20], 0u - 1u);
    c.budget -= 2;
L_0026C0A8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0026C0D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 30960u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C0E0; } }
L_0026C0D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    set32(c.r[16], c.r[20].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C02Cu | kUnwind; return; } goto L_0026C02C; } }
L_0026C0E0:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_0026C4B0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C50C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 30208u);
    set32(c.r[4], c.r[20].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[5].d[0] = 0ull | 32896ull;
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 30864u);
    set32(c.r[2], c.r[2].w[0] + 30352u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = c.r[23].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[23].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026C164; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026C578; } }
L_0026C158:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_0026C844; } }
L_0026C164:
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026C5A0; } }
L_0026C170:
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 352u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[20].w[0] << 8);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], 0u + 126u);
    set32(c.r[3], c.r[4].w[0] << 8);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[30].w[0] + c.r[3].w[0]);  if (t) { goto L_0026C6F4; } }
L_0026C19C:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026C70C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_0026C1BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C73C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[22].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[22].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 14;
L_0026C200:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C75C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026C230:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C77C; } }
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
L_0026C260:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C79C; } }
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
L_0026C290:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C7BC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 10;
L_0026C2C4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C7DC; } }
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
L_0026C2F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C7FC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 8;
L_0026C320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C328u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026C328u) [[unlikely]] return; }
L_0026C328:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026C81C; } }
L_0026C338:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026C844; } }
L_0026C348:
    set32(c.r[4], ld32((c.r[28].w[0] - 30328u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0026C388; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[5].w[0] + 30208u);
    c.budget -= 3;
L_0026C364:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C0E0u | kUnwind; return; } goto L_0026C0E0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C0E0u | kUnwind; return; } goto L_0026C0E0; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C364u | kUnwind; return; } goto L_0026C364; } }
L_0026C388:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C394u); set32(c.r[4], c.r[4].w[0] - 25440u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C394u) [[unlikely]] return; }
L_0026C394:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3A0u); set32(c.r[4], c.r[4].w[0] - 25408u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C3A0u) [[unlikely]] return; }
L_0026C3A0:
    set32(c.r[20], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C0E0u | kUnwind; return; } goto L_0026C0E0; } }
L_0026C3AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C3B8u); set32(c.r[4], c.r[4].w[0] - 25376u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C3B8u) [[unlikely]] return; }
L_0026C3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C0A8u | kUnwind; return; } goto L_0026C0A8; } }
L_0026C3C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C0A8u | kUnwind; return; } goto L_0026C0A8; } }
L_0026C3C8:
    set32(c.r[2], 0u + 130u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C0E0u | kUnwind; return; } goto L_0026C0E0; } }
L_0026C3D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C490; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026C430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 30208u);
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
L_0026C408:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026C4A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026C4A8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C408u | kUnwind; return; } goto L_0026C408; } }
    c.budget -= 1;
L_0026C430:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C43Cu); set32(c.r[4], c.r[4].w[0] - 25440u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C43Cu) [[unlikely]] return; }
L_0026C43C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C448u); set32(c.r[4], c.r[4].w[0] - 25408u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C448u) [[unlikely]] return; }
L_0026C448:
    set32(c.r[20], 0u - 1u);
    c.budget -= 2;
L_0026C450:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0026C478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 30960u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C0E0u | kUnwind; return; } goto L_0026C0E0; } }
    c.budget -= 1;
L_0026C478:
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    set32(c.r[16], c.r[20].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C3D4u | kUnwind; return; } goto L_0026C3D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C0E0u | kUnwind; return; } goto L_0026C0E0; } }
L_0026C490:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C49Cu); set32(c.r[4], c.r[4].w[0] - 25376u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C49Cu) [[unlikely]] return; }
L_0026C49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C450u | kUnwind; return; } goto L_0026C450; } }
    c.budget -= 1;
L_0026C4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C450u | kUnwind; return; } goto L_0026C450; } }
L_0026C4B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C4BCu); set32(c.r[4], c.r[4].w[0] - 25232u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C4BCu) [[unlikely]] return; }
L_0026C4BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C4C8u); set32(c.r[4], c.r[4].w[0] - 25200u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C4C8u) [[unlikely]] return; }
L_0026C4C8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026C4E4; } }
L_0026C4D8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_0026C844; } }
L_0026C4E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C4FCu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026C4FCu) [[unlikely]] return; }
L_0026C4FC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C4D8u | kUnwind; return; } goto L_0026C4D8; } }
L_0026C50C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C518u); set32(c.r[4], c.r[4].w[0] - 25168u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C518u) [[unlikely]] return; }
L_0026C518:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C528u); set32(c.r[4], c.r[4].w[0] - 28432u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C528u) [[unlikely]] return; }
L_0026C528:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C534u); set32(c.r[4], c.r[4].w[0] - 28400u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C534u) [[unlikely]] return; }
L_0026C534:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026C550; } }
L_0026C544:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_0026C844; } }
L_0026C550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C568u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026C568u) [[unlikely]] return; }
L_0026C568:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C544u | kUnwind; return; } goto L_0026C544; } }
L_0026C578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C590u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026C590u) [[unlikely]] return; }
L_0026C590:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C158u | kUnwind; return; } goto L_0026C158; } }
L_0026C5A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] - 32592u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 32352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026C688; } }
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] - 32544u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 32448u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[28].w[0] - 32544u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].d[0] = c.r[6].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));  if (t) { goto L_0026C6A4; } }
    set32(c.r[3], 0u + 32767u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_0026C6A4; } }
    set32(c.r[3], 0u + 32767u);
    c.budget -= 1;
L_0026C634:
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 1;
L_0026C638:
    set32(c.r[3], c.r[28].w[0] - 32536u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[28].w[0] - 30276u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0026C6CC; } }
    set32(c.r[3], 0u + 32767u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[3].w[0] - c.r[7].w[0]);  if (t) { goto L_0026C6CC; } }
    set32(c.r[3], 0u + 32767u);
    c.budget -= 1;
L_0026C66C:
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 1;
L_0026C670:
    st32((c.r[28].w[0] - 30272u), c.r[4].w[0]);
    c.budget -= 1;
L_0026C674:
    c.r[19].d[0] = c.r[6].d[0] << 32;
    c.r[18].d[0] = c.r[4].d[0] << 32;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C170u | kUnwind; return; } goto L_0026C170; } }
L_0026C688:
    c.r[6].d[0] = c.r[19].d[0] << 48;
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    st32((c.r[28].w[0] - 30276u), c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30272u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C674u | kUnwind; return; } goto L_0026C674; } }
L_0026C6A4:
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));  if (t) { goto L_0026C6B8; } }
    set32(c.r[3], c.r[3].w[0] + 4095u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    c.budget -= 2;
L_0026C6B8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C638u | kUnwind; return; } goto L_0026C638; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32767u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C634u | kUnwind; return; } goto L_0026C634; } }
L_0026C6CC:
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));  if (t) { goto L_0026C6E0; } }
    set32(c.r[3], c.r[3].w[0] + 4095u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    c.budget -= 2;
L_0026C6E0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C670u | kUnwind; return; } goto L_0026C670; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 32767u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C66Cu | kUnwind; return; } goto L_0026C66C; } }
L_0026C6F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32544u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C19Cu | kUnwind; return; } goto L_0026C19C; } }
L_0026C70C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C718u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C718u) [[unlikely]] return; }
L_0026C718:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C728u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C728u) [[unlikely]] return; }
L_0026C728:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C734u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C734u) [[unlikely]] return; }
L_0026C734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C1BCu | kUnwind; return; } goto L_0026C1BC; } }
L_0026C73C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C748u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C748u) [[unlikely]] return; }
L_0026C748:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C754u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C754u) [[unlikely]] return; }
L_0026C754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C200u | kUnwind; return; } goto L_0026C200; } }
L_0026C75C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C768u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C768u) [[unlikely]] return; }
L_0026C768:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C774u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C774u) [[unlikely]] return; }
L_0026C774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C230u | kUnwind; return; } goto L_0026C230; } }
L_0026C77C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C788u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C788u) [[unlikely]] return; }
L_0026C788:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C794u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C794u) [[unlikely]] return; }
L_0026C794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C260u | kUnwind; return; } goto L_0026C260; } }
L_0026C79C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7A8u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C7A8u) [[unlikely]] return; }
L_0026C7A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7B4u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C7B4u) [[unlikely]] return; }
L_0026C7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C290u | kUnwind; return; } goto L_0026C290; } }
L_0026C7BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7C8u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C7C8u) [[unlikely]] return; }
L_0026C7C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7D4u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C7D4u) [[unlikely]] return; }
L_0026C7D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C2C4u | kUnwind; return; } goto L_0026C2C4; } }
L_0026C7DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7E8u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C7E8u) [[unlikely]] return; }
L_0026C7E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C7F4u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C7F4u) [[unlikely]] return; }
L_0026C7F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C2F4u | kUnwind; return; } goto L_0026C2F4; } }
L_0026C7FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C808u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C808u) [[unlikely]] return; }
L_0026C808:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C814u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C814u) [[unlikely]] return; }
L_0026C814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C320u | kUnwind; return; } goto L_0026C320; } }
L_0026C81C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C834u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026C834u) [[unlikely]] return; }
L_0026C834:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C338u | kUnwind; return; } goto L_0026C338; } }
L_0026C844:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0026C880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 32528u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026C92C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30488u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30268u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 3u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026C958; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 30488u)));
    c.budget -= 1;
L_0026C8B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[4], c.r[4].w[0] + 20740u);
    set32(c.r[3], c.r[3].w[0] + 20742u);
    st16((c.r[28].w[0] - 30292u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0026C9D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 20736u);
    set32(c.r[9], c.r[9].w[0] + 24832u);
    set32(c.r[6], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 5;
L_0026C908:
    c.r[4].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    st16((c.r[6].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C908u | kUnwind; return; } goto L_0026C908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0026C9D8; } }
L_0026C92C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C938u); set32(c.r[4], c.r[4].w[0] - 25136u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C938u) [[unlikely]] return; }
L_0026C938:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C944u); set32(c.r[4], c.r[4].w[0] - 25104u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C944u) [[unlikely]] return; }
L_0026C944:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C950u); set32(c.r[4], c.r[4].w[0] - 25040u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026C950u) [[unlikely]] return; }
L_0026C950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0026CA04; } }
L_0026C958:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C964u); set32(c.r[4], c.r[4].w[0] - 25008u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C964u) [[unlikely]] return; }
L_0026C964:
    set32(c.r[2], ld32((c.r[28].w[0] - 30468u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st8((c.r[28].w[0] - 30324u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026C990; } }
L_0026C974:
    set32(c.r[2], ld32((c.r[28].w[0] - 30468u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C974u | kUnwind; return; } goto L_0026C974; } }
L_0026C990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C998u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 72u, depth + 1u); else { c.pc = 0x002687A0u; return; } if (c.pc != 0x0026C998u) [[unlikely]] return; }
L_0026C998:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st8((c.r[28].w[0] - 30324u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026C9B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9B0u); set32(c.r[4], c.r[4].w[0] - 24944u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C9B0u) [[unlikely]] return; }
L_0026C9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[28].w[0] - 30488u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026C8B8u | kUnwind; return; } goto L_0026C8B8; } }
L_0026C9B8:
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 24896u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026C9CCu); st16((c.r[28].w[0] - 30292u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026C9CCu) [[unlikely]] return; }
L_0026C9CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026CA00; } }
L_0026C9D4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0026C9D8:
    set32(c.r[5], ld32((c.r[28].w[0] - 30488u)));
    st32((c.r[28].w[0] - 32528u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30268u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 30264u)));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), 0u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 30488u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 30264u), c.r[3].w[0]);
    c.budget -= 10;
L_0026CA00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0026CA04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026CA10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268E30u | kUnwind; return; } [[clang::musttail]] return unit_001A(c, 118u, depth); }
L_0026CA20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA38u); st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026CA38u) [[unlikely]] return; }
L_0026CA38:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026CA88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0026CA88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA5Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026CA5Cu) [[unlikely]] return; }
L_0026CA5C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA80u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026CA80u) [[unlikely]] return; }
L_0026CA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CA88u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026CA88u) [[unlikely]] return; }
L_0026CA88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] - 32768u), 0u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] + 29696u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], 0u + 40u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 32584u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 31948u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);
    st32((c.r[2].w[0] - 31944u), 0u);
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 20496u);
    st32((c.r[28].w[0] - 30456u), 0u);
    st32((c.r[28].w[0] - 32580u), c.r[2].w[0]);
    set32(c.r[11], c.r[11].w[0] + 30208u);
    st32((c.r[28].w[0] - 30240u), 0u);
    set32(c.r[10], c.r[10].w[0] + 30352u);
    st8((c.r[28].w[0] - 30236u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], c.r[9].w[0] + 30256u);
    set32(c.r[8], c.r[8].w[0] - 32592u);
    set32(c.r[7], c.r[7].w[0] - 32544u);
    set32(c.r[6], c.r[6].w[0] - 32448u);
    set32(c.r[5], c.r[5].w[0] - 32352u);
    set32(c.r[4], c.r[4].w[0] + 352u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 34;
L_0026CB10:
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[12], c.r[12].w[0] + 8u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[12].sd[0] < 48ll ? 1ull : 0ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(0u));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[5].w[0]), 0u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[11].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st32((c.r[5].w[0] + 4u), 0u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[11].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st32((c.r[5].w[0] + 8u), 0u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[11].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[5].w[0] + 12u), 0u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[11].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[6].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[5].w[0] + 16u), 0u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[11].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st16((c.r[7].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[6].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st32((c.r[5].w[0] + 20u), 0u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[11].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[8].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st16((c.r[6].w[0] + 12u), static_cast<std::uint16_t>(0u));
    st32((c.r[5].w[0] + 24u), 0u);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[11].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st8((c.r[10].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[11], c.r[11].w[0] + 8u);
    st8((c.r[9].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], c.r[10].w[0] + 8u);
    st8((c.r[8].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], c.r[9].w[0] + 8u);
    st16((c.r[7].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], c.r[8].w[0] + 8u);
    st16((c.r[6].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[7], c.r[7].w[0] + 16u);
    st32((c.r[5].w[0] + 28u), 0u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 75;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CB10u | kUnwind; return; } goto L_0026CB10; } }
    set32(c.r[2], 0u + 4096u);
    c.r[4].d[0] = 0ull + 0ull;
    st16((c.r[28].w[0] - 32544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[28].w[0] - 32536u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[28].w[0] - 32542u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[28].w[0] - 32534u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[28].w[0] - 32540u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[28].w[0] - 32532u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[28].w[0] - 32538u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC68u); st16((c.r[28].w[0] - 32530u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0021EEE0u; return; } if (c.pc != 0x0026CC68u) [[unlikely]] return; }
L_0026CC68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] - 32640u);
    c.r[5].d[0] = c.r[2].d[0] | 9029ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC80u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 359u, depth + 1u); else { c.pc = 0x0021F688u; return; } if (c.pc != 0x0026CC80u) [[unlikely]] return; }
L_0026CC80:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0026CCB0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CC94u); set32(c.r[4], c.r[4].w[0] - 24848u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026CC94u) [[unlikely]] return; }
L_0026CC94:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CC94u | kUnwind; return; } goto L_0026CC94; } }
L_0026CCB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 32604u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CC68u | kUnwind; return; } goto L_0026CC68; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026CCE0; } }
L_0026CCD0:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026CD08; } }
L_0026CCE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CCF8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026CCF8u) [[unlikely]] return; }
L_0026CCF8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CCD0u | kUnwind; return; } goto L_0026CCD0; } }
L_0026CD08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026CD20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5628u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0026CD80; } }
    c.r[3].d[0] = 0ull & 7ull;
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u - 29u);
    c.r[7].d[0] = c.r[3].d[0] << 2;
    c.budget -= 4;
L_0026CD48:
    c.r[5].d[0] = ld64((c.r[8].w[0] + 48u));
    set32(c.r[3], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[3].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st64((c.r[8].w[0] + 48u), c.r[5].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5628u)));
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CD48u | kUnwind; return; } goto L_0026CD48; } }
    c.budget -= 1;
L_0026CD80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026CD90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0026CDD0; } }
L_0026CDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026CE24; } }
L_0026CDD0:
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0026CDD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 5216u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CDE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0026CDE8u) [[unlikely]] return; }
L_0026CDE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026CDF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026CE24; } }
L_0026CDF8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CDD4u | kUnwind; return; } goto L_0026CDD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CDC8u | kUnwind; return; } goto L_0026CDC8; } }
L_0026CE24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026CE40:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[2].w[0] + 5644u));  c.pc = t; return; }
L_0026CE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
L_0026CE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 15u, depth + 1u); else { c.pc = 0x00258B80u; return; } if (c.pc != 0x0026CE80u) [[unlikely]] return; }
L_0026CE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CE88u); set32(c.r[4], c.r[17].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 80u, depth + 1u); else { c.pc = 0x0025E4C0u; return; } if (c.pc != 0x0026CE88u) [[unlikely]] return; }
L_0026CE88:
    st32((c.r[17].w[0] + 1056u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[17].w[0] + 1060u), 0u);
    c.r[1].d[0] = c.r[1].d[0] | 5216ull;
    st32((c.r[17].w[0] + 1064u), 0u);
    set32(c.r[2], c.r[16].w[0] + c.r[1].w[0]);
    st8((c.r[17].w[0] + 1068u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[17].w[0] + 1072u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CE78u | kUnwind; return; } goto L_0026CE78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 5488ull;
    set32(c.r[3], 0u + 9600u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CED4u); st32((c.r[2].w[0] + 5480u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0015(c, 207u, depth + 1u); else { c.pc = 0x00257230u; return; } if (c.pc != 0x0026CED4u) [[unlikely]] return; }
L_0026CED4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 5584ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026CEE4u); set32(c.r[4], c.r[16].w[0] + c.r[1].w[0]);  if (depth < kMaxDepth) unit_0015(c, 206u, depth + 1u); else { c.pc = 0x002571F0u; return; } if (c.pc != 0x0026CEE4u) [[unlikely]] return; }
L_0026CEE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 48u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 5619u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 5618u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st16((c.r[3].w[0] + 5616u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 5620u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], 0u + 16376u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 5624u), c.r[4].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 5628u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 5629u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[2].w[0] + 5636u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = 0ull | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 5630u), static_cast<std::uint8_t>(0u));
    c.budget -= 33;
L_0026CF68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], c.r[6].w[0] + 5u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 5644u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st16((c.r[3].w[0] + 5646u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st16((c.r[2].w[0] + 5648u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st16((c.r[3].w[0] + 5650u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 5652u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CF68u | kUnwind; return; } goto L_0026CF68; } }
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[2].w[0] + 5644u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 7;
L_0026CFD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 5216u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[3].w[0] + 5220u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[2].w[0] + 5224u), 0u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[3].w[0] + 5228u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[2].w[0] + 5232u), 0u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[3].w[0] + 5236u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 5240u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 5244u), 0u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(58ll) ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026CFD0u | kUnwind; return; } goto L_0026CFD0; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[1].d[0] | 5216ull;
    set32(c.r[3], c.r[3].w[0] + c.r[1].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026D080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[28].w[0] - 32508u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[28].w[0] - 30188u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[2].w[0] + 5637u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0B8u); set32(c.r[4], c.r[4].w[0] - 288u);  if (depth < kMaxDepth) unit_0016(c, 17u, depth + 1u); else { c.pc = 0x00258BC0u; return; } if (c.pc != 0x0026D0B8u) [[unlikely]] return; }
L_0026D0B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0C4u); set32(c.r[4], c.r[4].w[0] - 288u);  if (depth < kMaxDepth) unit_0016(c, 33u, depth + 1u); else { c.pc = 0x00259120u; return; } if (c.pc != 0x0026D0C4u) [[unlikely]] return; }
L_0026D0C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0026D0F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 232u, depth + 1u); else { c.pc = 0x0026E700u; return; } if (c.pc != 0x0026D0D4u) [[unlikely]] return; }
L_0026D0D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0E0u); set32(c.r[4], c.r[4].w[0] - 288u);  if (depth < kMaxDepth) unit_0016(c, 32u, depth + 1u); else { c.pc = 0x002590D0u; return; } if (c.pc != 0x0026D0E0u) [[unlikely]] return; }
L_0026D0E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D0ECu); set32(c.r[4], c.r[4].w[0] - 288u);  if (depth < kMaxDepth) unit_0016(c, 23u, depth + 1u); else { c.pc = 0x00258D40u; return; } if (c.pc != 0x0026D0ECu) [[unlikely]] return; }
L_0026D0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0026D13C; } }
L_0026D0F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = ld64((c.r[2].w[0] + 9344u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 276u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], ld32((c.r[2].w[0] - 284u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[5].w[0]), c.r[7].d[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 276u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D134u); st32((c.r[2].w[0] - 276u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 236u, depth + 1u); else { c.pc = 0x0026EA70u; return; } if (c.pc != 0x0026D134u) [[unlikely]] return; }
L_0026D134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D0D4u | kUnwind; return; } goto L_0026D0D4; } }
L_0026D13C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026D150:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 9600u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 5628u), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 5480u), c.r[5].w[0]);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 4u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 5629u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st8((c.r[3].w[0] + 5630u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 5636u), static_cast<std::uint8_t>(0u));
    c.budget -= 27;
L_0026D1BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 1056u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026D1D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D1D0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0026D1D0u) [[unlikely]] return; }
L_0026D1D0:
    st32((c.r[17].w[0] + 1056u), 0u);
    st32((c.r[17].w[0] + 1060u), 0u);
    c.budget -= 2;
L_0026D1D8:
    st32((c.r[17].w[0] + 1064u), 0u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1068u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026D1F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D1F0u); set32(c.r[4], c.r[17].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 64u, depth + 1u); else { c.pc = 0x0025DDD0u; return; } if (c.pc != 0x0026D1F0u) [[unlikely]] return; }
L_0026D1F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D1FCu); st8((c.r[17].w[0] + 1068u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 14u, depth + 1u); else { c.pc = 0x00258970u; return; } if (c.pc != 0x0026D1FCu) [[unlikely]] return; }
L_0026D1FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 5216u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026D228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D218u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0026D218u) [[unlikely]] return; }
L_0026D218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 5216u), 0u);
    c.budget -= 4;
L_0026D228:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 66ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 1072u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D1BCu | kUnwind; return; } goto L_0026D1BC; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 3;
L_0026D248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], c.r[6].w[0] + 5u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 5644u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st16((c.r[3].w[0] + 5646u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st16((c.r[2].w[0] + 5648u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st16((c.r[3].w[0] + 5650u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 5652u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 10u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D248u | kUnwind; return; } goto L_0026D248; } }
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1280u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D2B4u); st16((c.r[2].w[0] + 5644u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0014(c, 139u, depth + 1u); else { c.pc = 0x00251700u; return; } if (c.pc != 0x0026D2B4u) [[unlikely]] return; }
L_0026D2B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026D2D0:
    set32(c.r[29], c.r[29].w[0] - 1456u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[3].w[0] + 5636u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    st32((c.r[29].w[0] + 384u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 380u), c.r[6].w[0]);
    set32(c.r[4], c.r[29].w[0] + 848u);
    st32((c.r[29].w[0] + 376u), c.r[7].w[0]);
    st8((c.r[29].w[0] + 375u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D334u); st32((c.r[29].w[0] + 352u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x0026D334u) [[unlikely]] return; }
L_0026D334:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D340u); set32(c.r[4], c.r[29].w[0] + 1452u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0026D340u) [[unlikely]] return; }
L_0026D340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D348u); set32(c.r[4], c.r[29].w[0] + 1452u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0026D348u) [[unlikely]] return; }
L_0026D348:
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D360u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D360u) [[unlikely]] return; }
L_0026D360:
    set32(c.r[4], c.r[29].w[0] + 1452u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D36Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0026D36Cu) [[unlikely]] return; }
L_0026D36C:
    set32(c.r[19], c.r[29].w[0] + 868u);
    set32(c.r[20], c.r[29].w[0] + 856u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D3D8; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[29].w[0] + 1412u);
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3A0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D3A0u) [[unlikely]] return; }
L_0026D3A0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026D3F0; } }
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3D0u); set32(c.r[5], c.r[2].w[0] + 1412u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D3D0u) [[unlikely]] return; }
L_0026D3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 1412u)));  if (t) { goto L_0026D3F4; } }
L_0026D3D8:
    set32(c.r[4], c.r[29].w[0] + 1412u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D3E4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D3E4u) [[unlikely]] return; }
L_0026D3E4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0026D3F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 1412u)));
    c.budget -= 1;
L_0026D3F4:
    set32(c.r[3], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[29].w[0] + 848u);  if (t) { goto L_0026D460; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 1448u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[16], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D428u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D428u) [[unlikely]] return; }
L_0026D428:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0026D47C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D458u); set32(c.r[5], c.r[2].w[0] + 1448u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D458u) [[unlikely]] return; }
L_0026D458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 1448u)));  if (t) { goto L_0026D480; } }
L_0026D460:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 1448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D470u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D470u) [[unlikely]] return; }
L_0026D470:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_0026D47C:
    set32(c.r[2], ld32((c.r[29].w[0] + 1448u)));
    c.budget -= 1;
L_0026D480:
    set32(c.r[23], c.r[29].w[0] + 860u);
    set32(c.r[30], c.r[29].w[0] + 852u);
    set32(c.r[4], ld32((c.r[23].w[0])));
    set32(c.r[3], ld32((c.r[30].w[0])));
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[4].w[0]);  if (t) { goto L_0026E370; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E370; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 380u)));
    c.budget -= 1;
L_0026D4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D4C4u); set32(c.r[4], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0026D4C4u) [[unlikely]] return; }
L_0026D4C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D4D4u); set32(c.r[5], c.r[5].w[0] - 24824u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0026D4D4u) [[unlikely]] return; }
L_0026D4D4:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 336u), 0u);  if (t) { goto L_0026DE10; } }
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026DE10; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[16], c.r[29].w[0] + 564u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 3;
L_0026D4FC:
    set32(c.r[2], 0u - 70u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 560u), c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[29].w[0] + 565u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[29].w[0] + 582u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[2], c.r[29].w[0] + 580u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 566u);
    set32(c.r[3], ld32((c.r[20].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 572u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 568u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[29].w[0] + 576u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[29].w[0] + 577u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[29].w[0] + 578u);
    set32(c.r[4], ld32((c.r[23].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[29].w[0] + 579u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 33;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[5].w[0] - c.r[4].w[0]);  if (t) { goto L_0026D5C8; } }
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D590u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D590u) [[unlikely]] return; }
L_0026D590:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026D5E0; } }
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D5C0u); set32(c.r[5], c.r[2].w[0] + 1408u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D5C0u) [[unlikely]] return; }
L_0026D5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D5E0; } }
L_0026D5C8:
    set32(c.r[4], c.r[29].w[0] + 1408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D5D4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D5D4u) [[unlikely]] return; }
L_0026D5D4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0026D5E0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D658; } }
    set32(c.r[2], c.r[29].w[0] + 848u);
    set32(c.r[4], c.r[29].w[0] + 1444u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[17], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D614u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D614u) [[unlikely]] return; }
L_0026D614:
    set32(c.r[2], c.r[29].w[0] + 848u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[29].w[0] + 848u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; st32((c.r[2].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_0026D680; } }
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[5], c.r[2].w[0] + 1444u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D650u); set32(c.r[6], c.r[3].w[0] - c.r[17].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D650u) [[unlikely]] return; }
L_0026D650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D680; } }
L_0026D658:
    set32(c.r[2], c.r[29].w[0] + 848u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 1444u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D66Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D66Cu) [[unlikely]] return; }
L_0026D66C:
    set32(c.r[2], c.r[29].w[0] + 848u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[29].w[0] + 848u);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 5;
L_0026D680:
    set32(c.r[2], ld32((c.r[29].w[0] + 1444u)));
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[4], c.r[18].w[0] + 16u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026E38C; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E38C; } }
    c.budget -= 1;
L_0026D6B8:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st8((c.r[29].w[0] + 320u), static_cast<std::uint8_t>(0u));
    c.r[22].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 304u), static_cast<std::uint8_t>(0u));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0026E420; } }
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[17], c.r[29].w[0] + 848u);  if (t) { goto L_0026E420; } }
L_0026D6E0:
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[5].w[0] + 4u);
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D750; } }
    set32(c.r[18], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1404u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D714u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D714u) [[unlikely]] return; }
L_0026D714:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026D768; } }
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D744u); set32(c.r[5], c.r[2].w[0] + 1404u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D744u) [[unlikely]] return; }
L_0026D744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D768; } }
    c.budget -= 1;
L_0026D750:
    set32(c.r[4], c.r[29].w[0] + 1404u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D75Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D75Cu) [[unlikely]] return; }
L_0026D75C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0026D768:
    set32(c.r[2], ld32((c.r[29].w[0] + 1404u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D7D8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 1440u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[18], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D7A0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D7A0u) [[unlikely]] return; }
L_0026D7A0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0026D7F8; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D7D0u); set32(c.r[5], c.r[2].w[0] + 1440u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D7D0u) [[unlikely]] return; }
L_0026D7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D7F8; } }
L_0026D7D8:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 1440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D7E8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D7E8u) [[unlikely]] return; }
L_0026D7E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_0026D7F8:
    set32(c.r[3], ld32((c.r[29].w[0] + 1440u)));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DC00; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DB48; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DB38; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DB20; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DB08; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DAF8; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DAE8; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026D9C8; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026D9B8; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026D9A8; } }
    set32(c.r[6], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0026D918; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026D900; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026D8A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DC10; } }
    c.budget -= 1;
L_0026D8A0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[29].w[0] + 880u);  if (t) { goto L_0026E3A8; } }
L_0026D8B0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_0026D8C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026E3F8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026E3F8; } }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0026E3D0; } }
L_0026D8E8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_0026D8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D8C0u | kUnwind; return; } goto L_0026D8C0; } }
L_0026D900:
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D90Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 314u, depth + 1u); else { c.pc = 0x0026FDC0u; return; } if (c.pc != 0x0026D90Cu) [[unlikely]] return; }
L_0026D90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DC10; } }
    c.budget -= 1;
L_0026D918:
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026D978; } }
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D940u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D940u) [[unlikely]] return; }
L_0026D940:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026D990; } }
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D970u); set32(c.r[5], c.r[2].w[0] + 1436u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026D970u) [[unlikely]] return; }
L_0026D970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026D990; } }
L_0026D978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D980u); set32(c.r[4], c.r[29].w[0] + 1436u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D980u) [[unlikely]] return; }
L_0026D980:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0026D990:
    set32(c.r[3], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 1436u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 560u), c.r[2].w[0]);  if (t) { goto L_0026DC10; } }
    c.budget -= 1;
L_0026D9A8:
    set32(c.r[2], c.r[29].w[0] + 565u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026DC10; } }
    c.budget -= 1;
L_0026D9B8:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 320u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026DC10; } }
    c.budget -= 1;
L_0026D9C8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 566u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DA38; } }
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026D9FCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026D9FCu) [[unlikely]] return; }
L_0026D9FC:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026DA50; } }
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA2Cu); set32(c.r[5], c.r[2].w[0] + 1432u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DA2Cu) [[unlikely]] return; }
L_0026DA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DA50; } }
    c.budget -= 1;
L_0026DA38:
    set32(c.r[4], c.r[29].w[0] + 1432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA44u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026DA44u) [[unlikely]] return; }
L_0026DA44:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0026DA50:
    set32(c.r[4], ld32((c.r[29].w[0] + 1432u)));
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[29].w[0] + 568u);
    set32(c.r[3], ld32((c.r[20].w[0])));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DAC0; } }
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1428u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DA84u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026DA84u) [[unlikely]] return; }
L_0026DA84:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026DAD8; } }
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DAB4u); set32(c.r[5], c.r[2].w[0] + 1428u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DAB4u) [[unlikely]] return; }
L_0026DAB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DAD8; } }
    c.budget -= 1;
L_0026DAC0:
    set32(c.r[4], c.r[29].w[0] + 1428u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DACCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026DACCu) [[unlikely]] return; }
L_0026DACC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0026DAD8:
    set32(c.r[3], ld32((c.r[29].w[0] + 1428u)));
    set32(c.r[2], c.r[29].w[0] + 572u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0026DC10; } }
L_0026DAE8:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 304u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026DC10; } }
    c.budget -= 1;
L_0026DAF8:
    set32(c.r[2], c.r[29].w[0] + 576u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026DC10; } }
    c.budget -= 1;
L_0026DB08:
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB14u); set32(c.r[5], c.r[29].w[0] + 580u);  if (depth < kMaxDepth) unit_001B(c, 310u, depth + 1u); else { c.pc = 0x0026FD10u; return; } if (c.pc != 0x0026DB14u) [[unlikely]] return; }
L_0026DB14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0026DC10; } }
    c.budget -= 1;
L_0026DB20:
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB2Cu); set32(c.r[5], c.r[29].w[0] + 578u);  if (depth < kMaxDepth) unit_001B(c, 306u, depth + 1u); else { c.pc = 0x0026FC60u; return; } if (c.pc != 0x0026DB2Cu) [[unlikely]] return; }
L_0026DB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DC10; } }
    c.budget -= 1;
L_0026DB38:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 579u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026DC10; } }
L_0026DB48:
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DBA8; } }
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DB70u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026DB70u) [[unlikely]] return; }
L_0026DB70:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026DBC0; } }
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DBA0u); set32(c.r[5], c.r[2].w[0] + 1424u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DBA0u) [[unlikely]] return; }
L_0026DBA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DBC0; } }
L_0026DBA8:
    set32(c.r[4], c.r[29].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DBB4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026DBB4u) [[unlikely]] return; }
L_0026DBB4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0026DBC0:
    set32(c.r[3], ld32((c.r[29].w[0] + 1424u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026DBF0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026DBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DC10; } }
L_0026DBE0:
    set32(c.r[2], c.r[29].w[0] + 577u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026DC10; } }
    c.budget -= 1;
L_0026DBF0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 577u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026DC10; } }
L_0026DC00:
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DC0Cu); set32(c.r[5], c.r[29].w[0] + 582u);  if (depth < kMaxDepth) unit_001B(c, 302u, depth + 1u); else { c.pc = 0x0026FBB0u; return; } if (c.pc != 0x0026DC0Cu) [[unlikely]] return; }
L_0026DC0C:
    c.budget -= 1;
L_0026DC10:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026E400; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E400; } }
    c.budget -= 1;
L_0026DC48:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D6E0u | kUnwind; return; } goto L_0026D6E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E420; } }
    c.budget -= 1;
L_0026DC68:
    set32(c.r[2], c.r[29].w[0] + 580u);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026DD58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 24688u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0026C000u < 16384u) { entry = entries_001B[(t - 0x0026C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0026DC98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    ld128((c.r[2].w[0] - 24800u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[3]);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 24784u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 1152u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026DD58; } }
    c.budget -= 1;
L_0026DCB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    ld128((c.r[2].w[0] - 24768u) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[5]);
    c.r[4].d[0] = ld64((c.r[2].w[0] - 24752u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 1152u), c.r[4].d[0]);
    c.f[0] = ld32((c.r[2].w[0] - 24744u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] - 24740u)));
    st32((c.r[29].w[0] + 1160u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 1164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] - 24738u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 1166u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0026DD58; } }
L_0026DCF8:
    set32(c.r[5], ld32((c.r[29].w[0] + 376u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD04u); set32(c.r[4], c.r[29].w[0] + 1136u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0026DD04u) [[unlikely]] return; }
L_0026DD04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DD58; } }
    c.budget -= 1;
L_0026DD10:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 320u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E430; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 304u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026DD48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    ld128((c.r[3].w[0] - 24736u) & ~15u, c.r[3]);
    ld128((c.r[2].w[0] - 24720u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 1152u) & ~15u, c.r[2]);  if (t) { goto L_0026DD58; } }
    c.budget -= 1;
L_0026DD48:
    set32(c.r[5], ld32((c.r[29].w[0] + 380u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD54u); set32(c.r[4], c.r[29].w[0] + 1136u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0026DD54u) [[unlikely]] return; }
L_0026DD54:
    c.budget -= 1;
L_0026DD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD60u); set32(c.r[4], c.r[29].w[0] + 880u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0026DD60u) [[unlikely]] return; }
L_0026DD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0026DD68u) [[unlikely]] return; }
L_0026DD68:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 5216u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 5216u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD8Cu); set32(c.r[5], c.r[29].w[0] + 881u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0026DD8Cu) [[unlikely]] return; }
L_0026DD8C:
    set32(c.r[4], c.r[29].w[0] + 1136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DD98u); set32(c.r[5], c.r[29].w[0] + 880u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0026DD98u) [[unlikely]] return; }
L_0026DD98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DDA8u); set32(c.r[5], c.r[5].w[0] - 24704u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0026DDA8u) [[unlikely]] return; }
L_0026DDA8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 375u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E470; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.r[21].d[0] = 0ull + 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0026E488; } }
L_0026DDC8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0026DDE0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[5], c.r[29].w[0] + 1136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DDE0u); set32(c.r[6], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_001B(c, 278u, depth + 1u); else { c.pc = 0x0026F730u; return; } if (c.pc != 0x0026DDE0u) [[unlikely]] return; }
L_0026DDE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D4FCu | kUnwind; return; } goto L_0026D4FC; } }
    c.budget -= 1;
L_0026DE10:
    set32(c.r[4], ld32((c.r[23].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[3], ld32((c.r[30].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[4].w[0]);  if (t) { goto L_0026E5E8; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E5E8; } }
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 1;
L_0026DE40:
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 288u), 0u);  if (t) { goto L_0026E1D8; } }
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E1D8; } }
L_0026DE58:
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[5].w[0] - c.r[4].w[0]);  if (t) { goto L_0026DEC0; } }
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DE84u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026DE84u) [[unlikely]] return; }
L_0026DE84:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026DED8; } }
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DEB4u); set32(c.r[5], c.r[2].w[0] + 1400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DEB4u) [[unlikely]] return; }
L_0026DEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DED8; } }
    c.budget -= 1;
L_0026DEC0:
    set32(c.r[4], c.r[29].w[0] + 1400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DECCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026DECCu) [[unlikely]] return; }
L_0026DECC:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0026DED8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026DF50; } }
    set32(c.r[2], c.r[29].w[0] + 848u);
    set32(c.r[4], c.r[29].w[0] + 1420u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[17], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF0Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026DF0Cu) [[unlikely]] return; }
L_0026DF0C:
    set32(c.r[2], c.r[29].w[0] + 848u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[29].w[0] + 848u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; st32((c.r[2].w[0] + 20u), c.r[4].w[0]);  if (t) { goto L_0026DF78; } }
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[5], c.r[2].w[0] + 1420u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF48u); set32(c.r[6], c.r[3].w[0] - c.r[17].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026DF48u) [[unlikely]] return; }
L_0026DF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026DF78; } }
L_0026DF50:
    set32(c.r[2], c.r[29].w[0] + 848u);
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 1420u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026DF64u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026DF64u) [[unlikely]] return; }
L_0026DF64:
    set32(c.r[2], c.r[29].w[0] + 848u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[29].w[0] + 848u);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 5;
L_0026DF78:
    set32(c.r[2], ld32((c.r[29].w[0] + 1420u)));
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[4], c.r[16].w[0] + 16u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026E604; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E604; } }
    c.budget -= 1;
L_0026DFB0:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 272u), 0u);  if (t) { goto L_0026E1A8; } }
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[22], c.r[29].w[0] + 848u);  if (t) { goto L_0026E1A8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 5216ull;
    set32(c.r[21], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 5;
L_0026DFE0:
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[5].w[0] - c.r[4].w[0]);  if (t) { goto L_0026E048; } }
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1396u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E00Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026E00Cu) [[unlikely]] return; }
L_0026E00C:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026E060; } }
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E03Cu); set32(c.r[5], c.r[2].w[0] + 1396u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E03Cu) [[unlikely]] return; }
L_0026E03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E060; } }
    c.budget -= 1;
L_0026E048:
    set32(c.r[4], c.r[29].w[0] + 1396u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E054u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026E054u) [[unlikely]] return; }
L_0026E054:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0026E060:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1396u)));  if (t) { goto L_0026E0C8; } }
    set32(c.r[5], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 1416u);
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[16], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E090u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026E090u) [[unlikely]] return; }
L_0026E090:
    set32(c.r[3], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[22].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0026E0E8; } }
    set32(c.r[25], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E0C0u); set32(c.r[5], c.r[2].w[0] + 1416u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E0C0u) [[unlikely]] return; }
L_0026E0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E0E8; } }
L_0026E0C8:
    set32(c.r[5], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[4], c.r[29].w[0] + 1416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E0D8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026E0D8u) [[unlikely]] return; }
L_0026E0D8:
    set32(c.r[2], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[22].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_0026E0E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 1416u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026E158; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[29].w[0] + 880u);  if (t) { goto L_0026E620; } }
L_0026E108:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_0026E118:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026E670; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026E670; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0026E648; } }
L_0026E140:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_0026E150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E118u | kUnwind; return; } goto L_0026E118; } }
L_0026E158:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[4], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_0026E6A8; } }
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026E6A8; } }
    c.budget -= 1;
L_0026E188:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DFE0u | kUnwind; return; } goto L_0026DFE0; } }
L_0026E1A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DE58u | kUnwind; return; } goto L_0026DE58; } }
    c.budget -= 1;
L_0026E1D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E1E0u); set32(c.r[4], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x0026E1E0u) [[unlikely]] return; }
L_0026E1E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E1ECu); set32(c.r[4], c.r[4].w[0] + 9344u);  if (depth < kMaxDepth) unit_0018(c, 156u, depth + 1u); else { c.pc = 0x00261C70u; return; } if (c.pc != 0x0026E1ECu) [[unlikely]] return; }
L_0026E1EC:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[29].w[0] + 402u);
    set32(c.r[18], c.r[29].w[0] + 403u);
    set32(c.r[17], c.r[29].w[0] + 404u);
    set32(c.r[16], c.r[29].w[0] + 416u);
    set32(c.r[20], c.r[29].w[0] + 432u);
    set32(c.r[22], c.r[29].w[0] + 448u);
    set32(c.r[23], c.r[29].w[0] + 456u);
    set32(c.r[30], c.r[29].w[0] + 464u);
    c.budget -= 9;
L_0026E210:
    set32(c.r[2], c.r[21].w[0] << 5);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[4].w[0] + 3376u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[10], 0u - 1u);
    set32(c.r[5], c.r[3].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[7], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    ld128((c.r[7].w[0] + 16u) & ~15u, c.r[11]);
    c.r[9].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[5].d[0] = ld8((c.r[7].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[6].d[0] = ld8((c.r[7].w[0] + 3u));
    c.r[8].d[0] = c.r[3].d[0] | 65535ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[9].d[0] = ld64((c.r[7].w[0] + 32u));
    mmi::pcpyld(c.r[8], c.r[10], c.r[8]);
    c.r[10].d[0] = ld64((c.r[7].w[0] + 40u));
    st128((c.r[16].w[0]) & ~15u, c.r[11]);
    st16((c.r[29].w[0] + 400u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 9344u);
    c.r[3].d[0] = c.r[9].d[0] & c.r[8].d[0];
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[8].d[0] = ld64((c.r[7].w[0] + 48u));
    st64((c.r[20].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[7].w[0] + 64u));
    set32(c.r[6], 0u + 3u);
    c.r[9].d[0] = ld64((c.r[7].w[0] + 56u));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 72u));
    st64((c.r[20].w[0] + 8u), c.r[10].d[0]);
    st64((c.r[22].w[0]), c.r[8].d[0]);
    c.r[8].d[0] = ld64((c.r[7].w[0] + 80u));
    st64((c.r[30].w[0]), c.r[2].d[0]);
    set32(c.r[2], c.r[29].w[0] + 472u);
    c.r[11].d[0] = ld64((c.r[7].w[0] + 88u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[7].w[0] + 96u));
    set32(c.r[2], c.r[29].w[0] + 480u);
    st64((c.r[23].w[0]), c.r[9].d[0]);
    st64((c.r[2].w[0]), c.r[8].d[0]);
    set32(c.r[2], c.r[29].w[0] + 488u);
    c.r[10].d[0] = ld64((c.r[7].w[0] + 104u));
    st64((c.r[2].w[0]), c.r[11].d[0]);
    set32(c.r[2], c.r[29].w[0] + 496u);
    c.r[9].d[0] = ld64((c.r[7].w[0] + 112u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 504u);
    c.r[8].d[0] = ld64((c.r[7].w[0] + 120u));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 128u));
    st64((c.r[2].w[0]), c.r[10].d[0]);
    set32(c.r[2], c.r[29].w[0] + 512u);
    st64((c.r[2].w[0]), c.r[9].d[0]);
    set32(c.r[2], c.r[29].w[0] + 520u);
    c.r[9].d[0] = ld64((c.r[7].w[0] + 136u));
    st64((c.r[2].w[0]), c.r[8].d[0]);
    set32(c.r[2], c.r[29].w[0] + 528u);
    c.r[8].d[0] = ld64((c.r[7].w[0] + 144u));
    st64((c.r[2].w[0]), c.r[3].d[0]);
    set32(c.r[2], c.r[29].w[0] + 536u);
    c.r[3].d[0] = ld64((c.r[7].w[0] + 152u));
    st64((c.r[2].w[0]), c.r[9].d[0]);
    set32(c.r[2], c.r[29].w[0] + 544u);
    st64((c.r[2].w[0]), c.r[8].d[0]);
    set32(c.r[2], c.r[29].w[0] + 552u);
    c.budget -= 79;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E34Cu); st64((c.r[2].w[0]), c.r[3].d[0]);  if (depth < kMaxDepth) unit_0016(c, 74u, depth + 1u); else { c.pc = 0x00259970u; return; } if (c.pc != 0x0026E34Cu) [[unlikely]] return; }
L_0026E34C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E210u | kUnwind; return; } goto L_0026E210; } }
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E368u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0026E368u) [[unlikely]] return; }
L_0026E368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 352u)));  if (t) { goto L_0026E6C8; } }
L_0026E370:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E384u) [[unlikely]] return; }
L_0026E384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 380u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D4BCu | kUnwind; return; } goto L_0026D4BC; } }
L_0026E38C:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E3A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E3A0u) [[unlikely]] return; }
L_0026E3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D6B8u | kUnwind; return; } goto L_0026D6B8; } }
L_0026E3A8:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E3BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E3BCu) [[unlikely]] return; }
L_0026E3BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D8B0u | kUnwind; return; } goto L_0026D8B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D8C0u | kUnwind; return; } goto L_0026D8C0; } }
    c.budget -= 1;
L_0026E3D0:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E3E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E3E4u) [[unlikely]] return; }
L_0026E3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D8E8u | kUnwind; return; } goto L_0026D8E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026D8F8u | kUnwind; return; } goto L_0026D8F8; } }
    c.budget -= 1;
L_0026E3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DC10u | kUnwind; return; } goto L_0026DC10; } }
L_0026E400:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E414u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E414u) [[unlikely]] return; }
L_0026E414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DC48u | kUnwind; return; } goto L_0026DC48; } }
    c.budget -= 1;
L_0026E420:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DD10u | kUnwind; return; } goto L_0026DD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DC68u | kUnwind; return; } goto L_0026DC68; } }
L_0026E430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    ld128((c.r[2].w[0] - 24768u) & ~15u, c.r[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[5]);
    c.r[4].d[0] = ld64((c.r[2].w[0] - 24752u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 1152u), c.r[4].d[0]);
    c.f[0] = ld32((c.r[2].w[0] - 24744u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] - 24740u)));
    st32((c.r[29].w[0] + 1160u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 1164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] - 24738u));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 1166u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DD58u | kUnwind; return; } goto L_0026DD58; } }
L_0026E470:
    set32(c.r[4], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[5], c.r[29].w[0] + 1136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E480u); set32(c.r[6], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_001B(c, 248u, depth + 1u); else { c.pc = 0x0026F0E0u; return; } if (c.pc != 0x0026E480u) [[unlikely]] return; }
L_0026E480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DDE0u | kUnwind; return; } goto L_0026DDE0; } }
L_0026E488:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 5216ull;
    set32(c.r[18], c.r[2].w[0] + c.r[1].w[0]);
    c.budget -= 4;
L_0026E498:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E4A4u); set32(c.r[5], c.r[29].w[0] + 881u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0026E4A4u) [[unlikely]] return; }
L_0026E4A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026E5C0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = c.r[17].d[0] << 56;
    set32(c.r[6], c.r[29].w[0] + 560u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5628u)));
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[7].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E504u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0015(c, 214u, depth + 1u); else { c.pc = 0x00257C70u; return; } if (c.pc != 0x0026E504u) [[unlikely]] return; }
L_0026E504:
    set32(c.r[2], c.r[29].w[0] + 582u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5628u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.budget -= 15;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0026E580; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0026E570; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026E560; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026E588; } }
    c.budget -= 1;
L_0026E560:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1060u), c.r[2].w[0]);  if (t) { goto L_0026E588; } }
    c.budget -= 1;
L_0026E570:
    set32(c.r[2], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1060u), c.r[2].w[0]);  if (t) { goto L_0026E588; } }
    c.budget -= 1;
L_0026E580:
    set32(c.r[2], 0u + 800u);
    st32((c.r[17].w[0] + 1060u), c.r[2].w[0]);
    c.budget -= 2;
L_0026E588:
    set32(c.r[2], ld32((c.r[17].w[0] + 1060u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E594u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0026E594u) [[unlikely]] return; }
L_0026E594:
    st32((c.r[17].w[0] + 1056u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5628u)));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5628u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DDC8u | kUnwind; return; } goto L_0026DDC8; } }
L_0026E5C0:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E498u | kUnwind; return; } goto L_0026E498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DDC8u | kUnwind; return; } goto L_0026DDC8; } }
    c.budget -= 1;
L_0026E5E8:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E5FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E5FCu) [[unlikely]] return; }
L_0026E5FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DE40u | kUnwind; return; } goto L_0026DE40; } }
L_0026E604:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E618u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E618u) [[unlikely]] return; }
L_0026E618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026DFB0u | kUnwind; return; } goto L_0026DFB0; } }
L_0026E620:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E634u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E634u) [[unlikely]] return; }
L_0026E634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E108u | kUnwind; return; } goto L_0026E108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E118u | kUnwind; return; } goto L_0026E118; } }
    c.budget -= 1;
L_0026E648:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E65Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E65Cu) [[unlikely]] return; }
L_0026E65C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E140u | kUnwind; return; } goto L_0026E140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E150u | kUnwind; return; } goto L_0026E150; } }
    c.budget -= 1;
L_0026E670:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E67Cu); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0026E67Cu) [[unlikely]] return; }
L_0026E67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E684u); set32(c.r[4], c.r[29].w[0] + 880u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0026E684u) [[unlikely]] return; }
L_0026E684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E68Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0026E68Cu) [[unlikely]] return; }
L_0026E68C:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E69Cu); set32(c.r[5], c.r[29].w[0] + 881u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0026E69Cu) [[unlikely]] return; }
L_0026E69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E158u | kUnwind; return; } goto L_0026E158; } }
    c.budget -= 1;
L_0026E6A8:
    set32(c.r[4], c.r[29].w[0] + 848u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026E6BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026E6BCu) [[unlikely]] return; }
L_0026E6BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E188u | kUnwind; return; } goto L_0026E188; } }
    c.budget -= 1;
L_0026E6C8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1456u);  c.pc = t; return; }
L_0026E700:
    set32(c.r[29], c.r[29].w[0] - 496u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5628u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0026E8E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[3]);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[3]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[3]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[3]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[3]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[3]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[3]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[3]);
    c.budget -= 59;
L_0026E82C:
    set32(c.r[5], ld32((c.r[7].w[0] + 1064u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026E8C0; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 388u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026E8E8; } }
    c.budget -= 1;
L_0026E848:
    set32(c.r[20], ld32((c.r[19].w[0] - 276u)));
    set32(c.r[6], ld32((c.r[18].w[0] - 284u)));
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld64((c.r[7].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[20].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[20].w[0]);
    st64((c.r[6].w[0]), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] - 276u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0] - 276u), c.r[3].w[0]);  if (t) { goto L_0026E8C0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026E880:
    set32(c.r[3], ld32((c.r[7].w[0] + 1056u)));
    set32(c.r[22], ld32((c.r[25].w[0] - 276u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[21], ld32((c.r[24].w[0] - 284u)));
    c.r[20].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[22], c.r[22].w[0] << 4);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[3].d[0] = ld64((c.r[3].w[0]));
    st64((c.r[21].w[0]), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[15].w[0] - 276u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 16;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[14].w[0] - 276u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E880u | kUnwind; return; } goto L_0026E880; } }
L_0026E8C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5628u)));
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E82Cu | kUnwind; return; } goto L_0026E82C; } }
    c.budget -= 1;
L_0026E8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026EA40; } }
L_0026E8E8:
    set32(c.r[8], ld32((c.r[13].w[0] - 276u)));
    set32(c.r[6], ld32((c.r[12].w[0] - 284u)));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 992u));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st64((c.r[6].w[0]), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[11].w[0] - 276u)));
    set32(c.r[6], ld32((c.r[30].w[0] - 284u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[10].w[0] - 276u), c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[23].w[0] - 276u)));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 1000u));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st64((c.r[6].w[0]), c.r[3].d[0]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[3]);
    set32(c.r[6], ld32((c.r[3].w[0] - 276u)));
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[8], ld32((c.r[3].w[0] - 284u)));
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[3]);
    st32((c.r[3].w[0] - 276u), c.r[6].w[0]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[6]);
    c.r[3].d[0] = ld64((c.r[7].w[0] + 1008u));
    set32(c.r[6], ld32((c.r[6].w[0] - 276u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    st64((c.r[6].w[0]), c.r[3].d[0]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[3]);
    set32(c.r[6], ld32((c.r[3].w[0] - 276u)));
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[8], ld32((c.r[3].w[0] - 284u)));
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[3]);
    st32((c.r[3].w[0] - 276u), c.r[6].w[0]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[6]);
    c.r[3].d[0] = ld64((c.r[7].w[0] + 1016u));
    set32(c.r[6], ld32((c.r[6].w[0] - 276u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    st64((c.r[6].w[0]), c.r[3].d[0]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[3]);
    set32(c.r[6], ld32((c.r[3].w[0] - 276u)));
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[8], ld32((c.r[3].w[0] - 284u)));
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[3]);
    st32((c.r[3].w[0] - 276u), c.r[6].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[6]);
    c.r[3].d[0] = ld64((c.r[7].w[0] + 1024u));
    set32(c.r[6], ld32((c.r[6].w[0] - 276u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    st64((c.r[6].w[0]), c.r[3].d[0]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[3]);
    set32(c.r[6], ld32((c.r[3].w[0] - 276u)));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[8], ld32((c.r[3].w[0] - 284u)));
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);
    st32((c.r[3].w[0] - 276u), c.r[6].w[0]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[6]);
    c.r[3].d[0] = ld64((c.r[7].w[0] + 1032u));
    set32(c.r[6], ld32((c.r[6].w[0] - 276u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    st64((c.r[6].w[0]), c.r[3].d[0]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[6], ld32((c.r[3].w[0] - 276u)));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[8], ld32((c.r[3].w[0] - 284u)));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    st32((c.r[3].w[0] - 276u), c.r[6].w[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[6]);
    c.r[3].d[0] = ld64((c.r[7].w[0] + 1040u));
    set32(c.r[6], ld32((c.r[6].w[0] - 276u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    st64((c.r[6].w[0]), c.r[3].d[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[3].w[0] - 276u)));
    set32(c.r[6], c.r[3].w[0] + 1u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[3]);
    c.budget -= 86;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 276u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026E848u | kUnwind; return; } goto L_0026E848; } }
L_0026EA40:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_0026EA70:
    set32(c.r[29], c.r[29].w[0] - 368u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5629u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0026EB00; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 9;
L_0026EAD4:
    set32(c.r[3], ld32((c.r[6].w[0] + 1064u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026EED8; } }
L_0026EAE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5629u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EAD4u | kUnwind; return; } goto L_0026EAD4; } }
    c.budget -= 1;
L_0026EB00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[10].d[0] = ld64((c.r[3].w[0] + 5488u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[9], ld32((c.r[5].w[0] - 276u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[3].w[0] - 284u)));
    set32(c.r[9], c.r[9].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[8].w[0]), c.r[10].d[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0] - 276u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st32((c.r[6].w[0] - 276u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5629u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5630u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026EBC8; } }
    set32(c.r[3], c.r[5].w[0] << 5);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 14;
L_0026EB98:
    set32(c.r[3], ld32((c.r[7].w[0] + 1064u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026EF58; } }
    c.budget -= 1;
L_0026EBA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5630u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EB98u | kUnwind; return; } goto L_0026EB98; } }
    c.budget -= 1;
L_0026EBC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[14].d[0] = ld64((c.r[3].w[0] + 5584u));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[13], ld32((c.r[5].w[0] - 276u)));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[12], ld32((c.r[3].w[0] - 284u)));
    set32(c.r[13], c.r[13].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[4].w[0] + c.r[18].w[0]);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[4].w[0] + c.r[15].w[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[12].w[0]), c.r[14].d[0]);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[11], ld32((c.r[11].w[0] - 276u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[9].w[0] - 284u)));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[9], c.r[11].w[0] + 1u);
    st32((c.r[10].w[0] - 276u), c.r[9].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[9], c.r[9].w[0] << 4);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[9], c.r[9].w[0] + c.r[21].w[0]);
    set32(c.r[10], c.r[4].w[0] + c.r[10].w[0]);
    st8((c.r[9].w[0] - 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[21], ld32((c.r[8].w[0] - 276u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[21], c.r[21].w[0] - 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[7].w[0] + 5632u), c.r[21].w[0]);
    set32(c.r[22], ld32((c.r[6].w[0] - 276u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[21], ld32((c.r[5].w[0] - 284u)));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 5616u));
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[8]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[7]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[8]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[22], c.r[22].w[0] << 4);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[8]);
    st64((c.r[21].w[0]), c.r[3].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[20], ld32((c.r[20].w[0] - 276u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[16].w[0] - 284u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[8]);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[8]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[5]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[8]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[20].w[0] + 1u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[19].w[0] - 276u), c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] - 276u)));
    c.r[18].d[0] = ld64((c.r[18].w[0] + 5616u));
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[8]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[5]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[5]);
    set32(c.r[16], c.r[16].w[0] << 4);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[5]);
    st64((c.r[3].w[0]), c.r[18].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], ld32((c.r[25].w[0] - 276u)));
    set32(c.r[3], ld32((c.r[13].w[0] - 284u)));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[13], c.r[16].w[0] + 1u);
    st32((c.r[24].w[0] - 276u), c.r[13].w[0]);
    set32(c.r[13], ld32((c.r[14].w[0] - 276u)));
    c.r[15].d[0] = ld64((c.r[15].w[0] + 5616u));
    set32(c.r[13], c.r[13].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    st64((c.r[3].w[0]), c.r[15].d[0]);
    set32(c.r[12], ld32((c.r[12].w[0] - 276u)));
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[3]);
    set32(c.r[12], c.r[12].w[0] + 1u);
    st32((c.r[11].w[0] - 276u), c.r[12].w[0]);
    c.r[11].d[0] = ld64((c.r[10].w[0] + 5616u));
    set32(c.r[3], ld32((c.r[3].w[0] - 284u)));
    set32(c.r[10], ld32((c.r[23].w[0] - 276u)));
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    st64((c.r[3].w[0]), c.r[11].d[0]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[3]);
    set32(c.r[11], ld32((c.r[3].w[0] - 276u)));
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[3]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[10], ld32((c.r[3].w[0] - 284u)));
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    st32((c.r[3].w[0] - 276u), c.r[11].w[0]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[3]);
    c.r[9].d[0] = ld64((c.r[9].w[0] + 5616u));
    set32(c.r[3], ld32((c.r[3].w[0] - 276u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    st64((c.r[3].w[0]), c.r[9].d[0]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[3]);
    set32(c.r[10], ld32((c.r[3].w[0] - 276u)));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[9], ld32((c.r[3].w[0] - 284u)));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[3]);
    st32((c.r[3].w[0] - 276u), c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[30].w[0] - 276u)));
    c.r[8].d[0] = ld64((c.r[8].w[0] + 5616u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[9].w[0] + c.r[3].w[0]);
    st64((c.r[3].w[0]), c.r[8].d[0]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    set32(c.r[9], ld32((c.r[3].w[0] - 276u)));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[8], ld32((c.r[3].w[0] - 284u)));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    st32((c.r[3].w[0] - 276u), c.r[9].w[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[7].d[0] = ld64((c.r[7].w[0] + 5616u));
    set32(c.r[3], ld32((c.r[3].w[0] - 276u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    st64((c.r[3].w[0]), c.r[7].d[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[3].w[0] - 276u)));
    set32(c.r[7], c.r[3].w[0] + 1u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[3]);
    st32((c.r[3].w[0] - 276u), c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5630u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5628u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 168;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026EED0; } }
    set32(c.r[3], c.r[6].w[0] << 5);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 14;
L_0026EEA0:
    set32(c.r[3], ld32((c.r[7].w[0] + 1064u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026EFD8; } }
    c.budget -= 1;
L_0026EEB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5628u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EEA0u | kUnwind; return; } goto L_0026EEA0; } }
    c.budget -= 1;
L_0026EED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026F058; } }
L_0026EED8:
    set32(c.r[17], ld32((c.r[16].w[0] - 276u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[15].w[0] - 284u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[6].w[0]));
    set32(c.r[17], c.r[17].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st64((c.r[5].w[0]), c.r[18].d[0]);
    set32(c.r[5], ld32((c.r[14].w[0] - 276u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[13].w[0] - 276u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EAE0u | kUnwind; return; } goto L_0026EAE0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026EF10:
    set32(c.r[20], ld32((c.r[6].w[0] + 1056u)));
    set32(c.r[19], ld32((c.r[12].w[0] - 276u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[18], ld32((c.r[11].w[0] - 284u)));
    c.r[17].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + c.r[5].w[0]);
    set32(c.r[20], ld32((c.r[20].w[0])));
    set32(c.r[19], c.r[19].w[0] << 4);
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[19].d[0] = ld64((c.r[20].w[0]));
    st64((c.r[18].w[0]), c.r[19].d[0]);
    set32(c.r[18], ld32((c.r[10].w[0] - 276u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[9].w[0] - 276u), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EF10u | kUnwind; return; } goto L_0026EF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EAE0u | kUnwind; return; } goto L_0026EAE0; } }
L_0026EF58:
    set32(c.r[17], ld32((c.r[16].w[0] - 276u)));
    set32(c.r[6], ld32((c.r[15].w[0] - 284u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[18].d[0] = ld64((c.r[7].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    st64((c.r[6].w[0]), c.r[18].d[0]);
    set32(c.r[6], ld32((c.r[14].w[0] - 276u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[13].w[0] - 276u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EBA8u | kUnwind; return; } goto L_0026EBA8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026EF90:
    set32(c.r[20], ld32((c.r[7].w[0] + 1056u)));
    set32(c.r[19], ld32((c.r[12].w[0] - 276u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[18], ld32((c.r[11].w[0] - 284u)));
    c.r[17].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + c.r[6].w[0]);
    set32(c.r[20], ld32((c.r[20].w[0])));
    set32(c.r[19], c.r[19].w[0] << 4);
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[19].d[0] = ld64((c.r[20].w[0]));
    st64((c.r[18].w[0]), c.r[19].d[0]);
    set32(c.r[18], ld32((c.r[10].w[0] - 276u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[9].w[0] - 276u), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EF90u | kUnwind; return; } goto L_0026EF90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EBA8u | kUnwind; return; } goto L_0026EBA8; } }
L_0026EFD8:
    set32(c.r[17], ld32((c.r[16].w[0] - 276u)));
    set32(c.r[5], ld32((c.r[15].w[0] - 284u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[18].d[0] = ld64((c.r[7].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st64((c.r[5].w[0]), c.r[18].d[0]);
    set32(c.r[5], ld32((c.r[14].w[0] - 276u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[13].w[0] - 276u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EEB0u | kUnwind; return; } goto L_0026EEB0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026F010:
    set32(c.r[20], ld32((c.r[7].w[0] + 1056u)));
    set32(c.r[19], ld32((c.r[12].w[0] - 276u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[18], ld32((c.r[11].w[0] - 284u)));
    c.r[17].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + c.r[5].w[0]);
    set32(c.r[20], ld32((c.r[20].w[0])));
    set32(c.r[19], c.r[19].w[0] << 4);
    set32(c.r[18], c.r[18].w[0] + c.r[19].w[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[19].d[0] = ld64((c.r[20].w[0]));
    st64((c.r[18].w[0]), c.r[19].d[0]);
    set32(c.r[18], ld32((c.r[10].w[0] - 276u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[9].w[0] - 276u), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F010u | kUnwind; return; } goto L_0026F010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026EEB0u | kUnwind; return; } goto L_0026EEB0; } }
L_0026F058:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_0026F090:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5628u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0026F0D0; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0026F0AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[5].w[0] + 1064u), 0u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5628u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1072u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F0ACu | kUnwind; return; } goto L_0026F0AC; } }
    c.budget -= 1;
L_0026F0D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026F0E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[7], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], 0u + 9600u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[6].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16380u);
    st32((c.r[6].w[0] + 12u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[6].w[0] + 20u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0026F268; } }
L_0026F118:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026F294; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 20u));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026F370; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026F178; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F170u); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 209u, depth + 1u); else { c.pc = 0x002576D0u; return; } if (c.pc != 0x0026F170u) [[unlikely]] return; }
L_0026F170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[16].w[0] + 20u));  if (t) { goto L_0026F1A8; } }
L_0026F178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F1A4u); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 211u, depth + 1u); else { c.pc = 0x00257C20u; return; } if (c.pc != 0x0026F1A4u) [[unlikely]] return; }
L_0026F1A4:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 20u));
    c.budget -= 1;
L_0026F1A8:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026F3A8; } }
L_0026F1B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 22u));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_0026F218; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0026F20C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026F200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 1060u)));  if (t) { goto L_0026F224; } }
L_0026F200:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1060u), c.r[2].w[0]);  if (t) { goto L_0026F220; } }
L_0026F20C:
    set32(c.r[2], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1060u), c.r[2].w[0]);  if (t) { goto L_0026F220; } }
L_0026F218:
    set32(c.r[2], 0u + 800u);
    st32((c.r[16].w[0] + 1060u), c.r[2].w[0]);
    c.budget -= 2;
L_0026F220:
    set32(c.r[2], ld32((c.r[16].w[0] + 1060u)));
    c.budget -= 1;
L_0026F224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F22Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0026F22Cu) [[unlikely]] return; }
L_0026F22C:
    st32((c.r[16].w[0] + 1056u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 5628u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0026F3CC; } }
L_0026F268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 5630u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 5636u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F118u | kUnwind; return; } goto L_0026F118; } }
L_0026F294:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2A0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0025EED0u; return; } if (c.pc != 0x0026F2A0u) [[unlikely]] return; }
L_0026F2A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026F2FC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2C0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 261u, depth + 1u); else { c.pc = 0x0026F3E0u; return; } if (c.pc != 0x0026F2C0u) [[unlikely]] return; }
L_0026F2C0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 20u));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026F2EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1280u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2ECu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0014(c, 140u, depth + 1u); else { c.pc = 0x00251710u; return; } if (c.pc != 0x0026F2ECu) [[unlikely]] return; }
L_0026F2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F2F4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 94u, depth + 1u); else { c.pc = 0x0025EDF0u; return; } if (c.pc != 0x0026F2F4u) [[unlikely]] return; }
L_0026F2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F1A4u | kUnwind; return; } goto L_0026F1A4; } }
L_0026F2FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F310u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001B(c, 267u, depth + 1u); else { c.pc = 0x0026F530u; return; } if (c.pc != 0x0026F310u) [[unlikely]] return; }
L_0026F310:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F340u); set32(c.r[4], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_0017(c, 67u, depth + 1u); else { c.pc = 0x0025DE20u; return; } if (c.pc != 0x0026F340u) [[unlikely]] return; }
L_0026F340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1068u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F2C0u | kUnwind; return; } goto L_0026F2C0; } }
L_0026F370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F3A0u); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 209u, depth + 1u); else { c.pc = 0x002576D0u; return; } if (c.pc != 0x0026F3A0u) [[unlikely]] return; }
L_0026F3A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F1A4u | kUnwind; return; } goto L_0026F1A4; } }
L_0026F3A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 5644u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F1B4u | kUnwind; return; } goto L_0026F1B4; } }
L_0026F3CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026F3E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[22], c.r[3].w[0] >> 8);
    c.budget -= 16;
    { const bool t = c.r[22].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0026F424; } }
    set32(c.r[22], 0u + 1u);
    c.budget -= 1;
L_0026F424:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 5480u)));
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[16], c.r[5].w[0] >> 8);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[17].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[18], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0026F46C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0026F45C:
    set32(c.r[4], c.r[18].w[0] + c.r[22].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 5480u), c.r[4].w[0]);  if (t) { goto L_0026F4FC; } }
L_0026F46C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F484u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 189u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x0026F484u) [[unlikely]] return; }
L_0026F484:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4A0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 165u, depth + 1u); else { c.pc = 0x0025F870u; return; } if (c.pc != 0x0026F4A0u) [[unlikely]] return; }
L_0026F4A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F4E0u); set32(c.r[4], c.r[21].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 9u, depth + 1u); else { c.pc = 0x00258690u; return; } if (c.pc != 0x0026F4E0u) [[unlikely]] return; }
L_0026F4E0:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F46Cu | kUnwind; return; } goto L_0026F46C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F45Cu | kUnwind; return; } goto L_0026F45C; } }
L_0026F4FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0026F530:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] >> 8);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0026F574; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_0026F574:
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 20u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 22u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));  if (t) { goto L_0026F594; } }
    set32(c.r[2], c.r[2].w[0] + 255u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 2;
L_0026F594:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 19u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026F690; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026F5B4; } }
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 1;
L_0026F5B4:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0026F5C0; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_0026F5C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], ld32((c.r[2].w[0] + 5480u)));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 6;
L_0026F5D8:
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F5D8u | kUnwind; return; } goto L_0026F5D8; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026F698; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 17u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026F620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[29].w[0] + 116u)));  if (t) { goto L_0026F624; } }
L_0026F620:
    set32(c.r[21], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_0026F624:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F63Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 189u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x0026F63Cu) [[unlikely]] return; }
L_0026F63C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0026F6E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0026F648:
    set32(c.r[3], c.r[21].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 5480u), c.r[3].w[0]);
    c.budget -= 3;
L_0026F654:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0026F658:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F688u); set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 9u, depth + 1u); else { c.pc = 0x00258690u; return; } if (c.pc != 0x0026F688u) [[unlikely]] return; }
L_0026F688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0026F708; } }
L_0026F690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] >> 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F5B4u | kUnwind; return; } goto L_0026F5B4; } }
L_0026F698:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F6B8u); st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 189u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x0026F6B8u) [[unlikely]] return; }
L_0026F6B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F654u | kUnwind; return; } goto L_0026F654; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F6DCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 165u, depth + 1u); else { c.pc = 0x0025F870u; return; } if (c.pc != 0x0026F6DCu) [[unlikely]] return; }
L_0026F6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F658u | kUnwind; return; } goto L_0026F658; } }
L_0026F6E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F700u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 165u, depth + 1u); else { c.pc = 0x0025F870u; return; } if (c.pc != 0x0026F700u) [[unlikely]] return; }
L_0026F700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F648u | kUnwind; return; } goto L_0026F648; } }
L_0026F708:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0026F730:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = ld16((c.r[6].w[0] + 20u));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0026F8A0; } }
L_0026F750:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026F8CC; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 20u));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026F94C; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026F7B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7A8u); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 209u, depth + 1u); else { c.pc = 0x002576D0u; return; } if (c.pc != 0x0026F7A8u) [[unlikely]] return; }
L_0026F7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[16].w[0] + 20u));  if (t) { goto L_0026F7E0; } }
L_0026F7B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F7DCu); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 211u, depth + 1u); else { c.pc = 0x00257C20u; return; } if (c.pc != 0x0026F7DCu) [[unlikely]] return; }
L_0026F7DC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 20u));
    c.budget -= 1;
L_0026F7E0:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026F984; } }
L_0026F7EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 22u));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_0026F850; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0026F844; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0026F838; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 1060u)));  if (t) { goto L_0026F85C; } }
L_0026F838:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1060u), c.r[2].w[0]);  if (t) { goto L_0026F858; } }
L_0026F844:
    set32(c.r[2], 0u + 200u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1060u), c.r[2].w[0]);  if (t) { goto L_0026F858; } }
L_0026F850:
    set32(c.r[2], 0u + 800u);
    st32((c.r[16].w[0] + 1060u), c.r[2].w[0]);
    c.budget -= 2;
L_0026F858:
    set32(c.r[2], ld32((c.r[16].w[0] + 1060u)));
    c.budget -= 1;
L_0026F85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F864u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0026F864u) [[unlikely]] return; }
L_0026F864:
    st32((c.r[16].w[0] + 1056u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] + 5628u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);  if (t) { goto L_0026F9A8; } }
L_0026F8A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st8((c.r[3].w[0] + 5630u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 5636u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F750u | kUnwind; return; } goto L_0026F750; } }
L_0026F8CC:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F8D8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0025EED0u; return; } if (c.pc != 0x0026F8D8u) [[unlikely]] return; }
L_0026F8D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_0026F900; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F8F8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 267u, depth + 1u); else { c.pc = 0x0026F530u; return; } if (c.pc != 0x0026F8F8u) [[unlikely]] return; }
L_0026F8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[16].w[0] + 20u));  if (t) { goto L_0026F914; } }
L_0026F900:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F910u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 261u, depth + 1u); else { c.pc = 0x0026F3E0u; return; } if (c.pc != 0x0026F910u) [[unlikely]] return; }
L_0026F910:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 20u));
    c.budget -= 1;
L_0026F914:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026F93C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1280u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F93Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0014(c, 140u, depth + 1u); else { c.pc = 0x00251710u; return; } if (c.pc != 0x0026F93Cu) [[unlikely]] return; }
L_0026F93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F944u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 94u, depth + 1u); else { c.pc = 0x0025EDF0u; return; } if (c.pc != 0x0026F944u) [[unlikely]] return; }
L_0026F944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F7DCu | kUnwind; return; } goto L_0026F7DC; } }
L_0026F94C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026F97Cu); set32(c.r[4], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0015(c, 209u, depth + 1u); else { c.pc = 0x002576D0u; return; } if (c.pc != 0x0026F97Cu) [[unlikely]] return; }
L_0026F97C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F7DCu | kUnwind; return; } goto L_0026F7DC; } }
L_0026F984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5628u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 5644u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026F7ECu | kUnwind; return; } goto L_0026F7EC; } }
L_0026F9A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026F9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0] + 9060u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026FA8C; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30188u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026FA64; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 48u);
    c.r[16].d[0] = c.r[3].d[0] | 5632ull;
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 5632u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], ld32((c.r[3].w[0] - 284u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 10;
L_0026FA24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 9060u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026FAB0; } }
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] - 288u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA5Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0016(c, 21u, depth + 1u); else { c.pc = 0x00258C70u; return; } if (c.pc != 0x0026FA5Cu) [[unlikely]] return; }
L_0026FA5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0026FAB4; } }
L_0026FA64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] | 5632ull;
    set32(c.r[4], c.r[4].w[0] - 288u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 5632u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FA84u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0016(c, 21u, depth + 1u); else { c.pc = 0x00258C70u; return; } if (c.pc != 0x0026FA84u) [[unlikely]] return; }
L_0026FA84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FA24u | kUnwind; return; } goto L_0026FA24; } }
L_0026FA8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 288u);
    set32(c.r[2], ld32((c.r[2].w[0] + 5632u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FAA8u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0016(c, 21u, depth + 1u); else { c.pc = 0x00258C70u; return; } if (c.pc != 0x0026FAA8u) [[unlikely]] return; }
L_0026FAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FA5Cu | kUnwind; return; } goto L_0026FA5C; } }
L_0026FAB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0026FAB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026FAD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32508u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026FB08; } }
L_0026FAE8:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32508u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FAE8u | kUnwind; return; } goto L_0026FAE8; } }
L_0026FB08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026FB10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 1184u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u - 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB34u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0006(c, 140u, depth + 1u); else { c.pc = 0x0021B600u; return; } if (c.pc != 0x0026FB34u) [[unlikely]] return; }
L_0026FB34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FB48u); st32((c.r[3].w[0] + 5640u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 31u, depth + 1u); else { c.pc = 0x0021C468u; return; } if (c.pc != 0x0026FB48u) [[unlikely]] return; }
L_0026FB48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026FB60:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30188u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026FB90; } }
L_0026FB6C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 8u);
    st8((c.r[28].w[0] - 30188u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0] + 15376u), c.r[3].w[0]);
    set_interrupts(c, true);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026FB9C; } }
L_0026FB90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 32508u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FB6Cu | kUnwind; return; } goto L_0026FB6C; } }
L_0026FB9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026FBB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026FC24; } }
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FBF0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026FBF0u) [[unlikely]] return; }
L_0026FBF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0026FC1C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FC1Cu) [[unlikely]] return; }
L_0026FC1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026FC40; } }
L_0026FC24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FC30u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026FC30u) [[unlikely]] return; }
L_0026FC30:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FC1Cu | kUnwind; return; } goto L_0026FC1C; } }
L_0026FC40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026FC60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026FCD4; } }
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCA0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026FCA0u) [[unlikely]] return; }
L_0026FCA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0026FCCC; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FCCCu) [[unlikely]] return; }
L_0026FCCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026FCF0; } }
L_0026FCD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FCE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026FCE0u) [[unlikely]] return; }
L_0026FCE0:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FCCCu | kUnwind; return; } goto L_0026FCCC; } }
L_0026FCF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026FD10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] + 2u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026FD84; } }
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD50u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026FD50u) [[unlikely]] return; }
L_0026FD50:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0026FD7C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FD7Cu) [[unlikely]] return; }
L_0026FD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026FDA0; } }
L_0026FD84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FD90u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026FD90u) [[unlikely]] return; }
L_0026FD90:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FD7Cu | kUnwind; return; } goto L_0026FD7C; } }
L_0026FDA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026FDC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026FE34; } }
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE00u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026FE00u) [[unlikely]] return; }
L_0026FE00:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_0026FE2C; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026FE2Cu) [[unlikely]] return; }
L_0026FE2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0026FE50; } }
L_0026FE34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FE40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0026FE40u) [[unlikely]] return; }
L_0026FE40:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FE2Cu | kUnwind; return; } goto L_0026FE2C; } }
L_0026FE50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026FE70:
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 1056u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 1064u), c.r[3].w[0]);  c.pc = t; return; }
L_0026FEC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[16].w[0] - 30464u);
    c.budget -= 11;
L_0026FEEC:
    c.f[0] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CC90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF10u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0026FF10u) [[unlikely]] return; }
L_0026FF10:
    c.f[2] = c.r[17].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CC90000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF48u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0026FF48u) [[unlikely]] return; }
L_0026FF48:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF54u); st32((c.r[16].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0026FF54u) [[unlikely]] return; }
L_0026FF54:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF60u); st32((c.r[16].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0026FF60u) [[unlikely]] return; }
L_0026FF60:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(65ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FEECu | kUnwind; return; } goto L_0026FEEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x81000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FF84u); c.r[5].d[0] = c.r[2].d[0] | 257ull;  if (depth < kMaxDepth) unit_0016(c, 70u, depth + 1u); else { c.pc = 0x002597F0u; return; } if (c.pc != 0x0026FF84u) [[unlikely]] return; }
L_0026FF84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x14000000u);
    set32(c.r[3], c.r[3].w[0] + 7488u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] >> 3);
    c.r[16].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFA4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 70u, depth + 1u); else { c.pc = 0x002597F0u; return; } if (c.pc != 0x0026FFA4u) [[unlikely]] return; }
L_0026FFA4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 70u, depth + 1u); else { c.pc = 0x002597F0u; return; } if (c.pc != 0x0026FFB0u) [[unlikely]] return; }
L_0026FFB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x6C410000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 24648u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFC8u); c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_0016(c, 70u, depth + 1u); else { c.pc = 0x002597F0u; return; } if (c.pc != 0x0026FFC8u) [[unlikely]] return; }
L_0026FFC8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 30464u);
    c.budget -= 3;
L_0026FFD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026FFE4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 71u, depth + 1u); else { c.pc = 0x00259810u; return; } if (c.pc != 0x0026FFE4u) [[unlikely]] return; }
L_0026FFE4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(260ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026FFD4u | kUnwind; return; } goto L_0026FFD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x64020000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 24640u)));
    c.budget -= 3;
    [[clang::musttail]] return unit_001C(c, 1u, depth);
}

}

#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007D[4096] = {
    1, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 282, 0, 283, 0, 284,
    0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300,
    0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0,
    0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0,
    342, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0,
    0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0,
    0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 436, 0,
    0, 0, 437, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 0, 445, 0, 446, 0, 0, 0,
    447, 0, 448, 0, 0, 0, 449, 0, 450, 0, 0, 0, 451, 0, 452, 0, 0, 0, 453, 0, 454, 0, 0, 0, 455, 0, 456, 0, 0, 0, 457, 0,
};

void unit_007D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F4000;
    case 2u: goto L_003F4004;
    case 3u: goto L_003F4014;
    case 4u: goto L_003F401C;
    case 5u: goto L_003F4030;
    case 6u: goto L_003F404C;
    case 7u: goto L_003F4060;
    case 8u: goto L_003F407C;
    case 9u: goto L_003F4090;
    case 10u: goto L_003F40AC;
    case 11u: goto L_003F40C0;
    case 12u: goto L_003F40DC;
    case 13u: goto L_003F40F0;
    case 14u: goto L_003F410C;
    case 15u: goto L_003F4120;
    case 16u: goto L_003F413C;
    case 17u: goto L_003F4150;
    case 18u: goto L_003F416C;
    case 19u: goto L_003F4180;
    case 20u: goto L_003F419C;
    case 21u: goto L_003F41B0;
    case 22u: goto L_003F41CC;
    case 23u: goto L_003F41E0;
    case 24u: goto L_003F41FC;
    case 25u: goto L_003F4210;
    case 26u: goto L_003F422C;
    case 27u: goto L_003F4240;
    case 28u: goto L_003F425C;
    case 29u: goto L_003F4270;
    case 30u: goto L_003F428C;
    case 31u: goto L_003F42A0;
    case 32u: goto L_003F42BC;
    case 33u: goto L_003F42D0;
    case 34u: goto L_003F42EC;
    case 35u: goto L_003F4300;
    case 36u: goto L_003F431C;
    case 37u: goto L_003F4330;
    case 38u: goto L_003F434C;
    case 39u: goto L_003F4360;
    case 40u: goto L_003F437C;
    case 41u: goto L_003F4390;
    case 42u: goto L_003F43AC;
    case 43u: goto L_003F43C0;
    case 44u: goto L_003F43DC;
    case 45u: goto L_003F43F0;
    case 46u: goto L_003F440C;
    case 47u: goto L_003F4420;
    case 48u: goto L_003F443C;
    case 49u: goto L_003F4450;
    case 50u: goto L_003F446C;
    case 51u: goto L_003F4480;
    case 52u: goto L_003F449C;
    case 53u: goto L_003F44B0;
    case 54u: goto L_003F44CC;
    case 55u: goto L_003F44E0;
    case 56u: goto L_003F44FC;
    case 57u: goto L_003F4510;
    case 58u: goto L_003F452C;
    case 59u: goto L_003F4540;
    case 60u: goto L_003F455C;
    case 61u: goto L_003F4570;
    case 62u: goto L_003F458C;
    case 63u: goto L_003F45A0;
    case 64u: goto L_003F45BC;
    case 65u: goto L_003F45D0;
    case 66u: goto L_003F460C;
    case 67u: goto L_003F4628;
    case 68u: goto L_003F4630;
    case 69u: goto L_003F4668;
    case 70u: goto L_003F46E0;
    case 71u: goto L_003F4700;
    case 72u: goto L_003F475C;
    case 73u: goto L_003F476C;
    case 74u: goto L_003F4790;
    case 75u: goto L_003F47B0;
    case 76u: goto L_003F480C;
    case 77u: goto L_003F481C;
    case 78u: goto L_003F4840;
    case 79u: goto L_003F4860;
    case 80u: goto L_003F48BC;
    case 81u: goto L_003F48CC;
    case 82u: goto L_003F48F0;
    case 83u: goto L_003F4910;
    case 84u: goto L_003F496C;
    case 85u: goto L_003F497C;
    case 86u: goto L_003F49A0;
    case 87u: goto L_003F49C0;
    case 88u: goto L_003F4A1C;
    case 89u: goto L_003F4A2C;
    case 90u: goto L_003F4A50;
    case 91u: goto L_003F4A70;
    case 92u: goto L_003F4ACC;
    case 93u: goto L_003F4ADC;
    case 94u: goto L_003F4B00;
    case 95u: goto L_003F4B44;
    case 96u: goto L_003F4B60;
    case 97u: goto L_003F4B74;
    case 98u: goto L_003F4B88;
    case 99u: goto L_003F4BD4;
    case 100u: goto L_003F4BE4;
    case 101u: goto L_003F4C20;
    case 102u: goto L_003F4C40;
    case 103u: goto L_003F4CA0;
    case 104u: goto L_003F4CB0;
    case 105u: goto L_003F4CD0;
    case 106u: goto L_003F4D14;
    case 107u: goto L_003F4D30;
    case 108u: goto L_003F4D38;
    case 109u: goto L_003F4D70;
    case 110u: goto L_003F4DE0;
    case 111u: goto L_003F4E24;
    case 112u: goto L_003F4E40;
    case 113u: goto L_003F4E48;
    case 114u: goto L_003F4E80;
    case 115u: goto L_003F4EF0;
    case 116u: goto L_003F4F34;
    case 117u: goto L_003F4F50;
    case 118u: goto L_003F4F58;
    case 119u: goto L_003F4F90;
    case 120u: goto L_003F5000;
    case 121u: goto L_003F5044;
    case 122u: goto L_003F5060;
    case 123u: goto L_003F5068;
    case 124u: goto L_003F50A0;
    case 125u: goto L_003F5110;
    case 126u: goto L_003F5140;
    case 127u: goto L_003F517C;
    case 128u: goto L_003F5198;
    case 129u: goto L_003F51A0;
    case 130u: goto L_003F51D8;
    case 131u: goto L_003F5250;
    case 132u: goto L_003F5298;
    case 133u: goto L_003F52B4;
    case 134u: goto L_003F52BC;
    case 135u: goto L_003F52F8;
    case 136u: goto L_003F5370;
    case 137u: goto L_003F53C4;
    case 138u: goto L_003F53E0;
    case 139u: goto L_003F53E8;
    case 140u: goto L_003F5420;
    case 141u: goto L_003F5490;
    case 142u: goto L_003F54D8;
    case 143u: goto L_003F54F4;
    case 144u: goto L_003F54FC;
    case 145u: goto L_003F5538;
    case 146u: goto L_003F55B0;
    case 147u: goto L_003F55F8;
    case 148u: goto L_003F5614;
    case 149u: goto L_003F561C;
    case 150u: goto L_003F5658;
    case 151u: goto L_003F56D0;
    case 152u: goto L_003F5718;
    case 153u: goto L_003F5734;
    case 154u: goto L_003F573C;
    case 155u: goto L_003F5778;
    case 156u: goto L_003F57F0;
    case 157u: goto L_003F5838;
    case 158u: goto L_003F5854;
    case 159u: goto L_003F585C;
    case 160u: goto L_003F5898;
    case 161u: goto L_003F5910;
    case 162u: goto L_003F5958;
    case 163u: goto L_003F5974;
    case 164u: goto L_003F597C;
    case 165u: goto L_003F59B8;
    case 166u: goto L_003F5A30;
    case 167u: goto L_003F5A78;
    case 168u: goto L_003F5A94;
    case 169u: goto L_003F5A9C;
    case 170u: goto L_003F5AD8;
    case 171u: goto L_003F5B50;
    case 172u: goto L_003F5B98;
    case 173u: goto L_003F5BB4;
    case 174u: goto L_003F5BBC;
    case 175u: goto L_003F5BF8;
    case 176u: goto L_003F5C70;
    case 177u: goto L_003F5CB8;
    case 178u: goto L_003F5CD4;
    case 179u: goto L_003F5CDC;
    case 180u: goto L_003F5D18;
    case 181u: goto L_003F5D90;
    case 182u: goto L_003F5DD8;
    case 183u: goto L_003F5DF4;
    case 184u: goto L_003F5DFC;
    case 185u: goto L_003F5E38;
    case 186u: goto L_003F5EB0;
    case 187u: goto L_003F5EF4;
    case 188u: goto L_003F5F10;
    case 189u: goto L_003F5F18;
    case 190u: goto L_003F5F50;
    case 191u: goto L_003F5FC0;
    case 192u: goto L_003F5FE0;
    case 193u: goto L_003F6054;
    case 194u: goto L_003F6064;
    case 195u: goto L_003F6080;
    case 196u: goto L_003F60D0;
    case 197u: goto L_003F60E8;
    case 198u: goto L_003F60FC;
    case 199u: goto L_003F6160;
    case 200u: goto L_003F6170;
    case 201u: goto L_003F61A0;
    case 202u: goto L_003F61E0;
    case 203u: goto L_003F61F8;
    case 204u: goto L_003F620C;
    case 205u: goto L_003F6274;
    case 206u: goto L_003F6284;
    case 207u: goto L_003F62B0;
    case 208u: goto L_003F62CC;
    case 209u: goto L_003F62E0;
    case 210u: goto L_003F6364;
    case 211u: goto L_003F6380;
    case 212u: goto L_003F6388;
    case 213u: goto L_003F63C0;
    case 214u: goto L_003F6430;
    case 215u: goto L_003F6454;
    case 216u: goto L_003F6460;
    case 217u: goto L_003F64E0;
    case 218u: goto L_003F64FC;
    case 219u: goto L_003F6504;
    case 220u: goto L_003F6540;
    case 221u: goto L_003F65B0;
    case 222u: goto L_003F66BC;
    case 223u: goto L_003F66D8;
    case 224u: goto L_003F66E0;
    case 225u: goto L_003F6720;
    case 226u: goto L_003F6790;
    case 227u: goto L_003F6810;
    case 228u: goto L_003F682C;
    case 229u: goto L_003F6834;
    case 230u: goto L_003F6870;
    case 231u: goto L_003F68E0;
    case 232u: goto L_003F69DC;
    case 233u: goto L_003F69F8;
    case 234u: goto L_003F6A00;
    case 235u: goto L_003F6A38;
    case 236u: goto L_003F6AB0;
    case 237u: goto L_003F6AF8;
    case 238u: goto L_003F6B14;
    case 239u: goto L_003F6B1C;
    case 240u: goto L_003F6B58;
    case 241u: goto L_003F6BD0;
    case 242u: goto L_003F6C10;
    case 243u: goto L_003F6C2C;
    case 244u: goto L_003F6C34;
    case 245u: goto L_003F6C70;
    case 246u: goto L_003F6CE0;
    case 247u: goto L_003F6D1C;
    case 248u: goto L_003F6D38;
    case 249u: goto L_003F6D40;
    case 250u: goto L_003F6D78;
    case 251u: goto L_003F6DF0;
    case 252u: goto L_003F6E1C;
    case 253u: goto L_003F6E30;
    case 254u: goto L_003F6E44;
    case 255u: goto L_003F6E58;
    case 256u: goto L_003F6E6C;
    case 257u: goto L_003F6E80;
    case 258u: goto L_003F6E94;
    case 259u: goto L_003F6EA8;
    case 260u: goto L_003F6EBC;
    case 261u: goto L_003F6ED0;
    case 262u: goto L_003F6EE4;
    case 263u: goto L_003F6EF8;
    case 264u: goto L_003F6F0C;
    case 265u: goto L_003F6F20;
    case 266u: goto L_003F6F34;
    case 267u: goto L_003F6F48;
    case 268u: goto L_003F6F5C;
    case 269u: goto L_003F6F70;
    case 270u: goto L_003F6F84;
    case 271u: goto L_003F6F98;
    case 272u: goto L_003F6FAC;
    case 273u: goto L_003F6FC0;
    case 274u: goto L_003F6FD4;
    case 275u: goto L_003F6FE8;
    case 276u: goto L_003F6FFC;
    case 277u: goto L_003F7010;
    case 278u: goto L_003F7024;
    case 279u: goto L_003F7038;
    case 280u: goto L_003F704C;
    case 281u: goto L_003F7060;
    case 282u: goto L_003F706C;
    case 283u: goto L_003F7074;
    case 284u: goto L_003F707C;
    case 285u: goto L_003F7084;
    case 286u: goto L_003F708C;
    case 287u: goto L_003F7094;
    case 288u: goto L_003F709C;
    case 289u: goto L_003F70A4;
    case 290u: goto L_003F70AC;
    case 291u: goto L_003F70B4;
    case 292u: goto L_003F70BC;
    case 293u: goto L_003F70C4;
    case 294u: goto L_003F70CC;
    case 295u: goto L_003F70D4;
    case 296u: goto L_003F70DC;
    case 297u: goto L_003F70E4;
    case 298u: goto L_003F70EC;
    case 299u: goto L_003F70F4;
    case 300u: goto L_003F70FC;
    case 301u: goto L_003F7104;
    case 302u: goto L_003F710C;
    case 303u: goto L_003F7114;
    case 304u: goto L_003F711C;
    case 305u: goto L_003F7124;
    case 306u: goto L_003F712C;
    case 307u: goto L_003F7134;
    case 308u: goto L_003F713C;
    case 309u: goto L_003F7144;
    case 310u: goto L_003F714C;
    case 311u: goto L_003F7150;
    case 312u: goto L_003F7168;
    case 313u: goto L_003F7190;
    case 314u: goto L_003F71C0;
    case 315u: goto L_003F71E4;
    case 316u: goto L_003F71F8;
    case 317u: goto L_003F720C;
    case 318u: goto L_003F7220;
    case 319u: goto L_003F7234;
    case 320u: goto L_003F7248;
    case 321u: goto L_003F725C;
    case 322u: goto L_003F7270;
    case 323u: goto L_003F7284;
    case 324u: goto L_003F7298;
    case 325u: goto L_003F72AC;
    case 326u: goto L_003F72C0;
    case 327u: goto L_003F72D4;
    case 328u: goto L_003F72E8;
    case 329u: goto L_003F72FC;
    case 330u: goto L_003F7310;
    case 331u: goto L_003F7324;
    case 332u: goto L_003F7338;
    case 333u: goto L_003F734C;
    case 334u: goto L_003F7360;
    case 335u: goto L_003F7374;
    case 336u: goto L_003F7388;
    case 337u: goto L_003F739C;
    case 338u: goto L_003F73B0;
    case 339u: goto L_003F73C4;
    case 340u: goto L_003F73D8;
    case 341u: goto L_003F73EC;
    case 342u: goto L_003F7400;
    case 343u: goto L_003F7408;
    case 344u: goto L_003F7420;
    case 345u: goto L_003F7444;
    case 346u: goto L_003F7458;
    case 347u: goto L_003F746C;
    case 348u: goto L_003F7480;
    case 349u: goto L_003F7494;
    case 350u: goto L_003F74A8;
    case 351u: goto L_003F74BC;
    case 352u: goto L_003F74D0;
    case 353u: goto L_003F74E4;
    case 354u: goto L_003F74F8;
    case 355u: goto L_003F750C;
    case 356u: goto L_003F7520;
    case 357u: goto L_003F7534;
    case 358u: goto L_003F7548;
    case 359u: goto L_003F755C;
    case 360u: goto L_003F7570;
    case 361u: goto L_003F7584;
    case 362u: goto L_003F7598;
    case 363u: goto L_003F75AC;
    case 364u: goto L_003F75C0;
    case 365u: goto L_003F75D4;
    case 366u: goto L_003F75E8;
    case 367u: goto L_003F75FC;
    case 368u: goto L_003F7610;
    case 369u: goto L_003F7624;
    case 370u: goto L_003F7638;
    case 371u: goto L_003F764C;
    case 372u: goto L_003F7660;
    case 373u: goto L_003F7670;
    case 374u: goto L_003F7694;
    case 375u: goto L_003F76D0;
    case 376u: goto L_003F76E8;
    case 377u: goto L_003F7700;
    case 378u: goto L_003F7718;
    case 379u: goto L_003F7730;
    case 380u: goto L_003F7744;
    case 381u: goto L_003F7758;
    case 382u: goto L_003F776C;
    case 383u: goto L_003F7784;
    case 384u: goto L_003F779C;
    case 385u: goto L_003F77B0;
    case 386u: goto L_003F77C8;
    case 387u: goto L_003F77E0;
    case 388u: goto L_003F77F8;
    case 389u: goto L_003F780C;
    case 390u: goto L_003F7820;
    case 391u: goto L_003F7838;
    case 392u: goto L_003F7850;
    case 393u: goto L_003F7868;
    case 394u: goto L_003F7880;
    case 395u: goto L_003F7898;
    case 396u: goto L_003F78AC;
    case 397u: goto L_003F78C4;
    case 398u: goto L_003F78DC;
    case 399u: goto L_003F78F4;
    case 400u: goto L_003F790C;
    case 401u: goto L_003F7924;
    case 402u: goto L_003F793C;
    case 403u: goto L_003F7954;
    case 404u: goto L_003F7990;
    case 405u: goto L_003F79D8;
    case 406u: goto L_003F79F0;
    case 407u: goto L_003F7A38;
    case 408u: goto L_003F7A50;
    case 409u: goto L_003F7A60;
    case 410u: goto L_003F7A70;
    case 411u: goto L_003F7AC0;
    case 412u: goto L_003F7AD0;
    case 413u: goto L_003F7B18;
    case 414u: goto L_003F7B30;
    case 415u: goto L_003F7B78;
    case 416u: goto L_003F7B90;
    case 417u: goto L_003F7BD0;
    case 418u: goto L_003F7BE4;
    case 419u: goto L_003F7C10;
    case 420u: goto L_003F7C30;
    case 421u: goto L_003F7C78;
    case 422u: goto L_003F7C90;
    case 423u: goto L_003F7CD8;
    case 424u: goto L_003F7CF0;
    case 425u: goto L_003F7D4C;
    case 426u: goto L_003F7D58;
    case 427u: goto L_003F7D70;
    case 428u: goto L_003F7D80;
    case 429u: goto L_003F7DAC;
    case 430u: goto L_003F7DE0;
    case 431u: goto L_003F7E40;
    case 432u: goto L_003F7E70;
    case 433u: goto L_003F7EB0;
    case 434u: goto L_003F7EE0;
    case 435u: goto L_003F7EF0;
    case 436u: goto L_003F7EF8;
    case 437u: goto L_003F7F08;
    case 438u: goto L_003F7F10;
    case 439u: goto L_003F7F20;
    case 440u: goto L_003F7F28;
    case 441u: goto L_003F7F38;
    case 442u: goto L_003F7F40;
    case 443u: goto L_003F7F50;
    case 444u: goto L_003F7F58;
    case 445u: goto L_003F7F68;
    case 446u: goto L_003F7F70;
    case 447u: goto L_003F7F80;
    case 448u: goto L_003F7F88;
    case 449u: goto L_003F7F98;
    case 450u: goto L_003F7FA0;
    case 451u: goto L_003F7FB0;
    case 452u: goto L_003F7FB8;
    case 453u: goto L_003F7FC8;
    case 454u: goto L_003F7FD0;
    case 455u: goto L_003F7FE0;
    case 456u: goto L_003F7FE8;
    case 457u: goto L_003F7FF8;
    default: bad_entry(c, 0x003F4000u); return;
    }
L_003F4000:
    st32((c.r[29].w[0] + 56u), c.r[9].w[0]);
    c.budget -= 1;
L_003F4004:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4014u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F4014u) [[unlikely]] return; }
L_003F4014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3F9Cu | kUnwind; return; } [[clang::musttail]] return unit_007C(c, 243u, depth); } }
L_003F401C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F4030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F404C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F404Cu);  if (depth < kMaxDepth) unit_0050(c, 19u, depth + 1u); else { c.pc = 0x00340A90u; return; } if (c.pc != 0x003F404Cu) [[unlikely]] return; }
L_003F404C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F407C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F407Cu);  if (depth < kMaxDepth) unit_0050(c, 22u, depth + 1u); else { c.pc = 0x00340C90u; return; } if (c.pc != 0x003F407Cu) [[unlikely]] return; }
L_003F407C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F40AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F40ACu);  if (depth < kMaxDepth) unit_0050(c, 25u, depth + 1u); else { c.pc = 0x00340E90u; return; } if (c.pc != 0x003F40ACu) [[unlikely]] return; }
L_003F40AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F40C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F40DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F40DCu);  if (depth < kMaxDepth) unit_0050(c, 28u, depth + 1u); else { c.pc = 0x00341090u; return; } if (c.pc != 0x003F40DCu) [[unlikely]] return; }
L_003F40DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F40F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F410C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F410Cu);  if (depth < kMaxDepth) unit_0050(c, 31u, depth + 1u); else { c.pc = 0x00341290u; return; } if (c.pc != 0x003F410Cu) [[unlikely]] return; }
L_003F410C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F413C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F413Cu);  if (depth < kMaxDepth) unit_0050(c, 34u, depth + 1u); else { c.pc = 0x00341490u; return; } if (c.pc != 0x003F413Cu) [[unlikely]] return; }
L_003F413C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F416C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F416Cu);  if (depth < kMaxDepth) unit_0050(c, 37u, depth + 1u); else { c.pc = 0x00341690u; return; } if (c.pc != 0x003F416Cu) [[unlikely]] return; }
L_003F416C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F419C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F419Cu);  if (depth < kMaxDepth) unit_0050(c, 48u, depth + 1u); else { c.pc = 0x00341970u; return; } if (c.pc != 0x003F419Cu) [[unlikely]] return; }
L_003F419C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F41B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F41CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F41CCu);  if (depth < kMaxDepth) unit_0050(c, 56u, depth + 1u); else { c.pc = 0x00341A50u; return; } if (c.pc != 0x003F41CCu) [[unlikely]] return; }
L_003F41CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F41E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F41FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F41FCu);  if (depth < kMaxDepth) unit_004F(c, 132u, depth + 1u); else { c.pc = 0x0033F0A0u; return; } if (c.pc != 0x003F41FCu) [[unlikely]] return; }
L_003F41FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F422C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F422Cu);  if (depth < kMaxDepth) unit_0050(c, 4u, depth + 1u); else { c.pc = 0x00340090u; return; } if (c.pc != 0x003F422Cu) [[unlikely]] return; }
L_003F422C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F425C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F425Cu);  if (depth < kMaxDepth) unit_0050(c, 7u, depth + 1u); else { c.pc = 0x00340290u; return; } if (c.pc != 0x003F425Cu) [[unlikely]] return; }
L_003F425C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F428C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F428Cu);  if (depth < kMaxDepth) unit_004F(c, 146u, depth + 1u); else { c.pc = 0x0033F470u; return; } if (c.pc != 0x003F428Cu) [[unlikely]] return; }
L_003F428C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F42A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F42BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F42BCu);  if (depth < kMaxDepth) unit_004F(c, 149u, depth + 1u); else { c.pc = 0x0033F670u; return; } if (c.pc != 0x003F42BCu) [[unlikely]] return; }
L_003F42BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F42D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F42EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F42ECu);  if (depth < kMaxDepth) unit_0050(c, 10u, depth + 1u); else { c.pc = 0x00340490u; return; } if (c.pc != 0x003F42ECu) [[unlikely]] return; }
L_003F42EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F431C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F431Cu);  if (depth < kMaxDepth) unit_0050(c, 13u, depth + 1u); else { c.pc = 0x00340690u; return; } if (c.pc != 0x003F431Cu) [[unlikely]] return; }
L_003F431C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F434C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F434Cu);  if (depth < kMaxDepth) unit_004F(c, 143u, depth + 1u); else { c.pc = 0x0033F270u; return; } if (c.pc != 0x003F434Cu) [[unlikely]] return; }
L_003F434C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F437C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F437Cu);  if (depth < kMaxDepth) unit_0050(c, 16u, depth + 1u); else { c.pc = 0x00340890u; return; } if (c.pc != 0x003F437Cu) [[unlikely]] return; }
L_003F437C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F43AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43ACu);  if (depth < kMaxDepth) unit_004F(c, 164u, depth + 1u); else { c.pc = 0x0033FD50u; return; } if (c.pc != 0x003F43ACu) [[unlikely]] return; }
L_003F43AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F43C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F43DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F43DCu);  if (depth < kMaxDepth) unit_004F(c, 158u, depth + 1u); else { c.pc = 0x0033FC70u; return; } if (c.pc != 0x003F43DCu) [[unlikely]] return; }
L_003F43DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F43F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8024u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F440C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F440Cu);  if (depth < kMaxDepth) unit_00BE(c, 117u, depth + 1u); else { c.pc = 0x004F9D70u; return; } if (c.pc != 0x003F440Cu) [[unlikely]] return; }
L_003F440C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8024u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F443C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F443Cu);  if (depth < kMaxDepth) unit_00BE(c, 122u, depth + 1u); else { c.pc = 0x004F9EC0u; return; } if (c.pc != 0x003F443Cu) [[unlikely]] return; }
L_003F443C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8024u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F446C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F446Cu);  if (depth < kMaxDepth) unit_00BE(c, 125u, depth + 1u); else { c.pc = 0x004F9FC0u; return; } if (c.pc != 0x003F446Cu) [[unlikely]] return; }
L_003F446C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8068u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F449C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F449Cu);  if (depth < kMaxDepth) unit_00C0(c, 107u, depth + 1u); else { c.pc = 0x00501260u; return; } if (c.pc != 0x003F449Cu) [[unlikely]] return; }
L_003F449C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F44B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F44CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F44CCu);  if (depth < kMaxDepth) unit_0050(c, 40u, depth + 1u); else { c.pc = 0x00341890u; return; } if (c.pc != 0x003F44CCu) [[unlikely]] return; }
L_003F44CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F44E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F44FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F44FCu);  if (depth < kMaxDepth) unit_004F(c, 137u, depth + 1u); else { c.pc = 0x0033F160u; return; } if (c.pc != 0x003F44FCu) [[unlikely]] return; }
L_003F44FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F452C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F452Cu);  if (depth < kMaxDepth) unit_004F(c, 152u, depth + 1u); else { c.pc = 0x0033F870u; return; } if (c.pc != 0x003F452Cu) [[unlikely]] return; }
L_003F452C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8020u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F455C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F455Cu);  if (depth < kMaxDepth) unit_004F(c, 155u, depth + 1u); else { c.pc = 0x0033FA70u; return; } if (c.pc != 0x003F455Cu) [[unlikely]] return; }
L_003F455C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F4570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8052u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F458C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F458Cu);  if (depth < kMaxDepth) unit_00BB(c, 254u, depth + 1u); else { c.pc = 0x004EF6A0u; return; } if (c.pc != 0x003F458Cu) [[unlikely]] return; }
L_003F458C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F45A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8052u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F45BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F45BCu);  if (depth < kMaxDepth) unit_00BB(c, 259u, depth + 1u); else { c.pc = 0x004EF940u; return; } if (c.pc != 0x003F45BCu) [[unlikely]] return; }
L_003F45BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F45D0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8032u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F46BC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F46BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F460Cu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00A1(c, 106u, depth + 1u); else { c.pc = 0x004859C0u; return; } if (c.pc != 0x003F460Cu) [[unlikely]] return; }
L_003F460C:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F46BC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4628u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F4628u) [[unlikely]] return; }
L_003F4628:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F4630:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F4658; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F4658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4630u | kUnwind; return; } goto L_003F4630; } }
L_003F4658:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F4670; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F4668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F46C4; } }
L_003F4670:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4668u | kUnwind; return; } goto L_003F4668; } }
L_003F46BC:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F46C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F46E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F4708; } }
L_003F4700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F4774; } }
L_003F4708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 31596u));
    c.f[14] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31595u));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.f[12] = c.f[13];
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.f[13] = c.f[0];
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31594u));
    set32(c.r[5], c.r[29].w[0] + 124u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + 13104u);
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F475Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F475Cu) [[unlikely]] return; }
L_003F475C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F476Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F476Cu) [[unlikely]] return; }
L_003F476C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4700u | kUnwind; return; } goto L_003F4700; } }
L_003F4774:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F4790:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F47B8; } }
L_003F47B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F4824; } }
L_003F47B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 31600u));
    c.f[14] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31599u));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.f[12] = c.f[13];
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.f[13] = c.f[0];
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31598u));
    set32(c.r[5], c.r[29].w[0] + 124u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + 13096u);
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F480Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F480Cu) [[unlikely]] return; }
L_003F480C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F481Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F481Cu) [[unlikely]] return; }
L_003F481C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F47B0u | kUnwind; return; } goto L_003F47B0; } }
L_003F4824:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F4840:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F4868; } }
L_003F4860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F48D4; } }
L_003F4868:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 31604u));
    c.f[14] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31603u));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.f[12] = c.f[13];
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.f[13] = c.f[0];
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31602u));
    set32(c.r[5], c.r[29].w[0] + 124u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + 13088u);
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F48BCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F48BCu) [[unlikely]] return; }
L_003F48BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F48CCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F48CCu) [[unlikely]] return; }
L_003F48CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4860u | kUnwind; return; } goto L_003F4860; } }
L_003F48D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F48F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F4918; } }
L_003F4910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F4984; } }
L_003F4918:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[9].d[0] = ld8((c.r[6].w[0]));
    c.f[14] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.f[12] = c.f[13];
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 124u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.f[13] = c.f[0];
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2u));
    c.r[7].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[8], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    set32(c.r[6], c.r[6].w[0] + 13080u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F496Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F496Cu) [[unlikely]] return; }
L_003F496C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F497Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F497Cu) [[unlikely]] return; }
L_003F497C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4910u | kUnwind; return; } goto L_003F4910; } }
L_003F4984:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F49A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F49C8; } }
L_003F49C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F4A34; } }
L_003F49C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 31608u));
    c.f[14] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31607u));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.f[12] = c.f[13];
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.f[13] = c.f[0];
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31606u));
    set32(c.r[5], c.r[29].w[0] + 124u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + 13080u);
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A1Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F4A1Cu) [[unlikely]] return; }
L_003F4A1C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4A2Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F4A2Cu) [[unlikely]] return; }
L_003F4A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F49C0u | kUnwind; return; } goto L_003F49C0; } }
L_003F4A34:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F4A50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F4A78; } }
L_003F4A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F4AE4; } }
L_003F4A78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 31612u));
    c.f[14] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31611u));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.f[12] = c.f[13];
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.f[13] = c.f[0];
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31610u));
    set32(c.r[5], c.r[29].w[0] + 124u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + 13088u);
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4ACCu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F4ACCu) [[unlikely]] return; }
L_003F4ACC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4ADCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F4ADCu) [[unlikely]] return; }
L_003F4ADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4A70u | kUnwind; return; } goto L_003F4A70; } }
L_003F4AE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F4B00:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.f[23] = c.f[12];
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; c.f[22] = c.f[13];  if (t) { goto L_003F4B4C; } }
L_003F4B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003F4BEC; } }
L_003F4B4C:
    c.r[18].d[0] = ld8((c.r[28].w[0] - 31616u));
    c.r[17].d[0] = ld8((c.r[28].w[0] - 31615u));
    c.r[16].d[0] = ld8((c.r[28].w[0] - 31614u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4B60u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003F4B60u) [[unlikely]] return; }
L_003F4B60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4B74u); c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003F4B74u) [[unlikely]] return; }
L_003F4B74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4B88u); c.f[21] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003F4B88u) [[unlikely]] return; }
L_003F4B88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.f[14] = c.r[2].w[0];
    st8((c.r[29].w[0] + 188u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[29].w[0] + 164u), c.f[21]);
    st8((c.r[29].w[0] + 189u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[14], c.f[0]);
    st8((c.r[29].w[0] + 190u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 188u);
    set32(c.r[6], c.r[6].w[0] + 13072u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 168u), c.f[20]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 8044u)));
    c.f[12] = c.f[22];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4BD4u); c.f[13] = c.f[23];  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F4BD4u) [[unlikely]] return; }
L_003F4BD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4BE4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F4BE4u) [[unlikely]] return; }
L_003F4BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4B44u | kUnwind; return; } goto L_003F4B44; } }
L_003F4BEC:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003F4C20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F4C48; } }
L_003F4C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F4CB8; } }
L_003F4C48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[14] = c.r[3].w[0];
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.f[12] = c.f[13];
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[9].d[0] = ld8((c.r[28].w[0] - 31620u));
    c.f[13] = c.f[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31619u));
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31618u));
    set32(c.r[6], c.r[6].w[0] + 13064u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4CA0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F4CA0u) [[unlikely]] return; }
L_003F4CA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4CB0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F4CB0u) [[unlikely]] return; }
L_003F4CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4C40u | kUnwind; return; } goto L_003F4C40; } }
L_003F4CB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F4CD0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8036u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F4DC4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F4DC4; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D14u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0082(c, 263u, depth + 1u); else { c.pc = 0x0040AAA0u; return; } if (c.pc != 0x003F4D14u) [[unlikely]] return; }
L_003F4D14:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F4DC4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4D30u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F4D30u) [[unlikely]] return; }
L_003F4D30:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F4D38:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F4D60; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F4D60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4D38u | kUnwind; return; } goto L_003F4D38; } }
L_003F4D60:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F4D78; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F4D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F4DCC; } }
L_003F4D78:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4D70u | kUnwind; return; } goto L_003F4D70; } }
L_003F4DC4:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F4DCC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F4DE0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8036u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F4ED4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F4ED4; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4E24u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0082(c, 263u, depth + 1u); else { c.pc = 0x0040AAA0u; return; } if (c.pc != 0x003F4E24u) [[unlikely]] return; }
L_003F4E24:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F4ED4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4E40u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F4E40u) [[unlikely]] return; }
L_003F4E40:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F4E48:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F4E70; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F4E70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4E48u | kUnwind; return; } goto L_003F4E48; } }
L_003F4E70:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F4E88; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F4E80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F4EDC; } }
L_003F4E88:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4E80u | kUnwind; return; } goto L_003F4E80; } }
L_003F4ED4:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F4EDC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F4EF0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8036u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F4FE4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F4FE4; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4F34u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0082(c, 263u, depth + 1u); else { c.pc = 0x0040AAA0u; return; } if (c.pc != 0x003F4F34u) [[unlikely]] return; }
L_003F4F34:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F4FE4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4F50u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F4F50u) [[unlikely]] return; }
L_003F4F50:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F4F58:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F4F80; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F4F80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4F58u | kUnwind; return; } goto L_003F4F58; } }
L_003F4F80:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F4F98; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F4F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F4FEC; } }
L_003F4F98:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F4F90u | kUnwind; return; } goto L_003F4F90; } }
L_003F4FE4:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F4FEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F5000:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8036u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F50F4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F50F4; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5044u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0082(c, 263u, depth + 1u); else { c.pc = 0x0040AAA0u; return; } if (c.pc != 0x003F5044u) [[unlikely]] return; }
L_003F5044:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F50F4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5060u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F5060u) [[unlikely]] return; }
L_003F5060:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F5068:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5090; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5090; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5068u | kUnwind; return; } goto L_003F5068; } }
L_003F5090:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F50A8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F50A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F50FC; } }
L_003F50A8:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F50A0u | kUnwind; return; } goto L_003F50A0; } }
L_003F50F4:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F50FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F5110:
    set32(c.r[2], ld32((c.r[4].w[0] + 8036u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F512C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_003F5130; } }
L_003F512C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F5130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F5140:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8048u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F522C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F522C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F517Cu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00B1(c, 65u, depth + 1u); else { c.pc = 0x004C56C0u; return; } if (c.pc != 0x003F517Cu) [[unlikely]] return; }
L_003F517C:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F522C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5198u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F5198u) [[unlikely]] return; }
L_003F5198:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F51A0:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F51C8; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F51C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F51A0u | kUnwind; return; } goto L_003F51A0; } }
L_003F51C8:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F51E0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F51D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F5234; } }
L_003F51E0:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F51D8u | kUnwind; return; } goto L_003F51D8; } }
L_003F522C:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F5234:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F5250:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8056u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F534C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F534C; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 136u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5298u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009F(c, 107u, depth + 1u); else { c.pc = 0x0047E590u; return; } if (c.pc != 0x003F5298u) [[unlikely]] return; }
L_003F5298:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F534C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F52B4u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F52B4u) [[unlikely]] return; }
L_003F52B4:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F52BC:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F52E8; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F52E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F52BCu | kUnwind; return; } goto L_003F52BC; } }
    c.budget -= 1;
L_003F52E8:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5300; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F52F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F5354; } }
L_003F5300:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F52F8u | kUnwind; return; } goto L_003F52F8; } }
L_003F534C:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F5354:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F5370:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8112u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F5474; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F5474; } }
    c.r[7].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 304u), 0u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 308u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F53C4u); st32((c.r[29].w[0] + 312u), 0u);  if (depth < kMaxDepth) unit_00B6(c, 97u, depth + 1u); else { c.pc = 0x004D96F0u; return; } if (c.pc != 0x003F53C4u) [[unlikely]] return; }
L_003F53C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 320u);  if (t) { goto L_003F5474; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F53E0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F53E0u) [[unlikely]] return; }
L_003F53E0:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F53E8:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5410; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F53E8u | kUnwind; return; } goto L_003F53E8; } }
L_003F5410:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5428; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F5420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F547C; } }
L_003F5428:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5420u | kUnwind; return; } goto L_003F5420; } }
L_003F5474:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F547C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003F5490:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8116u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F558C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F558C; } }
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F54D8u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00B9(c, 197u, depth + 1u); else { c.pc = 0x004E7450u; return; } if (c.pc != 0x003F54D8u) [[unlikely]] return; }
L_003F54D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F558C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F54F4u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F54F4u) [[unlikely]] return; }
L_003F54F4:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F54FC:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5528; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F54FCu | kUnwind; return; } goto L_003F54FC; } }
    c.budget -= 1;
L_003F5528:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5540; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F5538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F5594; } }
L_003F5540:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5538u | kUnwind; return; } goto L_003F5538; } }
L_003F558C:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F5594:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F55B0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8056u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F56AC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F56AC; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 144u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F55F8u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_009F(c, 107u, depth + 1u); else { c.pc = 0x0047E590u; return; } if (c.pc != 0x003F55F8u) [[unlikely]] return; }
L_003F55F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F56AC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5614u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F5614u) [[unlikely]] return; }
L_003F5614:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F561C:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5648; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F561Cu | kUnwind; return; } goto L_003F561C; } }
    c.budget -= 1;
L_003F5648:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5660; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F5658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F56B4; } }
L_003F5660:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5658u | kUnwind; return; } goto L_003F5658; } }
L_003F56AC:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F56B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F56D0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8056u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F57CC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F57CC; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 140u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5718u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_009F(c, 107u, depth + 1u); else { c.pc = 0x0047E590u; return; } if (c.pc != 0x003F5718u) [[unlikely]] return; }
L_003F5718:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F57CC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5734u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F5734u) [[unlikely]] return; }
L_003F5734:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F573C:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5768; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F573Cu | kUnwind; return; } goto L_003F573C; } }
    c.budget -= 1;
L_003F5768:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5780; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F5778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F57D4; } }
L_003F5780:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5778u | kUnwind; return; } goto L_003F5778; } }
L_003F57CC:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F57D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F57F0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8056u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F58EC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F58EC; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 168u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5838u); set32(c.r[8], 0u + 9u);  if (depth < kMaxDepth) unit_009F(c, 110u, depth + 1u); else { c.pc = 0x0047E6F0u; return; } if (c.pc != 0x003F5838u) [[unlikely]] return; }
L_003F5838:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F58EC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5854u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F5854u) [[unlikely]] return; }
L_003F5854:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F585C:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5888; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F585Cu | kUnwind; return; } goto L_003F585C; } }
    c.budget -= 1;
L_003F5888:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F58A0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F5898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F58F4; } }
L_003F58A0:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5898u | kUnwind; return; } goto L_003F5898; } }
L_003F58EC:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F58F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F5910:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8056u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F5A0C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F5A0C; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 164u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5958u); set32(c.r[8], 0u + 8u);  if (depth < kMaxDepth) unit_009F(c, 110u, depth + 1u); else { c.pc = 0x0047E6F0u; return; } if (c.pc != 0x003F5958u) [[unlikely]] return; }
L_003F5958:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F5A0C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5974u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F5974u) [[unlikely]] return; }
L_003F5974:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F597C:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F59A8; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F59A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F597Cu | kUnwind; return; } goto L_003F597C; } }
    c.budget -= 1;
L_003F59A8:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F59C0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F59B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F5A14; } }
L_003F59C0:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F59B8u | kUnwind; return; } goto L_003F59B8; } }
L_003F5A0C:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F5A14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F5A30:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8056u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F5B2C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F5B2C; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 160u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A78u); set32(c.r[8], 0u + 7u);  if (depth < kMaxDepth) unit_009F(c, 110u, depth + 1u); else { c.pc = 0x0047E6F0u; return; } if (c.pc != 0x003F5A78u) [[unlikely]] return; }
L_003F5A78:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F5B2C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5A94u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F5A94u) [[unlikely]] return; }
L_003F5A94:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F5A9C:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5AC8; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5A9Cu | kUnwind; return; } goto L_003F5A9C; } }
    c.budget -= 1;
L_003F5AC8:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5AE0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F5AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F5B34; } }
L_003F5AE0:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5AD8u | kUnwind; return; } goto L_003F5AD8; } }
L_003F5B2C:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F5B34:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F5B50:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8056u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F5C4C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F5C4C; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 156u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5B98u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_009F(c, 110u, depth + 1u); else { c.pc = 0x0047E6F0u; return; } if (c.pc != 0x003F5B98u) [[unlikely]] return; }
L_003F5B98:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F5C4C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5BB4u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F5BB4u) [[unlikely]] return; }
L_003F5BB4:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F5BBC:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5BE8; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5BE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5BBCu | kUnwind; return; } goto L_003F5BBC; } }
    c.budget -= 1;
L_003F5BE8:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5C00; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F5BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F5C54; } }
L_003F5C00:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5BF8u | kUnwind; return; } goto L_003F5BF8; } }
L_003F5C4C:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F5C54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F5C70:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8056u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F5D6C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F5D6C; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 152u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5CB8u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_009F(c, 107u, depth + 1u); else { c.pc = 0x0047E590u; return; } if (c.pc != 0x003F5CB8u) [[unlikely]] return; }
L_003F5CB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F5D6C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5CD4u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F5CD4u) [[unlikely]] return; }
L_003F5CD4:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F5CDC:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5D08; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5CDCu | kUnwind; return; } goto L_003F5CDC; } }
    c.budget -= 1;
L_003F5D08:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5D20; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F5D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F5D74; } }
L_003F5D20:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5D18u | kUnwind; return; } goto L_003F5D18; } }
L_003F5D6C:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F5D74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F5D90:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8056u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F5E8C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F5E8C; } }
    set32(c.r[7], ld32((c.r[5].w[0] + 148u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5DD8u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_009F(c, 107u, depth + 1u); else { c.pc = 0x0047E590u; return; } if (c.pc != 0x003F5DD8u) [[unlikely]] return; }
L_003F5DD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F5E8C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5DF4u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F5DF4u) [[unlikely]] return; }
L_003F5DF4:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F5DFC:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5E28; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5DFCu | kUnwind; return; } goto L_003F5DFC; } }
    c.budget -= 1;
L_003F5E28:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5E40; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F5E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F5E94; } }
L_003F5E40:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5E38u | kUnwind; return; } goto L_003F5E38; } }
L_003F5E8C:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F5E94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F5EB0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8112u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F5FA4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F5FA4; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5EF4u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00B6(c, 97u, depth + 1u); else { c.pc = 0x004D96F0u; return; } if (c.pc != 0x003F5EF4u) [[unlikely]] return; }
L_003F5EF4:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F5FA4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F5F10u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F5F10u) [[unlikely]] return; }
L_003F5F10:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F5F18:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F5F40; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F5F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5F18u | kUnwind; return; } goto L_003F5F18; } }
L_003F5F40:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F5F58; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F5F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F5FAC; } }
L_003F5F58:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5F50u | kUnwind; return; } goto L_003F5F50; } }
L_003F5FA4:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F5FAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F5FC0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[25].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8080u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 108u), c.r[9].w[0]);  if (t) { goto L_003F5FE8; } }
L_003F5FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_003F606C; } }
L_003F5FE8:
    c.r[9].d[0] = ld8((c.r[29].w[0] + 108u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[24].d[0] = ld8((c.r[29].w[0] + 109u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[15].d[0] = ld8((c.r[29].w[0] + 110u));
    set32(c.r[14], 0u + 4u);
    set32(c.r[13], 0u + 8u);
    set32(c.r[12], 0u + 10u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[7], 0u + 5u);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[24].w[0]));
    set32(c.r[9], 0u + 50u);
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st64((c.r[29].w[0] + 8u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[11].d[0]);
    c.r[10].d[0] = c.r[8].d[0] << 48;
    st64((c.r[29].w[0] + 24u), c.r[14].d[0]);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    st64((c.r[29].w[0] + 32u), c.r[13].d[0]);
    c.r[11].d[0] = c.r[25].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[12].d[0]);
    c.r[8].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6054u); st64((c.r[29].w[0] + 48u), c.r[3].d[0]);  if (depth < kMaxDepth) unit_0097(c, 70u, depth + 1u); else { c.pc = 0x0045D150u; return; } if (c.pc != 0x003F6054u) [[unlikely]] return; }
L_003F6054:
    set32(c.r[5], ld32((c.r[16].w[0] + 8080u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6064u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0097(c, 114u, depth + 1u); else { c.pc = 0x0045E440u; return; } if (c.pc != 0x003F6064u) [[unlikely]] return; }
L_003F6064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F5FE0u | kUnwind; return; } goto L_003F5FE0; } }
L_003F606C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003F6080:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8080u)));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 220u), c.r[9].w[0]);  if (t) { goto L_003F60D8; } }
L_003F60D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  if (t) { goto L_003F6178; } }
L_003F60D8:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60E8u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F60E8u) [[unlikely]] return; }
L_003F60E8:
    c.r[23].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 50u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F60FCu); set32(c.r[6], 0u + 100u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F60FCu) [[unlikely]] return; }
L_003F60FC:
    c.r[8].d[0] = c.r[2].d[0] & 65535ull;
    c.r[12].d[0] = ld8((c.r[29].w[0] + 220u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.r[10].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 221u));
    c.f[12] = c.r[2].w[0];
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 222u));
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[11].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[9], 0u + 50u);
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st64((c.r[29].w[0] + 8u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 24u), 0ull);
    st64((c.r[29].w[0] + 32u), 0ull);
    st64((c.r[29].w[0] + 40u), 0ull);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6160u); st64((c.r[29].w[0] + 48u), 0ull);  if (depth < kMaxDepth) unit_0097(c, 70u, depth + 1u); else { c.pc = 0x0045D150u; return; } if (c.pc != 0x003F6160u) [[unlikely]] return; }
L_003F6160:
    set32(c.r[5], ld32((c.r[20].w[0] + 8080u)));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6170u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0097(c, 114u, depth + 1u); else { c.pc = 0x0045E440u; return; } if (c.pc != 0x003F6170u) [[unlikely]] return; }
L_003F6170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F60D0u | kUnwind; return; } goto L_003F60D0; } }
L_003F6178:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F61A0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8080u)));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 188u), c.r[9].w[0]);  if (t) { goto L_003F61E8; } }
L_003F61E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_003F628C; } }
L_003F61E8:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F61F8u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F61F8u) [[unlikely]] return; }
L_003F61F8:
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F620Cu); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F620Cu) [[unlikely]] return; }
L_003F620C:
    c.r[14].d[0] = ld8((c.r[29].w[0] + 188u));
    c.r[8].d[0] = c.r[2].d[0] & 65535ull;
    c.r[13].d[0] = ld8((c.r[29].w[0] + 189u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.r[12].d[0] = ld8((c.r[29].w[0] + 190u));
    c.r[2].d[0] = c.r[2].d[0] | 28836ull;
    c.r[10].d[0] = c.r[16].d[0] << 48;
    set32(c.r[3], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[11].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], c.r[29].w[0] + 192u);
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[9], 0u + 50u);
    st64((c.r[29].w[0] + 16u), 0ull);
    st64((c.r[29].w[0] + 24u), 0ull);
    st64((c.r[29].w[0] + 32u), 0ull);
    st64((c.r[29].w[0] + 40u), 0ull);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6274u); st64((c.r[29].w[0] + 48u), 0ull);  if (depth < kMaxDepth) unit_0097(c, 70u, depth + 1u); else { c.pc = 0x0045D150u; return; } if (c.pc != 0x003F6274u) [[unlikely]] return; }
L_003F6274:
    set32(c.r[5], ld32((c.r[20].w[0] + 8080u)));
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6284u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0097(c, 114u, depth + 1u); else { c.pc = 0x0045E440u; return; } if (c.pc != 0x003F6284u) [[unlikely]] return; }
L_003F6284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F61E0u | kUnwind; return; } goto L_003F61E0; } }
L_003F628C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_003F62B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8084u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F62CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F62CCu);  if (depth < kMaxDepth) unit_00B0(c, 180u, depth + 1u); else { c.pc = 0x004C2020u; return; } if (c.pc != 0x003F62CCu) [[unlikely]] return; }
L_003F62CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F62E0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8120u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6414; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F6414; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 9782u));
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[3], ld32((c.r[3].w[0] + 9792u)));
    st8((c.r[29].w[0] + 308u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[29].w[0] + 304u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[29].w[0] + 310u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 9784u));
    st32((c.r[29].w[0] + 320u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[29].w[0] + 312u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 9788u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[2].w[0] + 9796u));
    st32((c.r[29].w[0] + 316u), c.f[1]);
    st32((c.r[29].w[0] + 324u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8120u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6364u); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00BA(c, 150u, depth + 1u); else { c.pc = 0x004EB370u; return; } if (c.pc != 0x003F6364u) [[unlikely]] return; }
L_003F6364:
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 336u);  if (t) { goto L_003F6414; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6380u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F6380u) [[unlikely]] return; }
L_003F6380:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F6388:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F63B0; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F63B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6388u | kUnwind; return; } goto L_003F6388; } }
L_003F63B0:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F63C8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F63C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F641C; } }
L_003F63C8:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F63C0u | kUnwind; return; } goto L_003F63C0; } }
L_003F6414:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F641C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_003F6430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 8124u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003F6454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6454u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_00BB(c, 189u, depth + 1u); else { c.pc = 0x004EE480u; return; } if (c.pc != 0x003F6454u) [[unlikely]] return; }
L_003F6454:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F6460:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8072u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6594; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F6594; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 304u), c.r[5].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 9748u));
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[29].w[0] + 308u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 9750u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[29].w[0] + 310u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 9752u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 9756u)));
    st32((c.r[29].w[0] + 312u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 316u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 9760u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8072u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F64E0u); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0093(c, 92u, depth + 1u); else { c.pc = 0x0044DB60u; return; } if (c.pc != 0x003F64E0u) [[unlikely]] return; }
L_003F64E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 336u);  if (t) { goto L_003F6594; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F64FCu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F64FCu) [[unlikely]] return; }
L_003F64FC:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F6504:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F6530; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F6530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6504u | kUnwind; return; } goto L_003F6504; } }
    c.budget -= 1;
L_003F6530:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F6548; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F6540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F659C; } }
L_003F6548:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6540u | kUnwind; return; } goto L_003F6540; } }
L_003F6594:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F659C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_003F65B0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8100u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6708; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F6708; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[10].d[0] = ld16((c.r[2].w[0] + 9684u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[9].d[0] = ld16((c.r[3].w[0] + 9686u));
    c.r[7].d[0] = ld8((c.r[28].w[0] - 31628u));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 9718u));
    st32((c.r[29].w[0] + 336u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 304u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[29].w[0] + 340u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 9688u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[8], ld32((c.r[3].w[0] + 9692u)));
    st8((c.r[29].w[0] + 356u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st16((c.r[29].w[0] + 310u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[7].d[0] = ld8((c.r[28].w[0] - 31627u));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 31623u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[29].w[0] + 342u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 9696u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 344u), c.f[2]);
    st32((c.r[29].w[0] + 348u), c.r[8].w[0]);
    st8((c.r[29].w[0] + 357u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 325u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 9716u));
    st32((c.r[29].w[0] + 352u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[29].w[0] + 308u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 9720u));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 31626u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[29].w[0] + 358u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 9728u));
    st32((c.r[29].w[0] + 312u), c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0] + 9724u)));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31625u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31624u));
    st8((c.r[29].w[0] + 359u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31622u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31621u));
    st8((c.r[29].w[0] + 326u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 49;
    { const bool t = c.r[6].d[0] == 0ull; st8((c.r[29].w[0] + 327u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003F66AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[29].w[0] + 304u);  if (t) { goto L_003F66B0; } }
L_003F66AC:
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_003F66B0:
    set32(c.r[5], ld32((c.r[17].w[0] + 8100u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F66BCu); set32(c.r[4], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_00AF(c, 74u, depth + 1u); else { c.pc = 0x004BD580u; return; } if (c.pc != 0x003F66BCu) [[unlikely]] return; }
L_003F66BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 368u);  if (t) { goto L_003F6708; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F66D8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F66D8u) [[unlikely]] return; }
L_003F66D8:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F66E0:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F6710; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F6710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F66E0u | kUnwind; return; } goto L_003F66E0; } }
L_003F6708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F6774; } }
L_003F6710:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F6728; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F6720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F6778; } }
L_003F6728:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6720u | kUnwind; return; } goto L_003F6720; } }
L_003F6774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003F6778:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_003F6790:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8100u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F68C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F68C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 304u), c.r[5].w[0]);
    c.r[7].d[0] = ld16((c.r[2].w[0] + 9652u));
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[29].w[0] + 308u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 9654u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st16((c.r[29].w[0] + 310u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 9656u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 9660u)));
    st32((c.r[29].w[0] + 312u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[29].w[0] + 316u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 9664u));
    st32((c.r[29].w[0] + 320u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8104u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6810u); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00AF(c, 181u, depth + 1u); else { c.pc = 0x004BEEC0u; return; } if (c.pc != 0x003F6810u) [[unlikely]] return; }
L_003F6810:
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 336u);  if (t) { goto L_003F68C4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F682Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F682Cu) [[unlikely]] return; }
L_003F682C:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F6834:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F6860; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F6860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6834u | kUnwind; return; } goto L_003F6834; } }
    c.budget -= 1;
L_003F6860:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F6878; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F6870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F68CC; } }
L_003F6878:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6870u | kUnwind; return; } goto L_003F6870; } }
L_003F68C4:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F68CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_003F68E0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[13].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[12].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8016u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6A8C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F6A8C; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003F69C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8012u)));
    c.r[4].d[0] = c.r[13].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[6] = 0u;
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[7] = ld32((c.r[2].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[6]) == fp::key(c.f[7]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[6].w[0] + 2432u);  if (t) { goto L_003F69C0; } }
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[29].w[0] + 312u), c.f[4]);
    st32((c.r[29].w[0] + 308u), c.f[2]);
    st32((c.r[29].w[0] + 304u), c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[7]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F69C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003F6A90; } }
L_003F69C0:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 8016u)));
    c.r[8].d[0] = c.r[12].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F69DCu); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_007B(c, 119u, depth + 1u); else { c.pc = 0x003EE5E0u; return; } if (c.pc != 0x003F69DCu) [[unlikely]] return; }
L_003F69DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 320u);  if (t) { goto L_003F6A8C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F69F8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F69F8u) [[unlikely]] return; }
L_003F69F8:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F6A00:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F6A28; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F6A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6A00u | kUnwind; return; } goto L_003F6A00; } }
L_003F6A28:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F6A40; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F6A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F6A94; } }
L_003F6A40:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6A38u | kUnwind; return; } goto L_003F6A38; } }
L_003F6A8C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F6A90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003F6A94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003F6AB0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8060u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6BAC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F6BAC; } }
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6AF8u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_008A(c, 88u, depth + 1u); else { c.pc = 0x00429C70u; return; } if (c.pc != 0x003F6AF8u) [[unlikely]] return; }
L_003F6AF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F6BAC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6B14u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F6B14u) [[unlikely]] return; }
L_003F6B14:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F6B1C:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F6B48; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F6B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6B1Cu | kUnwind; return; } goto L_003F6B1C; } }
    c.budget -= 1;
L_003F6B48:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F6B60; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F6B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F6BB4; } }
L_003F6B60:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6B58u | kUnwind; return; } goto L_003F6B58; } }
L_003F6BAC:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F6BB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F6BD0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8060u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6CC4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F6CC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6C10u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_008A(c, 85u, depth + 1u); else { c.pc = 0x00429BC0u; return; } if (c.pc != 0x003F6C10u) [[unlikely]] return; }
L_003F6C10:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F6CC4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6C2Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F6C2Cu) [[unlikely]] return; }
L_003F6C2C:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F6C34:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F6C60; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F6C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6C34u | kUnwind; return; } goto L_003F6C34; } }
    c.budget -= 1;
L_003F6C60:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F6C78; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F6C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F6CCC; } }
L_003F6C78:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6C70u | kUnwind; return; } goto L_003F6C70; } }
L_003F6CC4:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F6CCC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F6CE0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8040u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F6DCC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F6DCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6D1Cu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0051(c, 155u, depth + 1u); else { c.pc = 0x00346160u; return; } if (c.pc != 0x003F6D1Cu) [[unlikely]] return; }
L_003F6D1C:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F6DCC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6D38u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F6D38u) [[unlikely]] return; }
L_003F6D38:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F6D40:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F6D68; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F6D68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6D40u | kUnwind; return; } goto L_003F6D40; } }
L_003F6D68:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F6D80; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F6D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F6DD4; } }
L_003F6D80:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F6D78u | kUnwind; return; } goto L_003F6D78; } }
L_003F6DCC:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F6DD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F6DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8012u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6E1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E1Cu);  if (depth < kMaxDepth) unit_007C(c, 99u, depth + 1u); else { c.pc = 0x003F0D10u; return; } if (c.pc != 0x003F6E1Cu) [[unlikely]] return; }
L_003F6E1C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8016u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E30u);  if (depth < kMaxDepth) unit_007B(c, 175u, depth + 1u); else { c.pc = 0x003EF720u; return; } if (c.pc != 0x003F6E30u) [[unlikely]] return; }
L_003F6E30:
    set32(c.r[4], ld32((c.r[17].w[0] + 8020u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6E44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E44u);  if (depth < kMaxDepth) unit_0050(c, 76u, depth + 1u); else { c.pc = 0x00341FA0u; return; } if (c.pc != 0x003F6E44u) [[unlikely]] return; }
L_003F6E44:
    set32(c.r[4], ld32((c.r[17].w[0] + 8024u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E58u);  if (depth < kMaxDepth) unit_00BE(c, 145u, depth + 1u); else { c.pc = 0x004FA410u; return; } if (c.pc != 0x003F6E58u) [[unlikely]] return; }
L_003F6E58:
    set32(c.r[4], ld32((c.r[17].w[0] + 8028u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6E6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E6Cu);  if (depth < kMaxDepth) unit_009D(c, 125u, depth + 1u); else { c.pc = 0x00476560u; return; } if (c.pc != 0x003F6E6Cu) [[unlikely]] return; }
L_003F6E6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8032u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E80u);  if (depth < kMaxDepth) unit_00A1(c, 142u, depth + 1u); else { c.pc = 0x004861A0u; return; } if (c.pc != 0x003F6E80u) [[unlikely]] return; }
L_003F6E80:
    set32(c.r[4], ld32((c.r[17].w[0] + 8036u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6E94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6E94u);  if (depth < kMaxDepth) unit_0082(c, 298u, depth + 1u); else { c.pc = 0x0040B170u; return; } if (c.pc != 0x003F6E94u) [[unlikely]] return; }
L_003F6E94:
    set32(c.r[4], ld32((c.r[17].w[0] + 8040u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6EA8u);  if (depth < kMaxDepth) unit_0051(c, 175u, depth + 1u); else { c.pc = 0x003465E0u; return; } if (c.pc != 0x003F6EA8u) [[unlikely]] return; }
L_003F6EA8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8044u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6EBCu);  if (depth < kMaxDepth) unit_0087(c, 155u, depth + 1u); else { c.pc = 0x0041EC50u; return; } if (c.pc != 0x003F6EBCu) [[unlikely]] return; }
L_003F6EBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 8088u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6ED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6ED0u);  if (depth < kMaxDepth) unit_00A0(c, 123u, depth + 1u); else { c.pc = 0x00481FC0u; return; } if (c.pc != 0x003F6ED0u) [[unlikely]] return; }
L_003F6ED0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8092u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6EE4u);  if (depth < kMaxDepth) unit_00A2(c, 80u, depth + 1u); else { c.pc = 0x00489420u; return; } if (c.pc != 0x003F6EE4u) [[unlikely]] return; }
L_003F6EE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8048u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6EF8u);  if (depth < kMaxDepth) unit_00B1(c, 70u, depth + 1u); else { c.pc = 0x004C5810u; return; } if (c.pc != 0x003F6EF8u) [[unlikely]] return; }
L_003F6EF8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8052u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6F0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F0Cu);  if (depth < kMaxDepth) unit_00BB(c, 273u, depth + 1u); else { c.pc = 0x004EFE20u; return; } if (c.pc != 0x003F6F0Cu) [[unlikely]] return; }
L_003F6F0C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8056u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F20u);  if (depth < kMaxDepth) unit_009F(c, 120u, depth + 1u); else { c.pc = 0x0047EB40u; return; } if (c.pc != 0x003F6F20u) [[unlikely]] return; }
L_003F6F20:
    set32(c.r[4], ld32((c.r[17].w[0] + 8060u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6F34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F34u);  if (depth < kMaxDepth) unit_008A(c, 106u, depth + 1u); else { c.pc = 0x00429FF0u; return; } if (c.pc != 0x003F6F34u) [[unlikely]] return; }
L_003F6F34:
    set32(c.r[4], ld32((c.r[17].w[0] + 8064u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6F48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F48u);  if (depth < kMaxDepth) unit_008A(c, 191u, depth + 1u); else { c.pc = 0x0042B360u; return; } if (c.pc != 0x003F6F48u) [[unlikely]] return; }
L_003F6F48:
    set32(c.r[4], ld32((c.r[17].w[0] + 8068u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6F5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F5Cu);  if (depth < kMaxDepth) unit_00C0(c, 132u, depth + 1u); else { c.pc = 0x00501790u; return; } if (c.pc != 0x003F6F5Cu) [[unlikely]] return; }
L_003F6F5C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8072u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F70u);  if (depth < kMaxDepth) unit_0093(c, 110u, depth + 1u); else { c.pc = 0x0044DFC0u; return; } if (c.pc != 0x003F6F70u) [[unlikely]] return; }
L_003F6F70:
    set32(c.r[4], ld32((c.r[17].w[0] + 8076u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6F84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F84u);  if (depth < kMaxDepth) unit_0053(c, 151u, depth + 1u); else { c.pc = 0x0034EC10u; return; } if (c.pc != 0x003F6F84u) [[unlikely]] return; }
L_003F6F84:
    set32(c.r[4], ld32((c.r[17].w[0] + 8080u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6F98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6F98u);  if (depth < kMaxDepth) unit_0097(c, 130u, depth + 1u); else { c.pc = 0x0045E7E0u; return; } if (c.pc != 0x003F6F98u) [[unlikely]] return; }
L_003F6F98:
    set32(c.r[4], ld32((c.r[17].w[0] + 8084u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6FAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FACu);  if (depth < kMaxDepth) unit_00B0(c, 219u, depth + 1u); else { c.pc = 0x004C2AB0u; return; } if (c.pc != 0x003F6FACu) [[unlikely]] return; }
L_003F6FAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 8096u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6FC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FC0u);  if (depth < kMaxDepth) unit_00A8(c, 6u, depth + 1u); else { c.pc = 0x004A0090u; return; } if (c.pc != 0x003F6FC0u) [[unlikely]] return; }
L_003F6FC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6FD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FD4u);  if (depth < kMaxDepth) unit_00AF(c, 92u, depth + 1u); else { c.pc = 0x004BD9C0u; return; } if (c.pc != 0x003F6FD4u) [[unlikely]] return; }
L_003F6FD4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8104u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6FE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FE8u);  if (depth < kMaxDepth) unit_00AF(c, 199u, depth + 1u); else { c.pc = 0x004BF310u; return; } if (c.pc != 0x003F6FE8u) [[unlikely]] return; }
L_003F6FE8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F6FFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F6FFCu);  if (depth < kMaxDepth) unit_00A8(c, 214u, depth + 1u); else { c.pc = 0x004A31B0u; return; } if (c.pc != 0x003F6FFCu) [[unlikely]] return; }
L_003F6FFC:
    set32(c.r[4], ld32((c.r[17].w[0] + 8112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7010u);  if (depth < kMaxDepth) unit_00B6(c, 107u, depth + 1u); else { c.pc = 0x004D9910u; return; } if (c.pc != 0x003F7010u) [[unlikely]] return; }
L_003F7010:
    set32(c.r[4], ld32((c.r[17].w[0] + 8116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7024u);  if (depth < kMaxDepth) unit_00B9(c, 208u, depth + 1u); else { c.pc = 0x004E77C0u; return; } if (c.pc != 0x003F7024u) [[unlikely]] return; }
L_003F7024:
    set32(c.r[4], ld32((c.r[17].w[0] + 8120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7038; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7038u);  if (depth < kMaxDepth) unit_00BA(c, 168u, depth + 1u); else { c.pc = 0x004EB7D0u; return; } if (c.pc != 0x003F7038u) [[unlikely]] return; }
L_003F7038:
    set32(c.r[4], ld32((c.r[17].w[0] + 8124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F704C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F704Cu);  if (depth < kMaxDepth) unit_00BB(c, 211u, depth + 1u); else { c.pc = 0x004EEB30u; return; } if (c.pc != 0x003F704Cu) [[unlikely]] return; }
L_003F704C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7060u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003F7060u) [[unlikely]] return; }
L_003F7060:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_003F7064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F706Cu); set32(c.r[4], c.r[17].w[0] + 8012u);  if (depth < kMaxDepth) unit_007E(c, 266u, depth + 1u); else { c.pc = 0x003F9EF0u; return; } if (c.pc != 0x003F706Cu) [[unlikely]] return; }
L_003F706C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7074u); set32(c.r[4], c.r[17].w[0] + 8016u);  if (depth < kMaxDepth) unit_007E(c, 264u, depth + 1u); else { c.pc = 0x003F9EA0u; return; } if (c.pc != 0x003F7074u) [[unlikely]] return; }
L_003F7074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F707Cu); set32(c.r[4], c.r[17].w[0] + 8020u);  if (depth < kMaxDepth) unit_007E(c, 261u, depth + 1u); else { c.pc = 0x003F9E20u; return; } if (c.pc != 0x003F707Cu) [[unlikely]] return; }
L_003F707C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7084u); set32(c.r[4], c.r[17].w[0] + 8024u);  if (depth < kMaxDepth) unit_007E(c, 258u, depth + 1u); else { c.pc = 0x003F9DA0u; return; } if (c.pc != 0x003F7084u) [[unlikely]] return; }
L_003F7084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F708Cu); set32(c.r[4], c.r[17].w[0] + 8028u);  if (depth < kMaxDepth) unit_007E(c, 255u, depth + 1u); else { c.pc = 0x003F9D20u; return; } if (c.pc != 0x003F708Cu) [[unlikely]] return; }
L_003F708C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7094u); set32(c.r[4], c.r[17].w[0] + 8032u);  if (depth < kMaxDepth) unit_007E(c, 252u, depth + 1u); else { c.pc = 0x003F9CA0u; return; } if (c.pc != 0x003F7094u) [[unlikely]] return; }
L_003F7094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F709Cu); set32(c.r[4], c.r[17].w[0] + 8036u);  if (depth < kMaxDepth) unit_007E(c, 249u, depth + 1u); else { c.pc = 0x003F9C20u; return; } if (c.pc != 0x003F709Cu) [[unlikely]] return; }
L_003F709C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70A4u); set32(c.r[4], c.r[17].w[0] + 8040u);  if (depth < kMaxDepth) unit_007E(c, 246u, depth + 1u); else { c.pc = 0x003F9BA0u; return; } if (c.pc != 0x003F70A4u) [[unlikely]] return; }
L_003F70A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70ACu); set32(c.r[4], c.r[17].w[0] + 8044u);  if (depth < kMaxDepth) unit_007E(c, 243u, depth + 1u); else { c.pc = 0x003F9B20u; return; } if (c.pc != 0x003F70ACu) [[unlikely]] return; }
L_003F70AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70B4u); set32(c.r[4], c.r[17].w[0] + 8088u);  if (depth < kMaxDepth) unit_007E(c, 240u, depth + 1u); else { c.pc = 0x003F9AA0u; return; } if (c.pc != 0x003F70B4u) [[unlikely]] return; }
L_003F70B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70BCu); set32(c.r[4], c.r[17].w[0] + 8092u);  if (depth < kMaxDepth) unit_007E(c, 237u, depth + 1u); else { c.pc = 0x003F9A20u; return; } if (c.pc != 0x003F70BCu) [[unlikely]] return; }
L_003F70BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70C4u); set32(c.r[4], c.r[17].w[0] + 8048u);  if (depth < kMaxDepth) unit_007E(c, 234u, depth + 1u); else { c.pc = 0x003F99A0u; return; } if (c.pc != 0x003F70C4u) [[unlikely]] return; }
L_003F70C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70CCu); set32(c.r[4], c.r[17].w[0] + 8052u);  if (depth < kMaxDepth) unit_007E(c, 231u, depth + 1u); else { c.pc = 0x003F9920u; return; } if (c.pc != 0x003F70CCu) [[unlikely]] return; }
L_003F70CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70D4u); set32(c.r[4], c.r[17].w[0] + 8056u);  if (depth < kMaxDepth) unit_007E(c, 228u, depth + 1u); else { c.pc = 0x003F98A0u; return; } if (c.pc != 0x003F70D4u) [[unlikely]] return; }
L_003F70D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70DCu); set32(c.r[4], c.r[17].w[0] + 8060u);  if (depth < kMaxDepth) unit_007E(c, 225u, depth + 1u); else { c.pc = 0x003F9820u; return; } if (c.pc != 0x003F70DCu) [[unlikely]] return; }
L_003F70DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70E4u); set32(c.r[4], c.r[17].w[0] + 8064u);  if (depth < kMaxDepth) unit_007E(c, 223u, depth + 1u); else { c.pc = 0x003F97D0u; return; } if (c.pc != 0x003F70E4u) [[unlikely]] return; }
L_003F70E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70ECu); set32(c.r[4], c.r[17].w[0] + 8068u);  if (depth < kMaxDepth) unit_007E(c, 220u, depth + 1u); else { c.pc = 0x003F9750u; return; } if (c.pc != 0x003F70ECu) [[unlikely]] return; }
L_003F70EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70F4u); set32(c.r[4], c.r[17].w[0] + 8072u);  if (depth < kMaxDepth) unit_007E(c, 218u, depth + 1u); else { c.pc = 0x003F9700u; return; } if (c.pc != 0x003F70F4u) [[unlikely]] return; }
L_003F70F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F70FCu); set32(c.r[4], c.r[17].w[0] + 8076u);  if (depth < kMaxDepth) unit_007E(c, 216u, depth + 1u); else { c.pc = 0x003F96B0u; return; } if (c.pc != 0x003F70FCu) [[unlikely]] return; }
L_003F70FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7104u); set32(c.r[4], c.r[17].w[0] + 8080u);  if (depth < kMaxDepth) unit_007E(c, 214u, depth + 1u); else { c.pc = 0x003F9660u; return; } if (c.pc != 0x003F7104u) [[unlikely]] return; }
L_003F7104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F710Cu); set32(c.r[4], c.r[17].w[0] + 8084u);  if (depth < kMaxDepth) unit_007E(c, 212u, depth + 1u); else { c.pc = 0x003F9610u; return; } if (c.pc != 0x003F710Cu) [[unlikely]] return; }
L_003F710C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7114u); set32(c.r[4], c.r[17].w[0] + 8096u);  if (depth < kMaxDepth) unit_007E(c, 209u, depth + 1u); else { c.pc = 0x003F9590u; return; } if (c.pc != 0x003F7114u) [[unlikely]] return; }
L_003F7114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F711Cu); set32(c.r[4], c.r[17].w[0] + 8100u);  if (depth < kMaxDepth) unit_007E(c, 207u, depth + 1u); else { c.pc = 0x003F9540u; return; } if (c.pc != 0x003F711Cu) [[unlikely]] return; }
L_003F711C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7124u); set32(c.r[4], c.r[17].w[0] + 8104u);  if (depth < kMaxDepth) unit_007E(c, 205u, depth + 1u); else { c.pc = 0x003F94F0u; return; } if (c.pc != 0x003F7124u) [[unlikely]] return; }
L_003F7124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F712Cu); set32(c.r[4], c.r[17].w[0] + 8108u);  if (depth < kMaxDepth) unit_007E(c, 202u, depth + 1u); else { c.pc = 0x003F9470u; return; } if (c.pc != 0x003F712Cu) [[unlikely]] return; }
L_003F712C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7134u); set32(c.r[4], c.r[17].w[0] + 8112u);  if (depth < kMaxDepth) unit_007E(c, 199u, depth + 1u); else { c.pc = 0x003F93F0u; return; } if (c.pc != 0x003F7134u) [[unlikely]] return; }
L_003F7134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F713Cu); set32(c.r[4], c.r[17].w[0] + 8116u);  if (depth < kMaxDepth) unit_007E(c, 196u, depth + 1u); else { c.pc = 0x003F9370u; return; } if (c.pc != 0x003F713Cu) [[unlikely]] return; }
L_003F713C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7144u); set32(c.r[4], c.r[17].w[0] + 8120u);  if (depth < kMaxDepth) unit_007E(c, 194u, depth + 1u); else { c.pc = 0x003F9320u; return; } if (c.pc != 0x003F7144u) [[unlikely]] return; }
L_003F7144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F714Cu); set32(c.r[4], c.r[17].w[0] + 8124u);  if (depth < kMaxDepth) unit_007E(c, 191u, depth + 1u); else { c.pc = 0x003F92A0u; return; } if (c.pc != 0x003F714Cu) [[unlikely]] return; }
L_003F714C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F7150:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8248u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[18], c.r[4].w[0] + 8248u);  if (t) { goto L_003F7180; } }
L_003F7168:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 34ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7150u | kUnwind; return; } goto L_003F7150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F71A0; } }
L_003F7180:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7190u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x003F7190u) [[unlikely]] return; }
L_003F7190:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7168u | kUnwind; return; } goto L_003F7168; } }
    c.budget -= 1;
L_003F71A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F71C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8016u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F71E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F71E4u);  if (depth < kMaxDepth) unit_007B(c, 168u, depth + 1u); else { c.pc = 0x003EF530u; return; } if (c.pc != 0x003F71E4u) [[unlikely]] return; }
L_003F71E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8020u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F71F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F71F8u);  if (depth < kMaxDepth) unit_0050(c, 71u, depth + 1u); else { c.pc = 0x00341EA0u; return; } if (c.pc != 0x003F71F8u) [[unlikely]] return; }
L_003F71F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8024u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F720C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F720Cu);  if (depth < kMaxDepth) unit_00BE(c, 140u, depth + 1u); else { c.pc = 0x004FA310u; return; } if (c.pc != 0x003F720Cu) [[unlikely]] return; }
L_003F720C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8028u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7220u);  if (depth < kMaxDepth) unit_009D(c, 120u, depth + 1u); else { c.pc = 0x00476460u; return; } if (c.pc != 0x003F7220u) [[unlikely]] return; }
L_003F7220:
    set32(c.r[4], ld32((c.r[16].w[0] + 8032u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7234u);  if (depth < kMaxDepth) unit_00A1(c, 133u, depth + 1u); else { c.pc = 0x00485FF0u; return; } if (c.pc != 0x003F7234u) [[unlikely]] return; }
L_003F7234:
    set32(c.r[4], ld32((c.r[16].w[0] + 8036u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7248u);  if (depth < kMaxDepth) unit_0082(c, 285u, depth + 1u); else { c.pc = 0x0040AEE0u; return; } if (c.pc != 0x003F7248u) [[unlikely]] return; }
L_003F7248:
    set32(c.r[4], ld32((c.r[16].w[0] + 8040u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F725C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F725Cu);  if (depth < kMaxDepth) unit_0051(c, 167u, depth + 1u); else { c.pc = 0x00346470u; return; } if (c.pc != 0x003F725Cu) [[unlikely]] return; }
L_003F725C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8044u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7270u);  if (depth < kMaxDepth) unit_0087(c, 149u, depth + 1u); else { c.pc = 0x0041EB20u; return; } if (c.pc != 0x003F7270u) [[unlikely]] return; }
L_003F7270:
    set32(c.r[4], ld32((c.r[16].w[0] + 8088u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7284; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7284u);  if (depth < kMaxDepth) unit_00A0(c, 116u, depth + 1u); else { c.pc = 0x00481DF0u; return; } if (c.pc != 0x003F7284u) [[unlikely]] return; }
L_003F7284:
    set32(c.r[4], ld32((c.r[16].w[0] + 8092u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7298u);  if (depth < kMaxDepth) unit_00A2(c, 75u, depth + 1u); else { c.pc = 0x00489300u; return; } if (c.pc != 0x003F7298u) [[unlikely]] return; }
L_003F7298:
    set32(c.r[4], ld32((c.r[16].w[0] + 8048u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F72AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72ACu);  if (depth < kMaxDepth) unit_00B1(c, 94u, depth + 1u); else { c.pc = 0x004C5C20u; return; } if (c.pc != 0x003F72ACu) [[unlikely]] return; }
L_003F72AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8052u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F72C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72C0u);  if (depth < kMaxDepth) unit_00BB(c, 270u, depth + 1u); else { c.pc = 0x004EFD70u; return; } if (c.pc != 0x003F72C0u) [[unlikely]] return; }
L_003F72C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8056u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F72D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72D4u);  if (depth < kMaxDepth) unit_00A0(c, 23u, depth + 1u); else { c.pc = 0x004802E0u; return; } if (c.pc != 0x003F72D4u) [[unlikely]] return; }
L_003F72D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8060u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F72E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72E8u);  if (depth < kMaxDepth) unit_008A(c, 101u, depth + 1u); else { c.pc = 0x00429F30u; return; } if (c.pc != 0x003F72E8u) [[unlikely]] return; }
L_003F72E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8064u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F72FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F72FCu);  if (depth < kMaxDepth) unit_008A(c, 185u, depth + 1u); else { c.pc = 0x0042B1F0u; return; } if (c.pc != 0x003F72FCu) [[unlikely]] return; }
L_003F72FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8068u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7310u);  if (depth < kMaxDepth) unit_00C0(c, 127u, depth + 1u); else { c.pc = 0x00501690u; return; } if (c.pc != 0x003F7310u) [[unlikely]] return; }
L_003F7310:
    set32(c.r[4], ld32((c.r[16].w[0] + 8072u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7324; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7324u);  if (depth < kMaxDepth) unit_0093(c, 104u, depth + 1u); else { c.pc = 0x0044DE30u; return; } if (c.pc != 0x003F7324u) [[unlikely]] return; }
L_003F7324:
    set32(c.r[4], ld32((c.r[16].w[0] + 8076u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7338u);  if (depth < kMaxDepth) unit_0053(c, 144u, depth + 1u); else { c.pc = 0x0034EA70u; return; } if (c.pc != 0x003F7338u) [[unlikely]] return; }
L_003F7338:
    set32(c.r[4], ld32((c.r[16].w[0] + 8080u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F734C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F734Cu);  if (depth < kMaxDepth) unit_0097(c, 125u, depth + 1u); else { c.pc = 0x0045E6B0u; return; } if (c.pc != 0x003F734Cu) [[unlikely]] return; }
L_003F734C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8084u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7360u);  if (depth < kMaxDepth) unit_00B0(c, 214u, depth + 1u); else { c.pc = 0x004C29A0u; return; } if (c.pc != 0x003F7360u) [[unlikely]] return; }
L_003F7360:
    set32(c.r[4], ld32((c.r[16].w[0] + 8096u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7374u);  if (depth < kMaxDepth) unit_00A7(c, 249u, depth + 1u); else { c.pc = 0x0049FF50u; return; } if (c.pc != 0x003F7374u) [[unlikely]] return; }
L_003F7374:
    set32(c.r[4], ld32((c.r[16].w[0] + 8100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7388u);  if (depth < kMaxDepth) unit_00AF(c, 86u, depth + 1u); else { c.pc = 0x004BD840u; return; } if (c.pc != 0x003F7388u) [[unlikely]] return; }
L_003F7388:
    set32(c.r[4], ld32((c.r[16].w[0] + 8104u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F739C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F739Cu);  if (depth < kMaxDepth) unit_00AF(c, 193u, depth + 1u); else { c.pc = 0x004BF190u; return; } if (c.pc != 0x003F739Cu) [[unlikely]] return; }
L_003F739C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F73B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F73B0u);  if (depth < kMaxDepth) unit_00A8(c, 205u, depth + 1u); else { c.pc = 0x004A2FD0u; return; } if (c.pc != 0x003F73B0u) [[unlikely]] return; }
L_003F73B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F73C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F73C4u);  if (depth < kMaxDepth) unit_00B6(c, 133u, depth + 1u); else { c.pc = 0x004D9CC0u; return; } if (c.pc != 0x003F73C4u) [[unlikely]] return; }
L_003F73C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F73D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F73D8u);  if (depth < kMaxDepth) unit_00B9(c, 234u, depth + 1u); else { c.pc = 0x004E7B90u; return; } if (c.pc != 0x003F73D8u) [[unlikely]] return; }
L_003F73D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F73EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F73ECu);  if (depth < kMaxDepth) unit_00BA(c, 162u, depth + 1u); else { c.pc = 0x004EB640u; return; } if (c.pc != 0x003F73ECu) [[unlikely]] return; }
L_003F73EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7400; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7400u);  if (depth < kMaxDepth) unit_00BB(c, 206u, depth + 1u); else { c.pc = 0x004EE9F0u; return; } if (c.pc != 0x003F7400u) [[unlikely]] return; }
L_003F7400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7408u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 220u, depth + 1u); else { c.pc = 0x004220D0u; return; } if (c.pc != 0x003F7408u) [[unlikely]] return; }
L_003F7408:
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8016u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7444u);  if (depth < kMaxDepth) unit_007B(c, 138u, depth + 1u); else { c.pc = 0x003EED70u; return; } if (c.pc != 0x003F7444u) [[unlikely]] return; }
L_003F7444:
    set32(c.r[4], ld32((c.r[16].w[0] + 8020u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7458u);  if (depth < kMaxDepth) unit_0050(c, 63u, depth + 1u); else { c.pc = 0x00341D50u; return; } if (c.pc != 0x003F7458u) [[unlikely]] return; }
L_003F7458:
    set32(c.r[4], ld32((c.r[16].w[0] + 8024u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F746C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F746Cu);  if (depth < kMaxDepth) unit_00BE(c, 132u, depth + 1u); else { c.pc = 0x004FA1C0u; return; } if (c.pc != 0x003F746Cu) [[unlikely]] return; }
L_003F746C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8028u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7480u);  if (depth < kMaxDepth) unit_009D(c, 112u, depth + 1u); else { c.pc = 0x00476310u; return; } if (c.pc != 0x003F7480u) [[unlikely]] return; }
L_003F7480:
    set32(c.r[4], ld32((c.r[16].w[0] + 8032u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7494u);  if (depth < kMaxDepth) unit_00A1(c, 124u, depth + 1u); else { c.pc = 0x00485E80u; return; } if (c.pc != 0x003F7494u) [[unlikely]] return; }
L_003F7494:
    set32(c.r[4], ld32((c.r[16].w[0] + 8036u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F74A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74A8u);  if (depth < kMaxDepth) unit_0082(c, 271u, depth + 1u); else { c.pc = 0x0040ACA0u; return; } if (c.pc != 0x003F74A8u) [[unlikely]] return; }
L_003F74A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8040u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F74BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74BCu);  if (depth < kMaxDepth) unit_0051(c, 158u, depth + 1u); else { c.pc = 0x00346200u; return; } if (c.pc != 0x003F74BCu) [[unlikely]] return; }
L_003F74BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8044u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F74D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74D0u);  if (depth < kMaxDepth) unit_0087(c, 140u, depth + 1u); else { c.pc = 0x0041E9A0u; return; } if (c.pc != 0x003F74D0u) [[unlikely]] return; }
L_003F74D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8088u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F74E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74E4u);  if (depth < kMaxDepth) unit_00A0(c, 106u, depth + 1u); else { c.pc = 0x00481B70u; return; } if (c.pc != 0x003F74E4u) [[unlikely]] return; }
L_003F74E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8092u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F74F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F74F8u);  if (depth < kMaxDepth) unit_00A2(c, 68u, depth + 1u); else { c.pc = 0x004891D0u; return; } if (c.pc != 0x003F74F8u) [[unlikely]] return; }
L_003F74F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8048u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F750C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F750Cu);  if (depth < kMaxDepth) unit_00B1(c, 66u, depth + 1u); else { c.pc = 0x004C5790u; return; } if (c.pc != 0x003F750Cu) [[unlikely]] return; }
L_003F750C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8052u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7520u);  if (depth < kMaxDepth) unit_00BB(c, 264u, depth + 1u); else { c.pc = 0x004EFC50u; return; } if (c.pc != 0x003F7520u) [[unlikely]] return; }
L_003F7520:
    set32(c.r[4], ld32((c.r[16].w[0] + 8056u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7534u);  if (depth < kMaxDepth) unit_009F(c, 113u, depth + 1u); else { c.pc = 0x0047E830u; return; } if (c.pc != 0x003F7534u) [[unlikely]] return; }
L_003F7534:
    set32(c.r[4], ld32((c.r[16].w[0] + 8060u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7548u);  if (depth < kMaxDepth) unit_008A(c, 62u, depth + 1u); else { c.pc = 0x00429750u; return; } if (c.pc != 0x003F7548u) [[unlikely]] return; }
L_003F7548:
    set32(c.r[4], ld32((c.r[16].w[0] + 8064u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F755C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F755Cu);  if (depth < kMaxDepth) unit_008A(c, 168u, depth + 1u); else { c.pc = 0x0042AE30u; return; } if (c.pc != 0x003F755Cu) [[unlikely]] return; }
L_003F755C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8068u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7570u);  if (depth < kMaxDepth) unit_00C0(c, 119u, depth + 1u); else { c.pc = 0x00501540u; return; } if (c.pc != 0x003F7570u) [[unlikely]] return; }
L_003F7570:
    set32(c.r[4], ld32((c.r[16].w[0] + 8072u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7584u);  if (depth < kMaxDepth) unit_0093(c, 95u, depth + 1u); else { c.pc = 0x0044DC10u; return; } if (c.pc != 0x003F7584u) [[unlikely]] return; }
L_003F7584:
    set32(c.r[4], ld32((c.r[16].w[0] + 8076u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7598u);  if (depth < kMaxDepth) unit_0053(c, 135u, depth + 1u); else { c.pc = 0x0034E900u; return; } if (c.pc != 0x003F7598u) [[unlikely]] return; }
L_003F7598:
    set32(c.r[4], ld32((c.r[16].w[0] + 8080u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F75AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75ACu);  if (depth < kMaxDepth) unit_0097(c, 117u, depth + 1u); else { c.pc = 0x0045E4F0u; return; } if (c.pc != 0x003F75ACu) [[unlikely]] return; }
L_003F75AC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8084u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F75C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75C0u);  if (depth < kMaxDepth) unit_00B0(c, 201u, depth + 1u); else { c.pc = 0x004C2630u; return; } if (c.pc != 0x003F75C0u) [[unlikely]] return; }
L_003F75C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8096u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F75D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75D4u);  if (depth < kMaxDepth) unit_00A7(c, 242u, depth + 1u); else { c.pc = 0x0049FDF0u; return; } if (c.pc != 0x003F75D4u) [[unlikely]] return; }
L_003F75D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F75E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75E8u);  if (depth < kMaxDepth) unit_00AF(c, 77u, depth + 1u); else { c.pc = 0x004BD630u; return; } if (c.pc != 0x003F75E8u) [[unlikely]] return; }
L_003F75E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8104u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F75FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F75FCu);  if (depth < kMaxDepth) unit_00AF(c, 184u, depth + 1u); else { c.pc = 0x004BEF70u; return; } if (c.pc != 0x003F75FCu) [[unlikely]] return; }
L_003F75FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 8108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7610; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7610u);  if (depth < kMaxDepth) unit_00A8(c, 199u, depth + 1u); else { c.pc = 0x004A2ED0u; return; } if (c.pc != 0x003F7610u) [[unlikely]] return; }
L_003F7610:
    set32(c.r[4], ld32((c.r[16].w[0] + 8112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7624; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7624u);  if (depth < kMaxDepth) unit_00B6(c, 100u, depth + 1u); else { c.pc = 0x004D9810u; return; } if (c.pc != 0x003F7624u) [[unlikely]] return; }
L_003F7624:
    set32(c.r[4], ld32((c.r[16].w[0] + 8116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7638u);  if (depth < kMaxDepth) unit_00B9(c, 199u, depth + 1u); else { c.pc = 0x004E75D0u; return; } if (c.pc != 0x003F7638u) [[unlikely]] return; }
L_003F7638:
    set32(c.r[4], ld32((c.r[16].w[0] + 8120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F764C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F764Cu);  if (depth < kMaxDepth) unit_00BA(c, 153u, depth + 1u); else { c.pc = 0x004EB420u; return; } if (c.pc != 0x003F764Cu) [[unlikely]] return; }
L_003F764C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7660u);  if (depth < kMaxDepth) unit_00BB(c, 195u, depth + 1u); else { c.pc = 0x004EE640u; return; } if (c.pc != 0x003F7660u) [[unlikely]] return; }
L_003F7660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F7670:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7694u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0088(c, 153u, depth + 1u); else { c.pc = 0x00420810u; return; } if (c.pc != 0x003F7694u) [[unlikely]] return; }
L_003F7694:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003F796C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[20] = ld32((c.r[3].w[0] - 20412u));
    c.f[2] = ld32((c.r[28].w[0] - 29672u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = fp::ee::div(c.fcr31, c.f[20], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0]), c.f[1]);  if (t) { goto L_003F795C; } }
L_003F76D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8016u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F76E8; } }
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F76E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 142u, depth + 1u); else { c.pc = 0x003EEE80u; return; } if (c.pc != 0x003F76E8u) [[unlikely]] return; }
L_003F76E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8020u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7700; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7700u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 64u, depth + 1u); else { c.pc = 0x00341D60u; return; } if (c.pc != 0x003F7700u) [[unlikely]] return; }
L_003F7700:
    set32(c.r[4], ld32((c.r[17].w[0] + 8024u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7718; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7718u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 133u, depth + 1u); else { c.pc = 0x004FA1D0u; return; } if (c.pc != 0x003F7718u) [[unlikely]] return; }
L_003F7718:
    set32(c.r[4], ld32((c.r[17].w[0] + 8028u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7730; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7730u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 113u, depth + 1u); else { c.pc = 0x00476320u; return; } if (c.pc != 0x003F7730u) [[unlikely]] return; }
L_003F7730:
    set32(c.r[4], ld32((c.r[17].w[0] + 8032u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7744u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A1(c, 125u, depth + 1u); else { c.pc = 0x00485E90u; return; } if (c.pc != 0x003F7744u) [[unlikely]] return; }
L_003F7744:
    set32(c.r[4], ld32((c.r[17].w[0] + 8036u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7758u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 272u, depth + 1u); else { c.pc = 0x0040ACB0u; return; } if (c.pc != 0x003F7758u) [[unlikely]] return; }
L_003F7758:
    set32(c.r[4], ld32((c.r[17].w[0] + 8040u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F776C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F776Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 159u, depth + 1u); else { c.pc = 0x00346210u; return; } if (c.pc != 0x003F776Cu) [[unlikely]] return; }
L_003F776C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8044u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7784; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7784u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 141u, depth + 1u); else { c.pc = 0x0041E9B0u; return; } if (c.pc != 0x003F7784u) [[unlikely]] return; }
L_003F7784:
    set32(c.r[4], ld32((c.r[17].w[0] + 8088u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F779C; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F779Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 107u, depth + 1u); else { c.pc = 0x00481B80u; return; } if (c.pc != 0x003F779Cu) [[unlikely]] return; }
L_003F779C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8092u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F77B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F77B0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 69u, depth + 1u); else { c.pc = 0x004891E0u; return; } if (c.pc != 0x003F77B0u) [[unlikely]] return; }
L_003F77B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8048u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F77C8; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F77C8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 55u, depth + 1u); else { c.pc = 0x004C5330u; return; } if (c.pc != 0x003F77C8u) [[unlikely]] return; }
L_003F77C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8052u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F77E0; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F77E0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 265u, depth + 1u); else { c.pc = 0x004EFC60u; return; } if (c.pc != 0x003F77E0u) [[unlikely]] return; }
L_003F77E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8056u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F77F8; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F77F8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 89u, depth + 1u); else { c.pc = 0x0047E1F0u; return; } if (c.pc != 0x003F77F8u) [[unlikely]] return; }
L_003F77F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8060u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F780C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F780Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 91u, depth + 1u); else { c.pc = 0x00429D20u; return; } if (c.pc != 0x003F780Cu) [[unlikely]] return; }
L_003F780C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8064u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7820u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 175u, depth + 1u); else { c.pc = 0x0042AF40u; return; } if (c.pc != 0x003F7820u) [[unlikely]] return; }
L_003F7820:
    set32(c.r[4], ld32((c.r[17].w[0] + 8068u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7838; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7838u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 120u, depth + 1u); else { c.pc = 0x00501550u; return; } if (c.pc != 0x003F7838u) [[unlikely]] return; }
L_003F7838:
    set32(c.r[4], ld32((c.r[17].w[0] + 8072u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7850; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7850u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 99u, depth + 1u); else { c.pc = 0x0044DCD0u; return; } if (c.pc != 0x003F7850u) [[unlikely]] return; }
L_003F7850:
    set32(c.r[4], ld32((c.r[17].w[0] + 8076u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7868; } }
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7868u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 139u, depth + 1u); else { c.pc = 0x0034E9C0u; return; } if (c.pc != 0x003F7868u) [[unlikely]] return; }
L_003F7868:
    set32(c.r[4], ld32((c.r[17].w[0] + 8080u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7880; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7880u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 121u, depth + 1u); else { c.pc = 0x0045E5B0u; return; } if (c.pc != 0x003F7880u) [[unlikely]] return; }
L_003F7880:
    set32(c.r[4], ld32((c.r[17].w[0] + 8084u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7898; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7898u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 207u, depth + 1u); else { c.pc = 0x004C2730u; return; } if (c.pc != 0x003F7898u) [[unlikely]] return; }
L_003F7898:
    set32(c.r[4], ld32((c.r[17].w[0] + 8096u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F78AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F78ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 243u, depth + 1u); else { c.pc = 0x0049FE00u; return; } if (c.pc != 0x003F78ACu) [[unlikely]] return; }
L_003F78AC:
    set32(c.r[4], ld32((c.r[17].w[0] + 8100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F78C4; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F78C4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 81u, depth + 1u); else { c.pc = 0x004BD6F0u; return; } if (c.pc != 0x003F78C4u) [[unlikely]] return; }
L_003F78C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8104u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F78DC; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F78DCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 188u, depth + 1u); else { c.pc = 0x004BF030u; return; } if (c.pc != 0x003F78DCu) [[unlikely]] return; }
L_003F78DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 8108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F78F4; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F78F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 200u, depth + 1u); else { c.pc = 0x004A2EE0u; return; } if (c.pc != 0x003F78F4u) [[unlikely]] return; }
L_003F78F4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8112u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F790C; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F790Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 82u, depth + 1u); else { c.pc = 0x004D93A0u; return; } if (c.pc != 0x003F790Cu) [[unlikely]] return; }
L_003F790C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8116u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F7924; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7924u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 181u, depth + 1u); else { c.pc = 0x004E6FF0u; return; } if (c.pc != 0x003F7924u) [[unlikely]] return; }
L_003F7924:
    set32(c.r[4], ld32((c.r[17].w[0] + 8120u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F793C; } }
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F793Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 157u, depth + 1u); else { c.pc = 0x004EB4E0u; return; } if (c.pc != 0x003F793Cu) [[unlikely]] return; }
L_003F793C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F796C; } }
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7954u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 196u, depth + 1u); else { c.pc = 0x004EE650u; return; } if (c.pc != 0x003F7954u) [[unlikely]] return; }
L_003F7954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003F7970; } }
L_003F795C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F76D0u | kUnwind; return; } goto L_003F76D0; } }
L_003F796C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F7970:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F7990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003F79D8; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_003F79D8; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2020u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F79D8u); set32(c.r[5], ld32((c.r[2].w[0] + 2016u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F79D8u) [[unlikely]] return; }
L_003F79D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F79F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003F7A40; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_003F7A40; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2020u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7A38u); set32(c.r[5], ld32((c.r[2].w[0] + 2016u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7A38u) [[unlikely]] return; }
L_003F7A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F7A48; } }
L_003F7A40:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003F7A48:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F7A50:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003F7A60:
    c.r[2].d[0] = ~(c.r[5].d[0] | 0ull);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003F7A70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003F7AC0; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003F7AC0; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2020u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7AC0u); set32(c.r[5], ld32((c.r[2].w[0] + 2016u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7AC0u) [[unlikely]] return; }
L_003F7AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F7AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003F7B18; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_003F7B18; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2020u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B18u); set32(c.r[5], ld32((c.r[2].w[0] + 2016u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7B18u) [[unlikely]] return; }
L_003F7B18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F7B30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003F7B78; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_003F7B78; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2020u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7B78u); set32(c.r[5], ld32((c.r[2].w[0] + 2016u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7B78u) [[unlikely]] return; }
L_003F7B78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F7B90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F7C18; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003F7BEC; } }
L_003F7BD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F7C18; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7BE4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 428u, depth + 1u); else { c.pc = 0x003F7D80u; return; } if (c.pc != 0x003F7BE4u) [[unlikely]] return; }
L_003F7BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003F7C1C; } }
L_003F7BEC:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2020u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C10u); set32(c.r[5], ld32((c.r[2].w[0] + 2016u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7C10u) [[unlikely]] return; }
L_003F7C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7BD0u | kUnwind; return; } goto L_003F7BD0; } }
L_003F7C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003F7C1C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003F7C30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003F7C78; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[8].d[0];  if (t) { goto L_003F7C78; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2020u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7C78u); set32(c.r[5], ld32((c.r[2].w[0] + 2016u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7C78u) [[unlikely]] return; }
L_003F7C78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F7C90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003F7CD8; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_003F7CD8; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2020u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7CD8u); set32(c.r[5], ld32((c.r[2].w[0] + 2016u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7CD8u) [[unlikely]] return; }
L_003F7CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F7CF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], 0u - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F7D58; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003F7D4C; } }
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 2020u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D4Cu); set32(c.r[5], ld32((c.r[2].w[0] + 2016u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F7D4Cu) [[unlikely]] return; }
L_003F7D4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7D58u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 428u, depth + 1u); else { c.pc = 0x003F7D80u; return; } if (c.pc != 0x003F7D58u) [[unlikely]] return; }
L_003F7D58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F7D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F7D80:
    set32(c.r[29], c.r[29].w[0] - 336u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F7DB4; } }
L_003F7DAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003F7E94; } }
L_003F7DB4:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[16], c.r[2].w[0] + 2012u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7DE0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F7DE0u) [[unlikely]] return; }
L_003F7DE0:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == c.r[5].d[0];  if (t) { goto L_003F7E8C; } }
    set32(c.r[4], c.r[5].w[0] << 1);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 2016u)));
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 2020u)));
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2012u)));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    st32((c.r[4].w[0] + 2020u), 0u);
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 18;
L_003F7E40:
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_003F7E60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[17].w[0]);  if (t) { goto L_003F7E70; } }
L_003F7E60:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7E40u | kUnwind; return; } goto L_003F7E40; } }
L_003F7E70:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7DACu | kUnwind; return; } goto L_003F7DAC; } }
L_003F7E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F7E70u | kUnwind; return; } goto L_003F7E70; } }
L_003F7E94:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003F7EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(33ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { [[clang::musttail]] return unit_007E(c, 39u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 7216u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x003F4000u < 16384u) { entry = entries_007D[(t - 0x003F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003F7EE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7EF0u); set32(c.r[5], c.r[5].w[0] + 7504u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F7EF0u) [[unlikely]] return; }
L_003F7EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { [[clang::musttail]] return unit_007E(c, 41u, depth); } }
L_003F7EF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F08u); set32(c.r[5], c.r[5].w[0] + 7511u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F7F08u) [[unlikely]] return; }
L_003F7F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 40u, depth); } }
L_003F7F10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F20u); set32(c.r[5], c.r[5].w[0] + 7516u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F7F20u) [[unlikely]] return; }
L_003F7F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 40u, depth); } }
L_003F7F28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F38u); set32(c.r[5], c.r[5].w[0] + 7526u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F7F38u) [[unlikely]] return; }
L_003F7F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 40u, depth); } }
L_003F7F40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F50u); set32(c.r[5], c.r[5].w[0] + 7537u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F7F50u) [[unlikely]] return; }
L_003F7F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 40u, depth); } }
L_003F7F58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F68u); set32(c.r[5], c.r[5].w[0] + 7546u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F7F68u) [[unlikely]] return; }
L_003F7F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 40u, depth); } }
L_003F7F70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F80u); set32(c.r[5], c.r[5].w[0] + 7553u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F7F80u) [[unlikely]] return; }
L_003F7F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 40u, depth); } }
L_003F7F88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7F98u); set32(c.r[5], c.r[5].w[0] + 7559u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F7F98u) [[unlikely]] return; }
L_003F7F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 40u, depth); } }
L_003F7FA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FB0u); set32(c.r[5], c.r[5].w[0] + 7566u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F7FB0u) [[unlikely]] return; }
L_003F7FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 40u, depth); } }
L_003F7FB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FC8u); set32(c.r[5], c.r[5].w[0] + 7572u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F7FC8u) [[unlikely]] return; }
L_003F7FC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 40u, depth); } }
L_003F7FD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FE0u); set32(c.r[5], c.r[5].w[0] + 7579u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F7FE0u) [[unlikely]] return; }
L_003F7FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 40u, depth); } }
L_003F7FE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F7FF8u); set32(c.r[5], c.r[5].w[0] + 7586u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F7FF8u) [[unlikely]] return; }
L_003F7FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007E(c, 40u, depth); } }
    [[clang::musttail]] return unit_007E(c, 1u, depth);
}

}

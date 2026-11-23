#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0028[4096] = {
    1, 0, 0, 2, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 37, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0,
    80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0,
    117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
};

void unit_0028(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A0000;
    case 2u: goto L_002A000C;
    case 3u: goto L_002A0010;
    case 4u: goto L_002A0020;
    case 5u: goto L_002A00A0;
    case 6u: goto L_002A00C4;
    case 7u: goto L_002A015C;
    case 8u: goto L_002A0174;
    case 9u: goto L_002A01B0;
    case 10u: goto L_002A0200;
    case 11u: goto L_002A022C;
    case 12u: goto L_002A0250;
    case 13u: goto L_002A0278;
    case 14u: goto L_002A02BC;
    case 15u: goto L_002A02D4;
    case 16u: goto L_002A0300;
    case 17u: goto L_002A0310;
    case 18u: goto L_002A0378;
    case 19u: goto L_002A0388;
    case 20u: goto L_002A03D0;
    case 21u: goto L_002A05B0;
    case 22u: goto L_002A062C;
    case 23u: goto L_002A0644;
    case 24u: goto L_002A065C;
    case 25u: goto L_002A0674;
    case 26u: goto L_002A068C;
    case 27u: goto L_002A0698;
    case 28u: goto L_002A06B0;
    case 29u: goto L_002A06BC;
    case 30u: goto L_002A06C8;
    case 31u: goto L_002A06D4;
    case 32u: goto L_002A06E0;
    case 33u: goto L_002A0704;
    case 34u: goto L_002A0714;
    case 35u: goto L_002A0728;
    case 36u: goto L_002A077C;
    case 37u: goto L_002A0784;
    case 38u: goto L_002A078C;
    case 39u: goto L_002A0798;
    case 40u: goto L_002A07D0;
    case 41u: goto L_002A07F8;
    case 42u: goto L_002A082C;
    case 43u: goto L_002A08AC;
    case 44u: goto L_002A08C0;
    case 45u: goto L_002A08D4;
    case 46u: goto L_002A08E8;
    case 47u: goto L_002A08FC;
    case 48u: goto L_002A0930;
    case 49u: goto L_002A0964;
    case 50u: goto L_002A09C0;
    case 51u: goto L_002A09D8;
    case 52u: goto L_002A0A34;
    case 53u: goto L_002A0A4C;
    case 54u: goto L_002A0A9C;
    case 55u: goto L_002A0AEC;
    case 56u: goto L_002A0B3C;
    case 57u: goto L_002A0B8C;
    case 58u: goto L_002A0BE8;
    case 59u: goto L_002A0C44;
    case 60u: goto L_002A0C4C;
    case 61u: goto L_002A0CBC;
    case 62u: goto L_002A0D6C;
    case 63u: goto L_002A0D90;
    case 64u: goto L_002A0DB4;
    case 65u: goto L_002A0E30;
    case 66u: goto L_002A10D0;
    case 67u: goto L_002A10FC;
    case 68u: goto L_002A1108;
    case 69u: goto L_002A111C;
    case 70u: goto L_002A1138;
    case 71u: goto L_002A1154;
    case 72u: goto L_002A1170;
    case 73u: goto L_002A11A0;
    case 74u: goto L_002A11C0;
    case 75u: goto L_002A11E0;
    case 76u: goto L_002A1210;
    case 77u: goto L_002A1230;
    case 78u: goto L_002A1260;
    case 79u: goto L_002A1270;
    case 80u: goto L_002A1280;
    case 81u: goto L_002A1290;
    case 82u: goto L_002A12A0;
    case 83u: goto L_002A12B0;
    case 84u: goto L_002A1348;
    case 85u: goto L_002A135C;
    case 86u: goto L_002A1378;
    case 87u: goto L_002A1388;
    case 88u: goto L_002A1390;
    case 89u: goto L_002A13AC;
    case 90u: goto L_002A13B4;
    case 91u: goto L_002A13CC;
    case 92u: goto L_002A13D8;
    case 93u: goto L_002A13F4;
    case 94u: goto L_002A1400;
    case 95u: goto L_002A1420;
    case 96u: goto L_002A1430;
    case 97u: goto L_002A1440;
    case 98u: goto L_002A1478;
    case 99u: goto L_002A148C;
    case 100u: goto L_002A14B4;
    case 101u: goto L_002A14EC;
    case 102u: goto L_002A14F8;
    case 103u: goto L_002A1548;
    case 104u: goto L_002A159C;
    case 105u: goto L_002A15A4;
    case 106u: goto L_002A15B8;
    case 107u: goto L_002A15C0;
    case 108u: goto L_002A15F8;
    case 109u: goto L_002A1620;
    case 110u: goto L_002A1628;
    case 111u: goto L_002A1638;
    case 112u: goto L_002A1640;
    case 113u: goto L_002A1650;
    case 114u: goto L_002A1658;
    case 115u: goto L_002A1668;
    case 116u: goto L_002A1670;
    case 117u: goto L_002A1680;
    case 118u: goto L_002A1688;
    case 119u: goto L_002A1698;
    case 120u: goto L_002A16B4;
    case 121u: goto L_002A16D8;
    case 122u: goto L_002A16F0;
    case 123u: goto L_002A16F8;
    case 124u: goto L_002A1718;
    case 125u: goto L_002A1740;
    case 126u: goto L_002A1758;
    case 127u: goto L_002A1760;
    case 128u: goto L_002A1780;
    case 129u: goto L_002A17A8;
    case 130u: goto L_002A17C0;
    case 131u: goto L_002A17C8;
    case 132u: goto L_002A17E8;
    case 133u: goto L_002A1810;
    case 134u: goto L_002A1828;
    case 135u: goto L_002A1830;
    case 136u: goto L_002A1850;
    case 137u: goto L_002A1878;
    case 138u: goto L_002A1898;
    case 139u: goto L_002A18A8;
    case 140u: goto L_002A18C8;
    case 141u: goto L_002A18F0;
    case 142u: goto L_002A1920;
    case 143u: goto L_002A192C;
    case 144u: goto L_002A1960;
    case 145u: goto L_002A19A0;
    case 146u: goto L_002A19B0;
    case 147u: goto L_002A19F0;
    case 148u: goto L_002A1A30;
    case 149u: goto L_002A1A70;
    case 150u: goto L_002A1A8C;
    case 151u: goto L_002A1A98;
    case 152u: goto L_002A1AC0;
    case 153u: goto L_002A1C48;
    case 154u: goto L_002A1C74;
    case 155u: goto L_002A1CA0;
    case 156u: goto L_002A1D00;
    case 157u: goto L_002A1D10;
    case 158u: goto L_002A1D40;
    case 159u: goto L_002A1D58;
    case 160u: goto L_002A1D70;
    case 161u: goto L_002A1D80;
    case 162u: goto L_002A1D90;
    case 163u: goto L_002A1DB0;
    case 164u: goto L_002A1DF4;
    case 165u: goto L_002A1E10;
    case 166u: goto L_002A1E50;
    case 167u: goto L_002A1E70;
    case 168u: goto L_002A1E78;
    case 169u: goto L_002A1E84;
    case 170u: goto L_002A1ED8;
    case 171u: goto L_002A1FBC;
    case 172u: goto L_002A201C;
    case 173u: goto L_002A2130;
    case 174u: goto L_002A2154;
    case 175u: goto L_002A2164;
    case 176u: goto L_002A2180;
    case 177u: goto L_002A219C;
    case 178u: goto L_002A21AC;
    case 179u: goto L_002A21D0;
    case 180u: goto L_002A21E0;
    case 181u: goto L_002A21F0;
    case 182u: goto L_002A2220;
    case 183u: goto L_002A2230;
    case 184u: goto L_002A224C;
    case 185u: goto L_002A2264;
    case 186u: goto L_002A2274;
    case 187u: goto L_002A228C;
    case 188u: goto L_002A229C;
    case 189u: goto L_002A22B8;
    case 190u: goto L_002A22D4;
    case 191u: goto L_002A22E4;
    case 192u: goto L_002A2304;
    case 193u: goto L_002A2314;
    case 194u: goto L_002A2330;
    case 195u: goto L_002A2340;
    case 196u: goto L_002A2358;
    case 197u: goto L_002A2380;
    case 198u: goto L_002A23D0;
    case 199u: goto L_002A2400;
    case 200u: goto L_002A2410;
    case 201u: goto L_002A2430;
    case 202u: goto L_002A2450;
    case 203u: goto L_002A2474;
    case 204u: goto L_002A2488;
    case 205u: goto L_002A24B8;
    case 206u: goto L_002A24C0;
    case 207u: goto L_002A2508;
    case 208u: goto L_002A2570;
    case 209u: goto L_002A2594;
    case 210u: goto L_002A25E0;
    case 211u: goto L_002A25E8;
    case 212u: goto L_002A2628;
    case 213u: goto L_002A2690;
    case 214u: goto L_002A26C0;
    case 215u: goto L_002A26D8;
    case 216u: goto L_002A26F4;
    case 217u: goto L_002A2720;
    case 218u: goto L_002A2754;
    case 219u: goto L_002A2788;
    case 220u: goto L_002A27B0;
    case 221u: goto L_002A27DC;
    case 222u: goto L_002A2878;
    case 223u: goto L_002A28C0;
    case 224u: goto L_002A296C;
    case 225u: goto L_002A2984;
    case 226u: goto L_002A299C;
    case 227u: goto L_002A29AC;
    case 228u: goto L_002A29C8;
    case 229u: goto L_002A2A00;
    case 230u: goto L_002A2A28;
    case 231u: goto L_002A2A3C;
    case 232u: goto L_002A2A98;
    case 233u: goto L_002A2B80;
    case 234u: goto L_002A2BA0;
    case 235u: goto L_002A2BC4;
    case 236u: goto L_002A2C00;
    case 237u: goto L_002A2C20;
    case 238u: goto L_002A2C44;
    case 239u: goto L_002A2C88;
    case 240u: goto L_002A2CA0;
    case 241u: goto L_002A2CB0;
    case 242u: goto L_002A2CD0;
    case 243u: goto L_002A2CE0;
    case 244u: goto L_002A2D10;
    case 245u: goto L_002A2D28;
    case 246u: goto L_002A2D50;
    case 247u: goto L_002A2D68;
    case 248u: goto L_002A2D90;
    case 249u: goto L_002A2DC0;
    case 250u: goto L_002A2E88;
    case 251u: goto L_002A2EA4;
    case 252u: goto L_002A2EC4;
    case 253u: goto L_002A2F00;
    case 254u: goto L_002A2F1C;
    case 255u: goto L_002A2F40;
    case 256u: goto L_002A2F58;
    case 257u: goto L_002A2F70;
    case 258u: goto L_002A2F88;
    case 259u: goto L_002A2FA0;
    case 260u: goto L_002A2FB8;
    case 261u: goto L_002A3004;
    case 262u: goto L_002A3020;
    case 263u: goto L_002A304C;
    case 264u: goto L_002A3064;
    case 265u: goto L_002A30C4;
    case 266u: goto L_002A31AC;
    case 267u: goto L_002A31CC;
    case 268u: goto L_002A31E8;
    case 269u: goto L_002A3214;
    case 270u: goto L_002A322C;
    case 271u: goto L_002A328C;
    case 272u: goto L_002A3388;
    case 273u: goto L_002A33A4;
    case 274u: goto L_002A33DC;
    case 275u: goto L_002A33F4;
    case 276u: goto L_002A3404;
    case 277u: goto L_002A3420;
    case 278u: goto L_002A3460;
    case 279u: goto L_002A3488;
    case 280u: goto L_002A34A0;
    case 281u: goto L_002A34B8;
    case 282u: goto L_002A34D0;
    case 283u: goto L_002A34E8;
    case 284u: goto L_002A3500;
    case 285u: goto L_002A3538;
    case 286u: goto L_002A3550;
    case 287u: goto L_002A3580;
    case 288u: goto L_002A3600;
    case 289u: goto L_002A3618;
    case 290u: goto L_002A3650;
    case 291u: goto L_002A3658;
    case 292u: goto L_002A3664;
    case 293u: goto L_002A366C;
    case 294u: goto L_002A3688;
    case 295u: goto L_002A36A0;
    case 296u: goto L_002A36A8;
    case 297u: goto L_002A36B0;
    case 298u: goto L_002A36C4;
    case 299u: goto L_002A36E0;
    case 300u: goto L_002A3744;
    case 301u: goto L_002A3770;
    case 302u: goto L_002A37EC;
    case 303u: goto L_002A37F4;
    case 304u: goto L_002A3800;
    case 305u: goto L_002A382C;
    case 306u: goto L_002A3838;
    case 307u: goto L_002A3878;
    case 308u: goto L_002A3888;
    case 309u: goto L_002A38B0;
    case 310u: goto L_002A3970;
    case 311u: goto L_002A3980;
    case 312u: goto L_002A39B0;
    case 313u: goto L_002A39CC;
    case 314u: goto L_002A3BA0;
    case 315u: goto L_002A3C14;
    case 316u: goto L_002A3C24;
    case 317u: goto L_002A3C50;
    case 318u: goto L_002A3C58;
    case 319u: goto L_002A3C68;
    case 320u: goto L_002A3CA0;
    case 321u: goto L_002A3CB0;
    case 322u: goto L_002A3CB8;
    case 323u: goto L_002A3CC8;
    case 324u: goto L_002A3CEC;
    case 325u: goto L_002A3DD0;
    case 326u: goto L_002A3E30;
    case 327u: goto L_002A3E40;
    case 328u: goto L_002A3E98;
    case 329u: goto L_002A3ED0;
    case 330u: goto L_002A3FA0;
    case 331u: goto L_002A3FF4;
    default: bad_entry(c, 0x002A0000u); return;
    }
L_002A0000:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0029FF20u | kUnwind; return; } [[clang::musttail]] return unit_0027(c, 190u, depth); } }
L_002A000C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002A0010:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0020:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
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
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = ld8((c.r[4].w[0] + 528u));
    c.budget -= 19;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002A0070; } }
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    c.budget -= 1;
L_002A0070:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002A0080; } }
    set32(c.r[17], c.r[17].w[0] << 1);
    c.budget -= 1;
L_002A0080:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002A0090; } }
    set32(c.r[17], c.r[17].w[0] << 2);
    c.budget -= 1;
L_002A0090:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A00A0u); set32(c.r[6], 0u + 100u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x002A00A0u) [[unlikely]] return; }
L_002A00A0:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A016C; } }
    set32(c.r[2], 0u + 37u);
    c.budget -= 1;
L_002A00C4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002A00D4; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 528u));
    set32(c.r[18], c.r[2].w[0] + 37u);
    c.budget -= 2;
L_002A00D4:
    set32(c.r[2], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002A00E8; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 528u));
    set32(c.r[18], c.r[2].w[0] + 51u);
    c.budget -= 2;
L_002A00E8:
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002A00FC; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 528u));
    set32(c.r[18], c.r[2].w[0] + 41u);
    c.budget -= 2;
L_002A00FC:
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002A0110; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 528u));
    set32(c.r[18], c.r[2].w[0] + 55u);
    c.budget -= 2;
L_002A0110:
    set32(c.r[2], 0u + 28u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002A0124; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 528u));
    set32(c.r[18], c.r[2].w[0] + 28u);
    c.budget -= 2;
L_002A0124:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002A0138; } }
    c.r[2].d[0] = ld8((c.r[20].w[0] + 528u));
    set32(c.r[18], c.r[2].w[0] + 32u);
    c.budget -= 2;
L_002A0138:
    set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A015Cu); set32(c.r[11], 0u + 1u);  if (depth < kMaxDepth) unit_004B(c, 31u, depth + 1u); else { c.pc = 0x0032C870u; return; } if (c.pc != 0x002A015Cu) [[unlikely]] return; }
L_002A015C:
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_002A017C; } }
L_002A016C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0174u); c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (depth < kMaxDepth) unit_009A(c, 14u, depth + 1u); else { c.pc = 0x004684D0u; return; } if (c.pc != 0x002A0174u) [[unlikely]] return; }
L_002A0174:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A00C4u | kUnwind; return; } goto L_002A00C4; } }
L_002A017C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002A01B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 529u));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A0224; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 508u)));
    c.budget -= 1;
L_002A0200:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[16].w[0] + 528u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] - 17644u)));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 530u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002A0234; } }
L_002A0224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A022Cu); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_0028(c, 65u, depth + 1u); else { c.pc = 0x002A0E30u; return; } if (c.pc != 0x002A022Cu) [[unlikely]] return; }
L_002A022C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 508u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0200u | kUnwind; return; } goto L_002A0200; } }
L_002A0234:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A03B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0278u);  if (depth < kMaxDepth) unit_0028(c, 20u, depth + 1u); else { c.pc = 0x002A03D0u; return; } if (c.pc != 0x002A0278u) [[unlikely]] return; }
L_002A0278:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[20] = ld32((c.r[3].w[0] - 20412u));
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.f[0] = ld32((c.r[16].w[0] + 448u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 448u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 456u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 456u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 460u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 460u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A0380; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 1;
L_002A02BC:
    set32(c.r[3], ld32((c.r[3].w[0] + 1440u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 452u)));  if (t) { goto L_002A0338; } }
    c.f[2] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[16].w[0] + 368u);
    c.budget -= 3;
L_002A02D4:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[20]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A0390; } }
    c.budget -= 1;
L_002A0300:
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A0398; } }
L_002A0310:
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A0328; } }
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 1;
L_002A0328:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A02D4u | kUnwind; return; } goto L_002A02D4; } }
L_002A0338:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 452u));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002A03A0; } }
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A03A8; } }
    c.f[1] = ld32((c.r[16].w[0] + 456u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A03B4; } }
    st8((c.r[16].w[0] + 452u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 456u), 0u);
    c.budget -= 2;
L_002A0378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A03B8; } }
L_002A0380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 21u, depth + 1u); else { c.pc = 0x002A05B0u; return; } if (c.pc != 0x002A0388u) [[unlikely]] return; }
L_002A0388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A02BCu | kUnwind; return; } goto L_002A02BC; } }
L_002A0390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0300u | kUnwind; return; } goto L_002A0300; } }
L_002A0398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0310u | kUnwind; return; } goto L_002A0310; } }
L_002A03A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A03B4; } }
L_002A03A8:
    st8((c.r[16].w[0] + 452u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 456u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0378u | kUnwind; return; } goto L_002A0378; } }
L_002A03B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A03B8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A03D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[2], 0u + 75u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 552u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 380u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0404; } }
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A03FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_002A040C; } }
L_002A03FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002A05A0; } }
L_002A0404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002A05A0; } }
L_002A040C:
    set32(c.r[2], 0u + 29u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A059C; } }
    set32(c.r[2], 0u + 27u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0594; } }
    set32(c.r[2], 0u + 84u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A058C; } }
    set32(c.r[2], 0u + 83u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0584; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A057C; } }
    set32(c.r[2], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0574; } }
    set32(c.r[2], 0u + 36u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A056C; } }
    set32(c.r[2], 0u + 209u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0564; } }
    set32(c.r[2], 0u + 208u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A055C; } }
    set32(c.r[2], 0u + 207u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0554; } }
    set32(c.r[2], 0u + 206u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A054C; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0544; } }
    set32(c.r[2], 0u + 39u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A053C; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0534; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A052C; } }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0524; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A051C; } }
    set32(c.r[2], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0514; } }
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A050C; } }
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_002A05A0; } }
L_002A0504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A05A0; } }
L_002A050C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A05A0; } }
L_002A0514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_002A05A0; } }
L_002A051C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_002A05A0; } }
L_002A0524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_002A05A0; } }
L_002A052C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002A05A0; } }
L_002A0534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_002A05A0; } }
L_002A053C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_002A05A0; } }
L_002A0544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_002A05A0; } }
L_002A054C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_002A05A0; } }
L_002A0554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_002A05A0; } }
L_002A055C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_002A05A0; } }
L_002A0564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_002A05A0; } }
L_002A056C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002A05A0; } }
L_002A0574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_002A05A0; } }
L_002A057C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002A05A0; } }
L_002A0584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_002A05A0; } }
L_002A058C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_002A05A0; } }
L_002A0594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_002A05A0; } }
L_002A059C:
    set32(c.r[2], 0u + 14u);
    c.budget -= 1;
L_002A05A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A05B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[16].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_002A0904; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 464u)));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    c.r[22].d[0] = c.r[3].d[0] ^ 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[22].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_002A06E0; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] - 21472u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0028[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A062C:
    c.r[5].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[18].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_002A06E4; } }
L_002A0644:
    c.r[5].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.r[18].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_002A06E4; } }
L_002A065C:
    c.r[6].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[18].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_002A06E4; } }
L_002A0674:
    c.r[6].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.r[18].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_002A06E4; } }
L_002A068C:
    c.r[18].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_002A06E4; } }
L_002A0698:
    c.r[6].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.r[18].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_002A06E4; } }
L_002A06B0:
    c.r[18].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_002A06E4; } }
L_002A06BC:
    c.r[18].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_002A06E4; } }
L_002A06C8:
    c.r[18].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_002A06E4; } }
L_002A06D4:
    c.r[18].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_002A06E4; } }
L_002A06E0:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A06E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A0728; } }
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A0728; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002A0888; } }
L_002A0704:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A0894; } }
L_002A0714:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 464u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0728u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0027(c, 177u, depth + 1u); else { c.pc = 0x0029F760u; return; } if (c.pc != 0x002A0728u) [[unlikely]] return; }
L_002A0728:
    set32(c.r[4], ld32((c.r[20].w[0] + 468u)));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A077C; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[9], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 27u);
    set32(c.r[2], 0u + 55u);
    set32(c.r[4], c.r[5].w[0] << 2);
    if (c.r[21].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[9].w[0] + 212u)));
    set32(c.r[10], 0u - 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A077Cu); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x002A077Cu) [[unlikely]] return; }
L_002A077C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_002A08A0; } }
L_002A0784:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002A08B4; } }
L_002A078C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002A08C8; } }
    st32((c.r[20].w[0] + 448u), 0u);
    c.budget -= 1;
L_002A0798:
    set32(c.r[3], 0u + 4u);
    st32((c.r[20].w[0] + 464u), 0u);
    st32((c.r[20].w[0] + 468u), 0u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));  if (t) { goto L_002A07F8; } }
    c.f[1] = ld32((c.r[20].w[0] + 460u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A08DC; } }
    c.f[1] = ld32((c.r[20].w[0] + 460u));
    c.budget -= 1;
L_002A07D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FD90000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A07F8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A07F8u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0028(c, 48u, depth + 1u); else { c.pc = 0x002A0930u; return; } if (c.pc != 0x002A07F8u) [[unlikely]] return; }
L_002A07F8:
    c.r[1].d[0] = c.r[16].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A0904; } }
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 24u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A08F0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_002A082C:
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A0904; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A086C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_002A0870; } }
L_002A086C:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_002A0870:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_002A0908; } }
L_002A0888:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 464u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0704u | kUnwind; return; } goto L_002A0704; } }
L_002A0894:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 464u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0714u | kUnwind; return; } goto L_002A0714; } }
L_002A08A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08ACu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 48u, depth + 1u); else { c.pc = 0x002A0930u; return; } if (c.pc != 0x002A08ACu) [[unlikely]] return; }
L_002A08AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0784u | kUnwind; return; } goto L_002A0784; } }
L_002A08B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08C0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0028(c, 48u, depth + 1u); else { c.pc = 0x002A0930u; return; } if (c.pc != 0x002A08C0u) [[unlikely]] return; }
L_002A08C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A078Cu | kUnwind; return; } goto L_002A078C; } }
L_002A08C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08D4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0028(c, 48u, depth + 1u); else { c.pc = 0x002A0930u; return; } if (c.pc != 0x002A08D4u) [[unlikely]] return; }
L_002A08D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 448u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0798u | kUnwind; return; } goto L_002A0798; } }
L_002A08DC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08E8u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0028(c, 48u, depth + 1u); else { c.pc = 0x002A0930u; return; } if (c.pc != 0x002A08E8u) [[unlikely]] return; }
L_002A08E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[20].w[0] + 460u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A07D0u | kUnwind; return; } goto L_002A07D0; } }
L_002A08F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08FCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0028(c, 48u, depth + 1u); else { c.pc = 0x002A0930u; return; } if (c.pc != 0x002A08FCu) [[unlikely]] return; }
L_002A08FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A082Cu | kUnwind; return; } goto L_002A082C; } }
L_002A0904:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002A0908:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002A0930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002A0E18; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 21424u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0028[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A0964:
    c.f[1] = ld32((c.r[28].w[0] - 32448u));
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 432u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[16], c.r[3].w[0] + 168u);
    set32(c.r[3], ld32((c.r[3].w[0] + 192u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A0D74; } }
L_002A09C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 29800u)));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29800u), c.r[3].w[0]);  if (t) { goto L_002A0D6C; } }
L_002A09D8:
    c.f[1] = ld32((c.r[28].w[0] - 32444u));
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 432u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[16], c.r[3].w[0] + 168u);
    set32(c.r[3], ld32((c.r[3].w[0] + 192u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002A0D98; } }
L_002A0A34:
    set32(c.r[3], ld32((c.r[28].w[0] - 29792u)));
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29792u), c.r[3].w[0]);  if (t) { goto L_002A0D6C; } }
L_002A0A4C:
    c.f[1] = ld32((c.r[28].w[0] - 32440u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29788u)));
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 29788u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 432u), c.f[0]);  if (t) { goto L_002A0D6C; } }
L_002A0A9C:
    c.f[1] = ld32((c.r[28].w[0] - 32436u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29784u)));
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 29784u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 432u), c.f[0]);  if (t) { goto L_002A0D6C; } }
L_002A0AEC:
    c.f[1] = ld32((c.r[28].w[0] - 32432u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29780u)));
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 29780u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 432u), c.f[0]);  if (t) { goto L_002A0D6C; } }
L_002A0B3C:
    c.f[1] = ld32((c.r[28].w[0] - 32428u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29776u)));
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 29776u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 432u), c.f[0]);  if (t) { goto L_002A0D6C; } }
L_002A0B8C:
    c.f[1] = ld32((c.r[28].w[0] - 32456u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29772u)));
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 29772u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 432u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 464u), c.r[3].w[0]);  if (t) { goto L_002A0D6C; } }
L_002A0BE8:
    c.f[1] = ld32((c.r[28].w[0] - 32452u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29796u)));
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 29796u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 432u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 468u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 468u), c.r[3].w[0]);  if (t) { goto L_002A0D6C; } }
L_002A0C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 460u), 0u);  if (t) { goto L_002A0D6C; } }
L_002A0C4C:
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A0DBC; } }
    set32(c.r[3], c.r[5].w[0] - 6u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002A0DBC; } }
    c.f[1] = ld32((c.r[28].w[0] - 32420u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29764u)));
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 29764u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 432u), c.f[0]);  if (t) { goto L_002A0D6C; } }
L_002A0CBC:
    c.f[1] = ld32((c.r[4].w[0] + 448u));
    c.f[0] = ld32((c.r[28].w[0] - 32408u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A0D20; } }
    c.f[1] = ld32((c.r[28].w[0] - 32412u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29756u)));
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 29756u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 432u), c.f[0]);  if (t) { goto L_002A0D6C; } }
L_002A0D20:
    c.f[1] = ld32((c.r[28].w[0] - 32416u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29760u)));
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 29760u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 432u), c.f[0]);
    c.budget -= 19;
L_002A0D6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002A0E1C; } }
L_002A0D74:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D90u); set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));  if (depth < kMaxDepth) unit_004B(c, 17u, depth + 1u); else { c.pc = 0x0032C410u; return; } if (c.pc != 0x002A0D90u) [[unlikely]] return; }
L_002A0D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 530u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A09C0u | kUnwind; return; } goto L_002A09C0; } }
L_002A0D98:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0DB4u); set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));  if (depth < kMaxDepth) unit_004B(c, 17u, depth + 1u); else { c.pc = 0x0032C410u; return; } if (c.pc != 0x002A0DB4u) [[unlikely]] return; }
L_002A0DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 530u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0A34u | kUnwind; return; } goto L_002A0A34; } }
L_002A0DBC:
    c.f[1] = ld32((c.r[28].w[0] - 32424u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29768u)));
    c.f[0] = ld32((c.r[4].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 29768u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 372u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 372u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 392u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 392u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 412u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 432u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 432u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 464u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A0D6Cu | kUnwind; return; } goto L_002A0D6C; } }
L_002A0E18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002A0E1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0E30:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 15u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[25], 0u + 4u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[15], 0u + 6u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[14], 0u + 7u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], 0u + 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 2u);
    st8((c.r[4].w[0] + 452u), static_cast<std::uint8_t>(0u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[4].w[0] + 364u), 0u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[12], 0u + 8u);
    st32((c.r[4].w[0] + 448u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    st32((c.r[4].w[0] + 464u), 0u);
    c.r[22].d[0] = c.r[3].d[0] | 39322ull;
    st32((c.r[4].w[0] + 456u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    st32((c.r[4].w[0] + 460u), 0u);
    set32(c.r[11], 0u + 9u);
    st32((c.r[4].w[0] + 468u), 0u);
    set32(c.r[10], 0u + 10u);
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[9], 0u + 11u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[8], 0u + 12u);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], 0u + 13u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[4].w[0] + 20u), c.r[22].w[0]);
    set32(c.r[23], 0u + 14u);
    st32((c.r[4].w[0] + 12u), c.r[21].w[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[4].w[0] + 40u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st32((c.r[4].w[0] + 44u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[4].w[0] + 68u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 76u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[4].w[0] + 92u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[25].w[0]);
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 120u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 100u), static_cast<std::uint8_t>(c.r[25].w[0]));
    st32((c.r[4].w[0] + 116u), c.r[24].w[0]);
    st32((c.r[4].w[0] + 108u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 128u), 0u);
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 124u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st32((c.r[4].w[0] + 140u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 132u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 160u), 0u);
    st32((c.r[4].w[0] + 152u), 0u);
    st8((c.r[4].w[0] + 168u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 148u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st32((c.r[4].w[0] + 164u), c.r[24].w[0]);
    st32((c.r[4].w[0] + 156u), c.r[25].w[0]);
    st32((c.r[4].w[0] + 184u), 0u);
    st32((c.r[4].w[0] + 176u), 0u);
    st8((c.r[4].w[0] + 192u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 172u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 188u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 180u), c.r[21].w[0]);
    st32((c.r[4].w[0] + 208u), 0u);
    st32((c.r[4].w[0] + 200u), 0u);
    st8((c.r[4].w[0] + 216u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 196u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 212u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 204u), c.r[20].w[0]);
    st32((c.r[4].w[0] + 232u), 0u);
    st32((c.r[4].w[0] + 224u), 0u);
    st8((c.r[4].w[0] + 240u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 220u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 236u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 228u), c.r[20].w[0]);
    st32((c.r[4].w[0] + 256u), 0u);
    st32((c.r[4].w[0] + 248u), 0u);
    st8((c.r[4].w[0] + 264u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 244u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 260u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 252u), c.r[20].w[0]);
    st32((c.r[4].w[0] + 280u), 0u);
    st32((c.r[4].w[0] + 272u), 0u);
    st8((c.r[4].w[0] + 288u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 268u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 284u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 276u), c.r[20].w[0]);
    st32((c.r[4].w[0] + 304u), 0u);
    st32((c.r[4].w[0] + 296u), 0u);
    st8((c.r[4].w[0] + 312u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 292u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 308u), c.r[24].w[0]);
    st32((c.r[4].w[0] + 300u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 328u), 0u);
    st32((c.r[4].w[0] + 320u), 0u);
    st8((c.r[4].w[0] + 336u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 316u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 332u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 324u), c.r[17].w[0]);
    st32((c.r[4].w[0] + 352u), 0u);
    st32((c.r[4].w[0] + 344u), 0u);
    st8((c.r[4].w[0] + 360u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 340u), static_cast<std::uint8_t>(c.r[23].w[0]));
    st32((c.r[4].w[0] + 356u), 0u);
    st32((c.r[4].w[0] + 348u), 0u);
    st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 372u), 0u);
    st32((c.r[4].w[0] + 376u), c.r[22].w[0]);
    st32((c.r[4].w[0] + 380u), c.r[30].w[0]);
    st32((c.r[4].w[0] + 384u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 388u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st32((c.r[4].w[0] + 392u), 0u);
    st32((c.r[4].w[0] + 396u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st32((c.r[4].w[0] + 400u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 404u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st8((c.r[4].w[0] + 408u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[4].w[0] + 412u), 0u);
    st32((c.r[4].w[0] + 416u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 420u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 424u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    st8((c.r[4].w[0] + 428u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[4].w[0] + 432u), 0u);
    st32((c.r[4].w[0] + 436u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 440u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 444u), c.r[5].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 168;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002A10D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A111C; } }
    set32(c.r[4], c.r[17].w[0] + 368u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A1124; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_002A10FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002A1140; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002A1108:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A111C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A111Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002A111Cu) [[unlikely]] return; }
L_002A111C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002A115C; } }
L_002A1124:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] + 4464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1138u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002A1138u) [[unlikely]] return; }
L_002A1138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A10FCu | kUnwind; return; } goto L_002A10FC; } }
L_002A1140:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[6], 0u + 24u);
    set32(c.r[5], c.r[5].w[0] + 4576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1154u); set32(c.r[7], 0u + 15u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002A1154u) [[unlikely]] return; }
L_002A1154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1108u | kUnwind; return; } goto L_002A1108; } }
L_002A115C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A1170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A11A0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A11A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A11A0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002A11A0u) [[unlikely]] return; }
L_002A11A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A11C0:
    set32(c.r[2], 0u + 4u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_002A11E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A1210; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A1210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1210u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002A1210u) [[unlikely]] return; }
L_002A1210:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1230:
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], 0u + 15u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_002A1260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 701u));  c.pc = t; return; }
L_002A1270:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 701u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 701u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002A1280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[4].w[0] + 700u));  c.pc = t; return; }
L_002A1290:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 700u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 700u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002A12A0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 700u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 700u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002A12B0:
    set32(c.r[29], c.r[29].w[0] - 832u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[3], 0u + 10u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 828u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 5u);
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 14u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 15u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1348u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002A1348u) [[unlikely]] return; }
L_002A1348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A15AC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 528u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002A135C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A135Cu | kUnwind; return; } goto L_002A135C; } }
L_002A1378:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1388u); set32(c.r[5], c.r[5].w[0] - 21353u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002A1388u) [[unlikely]] return; }
L_002A1388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1390u); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x002A1390u) [[unlikely]] return; }
L_002A1390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[21], c.r[29].w[0] + 524u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[4], c.r[29].w[0] + 796u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A13ACu); set32(c.r[5], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002A13ACu) [[unlikely]] return; }
L_002A13AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A13B4u); set32(c.r[4], c.r[29].w[0] + 796u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002A13B4u) [[unlikely]] return; }
L_002A13B4:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A13CCu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A13CCu) [[unlikely]] return; }
L_002A13CC:
    set32(c.r[4], c.r[29].w[0] + 796u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A13D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002A13D8u) [[unlikely]] return; }
L_002A13D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 516u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A1508; } }
    set32(c.r[20], c.r[29].w[0] + 504u);
    set32(c.r[19], c.r[29].w[0] + 516u);
    set32(c.r[18], c.r[29].w[0] + 512u);
    c.budget -= 3;
L_002A13F4:
    set32(c.r[3], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_002A141C; } }
L_002A1400:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1400u | kUnwind; return; } goto L_002A1400; } }
L_002A141C:
    set32(c.r[17], c.r[29].w[0] + 368u);
    c.budget -= 1;
L_002A1420:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A15E4; } }
L_002A1430:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_002A1440:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1420u | kUnwind; return; } goto L_002A1420; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[17], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[5].w[0] - 21318u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 824u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1478u); st32((c.r[29].w[0] + 824u), 0u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x002A1478u) [[unlikely]] return; }
L_002A1478:
    set32(c.r[4], ld32((c.r[29].w[0] + 824u)));
    set32(c.r[3], c.r[29].w[0] + 240u);
    set32(c.r[2], 0u + 128u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[4].w[0]);  if (t) { goto L_002A14A8; } }
L_002A148C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A148Cu | kUnwind; return; } goto L_002A148C; } }
L_002A14A8:
    set32(c.r[3], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 128u);  if (t) { goto L_002A14D0; } }
L_002A14B4:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A14B4u | kUnwind; return; } goto L_002A14B4; } }
L_002A14D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21314u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    set32(c.r[7], c.r[29].w[0] + 820u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A14ECu); st32((c.r[29].w[0] + 820u), 0u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x002A14ECu) [[unlikely]] return; }
L_002A14EC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A1608; } }
L_002A14F8:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A13F4u | kUnwind; return; } goto L_002A13F4; } }
L_002A1508:
    set32(c.r[3], ld32((c.r[29].w[0] + 828u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 828u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 16;
L_002A1548:
    set32(c.r[5], c.r[16].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002A1578; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002A1568; } }
    st8((c.r[5].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002A1568:
    set32(c.r[2], ld32((c.r[29].w[0] + 828u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002A1578:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1548u | kUnwind; return; } goto L_002A1548; } }
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A159Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A159Cu) [[unlikely]] return; }
L_002A159C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A18D8; } }
L_002A15A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002A18F8; } }
L_002A15AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15B8u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002A15B8u) [[unlikely]] return; }
L_002A15B8:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.budget -= 2;
L_002A15C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A15C0u | kUnwind; return; } goto L_002A15C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1378u | kUnwind; return; } goto L_002A1378; } }
L_002A15E4:
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A15F8u) [[unlikely]] return; }
L_002A15F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1430u | kUnwind; return; } goto L_002A1430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1440u | kUnwind; return; } goto L_002A1440; } }
L_002A1608:
    set32(c.r[2], ld32((c.r[29].w[0] + 820u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[5].w[0] - 21309u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1620u); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002A1620u) [[unlikely]] return; }
L_002A1620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A16C0; } }
L_002A1628:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1638u); set32(c.r[5], c.r[5].w[0] - 21303u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002A1638u) [[unlikely]] return; }
L_002A1638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1728; } }
L_002A1640:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1650u); set32(c.r[5], c.r[5].w[0] - 21299u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002A1650u) [[unlikely]] return; }
L_002A1650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1790; } }
L_002A1658:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1668u); set32(c.r[5], c.r[5].w[0] - 21293u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002A1668u) [[unlikely]] return; }
L_002A1668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A17F8; } }
L_002A1670:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1680u); set32(c.r[5], c.r[5].w[0] - 21289u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002A1680u) [[unlikely]] return; }
L_002A1680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1860; } }
L_002A1688:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1698u); set32(c.r[5], c.r[5].w[0] - 21277u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002A1698u) [[unlikely]] return; }
L_002A1698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A14F8u | kUnwind; return; } goto L_002A14F8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21262u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A16B4u); set32(c.r[6], c.r[29].w[0] + 828u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x002A16B4u) [[unlikely]] return; }
L_002A16B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A14F8u | kUnwind; return; } goto L_002A14F8; } }
    c.budget -= 1;
L_002A16C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21258u);
    set32(c.r[6], c.r[29].w[0] + 816u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A16D8u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x002A16D8u) [[unlikely]] return; }
L_002A16D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 816u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 816u), c.r[2].w[0]);  if (t) { goto L_002A1708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A1708; } }
L_002A16F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1628u | kUnwind; return; } goto L_002A1628; } }
L_002A16F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1628u | kUnwind; return; } goto L_002A1628; } }
    c.budget -= 1;
L_002A1708:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1718u); set32(c.r[5], c.r[5].w[0] - 21252u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002A1718u) [[unlikely]] return; }
L_002A1718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A16F8u | kUnwind; return; } goto L_002A16F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A16F0u | kUnwind; return; } goto L_002A16F0; } }
L_002A1728:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21258u);
    set32(c.r[6], c.r[29].w[0] + 812u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1740u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x002A1740u) [[unlikely]] return; }
L_002A1740:
    set32(c.r[2], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 812u), c.r[2].w[0]);  if (t) { goto L_002A1770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A1770; } }
L_002A1758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1640u | kUnwind; return; } goto L_002A1640; } }
L_002A1760:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1640u | kUnwind; return; } goto L_002A1640; } }
    c.budget -= 1;
L_002A1770:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1780u); set32(c.r[5], c.r[5].w[0] - 21252u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002A1780u) [[unlikely]] return; }
L_002A1780:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1760u | kUnwind; return; } goto L_002A1760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1758u | kUnwind; return; } goto L_002A1758; } }
L_002A1790:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21258u);
    set32(c.r[6], c.r[29].w[0] + 808u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A17A8u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x002A17A8u) [[unlikely]] return; }
L_002A17A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 808u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 808u), c.r[2].w[0]);  if (t) { goto L_002A17D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A17D8; } }
L_002A17C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1658u | kUnwind; return; } goto L_002A1658; } }
L_002A17C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1658u | kUnwind; return; } goto L_002A1658; } }
    c.budget -= 1;
L_002A17D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A17E8u); set32(c.r[5], c.r[5].w[0] - 21252u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002A17E8u) [[unlikely]] return; }
L_002A17E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A17C8u | kUnwind; return; } goto L_002A17C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A17C0u | kUnwind; return; } goto L_002A17C0; } }
L_002A17F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21258u);
    set32(c.r[6], c.r[29].w[0] + 804u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1810u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x002A1810u) [[unlikely]] return; }
L_002A1810:
    set32(c.r[2], ld32((c.r[29].w[0] + 804u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 804u), c.r[2].w[0]);  if (t) { goto L_002A1840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A1840; } }
L_002A1828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1670u | kUnwind; return; } goto L_002A1670; } }
L_002A1830:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1670u | kUnwind; return; } goto L_002A1670; } }
    c.budget -= 1;
L_002A1840:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1850u); set32(c.r[5], c.r[5].w[0] - 21252u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002A1850u) [[unlikely]] return; }
L_002A1850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1830u | kUnwind; return; } goto L_002A1830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1828u | kUnwind; return; } goto L_002A1828; } }
L_002A1860:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21258u);
    set32(c.r[6], c.r[29].w[0] + 800u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1878u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x002A1878u) [[unlikely]] return; }
L_002A1878:
    set32(c.r[2], ld32((c.r[29].w[0] + 800u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 800u), c.r[2].w[0]);  if (t) { goto L_002A18B8; } }
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 800u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A18B8; } }
L_002A1898:
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1688u | kUnwind; return; } goto L_002A1688; } }
    c.budget -= 1;
L_002A18A8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 14u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1688u | kUnwind; return; } goto L_002A1688; } }
L_002A18B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A18C8u); set32(c.r[5], c.r[5].w[0] - 21252u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002A18C8u) [[unlikely]] return; }
L_002A18C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A18A8u | kUnwind; return; } goto L_002A18A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1898u | kUnwind; return; } goto L_002A1898; } }
L_002A18D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[4], c.r[29].w[0] + 496u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A18F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002A18F0u) [[unlikely]] return; }
L_002A18F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A15A4u | kUnwind; return; } goto L_002A15A4; } }
L_002A18F8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 832u);  c.pc = t; return; }
L_002A1920:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
L_002A192C:
    c.r[2].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 148u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1970; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1988; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 154u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002A1988; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_002A1960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A1990; } }
L_002A1970:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A192Cu | kUnwind; return; } goto L_002A192C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A1990; } }
L_002A1988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1960u | kUnwind; return; } goto L_002A1960; } }
L_002A1990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A19A0:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0] + 148u));  c.pc = t; return; }
L_002A19B0:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 160u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A19DC; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 154u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A19DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A19E0; } }
L_002A19DC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A19E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A19F0:
    c.r[10].d[0] = ld8((c.r[5].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[8].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5u));
    st8((c.r[4].w[0] + 160u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 161u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 162u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 163u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 164u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 165u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002A1A30:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 160u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 161u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 162u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 163u));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 164u));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 165u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002A1A70:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 160u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A1AA0; } }
L_002A1A8C:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A1AA8; } }
L_002A1A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1AB4; } }
L_002A1AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 165u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1A8Cu | kUnwind; return; } goto L_002A1A8C; } }
L_002A1AA8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 163u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1A98u | kUnwind; return; } goto L_002A1A98; } }
L_002A1AB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1AC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], 0u - 3u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[6].w[0] << 1);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[24], 0u - 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], c.r[6].w[0] << 2);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[14], 0u - 9u);
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[15], c.r[6].w[0] << 3);
    set32(c.r[12], 0u - 17u);
    set32(c.r[13], c.r[6].w[0] << 4);
    set32(c.r[10], 0u - 33u);
    set32(c.r[11], c.r[6].w[0] << 5);
    set32(c.r[9], c.r[6].w[0] << 6);
    set32(c.r[8], 0u - 65u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], 0u + 30u);
    set32(c.r[6], c.r[6].w[0] + 3184u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[18].d[0] = ld8((c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] + 3272u);
    c.r[24].d[0] = c.r[18].d[0] & c.r[24].d[0];
    c.r[24].d[0] = c.r[24].d[0] | c.r[25].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[24].w[0]));
    c.r[24].d[0] = ld8((c.r[4].w[0]));
    c.r[14].d[0] = c.r[24].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld8((c.r[4].w[0]));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[4].w[0]));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0]));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 40u), 0u);
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 700u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 701u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 704u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 708u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 50u)));
    st8((c.r[4].w[0] + 154u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 61u));
    st8((c.r[4].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 67u));
    st8((c.r[4].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 51u)));
    st8((c.r[4].w[0] + 155u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 62u));
    st8((c.r[4].w[0] + 161u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 68u));
    st8((c.r[4].w[0] + 149u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 52u)));
    st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 63u));
    st8((c.r[4].w[0] + 162u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 69u));
    st8((c.r[4].w[0] + 150u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 53u)));
    st8((c.r[4].w[0] + 157u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 64u));
    st8((c.r[4].w[0] + 163u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 70u));
    st8((c.r[4].w[0] + 151u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 54u)));
    st8((c.r[4].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 65u));
    st8((c.r[4].w[0] + 164u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 71u));
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 55u)));
    st8((c.r[4].w[0] + 159u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 66u));
    st8((c.r[4].w[0] + 165u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 72u));
    st8((c.r[4].w[0] + 153u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 98;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C48u); set32(c.r[4], c.r[17].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 9u, depth + 1u); else { c.pc = 0x002A01B0u; return; } if (c.pc != 0x002A1C48u) [[unlikely]] return; }
L_002A1C48:
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 58u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C74u); set32(c.r[4], c.r[16].w[0] + 752u);  if (depth < kMaxDepth) unit_0064(c, 312u, depth + 1u); else { c.pc = 0x00392E10u; return; } if (c.pc != 0x002A1C74u) [[unlikely]] return; }
L_002A1C74:
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 712u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A1CA0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[4].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 132u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 136u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 120u), c.r[3].w[0]);  c.pc = t; return; }
L_002A1D00:
    set32(c.r[5], ld32((c.r[4].w[0] + 712u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A1D18; } }
L_002A1D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1D34; } }
L_002A1D18:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[3], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1D10u | kUnwind; return; } goto L_002A1D10; } }
L_002A1D34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1D40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 712u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A1D60; } }
L_002A1D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002A1D78; } }
L_002A1D60:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[4].w[0] + 712u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1D70u); set32(c.r[4], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_00BA(c, 7u, depth + 1u); else { c.pc = 0x004E8090u; return; } if (c.pc != 0x002A1D70u) [[unlikely]] return; }
L_002A1D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1D58u | kUnwind; return; } goto L_002A1D58; } }
L_002A1D78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A1D80:
    set32(c.r[2], ld32((c.r[4].w[0] + 712u)));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_002A1D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 712u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A1DB8; } }
L_002A1DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002A1DFC; } }
L_002A1DB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[5], 0u + 10u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[7], c.r[29].w[0] + 40u);
    st8((c.r[29].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    st8((c.r[29].w[0] + 41u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 42u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 43u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 45u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[2].w[0] + 320u);
    st8((c.r[29].w[0] + 46u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1DF4u); st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00BA(c, 19u, depth + 1u); else { c.pc = 0x004E83E0u; return; } if (c.pc != 0x002A1DF4u) [[unlikely]] return; }
L_002A1DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 712u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1DB0u | kUnwind; return; } goto L_002A1DB0; } }
L_002A1DFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A1E10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[5].w[0] + 4656u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[6].w[0] + 4576u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], 0u + 24u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], 0u + 15u);
    set32(c.r[18], c.r[16].w[0] + 168u);
    set32(c.r[17], c.r[18].w[0] + 56u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1E50u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002A1E50u) [[unlikely]] return; }
L_002A1E50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    set32(c.r[4], c.r[17].w[0] + 368u);
    set32(c.r[5], c.r[5].w[0] + 4544u);
    set32(c.r[6], c.r[6].w[0] + 4464u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1E70u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002A1E70u) [[unlikely]] return; }
L_002A1E70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1E78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 65u, depth + 1u); else { c.pc = 0x002A0E30u; return; } if (c.pc != 0x002A1E78u) [[unlikely]] return; }
L_002A1E78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1E84u); st8((c.r[18].w[0] + 529u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0028(c, 9u, depth + 1u); else { c.pc = 0x002A01B0u; return; } if (c.pc != 0x002A1E84u) [[unlikely]] return; }
L_002A1E84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[6] = ld32((c.r[2].w[0] + 776u));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[5] = ld32((c.r[3].w[0] + 780u));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[4] = ld32((c.r[2].w[0] + 784u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[2] = c.r[3].w[0];
    st32((c.r[29].w[0] + 64u), c.f[6]);
    st32((c.r[29].w[0] + 68u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[3] = c.r[2].w[0];
    st32((c.r[29].w[0] + 72u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 21;
L_002A1ED8:
    c.r[5].d[0] = ld8((c.r[4].w[0] - 17646u));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A1EF0; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A1F0C; } }
L_002A1EF0:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A1F0C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[7].w[0] + 76u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] - 17646u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A1F34; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A1F50; } }
L_002A1F34:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A1F50:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[7].w[0] + 80u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0] - 17646u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A1F78; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A1F94; } }
L_002A1F78:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A1F94:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[7].w[0] + 84u), c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A1ED8u | kUnwind; return; } goto L_002A1ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1FBCu); set32(c.r[4], c.r[16].w[0] + 50u);  if (depth < kMaxDepth) unit_0028(c, 83u, depth + 1u); else { c.pc = 0x002A12B0u; return; } if (c.pc != 0x002A1FBCu) [[unlikely]] return; }
L_002A1FBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = ld8((c.r[2].w[0] - 17648u));
    set32(c.r[3], c.r[4].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 58u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 2));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] - 17647u));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_002A2100; } }
L_002A201C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[28].w[0] - 29804u), c.r[2].w[0]);
    set32(c.r[3], 0u - 5u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[4], c.r[2].w[0] << 2);
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 50u)));
    st8((c.r[16].w[0] + 154u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 61u));
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 67u));
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 51u)));
    st8((c.r[16].w[0] + 155u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 62u));
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 68u));
    st8((c.r[16].w[0] + 149u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 52u)));
    st8((c.r[16].w[0] + 156u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 63u));
    st8((c.r[16].w[0] + 162u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 69u));
    st8((c.r[16].w[0] + 150u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 53u)));
    st8((c.r[16].w[0] + 157u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 64u));
    st8((c.r[16].w[0] + 163u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 70u));
    st8((c.r[16].w[0] + 151u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 54u)));
    st8((c.r[16].w[0] + 158u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 65u));
    st8((c.r[16].w[0] + 164u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 71u));
    st8((c.r[16].w[0] + 152u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 55u)));
    st8((c.r[16].w[0] + 159u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 66u));
    st8((c.r[16].w[0] + 165u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 72u));
    st8((c.r[16].w[0] + 153u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 712u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 57;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A2110; } }
L_002A2100:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 100u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A201Cu | kUnwind; return; } goto L_002A201C; } }
L_002A2110:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A2130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1532u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2154u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2154u) [[unlikely]] return; }
L_002A2154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A216C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2164u); set32(c.r[4], c.r[2].w[0] + 3520u);  if (depth < kMaxDepth) unit_0053(c, 81u, depth + 1u); else { c.pc = 0x0034D430u; return; } if (c.pc != 0x002A2164u) [[unlikely]] return; }
L_002A2164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1532u), 0u);  if (t) { goto L_002A21B4; } }
L_002A216C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1532u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2180u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2180u) [[unlikely]] return; }
L_002A2180:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2164u | kUnwind; return; } goto L_002A2164; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A219Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A219Cu) [[unlikely]] return; }
L_002A219C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 320u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A21ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A21ACu) [[unlikely]] return; }
L_002A21AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2164u | kUnwind; return; } goto L_002A2164; } }
L_002A21B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A21D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002A21E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 1532u)));  c.pc = t; return; }
L_002A21F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 1532u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A2274; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2220u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2220u) [[unlikely]] return; }
L_002A2220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2230u); set32(c.r[4], c.r[2].w[0] + 3520u);  if (depth < kMaxDepth) unit_0053(c, 81u, depth + 1u); else { c.pc = 0x0034D430u; return; } if (c.pc != 0x002A2230u) [[unlikely]] return; }
L_002A2230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1532u), c.r[16].w[0]);  if (t) { goto L_002A2278; } }
L_002A2238:
    set32(c.r[4], ld32((c.r[17].w[0] + 1532u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A224Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A224Cu) [[unlikely]] return; }
L_002A224C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2274; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2264u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2264u) [[unlikely]] return; }
L_002A2264:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 320u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2274u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2274u) [[unlikely]] return; }
L_002A2274:
    st32((c.r[17].w[0] + 1532u), c.r[16].w[0]);
    c.budget -= 1;
L_002A2278:
    set32(c.r[4], ld32((c.r[17].w[0] + 1532u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A228Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A228Cu) [[unlikely]] return; }
L_002A228C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A22A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A229Cu); set32(c.r[4], c.r[2].w[0] + 3520u);  if (depth < kMaxDepth) unit_0053(c, 83u, depth + 1u); else { c.pc = 0x0034D470u; return; } if (c.pc != 0x002A229Cu) [[unlikely]] return; }
L_002A229C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A2320; } }
L_002A22A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 1532u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A22B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A22B8u) [[unlikely]] return; }
L_002A22B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A231C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A22D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A22D4u) [[unlikely]] return; }
L_002A22D4:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 316u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A22E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A22E4u) [[unlikely]] return; }
L_002A22E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A231C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2304u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A2304u) [[unlikely]] return; }
L_002A2304:
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2314u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x002A2314u) [[unlikely]] return; }
L_002A2314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A229Cu | kUnwind; return; } goto L_002A229C; } }
L_002A231C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002A2320:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A2330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 48u);  c.pc = t; return; }
L_002A2340:
    set32(c.r[5], ld32((c.r[4].w[0] + 212u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1536u));
    set32(c.r[6], c.r[5].w[0] + 48u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 48u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A2360; } }
L_002A2358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A236C; } }
L_002A2360:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1536u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2358u | kUnwind; return; } goto L_002A2358; } }
L_002A236C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 60u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1536u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A23E4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 712u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002A23D0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 712u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002A23D0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[5].w[0] + 712u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A23D0u); set32(c.r[4], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_00BA(c, 7u, depth + 1u); else { c.pc = 0x004E8090u; return; } if (c.pc != 0x002A23D0u) [[unlikely]] return; }
L_002A23D0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1536u)));
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1536u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002A23E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2400:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 1536u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002A2418; } }
L_002A2410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2428; } }
L_002A2418:
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 1536u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2410u | kUnwind; return; } goto L_002A2410; } }
L_002A2428:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A2430:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1536u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], ld32((c.r[4].w[0] + 212u)));
    st8((c.r[5].w[0] + 48u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1536u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002A2450:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1536u)));
    c.budget -= 9;
L_002A2474:
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_002A24D8; } }
L_002A2488:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A24E0; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 154u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A24E0; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002A24B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A24E8; } }
L_002A24C0:
    c.r[3].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2474u | kUnwind; return; } goto L_002A2474; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2550; } }
L_002A24D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2488u | kUnwind; return; } goto L_002A2488; } }
L_002A24E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A24B8u | kUnwind; return; } goto L_002A24B8; } }
L_002A24E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 400u)));
    c.r[16].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[19].w[0] + 240u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2508u); c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0011(c, 303u, depth + 1u); else { c.pc = 0x002468F0u; return; } if (c.pc != 0x002A2508u) [[unlikely]] return; }
L_002A2508:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[19].w[0] + 1536u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_002A2540; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A2548; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A2538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1537u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A24C0u | kUnwind; return; } goto L_002A24C0; } }
L_002A2538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1537u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A24C0u | kUnwind; return; } goto L_002A24C0; } }
L_002A2540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1537u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A24C0u | kUnwind; return; } goto L_002A24C0; } }
L_002A2548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1537u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A24C0u | kUnwind; return; } goto L_002A24C0; } }
L_002A2550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A2570:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1536u)));
    c.budget -= 9;
L_002A2594:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A25B0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A25B0:
    set32(c.r[3], ld32((c.r[19].w[0] + 212u)));
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A2600; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 154u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A2600; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002A25E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A2608; } }
L_002A25E8:
    c.r[3].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2594u | kUnwind; return; } goto L_002A2594; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2670; } }
L_002A2600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A25E0u | kUnwind; return; } goto L_002A25E0; } }
L_002A2608:
    set32(c.r[2], ld32((c.r[19].w[0] + 400u)));
    c.r[16].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[4], c.r[19].w[0] + 240u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2628u); c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0011(c, 303u, depth + 1u); else { c.pc = 0x002468F0u; return; } if (c.pc != 0x002A2628u) [[unlikely]] return; }
L_002A2628:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[19].w[0] + 1536u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_002A2660; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A2668; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A2658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1537u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A25E8u | kUnwind; return; } goto L_002A25E8; } }
L_002A2658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1537u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A25E8u | kUnwind; return; } goto L_002A25E8; } }
L_002A2660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1537u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A25E8u | kUnwind; return; } goto L_002A25E8; } }
L_002A2668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1537u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A25E8u | kUnwind; return; } goto L_002A25E8; } }
L_002A2670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A2690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 160u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A2708; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 154u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A2708; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002A26C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A26E4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 400u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A26D8u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_0011(c, 303u, depth + 1u); else { c.pc = 0x002468F0u; return; } if (c.pc != 0x002A26D8u) [[unlikely]] return; }
L_002A26D8:
    st8((c.r[16].w[0] + 1536u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1537u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002A2700; } }
L_002A26E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 400u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A26F4u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_0011(c, 303u, depth + 1u); else { c.pc = 0x002468F0u; return; } if (c.pc != 0x002A26F4u) [[unlikely]] return; }
L_002A26F4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 1536u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1537u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002A2700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002A2710; } }
L_002A2708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A26C0u | kUnwind; return; } goto L_002A26C0; } }
L_002A2710:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 400u)));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2754u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_0011(c, 303u, depth + 1u); else { c.pc = 0x002468F0u; return; } if (c.pc != 0x002A2754u) [[unlikely]] return; }
L_002A2754:
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[16].w[0] + 1536u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_002A2790; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A2798; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A2784; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1537u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A2788; } }
L_002A2784:
    st8((c.r[16].w[0] + 1537u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002A2788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A27A0; } }
L_002A2790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1537u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2788u | kUnwind; return; } goto L_002A2788; } }
L_002A2798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1537u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2788u | kUnwind; return; } goto L_002A2788; } }
L_002A27A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A27B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1416u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002A29E0; } }
L_002A27DC:
    set32(c.r[4], ld32((c.r[19].w[0] + 1408u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A29E0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 1400u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A29C8; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A29C8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A29C8; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 260u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A2870; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002A2990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A2878; } }
    c.budget -= 1;
L_002A2870:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 2;
L_002A2878:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A29C8; } }
    c.f[4] = ld32((c.r[19].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.f[2] = ld32((c.r[19].w[0] + 40u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[6] = ld32((c.r[19].w[0] + 32u));
    c.f[5] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[13] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = c.f[3] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);  if (t) { goto L_002A29C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28C0u);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002A28C0u) [[unlikely]] return; }
L_002A28C0:
    c.f[3] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.r[6].d[0] = 0ull | 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] | 4059ull;
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[4] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = 0u;
    set32(c.r[3], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[2] = c.r[4].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 33;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A29B8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 1408u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A29C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A296Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 28u, depth + 1u); else { c.pc = 0x00284990u; return; } if (c.pc != 0x002A296Cu) [[unlikely]] return; }
L_002A296C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A29C8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2984u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 35u, depth + 1u); else { c.pc = 0x00284D10u; return; } if (c.pc != 0x002A2984u) [[unlikely]] return; }
L_002A2984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A29C8; } }
    c.budget -= 1;
L_002A2990:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A299Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002A299Cu) [[unlikely]] return; }
L_002A299C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A29ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A29ACu) [[unlikely]] return; }
L_002A29AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2878u | kUnwind; return; } goto L_002A2878; } }
    c.budget -= 1;
L_002A29B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A29C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 35u, depth + 1u); else { c.pc = 0x00284D10u; return; } if (c.pc != 0x002A29C8u) [[unlikely]] return; }
L_002A29C8:
    set32(c.r[3], ld32((c.r[19].w[0] + 1416u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A27DCu | kUnwind; return; } goto L_002A27DC; } }
    c.budget -= 1;
L_002A29E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002A2A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[6] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A2A44; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 1;
L_002A2A28:
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A2B88; } }
L_002A2A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002A2B94; } }
L_002A2A44:
    set32(c.r[7], ld32((c.r[16].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[7].w[0] + 12u), c.f[6]);
    c.f[4] = ld32((c.r[3].w[0] + 780u));
    c.f[3] = ld32((c.r[2].w[0] + 784u));
    c.f[5] = ld32((c.r[4].w[0] + 776u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    st32((c.r[29].w[0] + 32u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[29].w[0] + 36u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[29].w[0] + 40u), c.f[3]);
    c.budget -= 21;
L_002A2A98:
    c.r[5].d[0] = ld8((c.r[4].w[0] - 17646u));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A2AB0; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A2ACC; } }
L_002A2AB0:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A2ACC:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 76u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] - 17646u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A2AF4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A2B10; } }
L_002A2AF4:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A2B10:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 80u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0] - 17646u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A2B38; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A2B54; } }
L_002A2B38:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A2B54:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 84u), c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2A98u | kUnwind; return; } goto L_002A2A98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B80u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0034C0A0u; return; } if (c.pc != 0x002A2B80u) [[unlikely]] return; }
L_002A2B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 212u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2A28u | kUnwind; return; } goto L_002A2A28; } }
L_002A2B88:
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2A3Cu | kUnwind; return; } goto L_002A2A3C; } }
L_002A2B94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A2BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A2BE0; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 1;
L_002A2BC4:
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A2C08; } }
L_002A2BE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[2].w[0] - 20408u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C00u); st32((c.r[2].w[0] - 20404u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x002A2C00u) [[unlikely]] return; }
L_002A2C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2BC4u | kUnwind; return; } goto L_002A2BC4; } }
L_002A2C08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A2C5C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));
    c.budget -= 1;
L_002A2C44:
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A2C90; } }
L_002A2C5C:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[2].w[0] - 20408u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C88u); st32((c.r[2].w[0] - 20404u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x002A2C88u) [[unlikely]] return; }
L_002A2C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 1u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2C44u | kUnwind; return; } goto L_002A2C44; } }
L_002A2C90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2CA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 8u), c.r[4].w[0]);  c.pc = t; return; }
L_002A2CB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 6;
    { set32(c.r[4], c.r[4].w[0] + 24576u);  [[clang::musttail]] return unit_0053(c, 18u, depth); }
L_002A2CD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 28u), c.r[4].w[0]);  c.pc = t; return; }
L_002A2CE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[28].w[0] - 29804u), c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 24u), c.f[0]);  c.pc = t; return; }
L_002A2D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D28u); set32(c.r[4], ld32((c.r[4].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 155u, depth + 1u); else { c.pc = 0x002A1CA0u; return; } if (c.pc != 0x002A2D28u) [[unlikely]] return; }
L_002A2D28:
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D68u); set32(c.r[4], c.r[16].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 20u, depth + 1u); else { c.pc = 0x00394470u; return; } if (c.pc != 0x002A2D68u) [[unlikely]] return; }
L_002A2D68:
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A2EE0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1440u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002A2EE0; } }
L_002A2DC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1424u)));
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002A2EC8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1348u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A2EC8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A2EC8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 220u));
    set32(c.r[3], 0u + 76u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A2EC8; } }
    set32(c.r[3], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A2EC8; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A2EC8; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A2EC8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 526u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 1424u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 524u);  if (t) { goto L_002A2EB0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2E90; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E88u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 60u, depth + 1u); else { c.pc = 0x002D8C00u; return; } if (c.pc != 0x002A2E88u) [[unlikely]] return; }
L_002A2E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2EC8; } }
L_002A2E90:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2EA4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 60u, depth + 1u); else { c.pc = 0x002D8C00u; return; } if (c.pc != 0x002A2EA4u) [[unlikely]] return; }
L_002A2EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A2EC8; } }
    c.budget -= 1;
L_002A2EB0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2EC4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 60u, depth + 1u); else { c.pc = 0x002D8C00u; return; } if (c.pc != 0x002A2EC4u) [[unlikely]] return; }
L_002A2EC4:
    c.budget -= 1;
L_002A2EC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 1440u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2DC0u | kUnwind; return; } goto L_002A2DC0; } }
    c.budget -= 1;
L_002A2EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A2F00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002A2F24; } }
L_002A2F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002A3410; } }
L_002A2F24:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A2FEC; } }
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_002A2F40:
    c.f[6] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[6]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A3030; } }
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 1;
L_002A2F58:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A31B4; } }
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 1;
L_002A2F70:
    c.f[6] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[6]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A31F8; } }
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 1;
L_002A2F88:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A3370; } }
    c.f[2] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 1;
L_002A2FA0:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A33BC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.budget -= 1;
L_002A2FB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A340C; } }
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A340C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2F1Cu | kUnwind; return; } goto L_002A2F1C; } }
L_002A2FEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_002A3028; } }
L_002A3004:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[5], 0u + 1u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3020u); set32(c.r[4], c.r[3].w[0] + 208u);  if (depth < kMaxDepth) unit_0049(c, 129u, depth + 1u); else { c.pc = 0x003266D0u; return; } if (c.pc != 0x002A3020u) [[unlikely]] return; }
L_002A3020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 12u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2F40u | kUnwind; return; } goto L_002A2F40; } }
L_002A3028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3004u | kUnwind; return; } goto L_002A3004; } }
L_002A3030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_002A306C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 1;
L_002A304C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3064u); set32(c.r[4], c.r[3].w[0] + 208u);  if (depth < kMaxDepth) unit_0049(c, 129u, depth + 1u); else { c.pc = 0x003266D0u; return; } if (c.pc != 0x002A3064u) [[unlikely]] return; }
L_002A3064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2F58u | kUnwind; return; } goto L_002A2F58; } }
L_002A306C:
    st32((c.r[16].w[0] + 12u), c.f[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[5] = ld32((c.r[2].w[0] + 776u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[4] = ld32((c.r[2].w[0] + 780u));
    st32((c.r[29].w[0] + 32u), c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[3] = ld32((c.r[2].w[0] + 784u));
    st32((c.r[29].w[0] + 36u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    st32((c.r[29].w[0] + 40u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 22;
L_002A30C4:
    c.r[5].d[0] = ld8((c.r[4].w[0] - 17646u));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A30DC; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A30F8; } }
L_002A30DC:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A30F8:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 76u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] - 17646u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A3120; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A313C; } }
L_002A3120:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A313C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 80u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0] - 17646u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A3164; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A3180; } }
L_002A3164:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A3180:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 84u), c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A30C4u | kUnwind; return; } goto L_002A30C4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A31ACu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0034C0A0u; return; } if (c.pc != 0x002A31ACu) [[unlikely]] return; }
L_002A31AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A304Cu | kUnwind; return; } goto L_002A304C; } }
L_002A31B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 16u), c.f[0]);  if (t) { goto L_002A31F0; } }
L_002A31CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[5], 0u + 2u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A31E8u); set32(c.r[4], c.r[3].w[0] + 208u);  if (depth < kMaxDepth) unit_0049(c, 129u, depth + 1u); else { c.pc = 0x003266D0u; return; } if (c.pc != 0x002A31E8u) [[unlikely]] return; }
L_002A31E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 20u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2F70u | kUnwind; return; } goto L_002A2F70; } }
L_002A31F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A31CCu | kUnwind; return; } goto L_002A31CC; } }
L_002A31F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 20u), c.f[0]);  if (t) { goto L_002A3234; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 1;
L_002A3214:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[5], 0u + 3u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A322Cu); set32(c.r[4], c.r[3].w[0] + 208u);  if (depth < kMaxDepth) unit_0049(c, 129u, depth + 1u); else { c.pc = 0x003266D0u; return; } if (c.pc != 0x002A322Cu) [[unlikely]] return; }
L_002A322C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 24u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2F88u | kUnwind; return; } goto L_002A2F88; } }
L_002A3234:
    st32((c.r[16].w[0] + 20u), c.f[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[5] = ld32((c.r[2].w[0] + 776u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[4] = ld32((c.r[2].w[0] + 780u));
    st32((c.r[29].w[0] + 48u), c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[3] = ld32((c.r[2].w[0] + 784u));
    st32((c.r[29].w[0] + 52u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    st32((c.r[29].w[0] + 56u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 22;
L_002A328C:
    c.r[5].d[0] = ld8((c.r[4].w[0] - 17646u));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A32A4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A32C0; } }
L_002A32A4:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A32C0:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 76u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] - 17646u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A32E8; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A3304; } }
L_002A32E8:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A3304:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 80u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0] - 17646u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002A332C; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002A3348; } }
L_002A332C:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002A3348:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 84u), c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A328Cu | kUnwind; return; } goto L_002A328C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3214u | kUnwind; return; } goto L_002A3214; } }
L_002A3370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 24u), c.f[0]);  if (t) { goto L_002A33AC; } }
L_002A3388:
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = ld32((c.r[16].w[0] + 24u));
    set32(c.r[5], 0u + 4u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A33A4u); set32(c.r[4], c.r[3].w[0] + 208u);  if (depth < kMaxDepth) unit_0049(c, 129u, depth + 1u); else { c.pc = 0x003266D0u; return; } if (c.pc != 0x002A33A4u) [[unlikely]] return; }
L_002A33A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 28u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2FA0u | kUnwind; return; } goto L_002A2FA0; } }
L_002A33AC:
    st32((c.r[16].w[0] + 24u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29804u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3388u | kUnwind; return; } goto L_002A3388; } }
L_002A33BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 28u), c.f[0]);  if (t) { goto L_002A33FC; } }
    st32((c.r[16].w[0] + 28u), c.f[1]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 2;
L_002A33DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = ld32((c.r[16].w[0] + 28u));
    set32(c.r[5], 0u + 5u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A33F4u); set32(c.r[4], c.r[3].w[0] + 208u);  if (depth < kMaxDepth) unit_0049(c, 129u, depth + 1u); else { c.pc = 0x003266D0u; return; } if (c.pc != 0x002A33F4u) [[unlikely]] return; }
L_002A33F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A2FB8u | kUnwind; return; } goto L_002A2FB8; } }
L_002A33FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3404u); set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));  if (depth < kMaxDepth) unit_0028(c, 248u, depth + 1u); else { c.pc = 0x002A2D90u; return; } if (c.pc != 0x002A3404u) [[unlikely]] return; }
L_002A3404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A33DCu | kUnwind; return; } goto L_002A33DC; } }
L_002A340C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002A3410:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A3420:
    set32(c.r[3], ld32((c.r[4].w[0] + 212u)));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 20u), c.f[0]);  c.pc = t; return; }
L_002A3460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[1] = ld32((c.r[5].w[0]));
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002A3508; } }
L_002A3488:
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A3520; } }
L_002A34A0:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A3548; } }
L_002A34B8:
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A3578; } }
L_002A34D0:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A35A8; } }
L_002A34E8:
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A35D8; } }
L_002A3500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002A35F0; } }
L_002A3508:
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3488u | kUnwind; return; } goto L_002A3488; } }
L_002A3520:
    set32(c.r[2], ld32((c.r[17].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3538u); st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0053(c, 18u, depth + 1u); else { c.pc = 0x0034C220u; return; } if (c.pc != 0x002A3538u) [[unlikely]] return; }
L_002A3538:
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A34A0u | kUnwind; return; } goto L_002A34A0; } }
L_002A3548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3550u); set32(c.r[4], c.r[17].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 20u, depth + 1u); else { c.pc = 0x00394470u; return; } if (c.pc != 0x002A3550u) [[unlikely]] return; }
L_002A3550:
    set32(c.r[4], ld32((c.r[17].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[1]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 16u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A34B8u | kUnwind; return; } goto L_002A34B8; } }
L_002A3578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3580u); set32(c.r[4], ld32((c.r[17].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 155u, depth + 1u); else { c.pc = 0x002A1CA0u; return; } if (c.pc != 0x002A3580u) [[unlikely]] return; }
L_002A3580:
    set32(c.r[4], ld32((c.r[17].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A34D0u | kUnwind; return; } goto L_002A34D0; } }
L_002A35A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    st32((c.r[28].w[0] - 29804u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.f[1] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 24u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A34E8u | kUnwind; return; } goto L_002A34E8; } }
L_002A35D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[3].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 212u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 28u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3500u | kUnwind; return; } goto L_002A3500; } }
L_002A35F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A3600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3618u); set32(c.r[4], ld32((c.r[4].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 253u, depth + 1u); else { c.pc = 0x002A2F00u; return; } if (c.pc != 0x002A3618u) [[unlikely]] return; }
L_002A3618:
    set32(c.r[3], ld32((c.r[16].w[0] + 212u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 36u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3648; } }
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A3648; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002A3648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A36B8; } }
L_002A3650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3658u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 220u, depth + 1u); else { c.pc = 0x002A27B0u; return; } if (c.pc != 0x002A3658u) [[unlikely]] return; }
L_002A3658:
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3664u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0027(c, 165u, depth + 1u); else { c.pc = 0x0029F540u; return; } if (c.pc != 0x002A3664u) [[unlikely]] return; }
L_002A3664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A366Cu); set32(c.r[4], ld32((c.r[16].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 94u, depth + 1u); else { c.pc = 0x00451210u; return; } if (c.pc != 0x002A366Cu) [[unlikely]] return; }
L_002A366C:
    set32(c.r[4], ld32((c.r[16].w[0] + 1532u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002A36A8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3688u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3688u) [[unlikely]] return; }
L_002A3688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A36A8; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A36A0u) [[unlikely]] return; }
L_002A36A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36A8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 102u, depth + 1u); else { c.pc = 0x004ACDD0u; return; } if (c.pc != 0x002A36A8u) [[unlikely]] return; }
L_002A36A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 163u, depth + 1u); else { c.pc = 0x0027D940u; return; } if (c.pc != 0x002A36B0u) [[unlikely]] return; }
L_002A36B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002A36D0; } }
L_002A36B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 389u, depth + 1u); else { c.pc = 0x0027FE70u; return; } if (c.pc != 0x002A36C4u) [[unlikely]] return; }
L_002A36C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3650u | kUnwind; return; } goto L_002A3650; } }
L_002A36D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A36E0:
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.f[7] = ld32((c.r[4].w[0] + 56u));
    c.r[6].d[0] = c.r[3].d[0] | 39322ull;
    c.f[5] = c.r[6].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[4] = c.r[3].w[0];
    c.f[3] = ld32((c.r[5].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[7], c.f[5]);
    c.f[2] = 0u;
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[6] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[8] = ld32((c.r[4].w[0] + 52u));  if (t) { goto L_002A374C; } }
L_002A3744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3760; } }
L_002A374C:
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[8]);
    st32((c.r[4].w[0] + 56u), c.f[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 60u), c.f[6]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3744u | kUnwind; return; } goto L_002A3744; } }
L_002A3760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A3770:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] & 255ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[26] = c.r[2].w[0];
    c.budget -= 27;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_002A39A0; } }
    c.f[26] = 0u;
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[20] = c.f[12];
    c.f[21] = c.f[12];
    c.budget -= 4;
L_002A37EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A37F4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002A37F4u) [[unlikely]] return; }
L_002A37F4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3800u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002A3800u) [[unlikely]] return; }
L_002A3800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.f[3] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[22] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[20]);
    c.f[12] = c.f[21];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A382Cu); c.f[23] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002A382Cu) [[unlikely]] return; }
L_002A382C:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3838u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002A3838u) [[unlikely]] return; }
L_002A3838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.f[2] = 0u;
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[21]);
    set32(c.r[7], 0u + 25u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[8], c.r[29].w[0] + 319u);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3878u); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 172u, depth + 1u); else { c.pc = 0x002A5F60u; return; } if (c.pc != 0x002A3878u) [[unlikely]] return; }
L_002A3878:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 319u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_002A3998; } }
L_002A3888:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_002A3970; } }
    c.r[2].d[0] = c.r[30].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 264u)));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A3970; } }
L_002A38B0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 522u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 522u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 8704u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3BF0; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[22].d[0];  if (t) { goto L_002A3BF0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3BF0; } }
    c.f[5] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x441C0000u);
    c.f[4] = ld32((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[7] = ld32((c.r[17].w[0] + 32u));
    c.f[6] = ld32((c.r[16].w[0] + 32u));
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.f[2] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = c.r[2].w[0];
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[24] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.f[1] = 0u;
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A3BF0; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[6]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A3AF4; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002A3BF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);  if (t) { goto L_002A3AF8; } }
    c.budget -= 1;
L_002A3970:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002A3C30; } }
    c.budget -= 1;
L_002A3980:
    set32(c.r[2], c.r[30].w[0] + 1u);
    c.r[30].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 319u));
    c.r[2].d[0] = c.r[30].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3888u | kUnwind; return; } goto L_002A3888; } }
L_002A3998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 204u)));  if (t) { goto L_002A3DE0; } }
L_002A39A0:
    set32(c.r[25], ld32((c.r[22].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A39B0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A39B0u) [[unlikely]] return; }
L_002A39B0:
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A39CCu); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002A39CCu) [[unlikely]] return; }
L_002A39CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[5].d[0] = 0ull | 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[4] = c.r[2].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    set32(c.r[2], 0u + 1u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    set32(c.r[3], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 26;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[0]);  if (t) { goto L_002A3A98; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A37ECu | kUnwind; return; } goto L_002A37EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A37ECu | kUnwind; return; } goto L_002A37EC; } }
L_002A3A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A37ECu | kUnwind; return; } goto L_002A37EC; } }
L_002A3AF4:
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 1;
L_002A3AF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[3] = 0u;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], 0u + 2u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);
    c.budget -= 15;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; c.f[25] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[0]);  if (t) { goto L_002A3BD8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_002A3BD8; } }
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A3B60; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 762u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[25] = fp::ee::add(c.fcr31, c.f[25], c.f[0]);
    c.budget -= 5;
L_002A3B60:
    set32(c.r[2], ld32((c.r[17].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3BD8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 260u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3B98; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002A3C08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A3BA0; } }
L_002A3B98:
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 2;
L_002A3BA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002A3BD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A3BD8; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[24]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[25] = fp::ee::mul(c.fcr31, c.f[25], c.f[0]);
    c.budget -= 6;
L_002A3BD8:
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[26]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A3BF0; } }
    c.f[26] = c.f[25];
    st32((c.r[29].w[0] + 204u), c.r[17].w[0]);
    c.budget -= 3;
L_002A3BF0:
    set32(c.r[17], ld32((c.r[17].w[0] + 1572u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A38B0u | kUnwind; return; } goto L_002A38B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3970u | kUnwind; return; } goto L_002A3970; } }
    c.budget -= 1;
L_002A3C08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3C14u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002A3C14u) [[unlikely]] return; }
L_002A3C14:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3C24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3C24u) [[unlikely]] return; }
L_002A3C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3BA0u | kUnwind; return; } goto L_002A3BA0; } }
    c.budget -= 1;
L_002A3C30:
    c.r[2].d[0] = c.r[30].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[2].w[0] + 208u);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3C50u); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002A(c, 79u, depth + 1u); else { c.pc = 0x002A9240u; return; } if (c.pc != 0x002A3C50u) [[unlikely]] return; }
L_002A3C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3980u | kUnwind; return; } goto L_002A3980; } }
L_002A3C58:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3C68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3C68u) [[unlikely]] return; }
L_002A3C68:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002A3DC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002A3D60; } }
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A3D60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002A3D60; } }
L_002A3CA0:
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3CB0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3CB0u) [[unlikely]] return; }
L_002A3CB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A3CD0; } }
L_002A3CB8:
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 308u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3CC8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3CC8u) [[unlikely]] return; }
L_002A3CC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3DC0; } }
L_002A3CD0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[22].d[0];  if (t) { goto L_002A3DC0; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3CECu); set32(c.r[17], c.r[16].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A3CECu) [[unlikely]] return; }
L_002A3CEC:
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x441C0000u);
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[7] = ld32((c.r[2].w[0]));
    c.f[6] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[2] = 0u;
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A3DC0; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[6]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A3D70; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002A3DC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3D70; } }
L_002A3D60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3CB8u | kUnwind; return; } goto L_002A3CB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3CA0u | kUnwind; return; } goto L_002A3CA0; } }
L_002A3D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[3] = 0u;
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[26]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A3DC0; } }
    c.f[26] = c.f[0];
    st32((c.r[29].w[0] + 204u), c.r[21].w[0]);
    c.budget -= 3;
L_002A3DC0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3DD0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 79u, depth + 1u); else { c.pc = 0x002A9240u; return; } if (c.pc != 0x002A3DD0u) [[unlikely]] return; }
L_002A3DD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3C58u | kUnwind; return; } goto L_002A3C58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3980u | kUnwind; return; } goto L_002A3980; } }
L_002A3DE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_002A3E30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 48u);  c.pc = t; return; }
L_002A3E40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1440u)));
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; c.f[21] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);  if (t) { goto L_002A3EE8; } }
L_002A3E98:
    set32(c.r[2], ld32((c.r[21].w[0] + 1424u)));
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002A3EE8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3EF0; } }
    c.budget -= 1;
L_002A3ED0:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3E98u | kUnwind; return; } goto L_002A3E98; } }
L_002A3EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0029(c, 3u, depth); } }
L_002A3EF0:
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[21].w[0] + 32u));
    set32(c.r[3], ld32((c.r[21].w[0] + 1432u)));
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = ld32((c.r[21].w[0] + 36u));
    set32(c.r[2], ld32((c.r[17].w[0] + 1360u)));
    c.f[5] = ld32((c.r[17].w[0] + 40u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[3] = fp::ee::sqrt(c.fcr31, c.f[3]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[1] = ld32((c.r[20].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[7] = ld32((c.r[3].w[0]));
    c.f[4] = 0u;
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[7]);
    c.budget -= 30;
    { const bool t = c.r[2].d[0] == 0ull; c.f[22] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);  if (t) { goto L_002A3FD0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 260u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3F98; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002A3FE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002A3FA0; } }
    c.budget -= 1;
L_002A3F98:
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 2;
L_002A3FA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_002A3FD0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3FD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::ee::sub(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 5;
L_002A3FD0:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3ED0u | kUnwind; return; } goto L_002A3ED0; } }
    c.f[21] = c.f[22];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3ED0u | kUnwind; return; } goto L_002A3ED0; } }
L_002A3FE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3FF4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002A3FF4u) [[unlikely]] return; }
L_002A3FF4:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4004u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0029(c, 2u, depth);
}

}

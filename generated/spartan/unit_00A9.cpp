#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A9[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12,
    0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0,
    0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60,
    0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0,
    0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0,
    0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0,
    0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274,
    0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0,
    329, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0,
    0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 0,
    345, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354,
    0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0,
};

void unit_00A9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004A4000;
    case 2u: goto L_004A4018;
    case 3u: goto L_004A4038;
    case 4u: goto L_004A4054;
    case 5u: goto L_004A4088;
    case 6u: goto L_004A4090;
    case 7u: goto L_004A40AC;
    case 8u: goto L_004A40C0;
    case 9u: goto L_004A40DC;
    case 10u: goto L_004A4164;
    case 11u: goto L_004A4170;
    case 12u: goto L_004A417C;
    case 13u: goto L_004A4188;
    case 14u: goto L_004A4194;
    case 15u: goto L_004A41A0;
    case 16u: goto L_004A430C;
    case 17u: goto L_004A4314;
    case 18u: goto L_004A43A0;
    case 19u: goto L_004A43BC;
    case 20u: goto L_004A43D0;
    case 21u: goto L_004A46A0;
    case 22u: goto L_004A46B0;
    case 23u: goto L_004A46E0;
    case 24u: goto L_004A4700;
    case 25u: goto L_004A473C;
    case 26u: goto L_004A4754;
    case 27u: goto L_004A4780;
    case 28u: goto L_004A47C0;
    case 29u: goto L_004A47CC;
    case 30u: goto L_004A47E0;
    case 31u: goto L_004A4828;
    case 32u: goto L_004A4834;
    case 33u: goto L_004A4878;
    case 34u: goto L_004A48BC;
    case 35u: goto L_004A48C4;
    case 36u: goto L_004A48D8;
    case 37u: goto L_004A4910;
    case 38u: goto L_004A493C;
    case 39u: goto L_004A4944;
    case 40u: goto L_004A4950;
    case 41u: goto L_004A4964;
    case 42u: goto L_004A49AC;
    case 43u: goto L_004A49E8;
    case 44u: goto L_004A4A2C;
    case 45u: goto L_004A4A58;
    case 46u: goto L_004A4A60;
    case 47u: goto L_004A4A6C;
    case 48u: goto L_004A4A84;
    case 49u: goto L_004A4A8C;
    case 50u: goto L_004A4AA4;
    case 51u: goto L_004A4AAC;
    case 52u: goto L_004A4AC4;
    case 53u: goto L_004A4ACC;
    case 54u: goto L_004A4AE4;
    case 55u: goto L_004A4B00;
    case 56u: goto L_004A4B20;
    case 57u: goto L_004A4B68;
    case 58u: goto L_004A4B74;
    case 59u: goto L_004A4BB8;
    case 60u: goto L_004A4BFC;
    case 61u: goto L_004A4C04;
    case 62u: goto L_004A4C18;
    case 63u: goto L_004A4C50;
    case 64u: goto L_004A4C7C;
    case 65u: goto L_004A4C90;
    case 66u: goto L_004A4CEC;
    case 67u: goto L_004A4D34;
    case 68u: goto L_004A4D78;
    case 69u: goto L_004A4DBC;
    case 70u: goto L_004A4DE8;
    case 71u: goto L_004A4E10;
    case 72u: goto L_004A4E28;
    case 73u: goto L_004A4E50;
    case 74u: goto L_004A4E70;
    case 75u: goto L_004A4EB8;
    case 76u: goto L_004A4EF4;
    case 77u: goto L_004A4F38;
    case 78u: goto L_004A4F64;
    case 79u: goto L_004A4F80;
    case 80u: goto L_004A4FC8;
    case 81u: goto L_004A4FF4;
    case 82u: goto L_004A5010;
    case 83u: goto L_004A5028;
    case 84u: goto L_004A5070;
    case 85u: goto L_004A50AC;
    case 86u: goto L_004A50D8;
    case 87u: goto L_004A50F0;
    case 88u: goto L_004A5118;
    case 89u: goto L_004A5160;
    case 90u: goto L_004A5178;
    case 91u: goto L_004A5184;
    case 92u: goto L_004A51C8;
    case 93u: goto L_004A520C;
    case 94u: goto L_004A521C;
    case 95u: goto L_004A5230;
    case 96u: goto L_004A5268;
    case 97u: goto L_004A5278;
    case 98u: goto L_004A528C;
    case 99u: goto L_004A52C4;
    case 100u: goto L_004A52F0;
    case 101u: goto L_004A5334;
    case 102u: goto L_004A5380;
    case 103u: goto L_004A53A0;
    case 104u: goto L_004A541C;
    case 105u: goto L_004A5430;
    case 106u: goto L_004A5448;
    case 107u: goto L_004A545C;
    case 108u: goto L_004A5470;
    case 109u: goto L_004A5494;
    case 110u: goto L_004A54DC;
    case 111u: goto L_004A54FC;
    case 112u: goto L_004A5528;
    case 113u: goto L_004A5534;
    case 114u: goto L_004A553C;
    case 115u: goto L_004A5548;
    case 116u: goto L_004A5550;
    case 117u: goto L_004A555C;
    case 118u: goto L_004A5564;
    case 119u: goto L_004A5570;
    case 120u: goto L_004A5578;
    case 121u: goto L_004A5584;
    case 122u: goto L_004A558C;
    case 123u: goto L_004A5598;
    case 124u: goto L_004A5610;
    case 125u: goto L_004A5654;
    case 126u: goto L_004A5728;
    case 127u: goto L_004A572C;
    case 128u: goto L_004A5754;
    case 129u: goto L_004A5768;
    case 130u: goto L_004A577C;
    case 131u: goto L_004A57A0;
    case 132u: goto L_004A58B0;
    case 133u: goto L_004A58C0;
    case 134u: goto L_004A58D0;
    case 135u: goto L_004A58E0;
    case 136u: goto L_004A590C;
    case 137u: goto L_004A5940;
    case 138u: goto L_004A5994;
    case 139u: goto L_004A59B0;
    case 140u: goto L_004A5A20;
    case 141u: goto L_004A5A80;
    case 142u: goto L_004A5AA0;
    case 143u: goto L_004A5AD4;
    case 144u: goto L_004A5B00;
    case 145u: goto L_004A5B10;
    case 146u: goto L_004A5B50;
    case 147u: goto L_004A5B74;
    case 148u: goto L_004A5B88;
    case 149u: goto L_004A5C00;
    case 150u: goto L_004A5C20;
    case 151u: goto L_004A5C30;
    case 152u: goto L_004A5C40;
    case 153u: goto L_004A5C80;
    case 154u: goto L_004A5C94;
    case 155u: goto L_004A5D0C;
    case 156u: goto L_004A5D30;
    case 157u: goto L_004A5D70;
    case 158u: goto L_004A5D78;
    case 159u: goto L_004A5DA8;
    case 160u: goto L_004A5DD0;
    case 161u: goto L_004A5E18;
    case 162u: goto L_004A5E70;
    case 163u: goto L_004A5E9C;
    case 164u: goto L_004A5EC8;
    case 165u: goto L_004A5EDC;
    case 166u: goto L_004A5F54;
    case 167u: goto L_004A5F84;
    case 168u: goto L_004A5FB0;
    case 169u: goto L_004A5FD4;
    case 170u: goto L_004A5FE8;
    case 171u: goto L_004A6060;
    case 172u: goto L_004A6078;
    case 173u: goto L_004A6088;
    case 174u: goto L_004A60C0;
    case 175u: goto L_004A60D0;
    case 176u: goto L_004A60FC;
    case 177u: goto L_004A6108;
    case 178u: goto L_004A615C;
    case 179u: goto L_004A6200;
    case 180u: goto L_004A6224;
    case 181u: goto L_004A6278;
    case 182u: goto L_004A62A0;
    case 183u: goto L_004A62E0;
    case 184u: goto L_004A62F0;
    case 185u: goto L_004A6300;
    case 186u: goto L_004A6320;
    case 187u: goto L_004A6350;
    case 188u: goto L_004A63C0;
    case 189u: goto L_004A63EC;
    case 190u: goto L_004A6434;
    case 191u: goto L_004A6460;
    case 192u: goto L_004A6480;
    case 193u: goto L_004A649C;
    case 194u: goto L_004A64F8;
    case 195u: goto L_004A6508;
    case 196u: goto L_004A6590;
    case 197u: goto L_004A65C8;
    case 198u: goto L_004A6600;
    case 199u: goto L_004A6620;
    case 200u: goto L_004A665C;
    case 201u: goto L_004A6688;
    case 202u: goto L_004A66B0;
    case 203u: goto L_004A66E0;
    case 204u: goto L_004A66F8;
    case 205u: goto L_004A6700;
    case 206u: goto L_004A6720;
    case 207u: goto L_004A6770;
    case 208u: goto L_004A678C;
    case 209u: goto L_004A679C;
    case 210u: goto L_004A67C0;
    case 211u: goto L_004A67D4;
    case 212u: goto L_004A684C;
    case 213u: goto L_004A6860;
    case 214u: goto L_004A6880;
    case 215u: goto L_004A68AC;
    case 216u: goto L_004A68D8;
    case 217u: goto L_004A68EC;
    case 218u: goto L_004A6964;
    case 219u: goto L_004A6990;
    case 220u: goto L_004A69A0;
    case 221u: goto L_004A69C8;
    case 222u: goto L_004A69D8;
    case 223u: goto L_004A6A0C;
    case 224u: goto L_004A6A38;
    case 225u: goto L_004A6A6C;
    case 226u: goto L_004A6A98;
    case 227u: goto L_004A6AB0;
    case 228u: goto L_004A6AD0;
    case 229u: goto L_004A6B18;
    case 230u: goto L_004A6B38;
    case 231u: goto L_004A6B4C;
    case 232u: goto L_004A6B5C;
    case 233u: goto L_004A6B7C;
    case 234u: goto L_004A6B94;
    case 235u: goto L_004A6BB4;
    case 236u: goto L_004A6BD0;
    case 237u: goto L_004A6BF0;
    case 238u: goto L_004A6C00;
    case 239u: goto L_004A6C20;
    case 240u: goto L_004A6C4C;
    case 241u: goto L_004A6C58;
    case 242u: goto L_004A6CAC;
    case 243u: goto L_004A6D14;
    case 244u: goto L_004A6D20;
    case 245u: goto L_004A6D4C;
    case 246u: goto L_004A6D5C;
    case 247u: goto L_004A6D74;
    case 248u: goto L_004A6D80;
    case 249u: goto L_004A6DC0;
    case 250u: goto L_004A6DDC;
    case 251u: goto L_004A6E14;
    case 252u: goto L_004A6E40;
    case 253u: goto L_004A6EC0;
    case 254u: goto L_004A6F24;
    case 255u: goto L_004A6F4C;
    case 256u: goto L_004A6F94;
    case 257u: goto L_004A6FB0;
    case 258u: goto L_004A7070;
    case 259u: goto L_004A7080;
    case 260u: goto L_004A7090;
    case 261u: goto L_004A70A0;
    case 262u: goto L_004A70B0;
    case 263u: goto L_004A70C0;
    case 264u: goto L_004A7118;
    case 265u: goto L_004A712C;
    case 266u: goto L_004A7134;
    case 267u: goto L_004A7168;
    case 268u: goto L_004A7178;
    case 269u: goto L_004A7188;
    case 270u: goto L_004A71B0;
    case 271u: goto L_004A7230;
    case 272u: goto L_004A725C;
    case 273u: goto L_004A726C;
    case 274u: goto L_004A727C;
    case 275u: goto L_004A7290;
    case 276u: goto L_004A7298;
    case 277u: goto L_004A72C8;
    case 278u: goto L_004A72F4;
    case 279u: goto L_004A7310;
    case 280u: goto L_004A7320;
    case 281u: goto L_004A7344;
    case 282u: goto L_004A734C;
    case 283u: goto L_004A7368;
    case 284u: goto L_004A73A0;
    case 285u: goto L_004A73B0;
    case 286u: goto L_004A7420;
    case 287u: goto L_004A7440;
    case 288u: goto L_004A7450;
    case 289u: goto L_004A7490;
    case 290u: goto L_004A74A4;
    case 291u: goto L_004A751C;
    case 292u: goto L_004A7528;
    case 293u: goto L_004A7530;
    case 294u: goto L_004A755C;
    case 295u: goto L_004A7570;
    case 296u: goto L_004A75E8;
    case 297u: goto L_004A7600;
    case 298u: goto L_004A7630;
    case 299u: goto L_004A7648;
    case 300u: goto L_004A7650;
    case 301u: goto L_004A7660;
    case 302u: goto L_004A7668;
    case 303u: goto L_004A7690;
    case 304u: goto L_004A76B8;
    case 305u: goto L_004A76D0;
    case 306u: goto L_004A772C;
    case 307u: goto L_004A7768;
    case 308u: goto L_004A7780;
    case 309u: goto L_004A77B8;
    case 310u: goto L_004A77F4;
    case 311u: goto L_004A7810;
    case 312u: goto L_004A783C;
    case 313u: goto L_004A7878;
    case 314u: goto L_004A7890;
    case 315u: goto L_004A78BC;
    case 316u: goto L_004A78F8;
    case 317u: goto L_004A7910;
    case 318u: goto L_004A7948;
    case 319u: goto L_004A7984;
    case 320u: goto L_004A79A0;
    case 321u: goto L_004A79CC;
    case 322u: goto L_004A7A08;
    case 323u: goto L_004A7A20;
    case 324u: goto L_004A7A50;
    case 325u: goto L_004A7ACC;
    case 326u: goto L_004A7AD8;
    case 327u: goto L_004A7AE4;
    case 328u: goto L_004A7AF0;
    case 329u: goto L_004A7B00;
    case 330u: goto L_004A7B0C;
    case 331u: goto L_004A7B18;
    case 332u: goto L_004A7B24;
    case 333u: goto L_004A7B60;
    case 334u: goto L_004A7B6C;
    case 335u: goto L_004A7B78;
    case 336u: goto L_004A7B84;
    case 337u: goto L_004A7B98;
    case 338u: goto L_004A7BA4;
    case 339u: goto L_004A7BB0;
    case 340u: goto L_004A7BBC;
    case 341u: goto L_004A7BCC;
    case 342u: goto L_004A7BD8;
    case 343u: goto L_004A7BE4;
    case 344u: goto L_004A7BF0;
    case 345u: goto L_004A7C00;
    case 346u: goto L_004A7C0C;
    case 347u: goto L_004A7C18;
    case 348u: goto L_004A7C24;
    case 349u: goto L_004A7C40;
    case 350u: goto L_004A7C80;
    case 351u: goto L_004A7CAC;
    case 352u: goto L_004A7CC8;
    case 353u: goto L_004A7CF0;
    case 354u: goto L_004A7CFC;
    case 355u: goto L_004A7D04;
    case 356u: goto L_004A7D1C;
    case 357u: goto L_004A7D30;
    case 358u: goto L_004A7DA0;
    case 359u: goto L_004A7E04;
    case 360u: goto L_004A7E30;
    case 361u: goto L_004A7E38;
    case 362u: goto L_004A7E40;
    case 363u: goto L_004A7E60;
    case 364u: goto L_004A7EA0;
    case 365u: goto L_004A7EAC;
    case 366u: goto L_004A7F00;
    case 367u: goto L_004A7F68;
    case 368u: goto L_004A7FA4;
    case 369u: goto L_004A7FC8;
    case 370u: goto L_004A7FD4;
    case 371u: goto L_004A7FE4;
    default: bad_entry(c, 0x004A4000u); return;
    }
L_004A4000:
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[22] = c.r[6].w[0];
    c.f[21] = c.r[5].w[0];
    c.f[20] = 0u;
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.budget -= 6;
L_004A4018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 28464u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4038u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004A4038u) [[unlikely]] return; }
L_004A4038:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4054u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x004A4054u) [[unlikely]] return; }
L_004A4054:
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0] + 348u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 48u));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    st32((c.r[29].w[0] + 304u), c.f[2]);
    st32((c.r[22].w[0]), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4088u); st32((c.r[23].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A4088u) [[unlikely]] return; }
L_004A4088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4090u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A4090u) [[unlikely]] return; }
L_004A4090:
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[2] = 0u;
    c.f[29] = fp::ee::sub(c.fcr31, c.f[25], c.f[26]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A40ACu); c.f[30] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A40ACu) [[unlikely]] return; }
L_004A40AC:
    c.f[1] = 0u;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[26]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A40C0u); c.f[28] = fp::ee::madd(c.fcr31, c.facc, c.f[29], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A40C0u) [[unlikely]] return; }
L_004A40C0:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[23], c.f[24]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[24]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A40DCu); c.f[27] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A40DCu) [[unlikely]] return; }
L_004A40DC:
    c.f[1] = 0u;
    set32(c.r[2], c.r[29].w[0] + 296u);
    st32((c.r[2].w[0]), c.f[28]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[26]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[29], c.f[0]);
    st32((c.r[30].w[0]), c.f[27]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[29].w[0] + 288u), c.f[0]);  if (t) { goto L_004A4108; } }
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[27], c.f[0]);
    st32((c.r[30].w[0]), c.f[0]);
    c.budget -= 3;
L_004A4108:
    set32(c.r[3], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[29].w[0] + 316u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[6] = ld32((c.r[29].w[0] + 304u));
    c.f[5] = ld32((c.r[22].w[0]));
    c.f[4] = ld32((c.r[23].w[0]));
    set32(c.r[16], c.r[3].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[2], c.r[29].w[0] + 296u);
    st32((c.r[16].w[0] + 32u), c.f[6]);
    st32((c.r[16].w[0] + 36u), c.f[5]);
    st32((c.r[16].w[0] + 40u), c.f[4]);
    st32((c.r[16].w[0] + 44u), c.f[3]);
    st32((c.r[16].w[0] + 64u), c.f[22]);
    st32((c.r[16].w[0] + 68u), c.f[20]);
    c.f[1] = ld32((c.r[30].w[0]));
    st32((c.r[16].w[0] + 48u), c.f[2]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[12] = c.f[20];
    st32((c.r[16].w[0] + 52u), c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4164u); st32((c.r[16].w[0] + 60u), c.f[30]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A4164u) [[unlikely]] return; }
L_004A4164:
    c.f[31] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4170u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A4170u) [[unlikely]] return; }
L_004A4170:
    c.f[30] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A417Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A417Cu) [[unlikely]] return; }
L_004A417C:
    c.f[29] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4188u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A4188u) [[unlikely]] return; }
L_004A4188:
    c.f[28] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4194u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A4194u) [[unlikely]] return; }
L_004A4194:
    c.f[27] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A41A0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A41A0u) [[unlikely]] return; }
L_004A41A0:
    set32(c.r[2], c.r[29].w[0] + 236u);
    set32(c.r[9], c.r[29].w[0] + 240u);
    st32((c.r[2].w[0]), c.f[20]);
    set32(c.r[8], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[29].w[0] + 252u);
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[2].w[0]), c.f[20]);
    c.r[6].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[2], c.r[29].w[0] + 268u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 1u));
    st32((c.r[2].w[0]), c.f[20]);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 2u));
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[2], c.r[29].w[0] + 284u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[27], c.f[28]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 3u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[27], c.f[29]);
    c.r[2].d[0] = c.r[18].sd[0] < 12ll ? 1ull : 0ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[22]);
    st32((c.r[29].w[0] + 224u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[30], c.f[3]);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[31]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[22]);
    c.facc = fp::ee::mul(c.fcr31, c.f[31], c.f[3]);
    st32((c.r[9].w[0]), c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[30]);
    set32(c.r[9], c.r[29].w[0] + 256u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[28]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[0], c.f[29]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[22]);
    st32((c.r[9].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[30], c.f[3]);
    set32(c.r[9], c.r[29].w[0] + 228u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[22]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[1] = c.f[28] ^ fp::kSign;
    set32(c.r[9], c.r[29].w[0] + 232u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[22]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[31]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[30]);
    c.facc = fp::ee::mul(c.fcr31, c.f[31], c.f[3]);
    set32(c.r[9], c.r[29].w[0] + 244u);
    c.f[0] = c.f[27] ^ fp::kSign;
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[30]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[22]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[30]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[29], c.f[30]);
    set32(c.r[9], c.r[29].w[0] + 248u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[22]);
    st32((c.r[9].w[0]), c.f[0]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[22]);
    set32(c.r[9], c.r[29].w[0] + 260u);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[29], c.f[31]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    set32(c.r[9], c.r[29].w[0] + 264u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[22]);
    st32((c.r[9].w[0]), c.f[0]);
    ld128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    c.f[2] = ld32((c.r[29].w[0] + 304u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[20], c.f[22]);
    set32(c.r[9], c.r[29].w[0] + 272u);
    c.f[1] = ld32((c.r[22].w[0]));
    st128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    c.f[0] = ld32((c.r[23].w[0]));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[9].w[0]), c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    set32(c.r[9], c.r[29].w[0] + 276u);
    st32((c.r[9].w[0]), c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[9], c.r[29].w[0] + 280u);
    st32((c.r[9].w[0]), c.f[0]);
    ld128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 88;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A4018u | kUnwind; return; } goto L_004A4018; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A430Cu); set32(c.r[5], ld32((c.r[29].w[0] + 220u)));  if (depth < kMaxDepth) unit_007D(c, 41u, depth + 1u); else { c.pc = 0x003F4390u; return; } if (c.pc != 0x004A430Cu) [[unlikely]] return; }
L_004A430C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4314u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A4314u) [[unlikely]] return; }
L_004A4314:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[4].d[0] | 52432ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[21].w[0] + 8u), c.f[0]);
    st32((c.r[21].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_004A43A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_004A4690; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 3376u);
    c.budget -= 3;
L_004A43BC:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[10].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 5;
L_004A43D0:
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[10], c.r[10].w[0] + 6u);
    c.r[12].d[0] = c.r[10].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[15], c.r[3].w[0] + 8u);
    set32(c.r[13], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[13].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[15].w[0]);
    set32(c.r[13], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], c.r[13].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[13].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[5], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[5].w[0] + 80u);
    set32(c.r[5], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[15], c.r[3].w[0] + 8u);
    set32(c.r[13], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[13].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[15].w[0]);
    set32(c.r[13], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], c.r[13].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[13].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[5], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[5].w[0] + 160u);
    set32(c.r[5], ld32((c.r[5].w[0] + 160u)));
    set32(c.r[15], c.r[3].w[0] + 8u);
    set32(c.r[13], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[13].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[15].w[0]);
    set32(c.r[13], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], c.r[13].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[13].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[5], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[5].w[0] + 240u);
    set32(c.r[5], ld32((c.r[5].w[0] + 240u)));
    set32(c.r[15], c.r[3].w[0] + 8u);
    set32(c.r[13], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[13].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[15].w[0]);
    set32(c.r[13], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], c.r[13].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[13].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[5], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[5].w[0] + 320u);
    set32(c.r[5], ld32((c.r[5].w[0] + 320u)));
    set32(c.r[15], c.r[3].w[0] + 8u);
    set32(c.r[13], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[13].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[15].w[0]);
    set32(c.r[13], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], c.r[13].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[13].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[5], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[5].w[0] + 400u);
    set32(c.r[8], c.r[8].w[0] + 480u);
    set32(c.r[5], ld32((c.r[5].w[0] + 400u)));
    set32(c.r[15], c.r[3].w[0] + 8u);
    set32(c.r[13], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], c.r[13].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[15].w[0]);
    set32(c.r[13], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], c.r[13].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[13].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[13], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[13].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 171;
    { const bool t = c.r[12].d[0] != 0ull; st32((c.r[3].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A43D0u | kUnwind; return; } goto L_004A43D0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[3].d[0] = c.r[11].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A43BCu | kUnwind; return; } goto L_004A43BC; } }
L_004A4690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A46A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_004A46B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A4720; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A46E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[19], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A4708; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4700u); set32(c.r[5], c.r[5].w[0] + 14112u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004A4700u) [[unlikely]] return; }
L_004A4700:
    st32((c.r[19].w[0] + 16u), 0u);
    c.budget -= 2;
L_004A4708:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A46E0u | kUnwind; return; } goto L_004A46E0; } }
    c.budget -= 1;
L_004A4720:
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A4740; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A473Cu); set32(c.r[5], c.r[5].w[0] + 16064u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004A473Cu) [[unlikely]] return; }
L_004A473C:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_004A4740:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A4758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4754u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004A4754u) [[unlikely]] return; }
L_004A4754:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 1;
L_004A4758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A4780:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004A4AE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 28208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x004A4000u < 16384u) { entry = entries_00A9[(t - 0x004A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004A47C0:
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A47CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004A47CCu) [[unlikely]] return; }
L_004A47CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A47E0u); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 131u, depth + 1u); else { c.pc = 0x004A57A0u; return; } if (c.pc != 0x004A47E0u) [[unlikely]] return; }
L_004A47E0:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A4834; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A4828; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A4818; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A4818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004A4AE8; } }
L_004A4818:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4828u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_007C(c, 195u, depth + 1u); else { c.pc = 0x003F3670u; return; } if (c.pc != 0x004A4828u) [[unlikely]] return; }
L_004A4828:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4834u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 13u, depth + 1u); else { c.pc = 0x003F40F0u; return; } if (c.pc != 0x004A4834u) [[unlikely]] return; }
L_004A4834:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[3] = 0u;
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 136u), c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4878u); st32((c.r[29].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_0052(c, 160u, depth + 1u); else { c.pc = 0x0034B630u; return; } if (c.pc != 0x004A4878u) [[unlikely]] return; }
L_004A4878:
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[4] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.f[12] = c.f[20];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[4], c.r[2].w[0] + 464u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 120u), c.f[3]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A48BCu); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_00A5(c, 108u, depth + 1u); else { c.pc = 0x00495FA0u; return; } if (c.pc != 0x004A48BCu) [[unlikely]] return; }
L_004A48BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A48C4u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A48C4u) [[unlikely]] return; }
L_004A48C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A48D8u); c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A48D8u) [[unlikely]] return; }
L_004A48D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[12] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4910u); c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_007D(c, 101u, depth + 1u); else { c.pc = 0x003F4C20u; return; } if (c.pc != 0x004A4910u) [[unlikely]] return; }
L_004A4910:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A493Cu); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A493Cu) [[unlikely]] return; }
L_004A493C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A4AE4; } }
L_004A4944:
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4950u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004A4950u) [[unlikely]] return; }
L_004A4950:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4964u); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 131u, depth + 1u); else { c.pc = 0x004A57A0u; return; } if (c.pc != 0x004A4964u) [[unlikely]] return; }
L_004A4964:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A49AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A49AC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A499C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A499C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A4AE4; } }
L_004A499C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A49ACu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_007C(c, 195u, depth + 1u); else { c.pc = 0x003F3670u; return; } if (c.pc != 0x004A49ACu) [[unlikely]] return; }
L_004A49AC:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[12] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[12]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[29].w[0] + 104u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A49E8u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_0052(c, 160u, depth + 1u); else { c.pc = 0x0034B630u; return; } if (c.pc != 0x004A49E8u) [[unlikely]] return; }
L_004A49E8:
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[4] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.f[12] = c.f[20];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[4], c.r[2].w[0] + 464u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4A2Cu); st32((c.r[29].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_00A5(c, 108u, depth + 1u); else { c.pc = 0x00495FA0u; return; } if (c.pc != 0x004A4A2Cu) [[unlikely]] return; }
L_004A4A2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4A58u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A4A58u) [[unlikely]] return; }
L_004A4A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A4AE4; } }
L_004A4A60:
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4A6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004A4A6Cu) [[unlikely]] return; }
L_004A4A6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4A84u); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 87u, depth + 1u); else { c.pc = 0x004A50F0u; return; } if (c.pc != 0x004A4A84u) [[unlikely]] return; }
L_004A4A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A4AE4; } }
L_004A4A8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[2], c.r[6].w[0] - 4u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4AA4u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 103u, depth + 1u); else { c.pc = 0x004A53A0u; return; } if (c.pc != 0x004A4AA4u) [[unlikely]] return; }
L_004A4AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A4AE4; } }
L_004A4AAC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[2], c.r[6].w[0] - 16u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4AC4u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 103u, depth + 1u); else { c.pc = 0x004A53A0u; return; } if (c.pc != 0x004A4AC4u) [[unlikely]] return; }
L_004A4AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A4AE4; } }
L_004A4ACC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[2], c.r[6].w[0] - 28u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4AE4u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 103u, depth + 1u); else { c.pc = 0x004A53A0u; return; } if (c.pc != 0x004A4AE4u) [[unlikely]] return; }
L_004A4AE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004A4AE8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004A4B00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4B20u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00A9(c, 131u, depth + 1u); else { c.pc = 0x004A57A0u; return; } if (c.pc != 0x004A4B20u) [[unlikely]] return; }
L_004A4B20:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A4B74; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A4B68; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A4B58; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A4B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004A4C80; } }
L_004A4B58:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4B68u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_007C(c, 195u, depth + 1u); else { c.pc = 0x003F3670u; return; } if (c.pc != 0x004A4B68u) [[unlikely]] return; }
L_004A4B68:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4B74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 13u, depth + 1u); else { c.pc = 0x003F40F0u; return; } if (c.pc != 0x004A4B74u) [[unlikely]] return; }
L_004A4B74:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[3] = 0u;
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4BB8u); st32((c.r[29].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_0052(c, 160u, depth + 1u); else { c.pc = 0x0034B630u; return; } if (c.pc != 0x004A4BB8u) [[unlikely]] return; }
L_004A4BB8:
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[4] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.f[12] = c.f[20];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[4], c.r[2].w[0] + 464u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 72u), c.f[3]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4BFCu); st32((c.r[29].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_00A5(c, 108u, depth + 1u); else { c.pc = 0x00495FA0u; return; } if (c.pc != 0x004A4BFCu) [[unlikely]] return; }
L_004A4BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4C04u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A4C04u) [[unlikely]] return; }
L_004A4C04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4C18u); c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A4C18u) [[unlikely]] return; }
L_004A4C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[12] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4C50u); c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_007D(c, 101u, depth + 1u); else { c.pc = 0x003F4C20u; return; } if (c.pc != 0x004A4C50u) [[unlikely]] return; }
L_004A4C50:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4C7Cu); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A4C7Cu) [[unlikely]] return; }
L_004A4C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004A4C80:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A4C90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[5].w[0] + 40u));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[4] = 0u;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[16], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], 0u + 1u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 120u), c.f[3]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4CECu); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 131u, depth + 1u); else { c.pc = 0x004A57A0u; return; } if (c.pc != 0x004A4CECu) [[unlikely]] return; }
L_004A4CEC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A4D34; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A4D34; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A4D24; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A4D24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 344u)));  if (t) { goto L_004A4DEC; } }
L_004A4D24:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4D34u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_007C(c, 195u, depth + 1u); else { c.pc = 0x003F3670u; return; } if (c.pc != 0x004A4D34u) [[unlikely]] return; }
L_004A4D34:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[3] = 0u;
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 104u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4D78u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_0052(c, 160u, depth + 1u); else { c.pc = 0x0034B630u; return; } if (c.pc != 0x004A4D78u) [[unlikely]] return; }
L_004A4D78:
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[4] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.f[12] = c.f[20];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[4], c.r[2].w[0] + 464u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4DBCu); st32((c.r[29].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_00A5(c, 108u, depth + 1u); else { c.pc = 0x00495FA0u; return; } if (c.pc != 0x004A4DBCu) [[unlikely]] return; }
L_004A4DBC:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4DE8u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A4DE8u) [[unlikely]] return; }
L_004A4DE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 344u)));
    c.budget -= 1;
L_004A4DEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A4E30; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1577u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A4E0C; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004A4E0C:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_004A4E10:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4E28u); set32(c.r[4], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_00C0(c, 284u, depth + 1u); else { c.pc = 0x00503790u; return; } if (c.pc != 0x004A4E28u) [[unlikely]] return; }
L_004A4E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004A4E38; } }
L_004A4E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A4E10u | kUnwind; return; } goto L_004A4E10; } }
L_004A4E38:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004A4E50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4E70u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00A9(c, 131u, depth + 1u); else { c.pc = 0x004A57A0u; return; } if (c.pc != 0x004A4E70u) [[unlikely]] return; }
L_004A4E70:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A4EB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A4EB8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A4EA8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A4EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004A4F68; } }
L_004A4EA8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4EB8u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_007C(c, 195u, depth + 1u); else { c.pc = 0x003F3670u; return; } if (c.pc != 0x004A4EB8u) [[unlikely]] return; }
L_004A4EB8:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[12] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[12]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4EF4u); st32((c.r[29].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_0052(c, 160u, depth + 1u); else { c.pc = 0x0034B630u; return; } if (c.pc != 0x004A4EF4u) [[unlikely]] return; }
L_004A4EF4:
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[4] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.f[12] = c.f[20];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[4], c.r[2].w[0] + 464u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 72u), c.f[3]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4F38u); st32((c.r[29].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_00A5(c, 108u, depth + 1u); else { c.pc = 0x00495FA0u; return; } if (c.pc != 0x004A4F38u) [[unlikely]] return; }
L_004A4F38:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4F64u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A4F64u) [[unlikely]] return; }
L_004A4F64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004A4F68:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A4F80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[12]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4FC8u); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_0052(c, 160u, depth + 1u); else { c.pc = 0x0034B630u; return; } if (c.pc != 0x004A4FC8u) [[unlikely]] return; }
L_004A4FC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A4FF4u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A4FF4u) [[unlikely]] return; }
L_004A4FF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A5010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5028u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 131u, depth + 1u); else { c.pc = 0x004A57A0u; return; } if (c.pc != 0x004A5028u) [[unlikely]] return; }
L_004A5028:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A5070; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A5070; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A5060; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A5060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A50DC; } }
L_004A5060:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5070u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_007C(c, 195u, depth + 1u); else { c.pc = 0x003F3670u; return; } if (c.pc != 0x004A5070u) [[unlikely]] return; }
L_004A5070:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[12] = 0u;
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[12]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A50ACu); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_0052(c, 160u, depth + 1u); else { c.pc = 0x0034B630u; return; } if (c.pc != 0x004A50ACu) [[unlikely]] return; }
L_004A50AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A50D8u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A50D8u) [[unlikely]] return; }
L_004A50D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A50DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A50F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5118u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00A9(c, 131u, depth + 1u); else { c.pc = 0x004A57A0u; return; } if (c.pc != 0x004A5118u) [[unlikely]] return; }
L_004A5118:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A5184; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A5178; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A5150; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A5150; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004A5384; } }
L_004A5150:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5160u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_007C(c, 195u, depth + 1u); else { c.pc = 0x003F3670u; return; } if (c.pc != 0x004A5160u) [[unlikely]] return; }
L_004A5160:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A5178; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5178u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00B0(c, 288u, depth + 1u); else { c.pc = 0x004C3610u; return; } if (c.pc != 0x004A5178u) [[unlikely]] return; }
L_004A5178:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5184u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 9u, depth + 1u); else { c.pc = 0x003F4090u; return; } if (c.pc != 0x004A5184u) [[unlikely]] return; }
L_004A5184:
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F2A0000u);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[3] = 0u;
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 104u), c.f[2]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A51C8u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_0052(c, 160u, depth + 1u); else { c.pc = 0x0034B630u; return; } if (c.pc != 0x004A51C8u) [[unlikely]] return; }
L_004A51C8:
    c.f[3] = ld32((c.r[17].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[4] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.f[12] = c.f[20];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[4], c.r[2].w[0] + 464u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 88u), c.f[3]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A520Cu); st32((c.r[29].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_00A5(c, 108u, depth + 1u); else { c.pc = 0x00495FA0u; return; } if (c.pc != 0x004A520Cu) [[unlikely]] return; }
L_004A520C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A5270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A521Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A521Cu) [[unlikely]] return; }
L_004A521C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5230u); c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A5230u) [[unlikely]] return; }
L_004A5230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[12] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5268u); c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_007D(c, 94u, depth + 1u); else { c.pc = 0x003F4B00u; return; } if (c.pc != 0x004A5268u) [[unlikely]] return; }
L_004A5268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));  if (t) { goto L_004A52C8; } }
L_004A5270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5278u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A5278u) [[unlikely]] return; }
L_004A5278:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A528Cu); c.f[20] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A528Cu) [[unlikely]] return; }
L_004A528C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[12] = c.f[20];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A52C4u); c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_007D(c, 90u, depth + 1u); else { c.pc = 0x003F4A50u; return; } if (c.pc != 0x004A52C4u) [[unlikely]] return; }
L_004A52C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 1;
L_004A52C8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A52F0u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A52F0u) [[unlikely]] return; }
L_004A52F0:
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[4] = ld32((c.r[17].w[0]));
    set32(c.r[16], c.r[29].w[0] + 116u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[4]);
    st32((c.r[29].w[0] + 120u), c.f[2]);
    st32((c.r[29].w[0] + 124u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5334u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0029(c, 206u, depth + 1u); else { c.pc = 0x002A6BD0u; return; } if (c.pc != 0x004A5334u) [[unlikely]] return; }
L_004A5334:
    c.f[2] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004A5380; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[13] = 0u;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5380u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 153u, depth + 1u); else { c.pc = 0x00496A90u; return; } if (c.pc != 0x004A5380u) [[unlikely]] return; }
L_004A5380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004A5384:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004A53A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_004A5464; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A5450; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A5438; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A5424; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A5410; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 14u);  if (t) { goto L_004A543C; } }
L_004A5410:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A541Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004A541Cu) [[unlikely]] return; }
L_004A541C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[18].d[0] & 255ull;  if (t) { goto L_004A5474; } }
L_004A5424:
    set32(c.r[4], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5430u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004A5430u) [[unlikely]] return; }
L_004A5430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A5470; } }
L_004A5438:
    set32(c.r[4], 0u + 14u);
    c.budget -= 1;
L_004A543C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5448u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004A5448u) [[unlikely]] return; }
L_004A5448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A5470; } }
L_004A5450:
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A545Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004A545Cu) [[unlikely]] return; }
L_004A545C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A5470; } }
L_004A5464:
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5470u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004A5470u) [[unlikely]] return; }
L_004A5470:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 1;
L_004A5474:
    set32(c.r[2], 0u + 6u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5494u); c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_00A9(c, 131u, depth + 1u); else { c.pc = 0x004A57A0u; return; } if (c.pc != 0x004A5494u) [[unlikely]] return; }
L_004A5494:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A5598; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A54FC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A54CC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A54CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A5754; } }
L_004A54CC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A54DCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 195u, depth + 1u); else { c.pc = 0x003F3670u; return; } if (c.pc != 0x004A54DCu) [[unlikely]] return; }
L_004A54DC:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004A54FC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.r[6].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A54FCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 288u, depth + 1u); else { c.pc = 0x004C3610u; return; } if (c.pc != 0x004A54FCu) [[unlikely]] return; }
L_004A54FC:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004A5598; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 28048u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x004A4000u < 16384u) { entry = entries_00A9[(t - 0x004A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004A5528:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5534u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 17u, depth + 1u); else { c.pc = 0x003F4150u; return; } if (c.pc != 0x004A5534u) [[unlikely]] return; }
L_004A5534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);  if (t) { goto L_004A559C; } }
L_004A553C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5548u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 15u, depth + 1u); else { c.pc = 0x003F4120u; return; } if (c.pc != 0x004A5548u) [[unlikely]] return; }
L_004A5548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A5598; } }
L_004A5550:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A555Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 13u, depth + 1u); else { c.pc = 0x003F40F0u; return; } if (c.pc != 0x004A555Cu) [[unlikely]] return; }
L_004A555C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A5598; } }
L_004A5564:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5570u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 11u, depth + 1u); else { c.pc = 0x003F40C0u; return; } if (c.pc != 0x004A5570u) [[unlikely]] return; }
L_004A5570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A5598; } }
L_004A5578:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5584u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 9u, depth + 1u); else { c.pc = 0x003F4090u; return; } if (c.pc != 0x004A5584u) [[unlikely]] return; }
L_004A5584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A5598; } }
L_004A558C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5598u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 7u, depth + 1u); else { c.pc = 0x003F4060u; return; } if (c.pc != 0x004A5598u) [[unlikely]] return; }
L_004A5598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.budget -= 1;
L_004A559C:
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_004A55B8; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004A55D4; } }
L_004A55B8:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004A55D4:
    c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 24576u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[3] = 0u;
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[12]);
    st32((c.r[29].w[0] + 136u), c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5610u); st32((c.r[29].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_0052(c, 160u, depth + 1u); else { c.pc = 0x0034B630u; return; } if (c.pc != 0x004A5610u) [[unlikely]] return; }
L_004A5610:
    c.f[3] = ld32((c.r[19].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[4] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.f[12] = c.f[20];
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[4], c.r[2].w[0] + 464u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 120u), c.f[3]);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5654u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_00A5(c, 108u, depth + 1u); else { c.pc = 0x00495FA0u; return; } if (c.pc != 0x004A5654u) [[unlikely]] return; }
L_004A5654:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[4] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_004A5674; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004A5690; } }
L_004A5674:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004A5690:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = 0u;
    c.f[3] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = c.r[16].sd[0] < 0; c.f[13] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);  if (t) { goto L_004A56C0; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004A56DC; } }
L_004A56C0:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004A56DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[4].w[0];
    set32(c.r[2], 0u + 1u);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);  if (t) { goto L_004A575C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A5770; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004A5728; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5728u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 90u, depth + 1u); else { c.pc = 0x003F4A50u; return; } if (c.pc != 0x004A5728u) [[unlikely]] return; }
L_004A5728:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 1;
L_004A572C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5754u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004A5754u) [[unlikely]] return; }
L_004A5754:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004A5784; } }
L_004A575C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5768u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 101u, depth + 1u); else { c.pc = 0x003F4C20u; return; } if (c.pc != 0x004A5768u) [[unlikely]] return; }
L_004A5768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A572Cu | kUnwind; return; } goto L_004A572C; } }
L_004A5770:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A577Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 94u, depth + 1u); else { c.pc = 0x003F4B00u; return; } if (c.pc != 0x004A577Cu) [[unlikely]] return; }
L_004A577C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A5728u | kUnwind; return; } goto L_004A5728; } }
L_004A5784:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004A57A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A57BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_004A589C; } }
L_004A57BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.f[4] = ld32((c.r[2].w[0] + 2440u));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[2].w[0] + 2436u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[29].w[0] + 8u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[2].w[0] + 2432u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    st32((c.r[29].w[0]), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A5824; } }
    set32(c.r[3], c.r[3].w[0] - 6u);
    c.budget -= 1;
L_004A5824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[2].w[0] + 23584u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004A5890; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23588u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004A5898; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23592u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004A5884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_004A5888; } }
L_004A5884:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_004A5888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 16u);  if (t) { goto L_004A58A0; } }
L_004A5890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A589C; } }
L_004A5898:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004A589C:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_004A58A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A58B0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2E30u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 421u, depth); }
L_004A58C0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2E00u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 420u, depth); }
L_004A58D0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2E30u | kUnwind; return; } [[clang::musttail]] return unit_0038(c, 421u, depth); }
L_004A58E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A590Cu); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 421u, depth + 1u); else { c.pc = 0x002E2E30u; return; } if (c.pc != 0x004A590Cu) [[unlikely]] return; }
L_004A590C:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    st8((c.r[3].w[0] + 54u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[3].w[0] + 40u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A5940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A5994; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 23552u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004A597C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004A597C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A5994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5994u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A5994u) [[unlikely]] return; }
L_004A5994:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A59B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[7], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 23552u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004A5A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A5A80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 23840u);
    set32(c.r[2], c.r[2].w[0] + 24128u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004A5A68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004A5A68:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A5A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5A80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A5A80u) [[unlikely]] return; }
L_004A5A80:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A5AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5AD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004A5AD4u) [[unlikely]] return; }
L_004A5AD4:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5B00u); st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004A5B00u) [[unlikely]] return; }
L_004A5B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A5B10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.f[21] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5B50u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A5B50u) [[unlikely]] return; }
L_004A5B50:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5B74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A5B74u) [[unlikely]] return; }
L_004A5B74:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5B88u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004A5B88u) [[unlikely]] return; }
L_004A5B88:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A5C00; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A5BCC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.f[20]);  if (t) { goto L_004A5BE8; } }
L_004A5BCC:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[21]);
    c.budget -= 7;
L_004A5BE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5C00u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A5C00u) [[unlikely]] return; }
L_004A5C00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A5C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A5C30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A5C40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.f[21] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A5C80u) [[unlikely]] return; }
L_004A5C80:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5C94u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004A5C94u) [[unlikely]] return; }
L_004A5C94:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A5D0C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A5CD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.f[20]);  if (t) { goto L_004A5CF4; } }
L_004A5CD8:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[21]);
    c.budget -= 7;
L_004A5CF4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5D0Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A5D0Cu) [[unlikely]] return; }
L_004A5D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A5D30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A5D84; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5D70u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004A5D70u) [[unlikely]] return; }
L_004A5D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5D78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A5D78u) [[unlikely]] return; }
L_004A5D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A5D84; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004A5D84:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5DA8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0051(c, 63u, depth + 1u); else { c.pc = 0x00345020u; return; } if (c.pc != 0x004A5DA8u) [[unlikely]] return; }
L_004A5DA8:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 2u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A5DD0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.f[21] = ld32((c.r[29].w[0] + 108u));
    c.f[22] = ld32((c.r[29].w[0] + 140u));
    c.f[23] = ld32((c.r[29].w[0] + 156u));
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A606C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 1;
L_004A5E18:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A5F5C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A5EA4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_004A5E4C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A6060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 2u);  if (t) { goto L_004A6064; } }
L_004A5E4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5E70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004A5E70u) [[unlikely]] return; }
L_004A5E70:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5E9Cu); st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004A5E9Cu) [[unlikely]] return; }
L_004A5E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A6060; } }
L_004A5EA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5EC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A5EC8u) [[unlikely]] return; }
L_004A5EC8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5EDCu); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004A5EDCu) [[unlikely]] return; }
L_004A5EDC:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A6060; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A5F20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    st32((c.r[29].w[0] + 168u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 172u), c.f[23]);  if (t) { goto L_004A5F3C; } }
L_004A5F20:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    st32((c.r[29].w[0] + 168u), c.f[1]);
    st32((c.r[29].w[0] + 172u), c.f[22]);
    c.budget -= 7;
L_004A5F3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5F54u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A5F54u) [[unlikely]] return; }
L_004A5F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A6060; } }
L_004A5F5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5F84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004A5F84u) [[unlikely]] return; }
L_004A5F84:
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5FB0u); st32((c.r[18].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004A5FB0u) [[unlikely]] return; }
L_004A5FB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5FD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A5FD4u) [[unlikely]] return; }
L_004A5FD4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A5FE8u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004A5FE8u) [[unlikely]] return; }
L_004A5FE8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A6060; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A602C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 124u), c.f[21]);  if (t) { goto L_004A6048; } }
L_004A602C:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.f[20]);
    c.budget -= 7;
L_004A6048:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6060u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6060u) [[unlikely]] return; }
L_004A6060:
    set32(c.r[2], c.r[17].w[0] + 2u);
    c.budget -= 1;
L_004A6064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004A6090; } }
L_004A606C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6078u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004A6078u) [[unlikely]] return; }
L_004A6078:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6088u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A6088u) [[unlikely]] return; }
L_004A6088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A5E18u | kUnwind; return; } goto L_004A5E18; } }
L_004A6090:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004A60C0:
    c.budget -= 2;
    { c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAF40u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 238u, depth); }
L_004A60D0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = ld32((c.r[4].w[0] + 48u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A60FCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A60FCu) [[unlikely]] return; }
L_004A60FC:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6108u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A6108u) [[unlikely]] return; }
L_004A6108:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[3] = 0u;
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 136u), c.f[20]);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.budget -= 21;
L_004A615C:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 40u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A615Cu | kUnwind; return; } goto L_004A615C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A622C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 61u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A61D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[29].w[0] + 96u);  if (t) { goto L_004A61D8; } }
L_004A61D4:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A61D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004A61E4; } }
    set32(c.r[18], c.r[16].w[0] + 20u);
    c.budget -= 1;
L_004A61E4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 60u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6200u); if (c.r[3].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004A6200u) [[unlikely]] return; }
L_004A6200:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 23936u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6224u); c.r[9].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00343BA0u; return; } if (c.pc != 0x004A6224u) [[unlikely]] return; }
L_004A6224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_004A627C; } }
L_004A622C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 61u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A6240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[29].w[0] + 96u);  if (t) { goto L_004A6244; } }
L_004A6240:
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A6244:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004A6250; } }
    set32(c.r[8], c.r[16].w[0] + 20u);
    c.budget -= 1;
L_004A6250:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 60u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], c.r[4].w[0] + 23936u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6278u); if (c.r[3].d[0] == 0) c.r[7].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00343BA0u; return; } if (c.pc != 0x004A6278u) [[unlikely]] return; }
L_004A6278:
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_004A627C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004A62A0:
    ld128((c.r[5].w[0]) & ~15u, c.r[10]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    set32(c.r[9], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 24u)));
    c.r[7].d[0] = ld8((c.r[5].w[0] + 28u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 29u));
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[10]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    st32((c.r[4].w[0] + 52u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 61u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[3].w[0]);  c.pc = t; return; }
L_004A62E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A60C0u | kUnwind; return; } goto L_004A60C0; }
L_004A62F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 64u);  c.pc = t; return; }
L_004A6300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A6320:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 136u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 144u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004A6350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st32((c.r[4].w[0] + 136u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 104u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A63EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A63EC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A63C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004A63C0u) [[unlikely]] return; }
L_004A63C0:
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A63ECu); st32((c.r[18].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004A63ECu) [[unlikely]] return; }
L_004A63EC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 96u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004A6460; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 144u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A6460; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004A6434u) [[unlikely]] return; }
L_004A6434:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6460u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004A6460u) [[unlikely]] return; }
L_004A6460:
    set32(c.r[2], c.r[16].w[0] + 2u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A6480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A649Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A649Cu) [[unlikely]] return; }
L_004A649C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A6564; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 133u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A656C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A651C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A64DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A6540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 104u));  if (t) { goto L_004A6544; } }
L_004A64DC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 144u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A6540; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A64F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A64F8u) [[unlikely]] return; }
L_004A64F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A6540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6508u); set32(c.r[4], ld32((c.r[16].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 80u, depth + 1u); else { c.pc = 0x002A1280u; return; } if (c.pc != 0x004A6508u) [[unlikely]] return; }
L_004A6508:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A6540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A6578; } }
L_004A651C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 144u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A6540; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A6540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A6578; } }
L_004A6540:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 104u));
    c.budget -= 1;
L_004A6544:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004A6574; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A6574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A6578; } }
L_004A6564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A6578; } }
L_004A656C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004A6578; } }
L_004A6574:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004A6578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A6590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 133u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 144u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A65D0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 132u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A6608; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 136u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A65C8u); st32((c.r[4].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x004A65C8u) [[unlikely]] return; }
L_004A65C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004A660C; } }
L_004A65D0:
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004A6608; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 96u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004A6608; } }
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6600u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6600u) [[unlikely]] return; }
L_004A6600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A65C8u | kUnwind; return; } goto L_004A65C8; } }
L_004A6608:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004A660C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A6620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 128u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A665Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004A665Cu) [[unlikely]] return; }
L_004A665C:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6688u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004A6688u) [[unlikely]] return; }
L_004A6688:
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 133u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A66B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[1] = c.r[3].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[4].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 10224u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A66E8; } }
L_004A66E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A6708; } }
L_004A66E8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 336u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A66F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A66F8u) [[unlikely]] return; }
L_004A66F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6700u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004A6700u) [[unlikely]] return; }
L_004A6700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A66E0u | kUnwind; return; } goto L_004A66E0; } }
L_004A6708:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A6720:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 132u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A6860; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A679C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6770u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6770u) [[unlikely]] return; }
L_004A6770:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A679C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A678Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A678Cu) [[unlikely]] return; }
L_004A678C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A679C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A679Cu); set32(c.r[4], ld32((c.r[16].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 81u, depth + 1u); else { c.pc = 0x002A1290u; return; } if (c.pc != 0x004A679Cu) [[unlikely]] return; }
L_004A679C:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A67C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A67C0u) [[unlikely]] return; }
L_004A67C0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A67D4u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004A67D4u) [[unlikely]] return; }
L_004A67D4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A684C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A6818; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[21]);  if (t) { goto L_004A6834; } }
L_004A6818:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[20]);
    c.budget -= 7;
L_004A6834:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A684Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A684Cu) [[unlikely]] return; }
L_004A684C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] - 10224u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6860u); st32((c.r[17].w[0] + 148u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004A6860u) [[unlikely]] return; }
L_004A6860:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004A6880:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 76u));
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A68B4; } }
L_004A68AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004A6974; } }
L_004A68B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A68D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A68D8u) [[unlikely]] return; }
L_004A68D8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A68ECu); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004A68ECu) [[unlikely]] return; }
L_004A68EC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A6964; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A6930; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[20]);  if (t) { goto L_004A694C; } }
L_004A6930:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[21]);
    c.budget -= 7;
L_004A694C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6964u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6964u) [[unlikely]] return; }
L_004A6964:
    st8((c.r[17].w[0] + 132u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 133u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A68ACu | kUnwind; return; } goto L_004A68AC; } }
L_004A6974:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004A6990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A69A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 104u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A69E0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    c.budget -= 1;
L_004A69C8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004A6A40; } }
L_004A69D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004A6AA0; } }
L_004A69E0:
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6A0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004A6A0Cu) [[unlikely]] return; }
L_004A6A0C:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6A38u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004A6A38u) [[unlikely]] return; }
L_004A6A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A69C8u | kUnwind; return; } goto L_004A69C8; } }
L_004A6A40:
    st8((c.r[16].w[0] + 144u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6A6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004A6A6Cu) [[unlikely]] return; }
L_004A6A6C:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6A98u); st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004A6A98u) [[unlikely]] return; }
L_004A6A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A69D8u | kUnwind; return; } goto L_004A69D8; } }
L_004A6AA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A6AB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6AD0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004A6AD0u) [[unlikely]] return; }
L_004A6AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A6BD8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 133u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A6BD8; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 104u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004A6B08; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A6B08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004A6BDC; } }
L_004A6B08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A6BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6B18u); set32(c.r[4], c.r[17].w[0] + 152u);  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004A6B18u) [[unlikely]] return; }
L_004A6B18:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6B38; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[17].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6B38u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6B38u) [[unlikely]] return; }
L_004A6B38:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6B4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6B4Cu) [[unlikely]] return; }
L_004A6B4C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6B5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6B5Cu) [[unlikely]] return; }
L_004A6B5C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004A6B9C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6B7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6B7Cu) [[unlikely]] return; }
L_004A6B7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6B94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x004A6B94u) [[unlikely]] return; }
L_004A6B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 44u), c.r[16].w[0]);  if (t) { goto L_004A6BA8; } }
L_004A6B9C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 132u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004A6BA4:
    st32((c.r[17].w[0] + 44u), c.r[16].w[0]);
    c.budget -= 1;
L_004A6BA8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 144u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A6BBC; } }
L_004A6BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A6BD8; } }
L_004A6BBC:
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6BD0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004A6BD0u) [[unlikely]] return; }
L_004A6BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6BB4u | kUnwind; return; } goto L_004A6BB4; } }
L_004A6BD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004A6BDC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A6BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A6C00:
    st32((c.r[4].w[0] + 44u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[3].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 136u), 0u);
    st8((c.r[4].w[0] + 133u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 112u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004A6C20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[4].w[0] + 92u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6C4Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A6C4Cu) [[unlikely]] return; }
L_004A6C4C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6C58u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A6C58u) [[unlikely]] return; }
L_004A6C58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[3], c.r[29].w[0] + 64u);
    c.f[3] = 0u;
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 104u), c.f[20]);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    c.budget -= 21;
L_004A6CAC:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[2] = ld32((c.r[16].w[0] + 64u));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6CACu | kUnwind; return; } goto L_004A6CAC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6D14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004A6D14u) [[unlikely]] return; }
L_004A6D14:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6D20u); set32(c.r[4], c.r[16].w[0] + 152u);  if (depth < kMaxDepth) unit_0075(c, 183u, depth + 1u); else { c.pc = 0x003D7090u; return; } if (c.pc != 0x004A6D20u) [[unlikely]] return; }
L_004A6D20:
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004A6D30; } }
    set32(c.r[8], c.r[16].w[0] + 36u);
    c.budget -= 1;
L_004A6D30:
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + 23936u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6D4Cu); set32(c.r[10], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00343BA0u; return; } if (c.pc != 0x004A6D4Cu) [[unlikely]] return; }
L_004A6D4C:
    st32((c.r[16].w[0] + 128u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A6DF0; } }
L_004A6D5C:
    c.f[20] = ld32((c.r[16].w[0] + 92u));
    c.f[23] = ld32((c.r[16].w[0] + 80u));
    c.f[22] = ld32((c.r[16].w[0] + 84u));
    c.f[21] = ld32((c.r[16].w[0] + 88u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6D74u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A6D74u) [[unlikely]] return; }
L_004A6D74:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6D80u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A6D80u) [[unlikely]] return; }
L_004A6D80:
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[20]);
    set32(c.r[4], 0u + 128u);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 72u));
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[20]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[22]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6DC0u); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004A6DC0u) [[unlikely]] return; }
L_004A6DC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6DE0; } }
    c.f[12] = ld32((c.r[16].w[0] + 92u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6DDCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 20u, depth + 1u); else { c.pc = 0x002B4380u; return; } if (c.pc != 0x004A6DDCu) [[unlikely]] return; }
L_004A6DDC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004A6DE0:
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.r[16].w[0]);  if (t) { goto L_004A6E1C; } }
L_004A6DF0:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], c.r[4].w[0] + 23936u);
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[7], 0u + 4u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6E14u); set32(c.r[10], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00343BA0u; return; } if (c.pc != 0x004A6E14u) [[unlikely]] return; }
L_004A6E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6D5Cu | kUnwind; return; } goto L_004A6D5C; } }
L_004A6E1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004A6E40:
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 48u)));
    set32(c.r[10], ld32((c.r[5].w[0] + 52u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 56u)));
    st32((c.r[4].w[0] + 48u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[6].w[0]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[3]);
    st32((c.r[4].w[0] + 80u), c.f[3]);
    set32(c.r[8], ld32((c.r[5].w[0] + 60u)));
    st32((c.r[4].w[0] + 84u), c.f[2]);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 64u));
    st32((c.r[4].w[0] + 88u), c.f[1]);
    set32(c.r[6], ld32((c.r[5].w[0] + 68u)));
    st32((c.r[4].w[0] + 92u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 72u)));
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 100u), c.r[10].w[0]);
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 108u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 76u)));
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 124u), c.r[3].w[0]);  c.pc = t; return; }
L_004A6EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A6F94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 24144u);
    set32(c.r[3], c.r[3].w[0] + 24444u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 24468u);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6F28; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6F24; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6F24u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6F24u) [[unlikely]] return; }
L_004A6F24:
    st32((c.r[17].w[0] + 40u), 0u);
    c.budget -= 1;
L_004A6F28:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6F50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A6F4C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6F4Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A6F4Cu) [[unlikely]] return; }
L_004A6F4C:
    st32((c.r[17].w[0] + 152u), 0u);
    c.budget -= 1;
L_004A6F50:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A6F7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A6F7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004A6F7C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A6F94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A6F94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A6F94u) [[unlikely]] return; }
L_004A6F94:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A6FB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[12], 0u - 2u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[14].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[9], c.r[9].w[0] - 12672u);
    set32(c.r[8], c.r[8].w[0] + 24528u);
    set32(c.r[7], c.r[7].w[0] + 24504u);
    set32(c.r[6], c.r[6].w[0] + 24144u);
    set32(c.r[5], c.r[5].w[0] + 24444u);
    set32(c.r[3], c.r[3].w[0] + 24468u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 32u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 45;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 152u), 0u);  c.pc = t; return; }
L_004A7070:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6880u | kUnwind; return; } goto L_004A6880; }
L_004A7080:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6620u | kUnwind; return; } goto L_004A6620; }
L_004A7090:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6300u | kUnwind; return; } goto L_004A6300; }
L_004A70A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6720u | kUnwind; return; } goto L_004A6720; }
L_004A70B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A6590u | kUnwind; return; } goto L_004A6590; }
L_004A70C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A7168; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 24560u);
    set32(c.r[2], c.r[2].w[0] + 24848u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A711C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A7118; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7118u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A7118u) [[unlikely]] return; }
L_004A7118:
    st32((c.r[17].w[0] + 176u), 0u);
    c.budget -= 1;
L_004A711C:
    set32(c.r[4], c.r[17].w[0] + 168u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004A7170; } }
    set32(c.r[4], c.r[17].w[0] + 160u);
    c.budget -= 1;
L_004A712C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004A7180; } }
L_004A7134:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A7150; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004A7150:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A7168; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7168u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A7168u) [[unlikely]] return; }
L_004A7168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004A7190; } }
L_004A7170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7178u);  if (depth < kMaxDepth) unit_0011(c, 368u, depth + 1u); else { c.pc = 0x002478E0u; return; } if (c.pc != 0x004A7178u) [[unlikely]] return; }
L_004A7178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 160u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A712Cu | kUnwind; return; } goto L_004A712C; } }
L_004A7180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7188u);  if (depth < kMaxDepth) unit_0011(c, 368u, depth + 1u); else { c.pc = 0x002478E0u; return; } if (c.pc != 0x004A7188u) [[unlikely]] return; }
L_004A7188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7134u | kUnwind; return; } goto L_004A7134; } }
L_004A7190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A71B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 158u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A7274; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A7284; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A725C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A71F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004A7288; } }
L_004A71F8:
    st8((c.r[16].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A725C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7230u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004A7230u) [[unlikely]] return; }
L_004A7230:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A725Cu); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004A725Cu) [[unlikely]] return; }
L_004A725C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A72A0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_004A726C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004A7284; } }
L_004A7274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A727Cu);  if (depth < kMaxDepth) unit_00A9(c, 324u, depth + 1u); else { c.pc = 0x004A7A50u; return; } if (c.pc != 0x004A727Cu) [[unlikely]] return; }
L_004A727C:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004A7284:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004A7288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7290u);  if (depth < kMaxDepth) unit_00A9(c, 324u, depth + 1u); else { c.pc = 0x004A7A50u; return; } if (c.pc != 0x004A7290u) [[unlikely]] return; }
L_004A7290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7298u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 305u, depth + 1u); else { c.pc = 0x004A76D0u; return; } if (c.pc != 0x004A7298u) [[unlikely]] return; }
L_004A7298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004A72FC; } }
L_004A72A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A72C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004A72C8u) [[unlikely]] return; }
L_004A72C8:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A72F4u); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004A72F4u) [[unlikely]] return; }
L_004A72F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A726Cu | kUnwind; return; } goto L_004A726C; } }
L_004A72FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A7310:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x004A4000u < 16384u) { entry = entries_00A9[(t - 0x004A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004A7320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 132u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004A734C; } }
L_004A7344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004A7384; } }
L_004A734C:
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7368u); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004A7368u) [[unlikely]] return; }
L_004A7368:
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A734Cu | kUnwind; return; } goto L_004A734C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7344u | kUnwind; return; } goto L_004A7344; } }
L_004A7384:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A73A0:
    c.budget -= 2;
    {  goto L_004A76D0; }
L_004A73B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 158u));
    c.f[23] = ld32((c.r[29].w[0] + 76u));
    c.f[22] = ld32((c.r[29].w[0] + 92u));
    c.f[21] = ld32((c.r[29].w[0] + 124u));
    c.f[20] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A7458; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A7400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004A7520; } }
L_004A7400:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 158u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 112u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A7538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7420u); set32(c.r[4], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004A7420u) [[unlikely]] return; }
L_004A7420:
    set32(c.r[4], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A7440; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7440u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A7440u) [[unlikely]] return; }
L_004A7440:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7450u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A7450u) [[unlikely]] return; }
L_004A7450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A751C; } }
L_004A7458:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 120u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A75F0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7490u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A7490u) [[unlikely]] return; }
L_004A7490:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A74A4u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004A74A4u) [[unlikely]] return; }
L_004A74A4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A751C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A74E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[22]);  if (t) { goto L_004A7504; } }
L_004A74E8:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[23]);
    c.budget -= 7;
L_004A7504:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A751Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A751Cu) [[unlikely]] return; }
L_004A751C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004A7520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7528u);  if (depth < kMaxDepth) unit_00A9(c, 324u, depth + 1u); else { c.pc = 0x004A7A50u; return; } if (c.pc != 0x004A7528u) [[unlikely]] return; }
L_004A7528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7530u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 305u, depth + 1u); else { c.pc = 0x004A76D0u; return; } if (c.pc != 0x004A7530u) [[unlikely]] return; }
L_004A7530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004A7608; } }
L_004A7538:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A755Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A755Cu) [[unlikely]] return; }
L_004A755C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7570u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004A7570u) [[unlikely]] return; }
L_004A7570:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A751Cu | kUnwind; return; } goto L_004A751C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A75B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.f[20]);  if (t) { goto L_004A75D0; } }
L_004A75B4:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[21]);
    c.budget -= 7;
L_004A75D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A75E8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A75E8u) [[unlikely]] return; }
L_004A75E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A751Cu | kUnwind; return; } goto L_004A751C; } }
L_004A75F0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7600u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A7600u) [[unlikely]] return; }
L_004A7600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A751Cu | kUnwind; return; } goto L_004A751C; } }
L_004A7608:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004A7630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 158u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7648u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 324u, depth + 1u); else { c.pc = 0x004A7A50u; return; } if (c.pc != 0x004A7648u) [[unlikely]] return; }
L_004A7648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7650u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 305u, depth + 1u); else { c.pc = 0x004A76D0u; return; } if (c.pc != 0x004A7650u) [[unlikely]] return; }
L_004A7650:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A7670; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 120u));
    c.budget -= 1;
L_004A7660:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A7698; } }
L_004A7668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A76C0; } }
L_004A7670:
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7690u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A7690u) [[unlikely]] return; }
L_004A7690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 120u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7660u | kUnwind; return; } goto L_004A7660; } }
L_004A7698:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A76B8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A76B8u) [[unlikely]] return; }
L_004A76B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7668u | kUnwind; return; } goto L_004A7668; } }
L_004A76C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A76D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 158u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A792C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A78AC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A779C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A771C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7A38; } }
L_004A771C:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A7A38; } }
L_004A772C:
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7770; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7768u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004A7768u) [[unlikely]] return; }
L_004A7768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7780; } }
L_004A7770:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7780u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004A7780u) [[unlikely]] return; }
L_004A7780:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A772Cu | kUnwind; return; } goto L_004A772C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7A38; } }
L_004A779C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 98u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A782C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A7A38; } }
L_004A77B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7800; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A77F4u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004A77F4u) [[unlikely]] return; }
L_004A77F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7810; } }
    c.budget -= 1;
L_004A7800:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7810u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004A7810u) [[unlikely]] return; }
L_004A7810:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A77B8u | kUnwind; return; } goto L_004A77B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7A38; } }
L_004A782C:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A7A38; } }
L_004A783C:
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7880; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7878u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004A7878u) [[unlikely]] return; }
L_004A7878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7890; } }
L_004A7880:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7890u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004A7890u) [[unlikely]] return; }
L_004A7890:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A783Cu | kUnwind; return; } goto L_004A783C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7A38; } }
L_004A78AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A7A38; } }
L_004A78BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7900; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A78F8u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004A78F8u) [[unlikely]] return; }
L_004A78F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7910; } }
L_004A7900:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7910u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004A7910u) [[unlikely]] return; }
L_004A7910:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A78BCu | kUnwind; return; } goto L_004A78BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7A38; } }
L_004A792C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 98u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A79BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A7A38; } }
L_004A7948:
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7990; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7984u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004A7984u) [[unlikely]] return; }
L_004A7984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A79A0; } }
    c.budget -= 1;
L_004A7990:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A79A0u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004A79A0u) [[unlikely]] return; }
L_004A79A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7948u | kUnwind; return; } goto L_004A7948; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7A38; } }
L_004A79BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A7A38; } }
L_004A79CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7A10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7A08u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004A7A08u) [[unlikely]] return; }
L_004A7A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7A20; } }
L_004A7A10:
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[28].w[0] - 29280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7A20u); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004A7A20u) [[unlikely]] return; }
L_004A7A20:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A79CCu | kUnwind; return; } goto L_004A79CC; } }
    c.budget -= 1;
L_004A7A38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A7A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 158u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_004A7B8C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_004A7B2C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_004A7AF8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004A7A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7BBC; } }
L_004A7A98:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 157u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_004A7AB4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_004A7AB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (t) { goto L_004A7BC4; } }
L_004A7AB4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7AD8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7ACCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7ACCu) [[unlikely]] return; }
L_004A7ACC:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7AD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7AD8u) [[unlikely]] return; }
L_004A7AD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7AE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7AE4u) [[unlikely]] return; }
L_004A7AE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7AF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7AF0u) [[unlikely]] return; }
L_004A7AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7BBC; } }
L_004A7AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B00u); set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7B00u) [[unlikely]] return; }
L_004A7B00:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7B0Cu) [[unlikely]] return; }
L_004A7B0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7B18u) [[unlikely]] return; }
L_004A7B18:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7B24u) [[unlikely]] return; }
L_004A7B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7BBC; } }
L_004A7B2C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 157u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_004A7B48; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_004A7B48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (t) { goto L_004A7BF8; } }
L_004A7B48:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 120u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7B6C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7B60u) [[unlikely]] return; }
L_004A7B60:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B6Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7B6Cu) [[unlikely]] return; }
L_004A7B6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7B78u) [[unlikely]] return; }
L_004A7B78:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7B84u) [[unlikely]] return; }
L_004A7B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7BBC; } }
L_004A7B8C:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7B98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7B98u) [[unlikely]] return; }
L_004A7B98:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7BA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7BA4u) [[unlikely]] return; }
L_004A7BA4:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7BB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7BB0u) [[unlikely]] return; }
L_004A7BB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7BBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7BBCu) [[unlikely]] return; }
L_004A7BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A7C2C; } }
L_004A7BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7BCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7BCCu) [[unlikely]] return; }
L_004A7BCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7BD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7BD8u) [[unlikely]] return; }
L_004A7BD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7BE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7BE4u) [[unlikely]] return; }
L_004A7BE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7BF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7BF0u) [[unlikely]] return; }
L_004A7BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7BBCu | kUnwind; return; } goto L_004A7BBC; } }
L_004A7BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7C00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7C00u) [[unlikely]] return; }
L_004A7C00:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7C0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7C0Cu) [[unlikely]] return; }
L_004A7C0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7C18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7C18u) [[unlikely]] return; }
L_004A7C18:
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7C24u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A7C24u) [[unlikely]] return; }
L_004A7C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7BBCu | kUnwind; return; } goto L_004A7BBC; } }
L_004A7C2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A7C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 158u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A7CB4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004A7C70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004A7CF4; } }
L_004A7C70:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 158u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7C80u); st8((c.r[16].w[0] + 158u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x004A7C80u) [[unlikely]] return; }
L_004A7C80:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 120u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7CF0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7CACu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A7CACu) [[unlikely]] return; }
L_004A7CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A7CF0; } }
L_004A7CB4:
    st8((c.r[16].w[0] + 158u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004A7D0C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 1;
L_004A7CC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7CF0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7CF0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004A7CF0u) [[unlikely]] return; }
L_004A7CF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004A7CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7CFCu);  if (depth < kMaxDepth) unit_00A9(c, 324u, depth + 1u); else { c.pc = 0x004A7A50u; return; } if (c.pc != 0x004A7CFCu) [[unlikely]] return; }
L_004A7CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7D04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 305u, depth + 1u); else { c.pc = 0x004A76D0u; return; } if (c.pc != 0x004A7D04u) [[unlikely]] return; }
L_004A7D04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A7D24; } }
L_004A7D0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7D1Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004A7D1Cu) [[unlikely]] return; }
L_004A7D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 112u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7CC8u | kUnwind; return; } goto L_004A7CC8; } }
L_004A7D24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A7D30:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 158u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004A7D8C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A7D84; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004A7D7C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A7D74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_004A7D94; } }
L_004A7D74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_004A7D90; } }
L_004A7D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004A7D90; } }
L_004A7D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004A7D90; } }
L_004A7D8C:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004A7D90:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_004A7D94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A7DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st8((c.r[4].w[0] + 158u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 158u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A7E30; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 112u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7E30; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7E04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004A7E04u) [[unlikely]] return; }
L_004A7E04:
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7E30u); st32((c.r[18].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004A7E30u) [[unlikely]] return; }
L_004A7E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7E38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 324u, depth + 1u); else { c.pc = 0x004A7A50u; return; } if (c.pc != 0x004A7E38u) [[unlikely]] return; }
L_004A7E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7E40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 305u, depth + 1u); else { c.pc = 0x004A76D0u; return; } if (c.pc != 0x004A7E40u) [[unlikely]] return; }
L_004A7E40:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A7E60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[17].w[0] + 32u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 96u));
    st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 97u)));
    st8((c.r[4].w[0] + 157u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[20] = ld32((c.r[4].w[0] + 48u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7EA0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004A7EA0u) [[unlikely]] return; }
L_004A7EA0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7EACu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004A7EACu) [[unlikely]] return; }
L_004A7EAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.f[3] = 0u;
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 136u), c.f[20]);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.budget -= 21;
L_004A7F00:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[2] = ld32((c.r[16].w[0]));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7F00u | kUnwind; return; } goto L_004A7F00; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7F68u); set32(c.r[5], c.r[5].w[0] - 27808u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004A7F68u) [[unlikely]] return; }
L_004A7F68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00AA(c, 11u, depth); } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A7F84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[29].w[0] + 96u);  if (t) { goto L_004A7F88; } }
L_004A7F84:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A7F88:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004A7F94; } }
    set32(c.r[18], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_004A7F94:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7FA4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004A7FA4u) [[unlikely]] return; }
L_004A7FA4:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 23936u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7FC8u); c.r[9].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00343BA0u; return; } if (c.pc != 0x004A7FC8u) [[unlikely]] return; }
L_004A7FC8:
    st32((c.r[17].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004A7FD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A7FE4u); set32(c.r[5], c.r[5].w[0] - 27808u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x004A7FE4u) [[unlikely]] return; }
L_004A7FE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00AA(c, 12u, depth); } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 64u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00AA(c, 1u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[29].w[0] + 96u);  if (t) { [[clang::musttail]] return unit_00AA(c, 2u, depth); } }
    [[clang::musttail]] return unit_00AA(c, 1u, depth);
}

}

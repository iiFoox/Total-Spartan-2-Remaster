#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0081[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 13, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 28,
    0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 33, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 39, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 56, 57, 0, 0, 0, 58,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 63, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    80, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 87, 88, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    110, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117,
    118, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0,
    203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0,
    267, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 273,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276,
    0, 0, 0, 0, 277, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    285, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0,
    0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0081(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00404000;
    case 2u: goto L_00404040;
    case 3u: goto L_00404058;
    case 4u: goto L_00404064;
    case 5u: goto L_004040A0;
    case 6u: goto L_004040BC;
    case 7u: goto L_004040D0;
    case 8u: goto L_0040410C;
    case 9u: goto L_00404114;
    case 10u: goto L_0040412C;
    case 11u: goto L_00404170;
    case 12u: goto L_0040419C;
    case 13u: goto L_004041A0;
    case 14u: goto L_004041A4;
    case 15u: goto L_004041AC;
    case 16u: goto L_004041C4;
    case 17u: goto L_004041EC;
    case 18u: goto L_0040421C;
    case 19u: goto L_00404224;
    case 20u: goto L_00404228;
    case 21u: goto L_00404250;
    case 22u: goto L_004042FC;
    case 23u: goto L_00404330;
    case 24u: goto L_00404344;
    case 25u: goto L_0040434C;
    case 26u: goto L_00404360;
    case 27u: goto L_00404368;
    case 28u: goto L_0040437C;
    case 29u: goto L_00404384;
    case 30u: goto L_00404398;
    case 31u: goto L_004043DC;
    case 32u: goto L_00404408;
    case 33u: goto L_0040440C;
    case 34u: goto L_00404410;
    case 35u: goto L_00404420;
    case 36u: goto L_00404430;
    case 37u: goto L_00404488;
    case 38u: goto L_004044B4;
    case 39u: goto L_004044B8;
    case 40u: goto L_004044BC;
    case 41u: goto L_004044CC;
    case 42u: goto L_004044E4;
    case 43u: goto L_0040450C;
    case 44u: goto L_00404544;
    case 45u: goto L_0040456C;
    case 46u: goto L_004045B0;
    case 47u: goto L_004045DC;
    case 48u: goto L_004046B0;
    case 49u: goto L_004046F4;
    case 50u: goto L_00404708;
    case 51u: goto L_00404728;
    case 52u: goto L_00404774;
    case 53u: goto L_004047F4;
    case 54u: goto L_00404838;
    case 55u: goto L_00404864;
    case 56u: goto L_00404868;
    case 57u: goto L_0040486C;
    case 58u: goto L_0040487C;
    case 59u: goto L_00404890;
    case 60u: goto L_0040493C;
    case 61u: goto L_00404980;
    case 62u: goto L_004049AC;
    case 63u: goto L_004049B0;
    case 64u: goto L_004049B4;
    case 65u: goto L_004049C4;
    case 66u: goto L_004049DC;
    case 67u: goto L_00404A28;
    case 68u: goto L_00404A4C;
    case 69u: goto L_00404AA0;
    case 70u: goto L_00404AC4;
    case 71u: goto L_00404B10;
    case 72u: goto L_00404B8C;
    case 73u: goto L_00404C20;
    case 74u: goto L_00404C50;
    case 75u: goto L_00404CB8;
    case 76u: goto L_00404CC0;
    case 77u: goto L_00404D04;
    case 78u: goto L_00404D50;
    case 79u: goto L_00404D7C;
    case 80u: goto L_00404D80;
    case 81u: goto L_00404D84;
    case 82u: goto L_00404D94;
    case 83u: goto L_00404DAC;
    case 84u: goto L_00404DD4;
    case 85u: goto L_00404E40;
    case 86u: goto L_00404E6C;
    case 87u: goto L_00404E70;
    case 88u: goto L_00404E74;
    case 89u: goto L_00404E84;
    case 90u: goto L_00404E9C;
    case 91u: goto L_00404EC4;
    case 92u: goto L_00404EF8;
    case 93u: goto L_00404F20;
    case 94u: goto L_00404F54;
    case 95u: goto L_00404F60;
    case 96u: goto L_00404FBC;
    case 97u: goto L_00404FD0;
    case 98u: goto L_00404FDC;
    case 99u: goto L_00405044;
    case 100u: goto L_00405074;
    case 101u: goto L_0040508C;
    case 102u: goto L_004050C0;
    case 103u: goto L_004050EC;
    case 104u: goto L_004050FC;
    case 105u: goto L_00405110;
    case 106u: goto L_00405128;
    case 107u: goto L_004051A0;
    case 108u: goto L_004051D0;
    case 109u: goto L_004051F0;
    case 110u: goto L_00405200;
    case 111u: goto L_00405214;
    case 112u: goto L_0040521C;
    case 113u: goto L_0040522C;
    case 114u: goto L_00405240;
    case 115u: goto L_00405260;
    case 116u: goto L_004052D0;
    case 117u: goto L_004052FC;
    case 118u: goto L_00405300;
    case 119u: goto L_00405304;
    case 120u: goto L_00405310;
    case 121u: goto L_00405378;
    case 122u: goto L_004053A4;
    case 123u: goto L_004053CC;
    case 124u: goto L_004053FC;
    case 125u: goto L_00405420;
    case 126u: goto L_00405434;
    case 127u: goto L_0040543C;
    case 128u: goto L_0040544C;
    case 129u: goto L_00405460;
    case 130u: goto L_00405478;
    case 131u: goto L_00405490;
    case 132u: goto L_004054B0;
    case 133u: goto L_004054D0;
    case 134u: goto L_004054E8;
    case 135u: goto L_004054FC;
    case 136u: goto L_00405510;
    case 137u: goto L_00405528;
    case 138u: goto L_00405530;
    case 139u: goto L_00405540;
    case 140u: goto L_004055A8;
    case 141u: goto L_004055C0;
    case 142u: goto L_004056CC;
    case 143u: goto L_004057FC;
    case 144u: goto L_00405868;
    case 145u: goto L_00405880;
    case 146u: goto L_004058B4;
    case 147u: goto L_004058CC;
    case 148u: goto L_004058DC;
    case 149u: goto L_00405908;
    case 150u: goto L_00405920;
    case 151u: goto L_004059B0;
    case 152u: goto L_00405A18;
    case 153u: goto L_00405A4C;
    case 154u: goto L_00405A58;
    case 155u: goto L_00405A70;
    case 156u: goto L_00405A88;
    case 157u: goto L_00405AD0;
    case 158u: goto L_00405AF0;
    case 159u: goto L_00405B10;
    case 160u: goto L_00405BD4;
    case 161u: goto L_00405C00;
    case 162u: goto L_00405E80;
    case 163u: goto L_00405E8C;
    case 164u: goto L_00405F40;
    case 165u: goto L_004060A8;
    case 166u: goto L_004060C0;
    case 167u: goto L_00406340;
    case 168u: goto L_0040634C;
    case 169u: goto L_00406400;
    case 170u: goto L_00406550;
    case 171u: goto L_004065B0;
    case 172u: goto L_004065F4;
    case 173u: goto L_00406618;
    case 174u: goto L_00406648;
    case 175u: goto L_0040665C;
    case 176u: goto L_00406688;
    case 177u: goto L_004066A4;
    case 178u: goto L_00406720;
    case 179u: goto L_00406748;
    case 180u: goto L_0040676C;
    case 181u: goto L_004067C8;
    case 182u: goto L_004067D0;
    case 183u: goto L_004067EC;
    case 184u: goto L_00406860;
    case 185u: goto L_004068A4;
    case 186u: goto L_004068B4;
    case 187u: goto L_004068C0;
    case 188u: goto L_004068E8;
    case 189u: goto L_00406908;
    case 190u: goto L_00406920;
    case 191u: goto L_00406948;
    case 192u: goto L_00406984;
    case 193u: goto L_004069D0;
    case 194u: goto L_00406A0C;
    case 195u: goto L_00406A1C;
    case 196u: goto L_00406A28;
    case 197u: goto L_00406A48;
    case 198u: goto L_00406A50;
    case 199u: goto L_00406AA8;
    case 200u: goto L_00406B10;
    case 201u: goto L_00406B64;
    case 202u: goto L_00406B74;
    case 203u: goto L_00406B80;
    case 204u: goto L_00406B90;
    case 205u: goto L_00406BD0;
    case 206u: goto L_00406C10;
    case 207u: goto L_00406C50;
    case 208u: goto L_00406C64;
    case 209u: goto L_00406C70;
    case 210u: goto L_00406CA8;
    case 211u: goto L_00406CB4;
    case 212u: goto L_00406CC0;
    case 213u: goto L_00406D20;
    case 214u: goto L_00406D4C;
    case 215u: goto L_00406E54;
    case 216u: goto L_00406E78;
    case 217u: goto L_00406EC4;
    case 218u: goto L_00406ED0;
    case 219u: goto L_00406F08;
    case 220u: goto L_00406F14;
    case 221u: goto L_00406F20;
    case 222u: goto L_00406F80;
    case 223u: goto L_00406FA0;
    case 224u: goto L_00407050;
    case 225u: goto L_00407070;
    case 226u: goto L_00407080;
    case 227u: goto L_004070AC;
    case 228u: goto L_004070BC;
    case 229u: goto L_004070D4;
    case 230u: goto L_00407110;
    case 231u: goto L_00407170;
    case 232u: goto L_0040718C;
    case 233u: goto L_004071E0;
    case 234u: goto L_00407200;
    case 235u: goto L_00407208;
    case 236u: goto L_00407218;
    case 237u: goto L_00407238;
    case 238u: goto L_0040726C;
    case 239u: goto L_00407294;
    case 240u: goto L_00407314;
    case 241u: goto L_00407338;
    case 242u: goto L_00407350;
    case 243u: goto L_00407360;
    case 244u: goto L_00407374;
    case 245u: goto L_00407380;
    case 246u: goto L_004073D0;
    case 247u: goto L_004073F0;
    case 248u: goto L_004073F8;
    case 249u: goto L_00407408;
    case 250u: goto L_00407428;
    case 251u: goto L_00407438;
    case 252u: goto L_00407470;
    case 253u: goto L_0040747C;
    case 254u: goto L_004074A8;
    case 255u: goto L_00407518;
    case 256u: goto L_00407530;
    case 257u: goto L_00407540;
    case 258u: goto L_00407550;
    case 259u: goto L_0040757C;
    case 260u: goto L_00407590;
    case 261u: goto L_004075B8;
    case 262u: goto L_00407600;
    case 263u: goto L_00407610;
    case 264u: goto L_00407620;
    case 265u: goto L_0040764C;
    case 266u: goto L_00407664;
    case 267u: goto L_00407680;
    case 268u: goto L_00407688;
    case 269u: goto L_00407690;
    case 270u: goto L_004076B0;
    case 271u: goto L_004076D8;
    case 272u: goto L_004076E4;
    case 273u: goto L_004076FC;
    case 274u: goto L_00407730;
    case 275u: goto L_00407768;
    case 276u: goto L_0040777C;
    case 277u: goto L_00407790;
    case 278u: goto L_00407794;
    case 279u: goto L_004077E0;
    case 280u: goto L_004077F0;
    case 281u: goto L_00407810;
    case 282u: goto L_00407830;
    case 283u: goto L_00407840;
    case 284u: goto L_00407870;
    case 285u: goto L_00407880;
    case 286u: goto L_0040788C;
    case 287u: goto L_00407898;
    case 288u: goto L_004078A0;
    case 289u: goto L_004078E4;
    case 290u: goto L_004078F4;
    case 291u: goto L_00407904;
    case 292u: goto L_00407914;
    case 293u: goto L_00407924;
    case 294u: goto L_00407940;
    case 295u: goto L_004079E0;
    case 296u: goto L_00407A00;
    case 297u: goto L_00407A20;
    case 298u: goto L_00407A3C;
    case 299u: goto L_00407A50;
    case 300u: goto L_00407A94;
    case 301u: goto L_00407B1C;
    case 302u: goto L_00407B50;
    case 303u: goto L_00407B88;
    case 304u: goto L_00407BA0;
    case 305u: goto L_00407BB4;
    case 306u: goto L_00407BD4;
    case 307u: goto L_00407C24;
    case 308u: goto L_00407CDC;
    case 309u: goto L_00407CE8;
    case 310u: goto L_00407DA4;
    case 311u: goto L_00407DF0;
    case 312u: goto L_00407DF8;
    case 313u: goto L_00407EE8;
    default: bad_entry(c, 0x00404000u); return;
    }
L_00404000:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00404018; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 17640u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00403DF4u | kUnwind; return; } [[clang::musttail]] return unit_0080(c, 447u, depth); } }
L_00404018:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 380u));
    set32(c.r[2], 0u + 98u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004040C4; } }
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[4] = ld32((c.r[4].w[0] + 32u));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[22] = ld32((c.r[4].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 6;
L_00404040:
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[23] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404058u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00404058u) [[unlikely]] return; }
L_00404058:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404064u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x00404064u) [[unlikely]] return; }
L_00404064:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[23]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[3] = 0u;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[22]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[22]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[21]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004040D8; } }
L_004040A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[5]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00404100; } }
L_004040BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404224; } }
L_004040C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004040D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 440u, depth + 1u); else { c.pc = 0x00403A90u; return; } if (c.pc != 0x004040D0u) [[unlikely]] return; }
L_004040D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404224; } }
L_004040D8:
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[21]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004040A0u | kUnwind; return; } goto L_004040A0; } }
L_00404100:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040410Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 440u, depth + 1u); else { c.pc = 0x00403A90u; return; } if (c.pc != 0x0040410Cu) [[unlikely]] return; }
L_0040410C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004040BCu | kUnwind; return; } goto L_004040BC; } }
L_00404114:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[7], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040412Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 251u, depth + 1u); else { c.pc = 0x002D37A0u; return; } if (c.pc != 0x0040412Cu) [[unlikely]] return; }
L_0040412C:
    c.r[8].d[0] = ld8((c.r[17].w[0] + 48u));
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 3u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], 0u - 1u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 48u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004041B4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));
    c.budget -= 1;
L_00404170:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004041CC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040420C; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004041D4; } }
L_0040419C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004041A0:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_004041A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00404214; } }
L_004041AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404224; } }
L_004041B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004041C4u); set32(c.r[4], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x0048F380u; return; } if (c.pc != 0x004041C4u) [[unlikely]] return; }
L_004041C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404170u | kUnwind; return; } goto L_00404170; } }
L_004041CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004041A4u | kUnwind; return; } goto L_004041A4; } }
L_004041D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[17].w[0] + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040419Cu | kUnwind; return; } goto L_0040419C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004041ECu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x004041ECu) [[unlikely]] return; }
L_004041EC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004041A0u | kUnwind; return; } goto L_004041A0; } }
L_0040420C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004041A4u | kUnwind; return; } goto L_004041A4; } }
L_00404214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040421Cu); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x0040421Cu) [[unlikely]] return; }
L_0040421C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004041ACu | kUnwind; return; } goto L_004041AC; } }
L_00404224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00404228:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00404250:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[4] = c.r[3].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[7] = ld32((c.r[2].w[0] - 20412u));
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.f[6] = ld32((c.r[4].w[0] + 24u));
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[8], 0u + 1u);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[5] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[7]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[7]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[5]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[12] = 0u;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[7]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[7]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[7]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004042FCu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 170u, depth + 1u); else { c.pc = 0x00203F80u; return; } if (c.pc != 0x004042FCu) [[unlikely]] return; }
L_004042FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404420; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 108u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00404398; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 8896u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_0081[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00404330:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404344u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x00404344u) [[unlikely]] return; }
L_00404344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld8((c.r[17].w[0] + 48u));  if (t) { goto L_0040439C; } }
L_0040434C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404360u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x00404360u) [[unlikely]] return; }
L_00404360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404398; } }
L_00404368:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040437Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x0040437Cu) [[unlikely]] return; }
L_0040437C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00404398; } }
L_00404384:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 14u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404398u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x00404398u) [[unlikely]] return; }
L_00404398:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 48u));
    c.budget -= 1;
L_0040439C:
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 48u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004044D4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 68u));
    c.budget -= 1;
L_004043DC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004044EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040452C; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004044F4; } }
L_00404408:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040440C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00404410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404420u); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x00404420u) [[unlikely]] return; }
L_00404420:
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404430u); set32(c.r[6], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0029(c, 178u, depth + 1u); else { c.pc = 0x002A63A0u; return; } if (c.pc != 0x00404430u) [[unlikely]] return; }
L_00404430:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00404594; } }
    c.r[8].d[0] = ld8((c.r[17].w[0] + 48u));
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 3u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], 0u - 1u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 48u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00404534; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));
    c.budget -= 1;
L_00404488:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040454C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040458C; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00404554; } }
L_004044B4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004044B8:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_004044BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00404594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004044CCu); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004044CCu) [[unlikely]] return; }
L_004044CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00404598; } }
L_004044D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004044E4u); set32(c.r[4], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x0048F380u; return; } if (c.pc != 0x004044E4u) [[unlikely]] return; }
L_004044E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 68u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004043DCu | kUnwind; return; } goto L_004043DC; } }
L_004044EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404410u | kUnwind; return; } goto L_00404410; } }
L_004044F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[17].w[0] + 60u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404408u | kUnwind; return; } goto L_00404408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040450Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x0040450Cu) [[unlikely]] return; }
L_0040450C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040440Cu | kUnwind; return; } goto L_0040440C; } }
L_0040452C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404410u | kUnwind; return; } goto L_00404410; } }
L_00404534:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404544u); set32(c.r[4], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x0048F380u; return; } if (c.pc != 0x00404544u) [[unlikely]] return; }
L_00404544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404488u | kUnwind; return; } goto L_00404488; } }
L_0040454C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004044BCu | kUnwind; return; } goto L_004044BC; } }
L_00404554:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[17].w[0] + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004044B4u | kUnwind; return; } goto L_004044B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040456Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x0040456Cu) [[unlikely]] return; }
L_0040456C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004044B8u | kUnwind; return; } goto L_004044B8; } }
L_0040458C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004044BCu | kUnwind; return; } goto L_004044BC; } }
L_00404594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00404598:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004045B0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004046A8; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 28536u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[9].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[5], 0u - 17u);
    c.budget -= 6;
L_004045DC:
    c.r[7].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[3].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    if (c.r[3].d[0] == 0) c.r[7].d[0] = 0ull;
    c.budget -= 12;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00404694; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_00404694; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00404694; } }
    c.f[4] = ld32((c.r[4].w[0] + 4u));
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    c.f[6] = ld32((c.r[4].w[0]));
    c.f[5] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00404694; } }
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[7].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    st32((c.r[7].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[7].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[7].w[0] + 28u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[7].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_00404694:
    set32(c.r[3], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[9].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004045DCu | kUnwind; return; } goto L_004045DC; } }
L_004046A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004046B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[7], 0u + 9u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[8], c.r[29].w[0] + 159u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004046F4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 172u, depth + 1u); else { c.pc = 0x002A5F60u; return; } if (c.pc != 0x004046F4u) [[unlikely]] return; }
L_004046F4:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 159u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00404AEC; } }
    set32(c.r[16], c.r[19].w[0] + 60u);
    c.budget -= 1;
L_00404708:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[21], c.r[2].w[0] + 112u);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 264u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004049D0; } }
L_00404728:
    set32(c.r[7], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[7].d[0];  if (t) { goto L_004049C4; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + 8704u);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 522u));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 522u));
    set32(c.r[4], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404884; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[5].d[0];  if (t) { goto L_004049FC; } }
    c.f[2] = ld32((c.r[17].w[0] + 192u));
    c.budget -= 1;
L_00404774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[7] = ld32((c.r[17].w[0] + 32u));
    c.f[6] = ld32((c.r[19].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    c.f[5] = ld32((c.r[17].w[0] + 36u));
    c.f[4] = ld32((c.r[19].w[0] + 4u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[0] = 0u;
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);  if (t) { goto L_004049C4; } }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004049C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004049C4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004047F4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 251u, depth + 1u); else { c.pc = 0x002D37A0u; return; } if (c.pc != 0x004047F4u) [[unlikely]] return; }
L_004047F4:
    c.r[7].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00404A18; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 68u));
    c.budget -= 1;
L_00404838:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404A30; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404A6C; } }
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00404A38; } }
L_00404864:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00404868:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0040486C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004049C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040487Cu); set32(c.r[4], c.r[19].w[0] + 60u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x0040487Cu) [[unlikely]] return; }
L_0040487C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[17].w[0] + 1572u)));  if (t) { goto L_004049C8; } }
L_00404884:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[5].d[0];  if (t) { goto L_00404A74; } }
    c.f[7] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 1;
L_00404890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[6] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[4] = ld32((c.r[17].w[0] + 36u));
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[8] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 192u));
    c.f[7] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[19].w[0] + 16u));
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[1]);
    c.f[5] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[3]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[4] = 0u;
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004049C4; } }
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004049C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004049C4; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004049C4; } }
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040493Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0034(c, 251u, depth + 1u); else { c.pc = 0x002D37A0u; return; } if (c.pc != 0x0040493Cu) [[unlikely]] return; }
L_0040493C:
    c.r[7].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00404A90; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 68u));
    c.budget -= 1;
L_00404980:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404AA8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404AE4; } }
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00404AB0; } }
L_004049AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004049B0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_004049B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004049C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004049C4u); set32(c.r[4], c.r[19].w[0] + 60u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004049C4u) [[unlikely]] return; }
L_004049C4:
    set32(c.r[17], ld32((c.r[17].w[0] + 1572u)));
    c.budget -= 1;
L_004049C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404728u | kUnwind; return; } goto L_00404728; } }
L_004049D0:
    set32(c.r[5], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004049DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 21u, depth + 1u); else { c.pc = 0x00404250u; return; } if (c.pc != 0x004049DCu) [[unlikely]] return; }
L_004049DC:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 159u));
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404708u | kUnwind; return; } goto L_00404708; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00404AF0; } }
L_004049FC:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004049C4u | kUnwind; return; } goto L_004049C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[17].w[0] + 192u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404774u | kUnwind; return; } goto L_00404774; } }
L_00404A18:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[19].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A28u); set32(c.r[4], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x0048F380u; return; } if (c.pc != 0x00404A28u) [[unlikely]] return; }
L_00404A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0] + 68u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404838u | kUnwind; return; } goto L_00404838; } }
L_00404A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040486Cu | kUnwind; return; } goto L_0040486C; } }
L_00404A38:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404864u | kUnwind; return; } goto L_00404864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404A4Cu); c.r[4].d[0] = ld8((c.r[20].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00404A4Cu) [[unlikely]] return; }
L_00404A4C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404868u | kUnwind; return; } goto L_00404868; } }
L_00404A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040486Cu | kUnwind; return; } goto L_0040486C; } }
L_00404A74:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004049C4u | kUnwind; return; } goto L_004049C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[7] = ld32((c.r[17].w[0] + 32u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404890u | kUnwind; return; } goto L_00404890; } }
L_00404A90:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[19].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404AA0u); set32(c.r[4], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x0048F380u; return; } if (c.pc != 0x00404AA0u) [[unlikely]] return; }
L_00404AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0] + 68u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404980u | kUnwind; return; } goto L_00404980; } }
L_00404AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004049B4u | kUnwind; return; } goto L_004049B4; } }
L_00404AB0:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004049ACu | kUnwind; return; } goto L_004049AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404AC4u); c.r[4].d[0] = ld8((c.r[20].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00404AC4u) [[unlikely]] return; }
L_00404AC4:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[20].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004049B0u | kUnwind; return; } goto L_004049B0; } }
L_00404AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004049B4u | kUnwind; return; } goto L_004049B4; } }
L_00404AEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00404AF0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00404B10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00404F00; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.f[7] = 0u;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[5] = ld32((c.r[16].w[0] + 8u));
    c.f[3] = c.r[2].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[6] = ld32((c.r[3].w[0] + 40u));
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[7]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[7]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[5]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404B8Cu); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x00404B8Cu) [[unlikely]] return; }
L_00404B8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[2] = ld32((c.r[16].w[0] + 44u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00404D0C; } }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00404D0C; } }
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00404DFC; } }
    c.f[3] = ld32((c.r[29].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40440000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = c.r[3].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00404EEC; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 1;
L_00404C20:
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00404F00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[13] = ld32((c.r[16].w[0] + 24u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404C50u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x00404C50u) [[unlikely]] return; }
L_00404C50:
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[4] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[3] = ld32((c.r[16].w[0] + 20u));
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 23;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00404F00; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404CB8u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0081(c, 48u, depth + 1u); else { c.pc = 0x004046B0u; return; } if (c.pc != 0x00404CB8u) [[unlikely]] return; }
L_00404CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404CC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 46u, depth + 1u); else { c.pc = 0x004045B0u; return; } if (c.pc != 0x00404CC0u) [[unlikely]] return; }
L_00404CC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[4] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[3] = ld32((c.r[16].w[0] + 20u));
    c.f[2] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 17;
L_00404D04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00404F04; } }
L_00404D0C:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 3u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], 0u - 1u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00404D9C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 1;
L_00404D50:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00404DB4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00404DF4; } }
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00404DBC; } }
L_00404D7C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00404D80:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00404D84:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00404F00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404D94u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x00404D94u) [[unlikely]] return; }
L_00404D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404D04u | kUnwind; return; } goto L_00404D04; } }
L_00404D9C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404DACu); set32(c.r[4], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x0048F380u; return; } if (c.pc != 0x00404DACu) [[unlikely]] return; }
L_00404DAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 68u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404D50u | kUnwind; return; } goto L_00404D50; } }
L_00404DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404D84u | kUnwind; return; } goto L_00404D84; } }
L_00404DBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[16].w[0] + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404D7Cu | kUnwind; return; } goto L_00404D7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404DD4u); c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00404DD4u) [[unlikely]] return; }
L_00404DD4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404D80u | kUnwind; return; } goto L_00404D80; } }
L_00404DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404D84u | kUnwind; return; } goto L_00404D84; } }
L_00404DFC:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 3u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], 0u - 1u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00404E8C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 1;
L_00404E40:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00404EA4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00404EE4; } }
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00404EAC; } }
L_00404E6C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00404E70:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00404E74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00404F00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E84u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x00404E84u) [[unlikely]] return; }
L_00404E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404D04u | kUnwind; return; } goto L_00404D04; } }
L_00404E8C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404E9Cu); set32(c.r[4], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x0048F380u; return; } if (c.pc != 0x00404E9Cu) [[unlikely]] return; }
L_00404E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 68u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404E40u | kUnwind; return; } goto L_00404E40; } }
L_00404EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404E74u | kUnwind; return; } goto L_00404E74; } }
L_00404EAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[16].w[0] + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404E6Cu | kUnwind; return; } goto L_00404E6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404EC4u); c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00404EC4u) [[unlikely]] return; }
L_00404EC4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404E70u | kUnwind; return; } goto L_00404E70; } }
L_00404EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404E74u | kUnwind; return; } goto L_00404E74; } }
L_00404EEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404EF8u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0080(c, 446u, depth + 1u); else { c.pc = 0x00403D50u; return; } if (c.pc != 0x00404EF8u) [[unlikely]] return; }
L_00404EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404C20u | kUnwind; return; } goto L_00404C20; } }
L_00404F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00404F04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00404F20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404F54u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00404F54u) [[unlikely]] return; }
L_00404F54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00405068; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00404F60:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[16], c.r[2].w[0] + 32u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040504C; } }
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    set32(c.r[5], 0u + 15u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404FBCu); st32((c.r[16].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_00A0(c, 200u, depth + 1u); else { c.pc = 0x00482BC0u; return; } if (c.pc != 0x00404FBCu) [[unlikely]] return; }
L_00404FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00404FDC; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404FD0u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x00404FD0u) [[unlikely]] return; }
L_00404FD0:
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00404FDCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x00404FDCu) [[unlikely]] return; }
L_00404FDC:
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[6].d[0] = 0ull & 1ull;
    c.r[9].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], 0u - 2u);
    set32(c.r[3], 0u - 17u);
    set32(c.r[4], c.r[6].w[0] << 4);
    set32(c.r[2], 0u - 1u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040507C; } }
L_00405044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00405094; } }
L_0040504C:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404F60u | kUnwind; return; } goto L_00404F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00405094; } }
L_00405068:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405074u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00405074u) [[unlikely]] return; }
L_00405074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00404F60u | kUnwind; return; } goto L_00404F60; } }
L_0040507C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040508Cu); set32(c.r[4], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_00A3(c, 198u, depth + 1u); else { c.pc = 0x0048F430u; return; } if (c.pc != 0x0040508Cu) [[unlikely]] return; }
L_0040508C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405044u | kUnwind; return; } goto L_00405044; } }
L_00405094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004050C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004050F4; } }
L_004050EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00405104; } }
L_004050F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004050FCu); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 439u, depth + 1u); else { c.pc = 0x004038C0u; return; } if (c.pc != 0x004050FCu) [[unlikely]] return; }
L_004050FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004050ECu | kUnwind; return; } goto L_004050EC; } }
L_00405104:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00405110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
L_00405128:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[9].d[0] = 0ull & 1ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[8], 0u - 2u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[6], 0u - 3u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[9].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], 0u - 9u);
    set32(c.r[12], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[10].d[0] = ld8((c.r[12].w[0] + 80u));
    set32(c.r[3], 0u - 1u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[12].w[0] + 80u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[12].w[0] + 80u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[12].w[0] + 80u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[12].w[0] + 72u), 0u);
    c.r[6].d[0] = ld8((c.r[12].w[0] + 80u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[12].w[0] + 80u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[12].w[0] + 88u)));
    c.budget -= 29;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[11], c.r[12].w[0] + 32u);  if (t) { goto L_004051C0; } }
    c.budget -= 1;
L_004051A0:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.r[3].d[0] = c.r[16].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405128u | kUnwind; return; } goto L_00405128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004051D8; } }
L_004051C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[11].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004051D0u); set32(c.r[4], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x0048F380u; return; } if (c.pc != 0x004051D0u) [[unlikely]] return; }
L_004051D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004051A0u | kUnwind; return; } goto L_004051A0; } }
L_004051D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004051F0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_0081[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00405200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405214u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00405214u) [[unlikely]] return; }
L_00405214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00405224; } }
L_0040521C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00405234; } }
L_00405224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040522Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0040522Cu) [[unlikely]] return; }
L_0040522C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040521Cu | kUnwind; return; } goto L_0040521C; } }
L_00405234:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00405240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
L_00405260:
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[17], c.r[3].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 80u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00405378; } }
    c.r[8].d[0] = ld8((c.r[17].w[0] + 48u));
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 3u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], 0u - 1u);
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 48u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00405394; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));
    c.budget -= 1;
L_004052D0:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004053AC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004053EC; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004053B4; } }
L_004052FC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00405300:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00405304:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004053F4; } }
    c.r[10].d[0] = ld8((c.r[17].w[0] + 48u));
    c.budget -= 1;
L_00405310:
    set32(c.r[8], 0u - 2u);
    c.r[9].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 3u);
    set32(c.r[7], c.r[9].w[0] << 1);
    set32(c.r[4], 0u - 9u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], 0u - 1u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[17].w[0] + 48u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[17].w[0] + 40u), 0u);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 48u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 22;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00405378; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405378u); set32(c.r[4], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x0048F380u; return; } if (c.pc != 0x00405378u) [[unlikely]] return; }
L_00405378:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405260u | kUnwind; return; } goto L_00405260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00405404; } }
L_00405394:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[17].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004053A4u); set32(c.r[4], c.r[2].w[0] + 272u);  if (depth < kMaxDepth) unit_00A3(c, 196u, depth + 1u); else { c.pc = 0x0048F380u; return; } if (c.pc != 0x004053A4u) [[unlikely]] return; }
L_004053A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 68u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004052D0u | kUnwind; return; } goto L_004052D0; } }
L_004053AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405304u | kUnwind; return; } goto L_00405304; } }
L_004053B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[17].w[0] + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004052FCu | kUnwind; return; } goto L_004052FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004053CCu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x004053CCu) [[unlikely]] return; }
L_004053CC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405300u | kUnwind; return; } goto L_00405300; } }
L_004053EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405304u | kUnwind; return; } goto L_00405304; } }
L_004053F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004053FCu); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004053FCu) [[unlikely]] return; }
L_004053FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = ld8((c.r[17].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405310u | kUnwind; return; } goto L_00405310; } }
L_00405404:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00405420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405434u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00405434u) [[unlikely]] return; }
L_00405434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00405444; } }
L_0040543C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00405454; } }
L_00405444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040544Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x0040544Cu) [[unlikely]] return; }
L_0040544C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040543Cu | kUnwind; return; } goto L_0040543C; } }
L_00405454:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00405460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[4].w[0] + 32u);
    c.budget -= 6;
L_00405478:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004054A8; } }
    c.budget -= 1;
L_00405490:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405478u | kUnwind; return; } goto L_00405478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004054B8; } }
L_004054A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004054B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 71u, depth + 1u); else { c.pc = 0x00404B10u; return; } if (c.pc != 0x004054B0u) [[unlikely]] return; }
L_004054B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405490u | kUnwind; return; } goto L_00405490; } }
L_004054B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004054D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004054F0; } }
L_004054E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00405504; } }
L_004054F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004054FCu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004054FCu) [[unlikely]] return; }
L_004054FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004054E8u | kUnwind; return; } goto L_004054E8; } }
L_00405504:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00405510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405528u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00405528u) [[unlikely]] return; }
L_00405528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405530u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x00405530u) [[unlikely]] return; }
L_00405530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00405540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004055A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 7424u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 28536u), 0u);  if (t) { goto L_00405590; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00405590; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_00405590:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004055A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004055A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004055A8u) [[unlikely]] return; }
L_004055A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004055C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[16].w[0] + 32u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[7], c.r[2].w[0] + 80u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[10], c.r[16].w[0] + 512u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 2u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[11], 0u - 3u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[9], c.r[9].w[0] - 12672u);
    set32(c.r[8], c.r[8].w[0] + 7424u);
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 1u);
    c.r[1].d[0] = c.r[7].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[13].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[11].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[8].w[0]);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 100u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    c.budget -= 48;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 88u), c.r[3].w[0]);  if (t) { goto L_00405830; } }
    set32(c.r[9], c.r[16].w[0] + 112u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x66660000u);
    set32(c.r[8], c.r[10].w[0] - c.r[9].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 26215ull;
    set32(c.r[8], c.r[8].w[0] + 79u);
    set32(c.r[2], c.r[16].w[0] - 128u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] >> 31);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004057E0; } }
    c.r[1].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004057E0; } }
L_004056CC:
    st32((c.r[7].w[0] + 60u), 0u);
    st32((c.r[7].w[0] + 64u), 0u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 68u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 68u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[7].w[0] + 72u), 0u);
    st32((c.r[7].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 140u), 0u);
    st32((c.r[7].w[0] + 144u), 0u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 148u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 148u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[7].w[0] + 152u), 0u);
    st32((c.r[7].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 220u), 0u);
    st32((c.r[7].w[0] + 224u), 0u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 228u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 228u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[7].w[0] + 232u), 0u);
    st32((c.r[7].w[0] + 216u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 300u), 0u);
    st32((c.r[7].w[0] + 304u), 0u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 308u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 308u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[7].w[0] + 312u), 0u);
    st32((c.r[7].w[0] + 296u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 380u), 0u);
    st32((c.r[7].w[0] + 384u), 0u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 388u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 388u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[7].w[0] + 392u), 0u);
    st32((c.r[7].w[0] + 376u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 460u), 0u);
    st32((c.r[7].w[0] + 464u), 0u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 468u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 468u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[7].w[0] + 472u), 0u);
    st32((c.r[7].w[0] + 456u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 540u), 0u);
    st32((c.r[7].w[0] + 544u), 0u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 548u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 548u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[7].w[0] + 552u), 0u);
    st32((c.r[7].w[0] + 536u), c.r[3].w[0]);
    st32((c.r[7].w[0] + 620u), 0u);
    st32((c.r[7].w[0] + 624u), 0u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 628u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 628u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[7].w[0] + 632u), 0u);
    st32((c.r[7].w[0] + 616u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 640u);
    c.r[4].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 68;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004056CCu | kUnwind; return; } goto L_004056CC; } }
    c.budget -= 1;
L_004057E0:
    set32(c.r[6], c.r[16].w[0] + 512u);
    c.r[1].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00405830; } }
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_004057FC:
    st32((c.r[7].w[0] + 60u), 0u);
    st32((c.r[7].w[0] + 64u), 0u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 68u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[7].w[0] + 72u), 0u);
    st32((c.r[7].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 80u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004057FCu | kUnwind; return; } goto L_004057FC; } }
    c.budget -= 1;
L_00405830:
    st32((c.r[16].w[0] + 512u), 0u);
    st32((c.r[16].w[0] + 516u), 0u);
    set32(c.r[2], 0u - 2u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 520u));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 520u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 524u), 0u);
    st32((c.r[28].w[0] - 28536u), c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00405868u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00405868u) [[unlikely]] return; }
L_00405868:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00405880:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (t) { goto L_00405AAC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004058B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004058B4u) [[unlikely]] return; }
L_004058B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00405AAC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004058CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004058CCu) [[unlikely]] return; }
L_004058CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004058DCu); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x004058DCu) [[unlikely]] return; }
L_004058DC:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00405A4C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004059B8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00405908u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00405908u) [[unlikely]] return; }
L_00405908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004059B8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00405920u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00405920u) [[unlikely]] return; }
L_00405920:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[3].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[3].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[3].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[3].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[3].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[3].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[3].w[0] + 196u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[3].w[0] + 200u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0] + 204u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[3].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[3].w[0] + 212u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[3].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[3].w[0] + 220u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004059B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004059B0u) [[unlikely]] return; }
L_004059B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00405A50; } }
L_004059B8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00405A4C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00405A78; } }
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00405A18; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00405A60; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 527u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00405A60; } }
L_00405A18:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00405A4C; } }
    st64((c.r[29].w[0]), 0ull);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[8], ld32((c.r[19].w[0] + 24u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A4Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 128u, depth + 1u); else { c.pc = 0x002BCF60u; return; } if (c.pc != 0x00405A4Cu) [[unlikely]] return; }
L_00405A4C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00405A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A58u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x00405A58u) [[unlikely]] return; }
L_00405A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00405AB0; } }
L_00405A60:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 392u, depth + 1u); else { c.pc = 0x0027FF00u; return; } if (c.pc != 0x00405A70u) [[unlikely]] return; }
L_00405A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405A18u | kUnwind; return; } goto L_00405A18; } }
L_00405A78:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00405A88u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00405A88u) [[unlikely]] return; }
L_00405A88:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405A18u | kUnwind; return; } goto L_00405A18; } }
L_00405AAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00405AB0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00405AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405AF0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x00405AF0u) [[unlikely]] return; }
L_00405AF0:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00405B10:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00406038; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[26] = c.r[3].w[0];
    set32(c.r[17], c.r[29].w[0] + 368u);
    c.f[27] = c.r[4].w[0];
    set32(c.r[16], c.r[29].w[0] + 344u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    set32(c.r[21], c.r[29].w[0] + 376u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[24] = c.r[3].w[0];
    set32(c.r[22], c.r[29].w[0] + 396u);
    c.f[25] = c.r[4].w[0];
    set32(c.r[23], c.r[29].w[0] + 356u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    set32(c.r[30], c.r[29].w[0] + 348u);
    c.r[4].d[0] = c.r[3].d[0] | 63875ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[22] = c.r[3].w[0];
    c.f[23] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[3].w[0];
    c.f[20] = 0u;
    c.budget -= 24;
L_00405BD4:
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00406020; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00406020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405C00u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00405C00u) [[unlikely]] return; }
L_00405C00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406020; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 160u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00406020; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00405C38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00405DD8; } }
L_00405C38:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = ld32((c.r[28].w[0] - 32272u));  if (t) { goto L_00405C4C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00405C68; } }
L_00405C4C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00405C68:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);  if (t) { goto L_00405C80; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00405C9C; } }
L_00405C80:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00405C9C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00405CC8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00405CE0; } }
L_00405CC8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 6;
L_00405CE0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_00405CF4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00405D10; } }
L_00405CF4:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00405D10:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[27], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00405D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00405DD8; } }
L_00405D28:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_00405D3C; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00405D58; } }
L_00405D3C:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00405D58:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[26], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00405D78; } }
    c.r[3].d[0] = c.r[5].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00405DD8; } }
L_00405D78:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_00405D8C; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00405DA8; } }
L_00405D8C:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00405DA8:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00405DC8; } }
    c.r[3].d[0] = c.r[5].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00405DD8; } }
L_00405DC8:
    c.r[3].d[0] = c.r[5].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
L_00405DD8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00406020; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[2], 0u + 360u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00405E04; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00405E20; } }
L_00405E04:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00405E20:
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[25]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[24], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[2]);
    set32(c.r[4], c.f[1]);
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[28] = fp::ee::msub(c.fcr31, c.facc, c.f[22], c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405E80u); c.f[12] = c.f[28];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00405E80u) [[unlikely]] return; }
L_00405E80:
    c.f[12] = c.f[28];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00405E8Cu); c.f[28] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x00405E8Cu) [[unlikely]] return; }
L_00405E8C:
    set32(c.r[5], c.r[29].w[0] + 340u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[3], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 380u);
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 372u);
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 364u);
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 360u);
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 352u);
    st32((c.r[5].w[0]), c.f[20]);
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 392u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[5].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    set32(c.r[5], c.r[29].w[0] + 388u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[5].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[5], c.r[29].w[0] + 384u);
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 308u);
    st32((c.r[5].w[0]), c.f[21]);
    set32(c.r[5], c.r[29].w[0] + 312u);
    c.f[5] = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    st32((c.r[5].w[0]), c.f[20]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 324u);
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    st32((c.r[5].w[0]), c.f[4]);
    set32(c.r[5], c.r[29].w[0] + 328u);
    c.f[2] = 0u;
    st32((c.r[29].w[0] + 336u), c.f[28]);
    st32((c.r[21].w[0]), c.f[28]);
    st32((c.r[29].w[0] + 304u), c.f[20]);
    st32((c.r[22].w[0]), c.f[21]);
    st32((c.r[23].w[0]), c.f[21]);
    st32((c.r[30].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 320u), c.f[3]);
    st32((c.r[5].w[0]), c.f[5]);
    c.budget -= 45;
L_00405F40:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405F40u | kUnwind; return; } goto L_00405F40; } }
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], c.r[18].w[0] + 136u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[4], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[4].w[0]);
    c.budget -= 37;
L_00406020:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00405BD4u | kUnwind; return; } goto L_00405BD4; } }
    c.budget -= 1;
L_00406038:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004064F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[26] = c.r[2].w[0];
    set32(c.r[19], c.r[29].w[0] + 272u);
    c.f[27] = c.r[3].w[0];
    set32(c.r[18], c.r[29].w[0] + 248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    set32(c.r[21], c.r[29].w[0] + 280u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[24] = c.r[2].w[0];
    set32(c.r[22], c.r[29].w[0] + 300u);
    c.f[25] = c.r[3].w[0];
    set32(c.r[23], c.r[29].w[0] + 260u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    set32(c.r[30], c.r[29].w[0] + 252u);
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[22] = c.r[2].w[0];
    c.f[23] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.f[20] = 0u;
    c.budget -= 24;
L_004060A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[3].w[0] << 6);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004060C0u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004060C0u) [[unlikely]] return; }
L_004060C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004064E0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[17], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 160u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004064E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004064E0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004060F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00406298; } }
L_004060F8:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = ld32((c.r[28].w[0] - 32272u));  if (t) { goto L_0040610C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406128; } }
L_0040610C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00406128:
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);  if (t) { goto L_00406140; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0040615C; } }
L_00406140:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0040615C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00406188; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004061A0; } }
L_00406188:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 6;
L_004061A0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004061B4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004061D0; } }
L_004061B4:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004061D0:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[27], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004061E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00406298; } }
L_004061E8:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_004061FC; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406218; } }
L_004061FC:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00406218:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[26], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00406238; } }
    c.r[3].d[0] = c.r[5].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00406298; } }
L_00406238:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0040624C; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00406268; } }
L_0040624C:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00406268:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00406288; } }
    c.r[3].d[0] = c.r[5].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00406298; } }
L_00406288:
    c.r[3].d[0] = c.r[5].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
L_00406298:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004064E0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[2], 0u + 360u);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004062C4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004062E0; } }
L_004062C4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004062E0:
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[25]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[24], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[2]);
    set32(c.r[4], c.f[1]);
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[28] = fp::ee::msub(c.fcr31, c.facc, c.f[22], c.f[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406340u); c.f[12] = c.f[28];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00406340u) [[unlikely]] return; }
L_00406340:
    c.f[12] = c.f[28];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040634Cu); c.f[28] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0040634Cu) [[unlikely]] return; }
L_0040634C:
    set32(c.r[5], c.r[29].w[0] + 244u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[3], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 284u);
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 276u);
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 268u);
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 264u);
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 256u);
    st32((c.r[5].w[0]), c.f[20]);
    st32((c.r[19].w[0]), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 296u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[5].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    set32(c.r[5], c.r[29].w[0] + 292u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    st32((c.r[5].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    set32(c.r[5], c.r[29].w[0] + 288u);
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 212u);
    st32((c.r[5].w[0]), c.f[21]);
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.f[5] = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    st32((c.r[5].w[0]), c.f[20]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 228u);
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    st32((c.r[5].w[0]), c.f[4]);
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.f[2] = 0u;
    st32((c.r[29].w[0] + 240u), c.f[28]);
    st32((c.r[21].w[0]), c.f[28]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    st32((c.r[22].w[0]), c.f[21]);
    st32((c.r[23].w[0]), c.f[21]);
    st32((c.r[30].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 224u), c.f[3]);
    st32((c.r[5].w[0]), c.f[5]);
    c.budget -= 45;
L_00406400:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406400u | kUnwind; return; } goto L_00406400; } }
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], c.r[17].w[0] + 136u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[4].w[0]);
    c.budget -= 37;
L_004064E0:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004060A8u | kUnwind; return; } goto L_004060A8; } }
    c.budget -= 1;
L_004064F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_00406550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406578; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_004065A8; } }
L_00406578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004065A4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_004065A8; } }
L_004065A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004065A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004065B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_00406648; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00406680; } }
L_004065F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00406664; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406618u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00406618u) [[unlikely]] return; }
L_00406618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406664; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 162u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00406664; } }
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_00406700; } }
L_00406648:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00406688; } }
L_0040665C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00406700; } }
L_00406664:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004065F4u | kUnwind; return; } goto L_004065F4; } }
    c.budget -= 1;
L_00406680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406648u | kUnwind; return; } goto L_00406648; } }
L_00406688:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004066A4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004066A4u) [[unlikely]] return; }
L_004066A4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004066E0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 162u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004066E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (t) { goto L_00406700; } }
L_004066E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406688u | kUnwind; return; } goto L_00406688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040665Cu | kUnwind; return; } goto L_0040665C; } }
L_00406700:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00406720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004067B8; } }
L_00406748:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040679C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040676Cu);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0040676Cu) [[unlikely]] return; }
L_0040676C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040679C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 162u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040679C; } }
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_00406848; } }
L_0040679C:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406748u | kUnwind; return; } goto L_00406748; } }
    c.budget -= 1;
L_004067B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004067D0; } }
L_004067C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00406848; } }
L_004067D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004067ECu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004067ECu) [[unlikely]] return; }
L_004067EC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406828; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 162u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00406828; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (t) { goto L_00406848; } }
L_00406828:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004067D0u | kUnwind; return; } goto L_004067D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004067C8u | kUnwind; return; } goto L_004067C8; } }
L_00406848:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00406860:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 172u), c.r[5].w[0]);  if (t) { goto L_004068AC; } }
L_004068A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004069A0; } }
L_004068AC:
    c.r[22].d[0] = 0ull + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004068B4:
    set32(c.r[2], ld32((c.r[30].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004068C0u); set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004068C0u) [[unlikely]] return; }
L_004068C0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00406958; } }
    set32(c.r[3], ld32((c.r[30].w[0] + 40u)));
    set32(c.r[18], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00406958; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004068E8:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 20u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[20].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00406948; } }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[18].w[0] + 284u);
    c.budget -= 2;
L_00406908:
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 20u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00406978; } }
L_00406920:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406908u | kUnwind; return; } goto L_00406908; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00406948; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406948u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00406948u) [[unlikely]] return; }
L_00406948:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004068E8u | kUnwind; return; } goto L_004068E8; } }
L_00406958:
    set32(c.r[3], ld32((c.r[30].w[0] + 44u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[22], c.r[22].w[0] + 320u);
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004068B4u | kUnwind; return; } goto L_004068B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004068A4u | kUnwind; return; } goto L_004068A4; } }
L_00406978:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406984u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x00406984u) [[unlikely]] return; }
L_00406984:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 20u));
    c.r[4].d[0] = ~(c.r[16].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406920u | kUnwind; return; } goto L_00406920; } }
    c.budget -= 1;
L_004069A0:
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
L_004069D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00406A14; } }
L_00406A0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00406AE0; } }
L_00406A14:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00406A1C:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406A28u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00406A28u) [[unlikely]] return; }
L_00406A28:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406A60; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_00406A80; } }
L_00406A48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00406A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00406AE0; } }
L_00406A60:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 320u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406A1Cu | kUnwind; return; } goto L_00406A1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406A0Cu | kUnwind; return; } goto L_00406A0C; } }
L_00406A80:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00406A98; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406A48u | kUnwind; return; } goto L_00406A48; } }
    c.budget -= 1;
L_00406A98:
    c.r[4].d[0] = ld8((c.r[3].w[0] + 20u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
L_00406AA8:
    set32(c.r[2], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00406AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406A50u | kUnwind; return; } goto L_00406A50; } }
L_00406AC8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406AA8u | kUnwind; return; } goto L_00406AA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406A48u | kUnwind; return; } goto L_00406A48; } }
L_00406AE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00406B10:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_00406B6C; } }
L_00406B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00406BD8; } }
L_00406B6C:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00406B74:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406B80u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00406B80u) [[unlikely]] return; }
L_00406B80:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00406BB0; } }
    c.budget -= 1;
L_00406B90:
    set32(c.r[3], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 320u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406B74u | kUnwind; return; } goto L_00406B74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406B64u | kUnwind; return; } goto L_00406B64; } }
L_00406BB0:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406BD0u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0082(c, 173u, depth + 1u); else { c.pc = 0x00409700u; return; } if (c.pc != 0x00406BD0u) [[unlikely]] return; }
L_00406BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406B90u | kUnwind; return; } goto L_00406B90; } }
L_00406BD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00406C10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00406C58; } }
L_00406C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00406CF8; } }
L_00406C58:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[2].w[0] << 6);
    c.budget -= 3;
L_00406C64:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406C70u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00406C70u) [[unlikely]] return; }
L_00406C70:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00406CC8; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[21].w[0] + 64u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[16], c.r[3].w[0] << 6);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406CA8u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0082(c, 151u, depth + 1u); else { c.pc = 0x00409140u; return; } if (c.pc != 0x00406CA8u) [[unlikely]] return; }
L_00406CA8:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406CB4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00406CB4u) [[unlikely]] return; }
L_00406CB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00406CE4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00406CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00406CFC; } }
L_00406CC8:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406C64u | kUnwind; return; } goto L_00406C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406C50u | kUnwind; return; } goto L_00406C50; } }
L_00406CE4:
    set32(c.r[3], ld32((c.r[21].w[0] + 68u)));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 68u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406CC0u | kUnwind; return; } goto L_00406CC0; } }
L_00406CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00406CFC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00406D20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00406D54; } }
L_00406D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00406F5C; } }
L_00406D54:
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], ld32((c.r[28].w[0] - 29808u)));
    c.f[2] = c.r[2].w[0];
    c.f[12] = 0u;
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[3], c.r[29].w[0] + 120u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[5] = ld32((c.r[7].w[0] + 40u));
    c.f[1] = ld32((c.r[7].w[0] + 32u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29752u)));
    c.f[4] = ld32((c.r[7].w[0] + 36u));
    c.f[10] = ld32((c.r[17].w[0] + 24u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[8] = ld32((c.r[17].w[0] + 20u));
    c.f[6] = ld32((c.r[17].w[0] + 16u));
    c.f[9] = fp::ee::sub(c.fcr31, c.f[10], c.f[5]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[8], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[8], c.f[12]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[7]);
    st32((c.r[29].w[0] + 132u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[9]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[4] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[7], c.f[4]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[9], c.f[4]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 112u), c.f[2]);
    c.f[2] = ld32((c.r[29].w[0] + 120u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[10], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.r[3].w[0] >> 4);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[7], c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 136u), c.f[2]);
    set32(c.r[3], c.r[7].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 64;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406E54u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_004F(c, 93u, depth + 1u); else { c.pc = 0x0033DFD0u; return; } if (c.pc != 0x00406E54u) [[unlikely]] return; }
L_00406E54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00406E60; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00406E60:
    set32(c.r[20], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], ld32((c.r[28].w[0] - 29808u)));  if (t) { goto L_00406EB8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00406E78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00406F58; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_00406F58; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406D4Cu | kUnwind; return; } goto L_00406D4C; } }
L_00406EB8:
    set32(c.r[2], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[19], c.r[2].w[0] << 6);
    c.budget -= 3;
L_00406EC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406ED0u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00406ED0u) [[unlikely]] return; }
L_00406ED0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00406F28; } }
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 64u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] << 2);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[16], c.r[3].w[0] << 6);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406F08u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0082(c, 151u, depth + 1u); else { c.pc = 0x00409140u; return; } if (c.pc != 0x00406F08u) [[unlikely]] return; }
L_00406F08:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406F14u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00406F14u) [[unlikely]] return; }
L_00406F14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00406F44; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00406F20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406E78u | kUnwind; return; } goto L_00406E78; } }
L_00406F28:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406EC4u | kUnwind; return; } goto L_00406EC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406E78u | kUnwind; return; } goto L_00406E78; } }
L_00406F44:
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00406F20u | kUnwind; return; } goto L_00406F20; } }
L_00406F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00406F5C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00406F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00406FA0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 125u, depth + 1u); else { c.pc = 0x003F5110u; return; } if (c.pc != 0x00406FA0u) [[unlikely]] return; }
L_00406FA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00407030; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00407030; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    ld128((c.r[16].w[0] + 16u) & ~15u, c.r[10]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.r[9]);
    set32(c.r[8], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[12], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 64u));
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    st128((c.r[12].w[0] + 16u) & ~15u, c.r[10]);
    st128((c.r[12].w[0] + 32u) & ~15u, c.r[9]);
    st32((c.r[12].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[12].w[0] + 52u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[12].w[0] + 56u), c.r[6].w[0]);
    st32((c.r[12].w[0] + 60u), c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 65u));
    st8((c.r[12].w[0] + 64u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[12].w[0] + 65u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_00407034; } }
L_00407030:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00407034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00407050:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[6].w[0]);  c.pc = t; return; }
L_00407070:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 4;
    { set32(c.r[6], c.r[6].w[0] + 10752u);  [[clang::musttail]] return unit_0082(c, 225u, depth); }
L_00407080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004070B8; } }
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_004070AC:
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), 0u);  if (t) { goto L_004070F0; } }
L_004070B8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004070BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004070D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004070D4u) [[unlikely]] return; }
L_004070D4:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004070BCu | kUnwind; return; } goto L_004070BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004070ACu | kUnwind; return; } goto L_004070AC; } }
L_004070F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00407110:
    set32(c.r[29], c.r[29].w[0] - 192u);
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
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.f[20] = ld32((c.r[3].w[0] + 32u));
    c.f[21] = ld32((c.r[3].w[0] + 36u));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.f[22] = ld32((c.r[3].w[0] + 40u));
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00407330; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00407170:
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00407318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040718Cu);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0040718Cu) [[unlikely]] return; }
L_0040718C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00407250; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00407318; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] - 10u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00407208; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 9152u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_0081[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004071E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00407318; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 284u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407200u); set32(c.r[4], c.r[2].w[0] + 496u);  if (depth < kMaxDepth) unit_00A6(c, 138u, depth + 1u); else { c.pc = 0x00499CE0u; return; } if (c.pc != 0x00407200u) [[unlikely]] return; }
L_00407200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407318; } }
L_00407208:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00407318; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00407218:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[3].w[0] + 284u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 284u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00407358; } }
    c.budget -= 1;
L_00407238:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407218u | kUnwind; return; } goto L_00407218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407318; } }
L_00407250:
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040726Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040726Cu) [[unlikely]] return; }
L_0040726C:
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00407318; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00407294u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00407294u) [[unlikely]] return; }
L_00407294:
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA60000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00407318; } }
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[22], c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00407318; } }
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[21], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00407318; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00407314u); set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00407314u) [[unlikely]] return; }
L_00407314:
    c.budget -= 1;
L_00407318:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407170u | kUnwind; return; } goto L_00407170; } }
    c.budget -= 1;
L_00407330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407338u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 213u, depth + 1u); else { c.pc = 0x00406D20u; return; } if (c.pc != 0x00407338u) [[unlikely]] return; }
L_00407338:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[23], ld32((c.r[20].w[0] + 68u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00407368; } }
L_00407350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004075C0; } }
L_00407358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407360u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x00407360u) [[unlikely]] return; }
L_00407360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407238u | kUnwind; return; } goto L_00407238; } }
L_00407368:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[30], c.r[29].w[0] + 180u);
    c.budget -= 3;
L_00407374:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407380u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00407380u) [[unlikely]] return; }
L_00407380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00407458; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[21], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 20u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00407438; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] - 10u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004073F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 8944u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00404000u < 16384u) { entry = entries_0081[(t - 0x00404000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004073D0:
    set32(c.r[4], ld32((c.r[21].w[0] + 284u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00407438; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[21].w[0] + 284u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004073F0u); set32(c.r[4], c.r[2].w[0] + 496u);  if (depth < kMaxDepth) unit_00A6(c, 138u, depth + 1u); else { c.pc = 0x00499CE0u; return; } if (c.pc != 0x004073F0u) [[unlikely]] return; }
L_004073F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407438; } }
L_004073F8:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00407438; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00407408:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[5], c.r[4].w[0] + 284u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004075B0; } }
    c.budget -= 1;
L_00407428:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407408u | kUnwind; return; } goto L_00407408; } }
L_00407438:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 320u);
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407374u | kUnwind; return; } goto L_00407374; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407350u | kUnwind; return; } goto L_00407350; } }
L_00407458:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00407470u); set32(c.r[22], c.r[22].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00407470u) [[unlikely]] return; }
L_00407470:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040747Cu); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x0040747Cu) [[unlikely]] return; }
L_0040747C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00407564; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 160u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00407550; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004074A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004074A8u) [[unlikely]] return; }
L_004074A8:
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40100000u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[29].w[0] + 184u);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[22], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[20], c.f[1]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[21], c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[30].w[0]), c.f[2]);
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0]), c.f[3]);  if (t) { goto L_00407550; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00407550; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00407518u); set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00407518u) [[unlikely]] return; }
L_00407518:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407530u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 119u, depth + 1u); else { c.pc = 0x002BCC30u; return; } if (c.pc != 0x00407530u) [[unlikely]] return; }
L_00407530:
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004075A8; } }
L_00407540:
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 4;
L_00407550:
    c.r[3].d[0] = c.r[22].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407438u | kUnwind; return; } goto L_00407438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407350u | kUnwind; return; } goto L_00407350; } }
L_00407564:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040757Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 119u, depth + 1u); else { c.pc = 0x002BCC30u; return; } if (c.pc != 0x0040757Cu) [[unlikely]] return; }
L_0040757C:
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004075A0; } }
    c.budget -= 1;
L_00407590:
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 68u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407550u | kUnwind; return; } goto L_00407550; } }
L_004075A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 64u), c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407590u | kUnwind; return; } goto L_00407590; } }
L_004075A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 64u), c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407540u | kUnwind; return; } goto L_00407540; } }
L_004075B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004075B8u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004075B8u) [[unlikely]] return; }
L_004075B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407428u | kUnwind; return; } goto L_00407428; } }
L_004075C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00407600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 48u);  c.pc = t; return; }
L_00407610:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00407620:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00407678; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040764C:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00407664u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00407664u) [[unlikely]] return; }
L_00407664:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040764Cu | kUnwind; return; } goto L_0040764C; } }
L_00407678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407680u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0082(c, 223u, depth + 1u); else { c.pc = 0x00409DD0u; return; } if (c.pc != 0x00407680u) [[unlikely]] return; }
L_00407680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407688u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0082(c, 218u, depth + 1u); else { c.pc = 0x00409D20u; return; } if (c.pc != 0x00407688u) [[unlikely]] return; }
L_00407688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407690u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_0082(c, 213u, depth + 1u); else { c.pc = 0x00409C70u; return; } if (c.pc != 0x00407690u) [[unlikely]] return; }
L_00407690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004076B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004076E0; } }
L_004076D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00407718; } }
L_004076E0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004076E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004076FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004076FCu) [[unlikely]] return; }
L_004076FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004076E4u | kUnwind; return; } goto L_004076E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004076D8u | kUnwind; return; } goto L_004076D8; } }
L_00407718:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00407730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], 0u + 20u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[6], c.r[6].w[0] + 10767u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407768u); set32(c.r[4], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_0082(c, 220u, depth + 1u); else { c.pc = 0x00409D60u; return; } if (c.pc != 0x00407768u) [[unlikely]] return; }
L_00407768:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040777Cu); set32(c.r[6], c.r[6].w[0] + 10783u);  if (depth < kMaxDepth) unit_0082(c, 215u, depth + 1u); else { c.pc = 0x00409CB0u; return; } if (c.pc != 0x0040777Cu) [[unlikely]] return; }
L_0040777C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[17].w[0] + 56u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407790u); set32(c.r[6], c.r[6].w[0] + 10798u);  if (depth < kMaxDepth) unit_0082(c, 211u, depth + 1u); else { c.pc = 0x00409C30u; return; } if (c.pc != 0x00407790u) [[unlikely]] return; }
L_00407790:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00407794:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407794u | kUnwind; return; } goto L_00407794; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00407808; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[2].w[0] << 6);
    c.budget -= 3;
L_004077E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004077F0u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004077F0u) [[unlikely]] return; }
L_004077F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004077E0u | kUnwind; return; } goto L_004077E0; } }
    c.budget -= 1;
L_00407808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407810u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x00407810u) [[unlikely]] return; }
L_00407810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00407830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00407840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004078E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 8016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407870u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0082(c, 227u, depth + 1u); else { c.pc = 0x00409E50u; return; } if (c.pc != 0x00407870u) [[unlikely]] return; }
L_00407870:
    set32(c.r[4], c.r[17].w[0] + 56u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004078EC; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_00407880:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004078FC; } }
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 1;
L_0040788C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0040790C; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_00407898:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0040791C; } }
L_004078A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004078CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004078CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004078CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004078E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004078E4u) [[unlikely]] return; }
L_004078E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040792C; } }
L_004078EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004078F4u);  if (depth < kMaxDepth) unit_0082(c, 213u, depth + 1u); else { c.pc = 0x00409C70u; return; } if (c.pc != 0x004078F4u) [[unlikely]] return; }
L_004078F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407880u | kUnwind; return; } goto L_00407880; } }
L_004078FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407904u);  if (depth < kMaxDepth) unit_0082(c, 218u, depth + 1u); else { c.pc = 0x00409D20u; return; } if (c.pc != 0x00407904u) [[unlikely]] return; }
L_00407904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040788Cu | kUnwind; return; } goto L_0040788C; } }
L_0040790C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407914u);  if (depth < kMaxDepth) unit_0082(c, 223u, depth + 1u); else { c.pc = 0x00409DD0u; return; } if (c.pc != 0x00407914u) [[unlikely]] return; }
L_00407914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407898u | kUnwind; return; } goto L_00407898; } }
L_0040791C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407924u);  if (depth < kMaxDepth) unit_0082(c, 227u, depth + 1u); else { c.pc = 0x00409E50u; return; } if (c.pc != 0x00407924u) [[unlikely]] return; }
L_00407924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004078A0u | kUnwind; return; } goto L_004078A0; } }
L_0040792C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00407940:
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
    set32(c.r[3], c.r[3].w[0] + 8016u);
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
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), 0u);  c.pc = t; return; }
L_004079E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A00u); st32((c.r[6].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 258u, depth + 1u); else { c.pc = 0x002BB1B0u; return; } if (c.pc != 0x00407A00u) [[unlikely]] return; }
L_00407A00:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00407A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407A3Cu); c.r[5].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00407A3Cu) [[unlikely]] return; }
L_00407A3C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00407A50:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 20u));
    c.f[20] = ld32((c.r[29].w[0] + 252u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00407B98; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 1;
L_00407A94:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00407BBC; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00407AB4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00407AD0; } }
L_00407AB4:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00407AD0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_00407AE4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00407B00; } }
L_00407AE4:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00407B00:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00407BBC; } }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[20].w[0] + 284u);
    c.budget -= 2;
L_00407B1C:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 20u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[16], c.r[4].w[0] << (c.r[18].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00407B68; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 162u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00407B68; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407B50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x00407B50u) [[unlikely]] return; }
L_00407B50:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 20u));
    c.r[4].d[0] = ~(c.r[16].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st8((c.r[20].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_00407B68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407B1Cu | kUnwind; return; } goto L_00407B1C; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 20u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00407BA8; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 20u));
    c.budget -= 1;
L_00407B88:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00407BBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0082(c, 16u, depth); } }
L_00407B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407BA0u);  if (depth < kMaxDepth) unit_0082(c, 17u, depth + 1u); else { c.pc = 0x00408220u; return; } if (c.pc != 0x00407BA0u) [[unlikely]] return; }
L_00407BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 80u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407A94u | kUnwind; return; } goto L_00407A94; } }
L_00407BA8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00407BB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00407BB4u) [[unlikely]] return; }
L_00407BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0] + 20u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407B88u | kUnwind; return; } goto L_00407B88; } }
L_00407BBC:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[20].w[0] + 176u);
    set32(c.r[17], c.r[20].w[0] + 224u);
    set32(c.r[21], c.r[20].w[0] + 284u);
    set32(c.r[23], c.r[29].w[0] + 212u);
    set32(c.r[30], c.r[29].w[0] + 216u);
    c.budget -= 6;
L_00407BD4:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 20u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[22], c.r[4].w[0] << (c.r[19].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[22].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00407DA4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00407E00; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1578u));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00407C14; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1572u));
    c.budget -= 1;
L_00407C14:
    set32(c.r[3], ld32((c.r[4].w[0] + 348u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 4;
L_00407C24:
    c.f[5] = ld32((c.r[6].w[0] + 48u));
    set32(c.r[3], 0u + 1u);
    c.f[4] = ld32((c.r[18].w[0]));
    c.r[5].d[0] = ld8((c.r[20].w[0] + 162u));
    c.f[3] = ld32((c.r[6].w[0] + 52u));
    set32(c.r[16], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[10] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[16].d[0];
    c.f[9] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[8] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = c.f[10] & fp::kAbs;
    c.f[1] = c.f[9] & fp::kAbs;
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != 0ull; c.f[0] = c.f[8] & fp::kAbs;  if (t) { goto L_00407E0C; } }
    c.r[5].d[0] = ld8((c.r[20].w[0] + 161u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00407DA4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[3] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0082(c, 7u, depth); } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0082(c, 7u, depth); } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0082(c, 7u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00407CC8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 531u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[5], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00407CC8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 162u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0082(c, 5u, depth); } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 162u));
    c.budget -= 1;
L_00407CDC:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 162u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00407CE8:
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    c.f[6] = ld32((c.r[20].w[0] + 56u));
    c.f[3] = ld32((c.r[18].w[0] + 4u));
    c.f[4] = ld32((c.r[18].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[5] = ld32((c.r[20].w[0] + 52u));  if (t) { goto L_00407D1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB9510000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[2] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407D28; } }
L_00407D1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x39510000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[2] = c.r[3].w[0];
    c.budget -= 3;
L_00407D28:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00407D48; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB9510000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[3] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00407D54; } }
L_00407D48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x39510000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[3] = c.r[3].w[0];
    c.budget -= 3;
L_00407D54:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[6]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00407D74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xB9510000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0]));  if (t) { goto L_00407D84; } }
L_00407D74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x39510000u);
    c.r[3].d[0] = c.r[3].d[0] | 46871ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[17].w[0]));
    c.budget -= 4;
L_00407D84:
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_00407DA4:
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407BD4u | kUnwind; return; } goto L_00407BD4; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 161u));
    c.budget -= 1;
L_00407DF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0082(c, 11u, depth); } }
L_00407DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0082(c, 16u, depth); } }
L_00407E00:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 8816u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407C24u | kUnwind; return; } goto L_00407C24; } }
L_00407E0C:
    c.facc = fp::ee::mul(c.fcr31, c.f[9], c.f[9]);
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[10]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    c.f[5] = fp::ee::sqrt(c.fcr31, c.f[5]);
    st32((c.r[4].w[0]), c.f[20]);
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[6], c.r[20].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[6] = ld32((c.r[4].w[0] - 20412u));
    c.f[7] = ld32((c.r[6].w[0] + 272u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[4].w[0];
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[6]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x39510000u);
    c.r[5].d[0] = c.r[4].d[0] | 46871ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.f[5] = fp::ee::div(c.fcr31, c.f[4], c.f[5]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[10], c.f[5]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[9], c.f[5]);
    c.f[3] = c.r[5].w[0];
    st32((c.r[29].w[0] + 176u), c.f[4]);
    st32((c.r[29].w[0] + 192u), c.f[4]);
    set32(c.r[5], c.r[29].w[0] + 204u);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[7]);
    st32((c.r[29].w[0] + 224u), c.f[4]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[3], c.f[7]);
    st32((c.r[5].w[0]), c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 180u);
    st32((c.r[5].w[0]), c.f[6]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[8], c.f[5]);
    set32(c.r[5], c.r[29].w[0] + 184u);
    st32((c.r[5].w[0]), c.f[5]);
    set32(c.r[5], c.r[29].w[0] + 196u);
    st32((c.r[5].w[0]), c.f[6]);
    st32((c.r[6].w[0] + 272u), c.f[7]);
    set32(c.r[5], c.r[29].w[0] + 228u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[6], c.f[7]);
    st32((c.r[5].w[0]), c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[5], c.f[7]);
    set32(c.r[5], c.r[29].w[0] + 200u);
    st32((c.r[5].w[0]), c.f[5]);
    set32(c.r[5], c.r[29].w[0] + 232u);
    st32((c.r[5].w[0]), c.f[3]);
    c.f[8] = ld32((c.r[17].w[0]));
    set32(c.r[5], c.r[29].w[0] + 220u);
    c.f[5] = ld32((c.r[17].w[0] + 12u));
    c.f[7] = ld32((c.r[17].w[0] + 4u));
    c.f[6] = ld32((c.r[17].w[0] + 8u));
    c.f[3] = ld32((c.r[28].w[0] - 32272u));
    st32((c.r[29].w[0] + 208u), c.f[8]);
    st32((c.r[5].w[0]), c.f[5]);
    st32((c.r[23].w[0]), c.f[7]);
    st32((c.r[30].w[0]), c.f[6]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.budget -= 55;
L_00407EE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00407EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[29].w[0] + 208u);  if (t) { goto L_00407F0C; } }
L_00407EF8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00407F08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (t) { goto L_00407F0C; } }
L_00407F08:
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_00407F0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00407F1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 224u);  if (t) { goto L_00407F30; } }
L_00407F1C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00407F2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 228u);  if (t) { goto L_00407F30; } }
L_00407F2C:
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.budget -= 1;
L_00407F30:
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[6].w[0]));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00407F6C; } }
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00407F64; } }
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[5]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[3]);  if (t) { goto L_00407F90; } }
L_00407F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[4]);  if (t) { goto L_00407F90; } }
L_00407F6C:
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00407F8C; } }
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[3]);  if (t) { goto L_00407F90; } }
L_00407F8C:
    st32((c.r[6].w[0]), c.f[4]);
    c.budget -= 1;
L_00407F90:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407EE8u | kUnwind; return; } goto L_00407EE8; } }
    c.f[6] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[3], c.r[29].w[0] + 220u);
    c.f[5] = ld32((c.r[23].w[0]));
    c.f[4] = ld32((c.r[30].w[0]));
    c.f[3] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0]), c.f[6]);
    st32((c.r[17].w[0] + 4u), c.f[5]);
    st32((c.r[17].w[0] + 8u), c.f[4]);
    st32((c.r[17].w[0] + 12u), c.f[3]);
    c.r[3].d[0] = ld8((c.r[20].w[0] + 161u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407DA4u | kUnwind; return; } goto L_00407DA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407DA4u | kUnwind; return; } goto L_00407DA4; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407DA4u | kUnwind; return; } goto L_00407DA4; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407DA4u | kUnwind; return; } goto L_00407DA4; } }
    [[clang::musttail]] return unit_0082(c, 1u, depth);
}

}

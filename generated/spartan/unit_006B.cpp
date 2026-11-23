#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006B[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0,
    31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003AC000;
    case 2u: goto L_003AC00C;
    case 3u: goto L_003AC018;
    case 4u: goto L_003AC02C;
    case 5u: goto L_003AC0E4;
    case 6u: goto L_003AC10C;
    case 7u: goto L_003AC120;
    case 8u: goto L_003AC1D8;
    case 9u: goto L_003AC200;
    case 10u: goto L_003AC220;
    case 11u: goto L_003AC228;
    case 12u: goto L_003AC264;
    case 13u: goto L_003AC278;
    case 14u: goto L_003AC2A0;
    case 15u: goto L_003AC2D4;
    case 16u: goto L_003AC310;
    case 17u: goto L_003AC34C;
    case 18u: goto L_003AC358;
    case 19u: goto L_003AC42C;
    case 20u: goto L_003AC4A4;
    case 21u: goto L_003AC4B0;
    case 22u: goto L_003AC528;
    case 23u: goto L_003AC534;
    case 24u: goto L_003AC550;
    case 25u: goto L_003AC5F8;
    case 26u: goto L_003AC618;
    case 27u: goto L_003AC660;
    case 28u: goto L_003AC690;
    case 29u: goto L_003AC770;
    case 30u: goto L_003AC778;
    case 31u: goto L_003AC780;
    case 32u: goto L_003AC788;
    case 33u: goto L_003AC7B8;
    case 34u: goto L_003AC7BC;
    case 35u: goto L_003AC7C8;
    case 36u: goto L_003AC880;
    case 37u: goto L_003AC904;
    case 38u: goto L_003AC954;
    case 39u: goto L_003AC980;
    case 40u: goto L_003ACBB8;
    case 41u: goto L_003ACBF0;
    case 42u: goto L_003ACC0C;
    case 43u: goto L_003ACCA0;
    case 44u: goto L_003ACCD8;
    case 45u: goto L_003ACCEC;
    case 46u: goto L_003ACCFC;
    case 47u: goto L_003ACD48;
    case 48u: goto L_003ACD60;
    case 49u: goto L_003ACD98;
    case 50u: goto L_003ACDAC;
    case 51u: goto L_003ACDBC;
    case 52u: goto L_003ACE08;
    case 53u: goto L_003ACE20;
    case 54u: goto L_003ACE30;
    case 55u: goto L_003ACE40;
    case 56u: goto L_003ACE90;
    case 57u: goto L_003ACEC4;
    case 58u: goto L_003ACECC;
    case 59u: goto L_003ACEDC;
    case 60u: goto L_003ACF00;
    case 61u: goto L_003ACF44;
    case 62u: goto L_003ACF80;
    case 63u: goto L_003AD0A8;
    case 64u: goto L_003AD0F8;
    case 65u: goto L_003AD120;
    case 66u: goto L_003AD180;
    case 67u: goto L_003AD1E0;
    case 68u: goto L_003AD230;
    case 69u: goto L_003AD248;
    case 70u: goto L_003AD2D4;
    case 71u: goto L_003AD308;
    case 72u: goto L_003AD37C;
    case 73u: goto L_003AD3E0;
    case 74u: goto L_003AD458;
    case 75u: goto L_003AD468;
    case 76u: goto L_003AD490;
    case 77u: goto L_003AD4CC;
    case 78u: goto L_003AD4D0;
    case 79u: goto L_003AD550;
    case 80u: goto L_003AD580;
    case 81u: goto L_003AD5A0;
    case 82u: goto L_003AD5C0;
    case 83u: goto L_003AD668;
    case 84u: goto L_003AD680;
    case 85u: goto L_003AD69C;
    case 86u: goto L_003AD6C4;
    case 87u: goto L_003AD788;
    case 88u: goto L_003AD798;
    case 89u: goto L_003AD7B8;
    case 90u: goto L_003AD7D8;
    case 91u: goto L_003AD868;
    case 92u: goto L_003AD880;
    case 93u: goto L_003AD8A0;
    case 94u: goto L_003AD960;
    case 95u: goto L_003AD9AC;
    case 96u: goto L_003AD9EC;
    case 97u: goto L_003AD9FC;
    case 98u: goto L_003ADA54;
    case 99u: goto L_003ADA88;
    case 100u: goto L_003ADAD8;
    case 101u: goto L_003ADB00;
    case 102u: goto L_003ADB08;
    case 103u: goto L_003ADB10;
    case 104u: goto L_003ADB18;
    case 105u: goto L_003ADB64;
    case 106u: goto L_003ADB98;
    case 107u: goto L_003ADBB8;
    case 108u: goto L_003ADC10;
    case 109u: goto L_003ADC38;
    case 110u: goto L_003ADC60;
    case 111u: goto L_003ADCAC;
    case 112u: goto L_003ADCBC;
    case 113u: goto L_003ADCCC;
    case 114u: goto L_003ADCF8;
    case 115u: goto L_003ADD2C;
    case 116u: goto L_003ADD7C;
    case 117u: goto L_003ADDA4;
    case 118u: goto L_003ADDAC;
    case 119u: goto L_003ADDB4;
    case 120u: goto L_003ADDBC;
    case 121u: goto L_003ADE08;
    case 122u: goto L_003ADE34;
    case 123u: goto L_003ADE54;
    case 124u: goto L_003ADEAC;
    case 125u: goto L_003ADED4;
    case 126u: goto L_003ADEF0;
    case 127u: goto L_003ADF50;
    case 128u: goto L_003ADFB0;
    case 129u: goto L_003AE058;
    case 130u: goto L_003AE068;
    case 131u: goto L_003AE080;
    case 132u: goto L_003AE0C0;
    case 133u: goto L_003AE0E8;
    case 134u: goto L_003AE0F8;
    case 135u: goto L_003AE170;
    case 136u: goto L_003AE284;
    case 137u: goto L_003AE380;
    case 138u: goto L_003AE3A8;
    case 139u: goto L_003AE3BC;
    case 140u: goto L_003AE4A0;
    case 141u: goto L_003AE534;
    case 142u: goto L_003AE688;
    case 143u: goto L_003AE68C;
    case 144u: goto L_003AE75C;
    case 145u: goto L_003AE780;
    case 146u: goto L_003AE810;
    case 147u: goto L_003AE824;
    case 148u: goto L_003AE834;
    case 149u: goto L_003AE850;
    case 150u: goto L_003AE868;
    case 151u: goto L_003AE994;
    case 152u: goto L_003AE9AC;
    case 153u: goto L_003AE9C0;
    case 154u: goto L_003AEA74;
    case 155u: goto L_003AEAAC;
    case 156u: goto L_003AEB2C;
    case 157u: goto L_003AEC00;
    case 158u: goto L_003AEC08;
    case 159u: goto L_003AEC38;
    case 160u: goto L_003AEC70;
    case 161u: goto L_003AECF4;
    case 162u: goto L_003AED90;
    case 163u: goto L_003AEDB8;
    case 164u: goto L_003AEDC0;
    case 165u: goto L_003AEE20;
    case 166u: goto L_003AEE48;
    case 167u: goto L_003AEE5C;
    case 168u: goto L_003AEF40;
    case 169u: goto L_003AEF60;
    case 170u: goto L_003AEFA0;
    case 171u: goto L_003AF010;
    case 172u: goto L_003AF0EC;
    case 173u: goto L_003AF10C;
    case 174u: goto L_003AF130;
    case 175u: goto L_003AF1C0;
    case 176u: goto L_003AF1D0;
    case 177u: goto L_003AF23C;
    case 178u: goto L_003AF2C0;
    case 179u: goto L_003AF2DC;
    case 180u: goto L_003AF314;
    case 181u: goto L_003AF3F0;
    case 182u: goto L_003AF438;
    case 183u: goto L_003AF4B0;
    case 184u: goto L_003AF4B8;
    case 185u: goto L_003AF504;
    case 186u: goto L_003AF57C;
    case 187u: goto L_003AF5E0;
    case 188u: goto L_003AF69C;
    case 189u: goto L_003AF720;
    case 190u: goto L_003AF77C;
    case 191u: goto L_003AF864;
    case 192u: goto L_003AF8F4;
    case 193u: goto L_003AF948;
    case 194u: goto L_003AF95C;
    case 195u: goto L_003AFA40;
    case 196u: goto L_003AFA44;
    case 197u: goto L_003AFAC0;
    case 198u: goto L_003AFB50;
    case 199u: goto L_003AFBB4;
    case 200u: goto L_003AFC2C;
    case 201u: goto L_003AFC90;
    case 202u: goto L_003AFD48;
    case 203u: goto L_003AFDBC;
    case 204u: goto L_003AFE20;
    default: bad_entry(c, 0x003AC000u); return;
    }
L_003AC000:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC00Cu); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x003969E0u; return; } if (c.pc != 0x003AC00Cu) [[unlikely]] return; }
L_003AC00C:
    st32((c.r[18].w[0] + 72u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003AC220; } }
L_003AC018:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC02Cu); set32(c.r[4], c.r[3].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x003969E0u; return; } if (c.pc != 0x003AC02Cu) [[unlikely]] return; }
L_003AC02C:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003AC048; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AC064; } }
L_003AC048:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AC064:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003AC0DC; } }
    c.f[2] = ld32((c.r[2].w[0] + 788u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003AC098; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AC0B4; } }
L_003AC098:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AC0B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AC0DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_003AC0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC0E4u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003AC0E4u) [[unlikely]] return; }
L_003AC0E4:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = 0u;
    c.f[1] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 72u), c.f[0]);  if (t) { goto L_003AC220; } }
L_003AC10C:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC120u); set32(c.r[4], c.r[3].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 166u, depth + 1u); else { c.pc = 0x003969E0u; return; } if (c.pc != 0x003AC120u) [[unlikely]] return; }
L_003AC120:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003AC13C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AC158; } }
L_003AC13C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AC158:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003AC1D0; } }
    c.f[2] = ld32((c.r[2].w[0] + 788u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003AC18C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AC1A8; } }
L_003AC18C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AC1A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AC1D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 2;
L_003AC1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC1D8u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003AC1D8u) [[unlikely]] return; }
L_003AC1D8:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = 0u;
    c.f[1] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[20]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 72u), c.f[0]);  if (t) { goto L_003AC220; } }
L_003AC200:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 96u));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC220u); st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003AC220u) [[unlikely]] return; }
L_003AC220:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003AC26C; } }
L_003AC228:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_003AC280; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 96u));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AC280; } }
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 129u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 7);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC264u); st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003AC264u) [[unlikely]] return; }
L_003AC264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003AC284; } }
L_003AC26C:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC278u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 164u, depth + 1u); else { c.pc = 0x003969C0u; return; } if (c.pc != 0x003AC278u) [[unlikely]] return; }
L_003AC278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC228u | kUnwind; return; } goto L_003AC228; } }
L_003AC280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003AC284:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AC2A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[2].d[0] = c.r[4].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AC620; } }
L_003AC2D4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 64u));
    set32(c.r[2], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AC4B8; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AC434; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AC304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 109u));  if (t) { goto L_003AC53C; } }
L_003AC304:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC310u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0061(c, 439u, depth + 1u); else { c.pc = 0x00387F80u; return; } if (c.pc != 0x003AC310u) [[unlikely]] return; }
L_003AC310:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AC394; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[20] = ld32((c.r[3].w[0] + 104u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC34Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003AC34Cu) [[unlikely]] return; }
L_003AC34C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC358u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003AC358u) [[unlikely]] return; }
L_003AC358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[4] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AC394; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u + 73u);  if (t) { goto L_003AC398; } }
L_003AC394:
    set32(c.r[11], 0u + 58u);
    c.budget -= 1;
L_003AC398:
    set32(c.r[8], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[10], c.r[2].w[0] << 2);
    set32(c.r[9], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 9u);
    set32(c.r[3], c.r[2].w[0] << 7);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u - 129u);
    set32(c.r[8], ld32((c.r[8].w[0] + 344u)));
    set32(c.r[8], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.f[1] = ld32((c.r[8].w[0] + 52u));
    c.f[0] = ld32((c.r[8].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st16((c.r[9].w[0] + 162u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    st32((c.r[9].w[0] + 168u), c.f[0]);
    set32(c.r[8], ld32((c.r[9].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 344u)));
    set32(c.r[8], c.r[10].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[9].w[0] + 164u), c.f[0]);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 56u));
    c.r[4].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[9].w[0] + 188u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[9].w[0] + 112u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[9].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC42Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0062(c, 54u, depth + 1u); else { c.pc = 0x00388FF0u; return; } if (c.pc != 0x003AC42Cu) [[unlikely]] return; }
L_003AC42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003AC5F8; } }
L_003AC434:
    set32(c.r[10], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[9], 0u + 75u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[4], 0u - 9u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u - 129u);
    set32(c.r[3], c.r[3].w[0] << 7);
    st16((c.r[10].w[0] + 162u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[10].w[0] + 168u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[10].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 344u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 312u)));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[10].w[0] + 164u), c.f[0]);
    c.r[8].d[0] = ld8((c.r[10].w[0] + 56u));
    c.r[4].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[10].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[10].w[0] + 188u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 112u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[10].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4A4u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0062(c, 54u, depth + 1u); else { c.pc = 0x00388FF0u; return; } if (c.pc != 0x003AC4A4u) [[unlikely]] return; }
L_003AC4A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC4B0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AC4B0u) [[unlikely]] return; }
L_003AC4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  if (t) { goto L_003AC5FC; } }
L_003AC4B8:
    set32(c.r[10], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[9], 0u + 56u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    set32(c.r[4], 0u - 9u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u - 129u);
    set32(c.r[3], c.r[3].w[0] << 7);
    st16((c.r[10].w[0] + 162u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[10].w[0] + 168u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[10].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 344u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 236u)));
    c.f[0] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[10].w[0] + 164u), c.f[0]);
    c.r[8].d[0] = ld8((c.r[10].w[0] + 56u));
    c.r[4].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[10].w[0] + 56u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[10].w[0] + 188u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[10].w[0] + 112u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[10].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC528u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0062(c, 54u, depth + 1u); else { c.pc = 0x00388FF0u; return; } if (c.pc != 0x003AC528u) [[unlikely]] return; }
L_003AC528:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC534u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AC534u) [[unlikely]] return; }
L_003AC534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC5F8; } }
L_003AC53C:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC550u); c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x003AC550u) [[unlikely]] return; }
L_003AC550:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 111u));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], c.r[4].w[0] + 49u);
    st16((c.r[3].w[0] + 162u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_003AC574; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 188u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003AC57C; } }
L_003AC574:
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 188u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_003AC57C:
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[7], 0u - 9u);
    set32(c.r[4], c.r[4].w[0] - 49u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.f[0] = ld32((c.r[5].w[0] + 72u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[5].w[0] + 112u));
    set32(c.r[2], 0u - 129u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    st32((c.r[3].w[0] + 168u), c.f[0]);
    st32((c.r[3].w[0] + 164u), c.f[1]);
    c.r[9].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[3].w[0] + 56u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 112u));
    c.r[7].d[0] = c.r[7].d[0] & 32ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[7].d[0] ^ 32ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 7);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[3].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC5F8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0062(c, 54u, depth + 1u); else { c.pc = 0x00388FF0u; return; } if (c.pc != 0x003AC5F8u) [[unlikely]] return; }
L_003AC5F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_003AC5FC:
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 296u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AC63C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC618u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AC618u) [[unlikely]] return; }
L_003AC618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003AC668; } }
L_003AC620:
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 33u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC2D4u | kUnwind; return; } goto L_003AC2D4; } }
L_003AC63C:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 96u));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC660u); st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AC660u) [[unlikely]] return; }
L_003AC660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC618u | kUnwind; return; } goto L_003AC618; } }
L_003AC668:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AC690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AC8FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003AC6E0; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AC6E0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AC6E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003AC90C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 97u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AC95C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AC95C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[9], c.r[4].w[0] + 544u);  if (t) { goto L_003AC95C; } }
    c.r[8].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[9].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[9].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003AC90C; } }
L_003AC770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC778u); set32(c.r[4], c.r[4].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 77u, depth + 1u); else { c.pc = 0x00301EA0u; return; } if (c.pc != 0x003AC778u) [[unlikely]] return; }
L_003AC778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003AC78C; } }
L_003AC780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC788u);  if (depth < kMaxDepth) unit_001F(c, 225u, depth + 1u); else { c.pc = 0x0027E090u; return; } if (c.pc != 0x003AC788u) [[unlikely]] return; }
L_003AC788:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003AC78C:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AC95C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AC94C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003AC7B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC7B8u); set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (depth < kMaxDepth) unit_0062(c, 3u, depth + 1u); else { c.pc = 0x00388010u; return; } if (c.pc != 0x003AC7B8u) [[unlikely]] return; }
L_003AC7B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003AC7BC:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC7C8u); st32((c.r[16].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003AC7C8u) [[unlikely]] return; }
L_003AC7C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0; c.f[20] = ld32((c.r[16].w[0] + 124u));  if (t) { goto L_003AC7E4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AC800; } }
L_003AC7E4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AC800:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003AC878; } }
    c.f[2] = ld32((c.r[2].w[0] + 788u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003AC834; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003AC850; } }
L_003AC834:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003AC850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AC878; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 2;
L_003AC878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC880u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003AC880u) [[unlikely]] return; }
L_003AC880:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = 0u;
    c.f[1] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[21]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 108u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AC8E8; } }
    st8((c.r[16].w[0] + 110u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull & 1ull;
    st8((c.r[16].w[0] + 111u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[3].w[0] << 4);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 109u));
    set32(c.r[4], 0u - 17u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[3].d[0] = c.r[3].d[0] | 62154ull;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 116u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
L_003AC8E8:
    st16((c.r[16].w[0] + 130u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 255u);
    st8((c.r[16].w[0] + 102u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003AC960; } }
L_003AC8FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC904u);  if (depth < kMaxDepth) unit_006A(c, 101u, depth + 1u); else { c.pc = 0x003AA1C0u; return; } if (c.pc != 0x003AC904u) [[unlikely]] return; }
L_003AC904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AC95C; } }
L_003AC90C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 97u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 119u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 56u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC780u | kUnwind; return; } goto L_003AC780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC770u | kUnwind; return; } goto L_003AC770; } }
L_003AC94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AC954u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 14u, depth + 1u); else { c.pc = 0x003AC2A0u; return; } if (c.pc != 0x003AC954u) [[unlikely]] return; }
L_003AC954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC7BCu | kUnwind; return; } goto L_003AC7BC; } }
L_003AC95C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003AC960:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AC980:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[9].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[3], c.r[3].w[0] - 8576u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] - 12736u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[11], 0u + 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[10], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[12], c.r[12].w[0] - 8384u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[20], 0u - 5u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[21], c.r[9].w[0] << 2);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[18], 0u - 9u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 12752u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 12768u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 12960u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13152u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], c.r[9].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[2], c.r[2].w[0] - 8544u);
    set32(c.r[19], c.r[9].w[0] << 3);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[25], 0u - 17u);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[2], 0u - 3u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[17], c.r[9].w[0] << 4);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    set32(c.r[5], 0u - 2u);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x71490000u);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[15], 0u - 33u);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[24], c.r[9].w[0] << 5);
    st32((c.r[4].w[0] + 56u), 0u);
    set32(c.r[13], 0u - 65u);
    st32((c.r[4].w[0] + 60u), 0u);
    set32(c.r[14], c.r[9].w[0] << 6);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u - 129u);
    st32((c.r[4].w[0]), c.r[12].w[0]);
    set32(c.r[7], 0u + 3u);
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[12], c.r[9].w[0] << 7);
    st32((c.r[4].w[0] + 72u), 0u);
    set32(c.r[23], 0u + 4u);
    st32((c.r[4].w[0] + 76u), 0u);
    set32(c.r[30], 0u + 9u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.r[6].d[0] = c.r[6].d[0] | 62154ull;
    c.r[22].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[22].d[0] = c.r[22].d[0] & c.r[5].d[0];
    c.r[22].d[0] = c.r[22].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.r[22].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[22].d[0] = c.r[22].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[22].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[20].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[21].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[18].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[19].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[25].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[17].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[15].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 97u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 97u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[20].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[21].d[0];
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 98u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 100u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 101u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 103u), static_cast<std::uint8_t>(c.r[23].w[0]));
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(c.r[30].w[0]));
    st16((c.r[4].w[0] + 130u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 110u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 111u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 109u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[25].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[17].d[0];
    st8((c.r[4].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 116u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 256u));
    set32(c.r[3], 0u + 46u);
    c.budget -= 134;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003ACC14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], 0u + 52u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ACC44; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ACC44; } }
L_003ACBB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    set32(c.r[4], ld32((c.r[4].w[0] + 752u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = ld8((c.r[4].w[0] + 123u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACBF0u); set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x003ACBF0u) [[unlikely]] return; }
L_003ACBF0:
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    set32(c.r[2], 0u + 56u);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 256u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ACC64; } }
L_003ACC0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003ACC6C; } }
L_003ACC14:
    st8((c.r[16].w[0] + 103u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[6].d[0] = c.r[10].d[0] & 1ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 96u));
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACBB8u | kUnwind; return; } goto L_003ACBB8; } }
L_003ACC44:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 96u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACBB8u | kUnwind; return; } goto L_003ACBB8; } }
L_003ACC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACC0Cu | kUnwind; return; } goto L_003ACC0C; } }
L_003ACC6C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003ACCA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u - 33u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[5].w[0] << 5);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 108u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[16].w[0] + 108u);  if (t) { goto L_003ACD04; } }
L_003ACCD8:
    st16((c.r[16].w[0] + 130u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACCECu); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003ACCECu) [[unlikely]] return; }
L_003ACCEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 296u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ACD3C; } }
L_003ACCFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003ACD50; } }
L_003ACD04:
    st8((c.r[16].w[0] + 110u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x71490000u);
    set32(c.r[4], c.r[5].w[0] << 4);
    st8((c.r[16].w[0] + 111u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 109u));
    set32(c.r[3], 0u - 17u);
    c.r[2].d[0] = c.r[2].d[0] | 62154ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACCD8u | kUnwind; return; } goto L_003ACCD8; } }
L_003ACD3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACD48u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 167u, depth + 1u); else { c.pc = 0x00396A70u; return; } if (c.pc != 0x003ACD48u) [[unlikely]] return; }
L_003ACD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACCFCu | kUnwind; return; } goto L_003ACCFC; } }
L_003ACD50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u - 33u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[5].w[0] << 5);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 108u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[16].w[0] + 108u);  if (t) { goto L_003ACDC4; } }
L_003ACD98:
    st16((c.r[16].w[0] + 130u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACDACu); st32((c.r[16].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_006A(c, 229u, depth + 1u); else { c.pc = 0x003ABEC0u; return; } if (c.pc != 0x003ACDACu) [[unlikely]] return; }
L_003ACDAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 296u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ACDFC; } }
L_003ACDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003ACE10; } }
L_003ACDC4:
    st8((c.r[16].w[0] + 110u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x71490000u);
    set32(c.r[4], c.r[5].w[0] << 4);
    st8((c.r[16].w[0] + 111u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 109u));
    set32(c.r[3], 0u - 17u);
    c.r[2].d[0] = c.r[2].d[0] | 62154ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACD98u | kUnwind; return; } goto L_003ACD98; } }
L_003ACDFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACE08u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 167u, depth + 1u); else { c.pc = 0x00396A70u; return; } if (c.pc != 0x003ACE08u) [[unlikely]] return; }
L_003ACE08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACDBCu | kUnwind; return; } goto L_003ACDBC; } }
L_003ACE10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACE20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AC690u | kUnwind; return; } goto L_003AC690; }
L_003ACE30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003ACE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x020E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 10510ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[16], c.r[17].w[0] + 36u);
    st32((c.r[5].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 8u);  if (t) { goto L_003ACE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));  if (t) { goto L_003ACE84; } }
L_003ACE80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003ACE84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ACED4; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003ACE90:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 284u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003ACEE4; } }
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[17].w[0] + 72u);  if (t) { goto L_003ACEC4; } }
    c.f[0] = ld32((c.r[4].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 3;
L_003ACEC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACECCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 168u, depth + 1u); else { c.pc = 0x003AB500u; return; } if (c.pc != 0x003ACECCu) [[unlikely]] return; }
L_003ACECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003ACEEC; } }
L_003ACED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACEDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 112u, depth + 1u); else { c.pc = 0x003AA350u; return; } if (c.pc != 0x003ACEDCu) [[unlikely]] return; }
L_003ACEDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACE90u | kUnwind; return; } goto L_003ACE90; } }
L_003ACEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ACEC4u | kUnwind; return; } goto L_003ACEC4; } }
L_003ACEEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ACF00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003ACF6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8368u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 268u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003ACF44; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003ACF44u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003ACF44u) [[unlikely]] return; }
L_003ACF44:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0] + 268u), 0u);  if (t) { goto L_003ACF6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003ACF6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003ACF6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ACF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 11120u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], c.r[2].w[0] - 11808u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] - 11904u);
    set32(c.r[3], c.r[3].w[0] - 12000u);
    st32((c.r[4].w[0] + 20u), c.r[9].w[0]);
    set32(c.r[2], 0u + 22u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[9], c.r[9].w[0] - 8544u);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8368u);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 3500u)));
    set32(c.r[2], c.r[3].w[0] + 32u);
    st32((c.r[5].w[0] + 3500u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 3500u)));
    c.r[2].d[0] = c.r[2].sd[0] < 1924ll ? 1ull : 0ull;
    c.budget -= 48;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 1576u);  if (t) { goto L_003AD048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003AD04C; } }
L_003AD048:
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003AD04C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003AD0B4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 8352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 106u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AD0E0; } }
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003AD0A8:
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 22u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003AD0B4:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[5].w[0] + 268u), c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 292u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 292u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AD104; } }
L_003AD0E0:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD0F8u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003AD0F8u) [[unlikely]] return; }
L_003AD0F8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD0A8u | kUnwind; return; } goto L_003AD0A8; } }
L_003AD104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AD120:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 268u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD16C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD148; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 814u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 814u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003AD148:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD164; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 814u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 814u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003AD164:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st8((c.r[3].w[0] + 1492u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003AD16C:
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 16u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 21u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003AD180:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 268u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD1CC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD1A8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 814u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 814u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003AD1A8:
    st32((c.r[5].w[0]), 0u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD1C4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 814u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 814u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003AD1C4:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st8((c.r[3].w[0] + 1492u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003AD1CC:
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 16u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 21u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003AD1E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 36u);  if (t) { goto L_003AD430; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AD430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003AD430; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_003AD230:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AD248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0061(c, 439u, depth + 1u); else { c.pc = 0x00387F80u; return; } if (c.pc != 0x003AD248u) [[unlikely]] return; }
L_003AD248:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 268u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AD2A8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 95u);
    c.r[5].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003AD29C; } }
    set32(c.r[3], 0u + 94u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003AD29C; } }
    set32(c.r[3], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003AD29C; } }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003AD29C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_003AD2AC; } }
L_003AD29C:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 3;
L_003AD2A8:
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_003AD2AC:
    c.r[5].d[0] = ld16((c.r[6].w[0] + 544u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AD440; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AD440; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003AD2D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AD478; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AD360; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
L_003AD308:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AD350; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_003AD350; } }
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 213u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003AD360; } }
L_003AD350:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD308u | kUnwind; return; } goto L_003AD308; } }
L_003AD360:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 16ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_003AD37C:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 8u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003AD3E8; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 16u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 16u), 0u);
    set32(c.r[4], 0u + 10u);
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003AD470; } }
L_003AD3E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_003AD41C; } }
L_003AD3E8:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003AD400; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AD400:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD37Cu | kUnwind; return; } goto L_003AD37C; } }
    breakpoint(c, 0x003AD410u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
L_003AD41C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003AD47C; } }
L_003AD430:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD248u | kUnwind; return; } goto L_003AD248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD230u | kUnwind; return; } goto L_003AD230; } }
L_003AD440:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 220u));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003AD460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD458u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 110u, depth + 1u); else { c.pc = 0x003ADC60u; return; } if (c.pc != 0x003AD458u) [[unlikely]] return; }
L_003AD458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD2D4u | kUnwind; return; } goto L_003AD2D4; } }
L_003AD460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD468u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_006B(c, 94u, depth + 1u); else { c.pc = 0x003AD960u; return; } if (c.pc != 0x003AD468u) [[unlikely]] return; }
L_003AD468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD2D4u | kUnwind; return; } goto L_003AD2D4; } }
L_003AD470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD3E0u | kUnwind; return; } goto L_003AD3E0; } }
L_003AD478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003AD47C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AD490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 6u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[11], c.r[4].w[0] + 36u);
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[6].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 6ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_003AD4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));  if (t) { goto L_003AD4C4; } }
L_003AD4C0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AD4C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AD558; } }
L_003AD4CC:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 1;
L_003AD4D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AD930; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C80000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AD938; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[4].w[0] + 68u);  if (t) { goto L_003AD520; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AD520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003AD550; } }
L_003AD520:
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[4].w[0] + 64u);  if (t) { goto L_003AD948; } }
    set32(c.r[3], ld32((c.r[11].w[0])));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_003AD550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003AD958; } }
L_003AD558:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], ld32((c.r[11].w[0])));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 222u)));
    set32(c.r[7], c.r[6].w[0] + 8u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[6].w[0] + 216u), c.r[8].w[0]);
    set32(c.r[3], 0u + 10u);
    c.budget -= 10;
L_003AD580:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[8].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[8].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003AD5F0; } }
L_003AD5A0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[7].w[0] + 212u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_003AD8B0; } }
    c.budget -= 1;
L_003AD5C0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_003AD8B8; } }
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[8].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD5A0u | kUnwind; return; } goto L_003AD5A0; } }
    c.budget -= 1;
L_003AD5F0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    set32(c.r[13], ld32((c.r[7].w[0] + 208u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[12], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[12].w[0] + 16u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.budget -= 10;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[9], c.r[12].w[0] + 16u);  if (t) { goto L_003AD8C0; } }
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.r[8].d[0] = c.r[8].d[0] | c.r[13].d[0];
    st32((c.r[9].w[0]), c.r[8].w[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 204u)));
    set32(c.r[9], c.r[12].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] + 12u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.budget -= 13;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_003AD680; } }
    set32(c.r[8], c.r[12].w[0] + 1u);
    st8((c.r[7].w[0] + 212u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003AD8E0; } }
    c.budget -= 1;
L_003AD668:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_003AD680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_003AD69C; } }
L_003AD680:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD580u | kUnwind; return; } goto L_003AD580; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[13], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_003AD69C:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD4CCu | kUnwind; return; } goto L_003AD4CC; } }
    set32(c.r[10], c.r[4].w[0] + 68u);
    set32(c.r[9], c.r[4].w[0] + 56u);
    set32(c.r[8], c.r[4].w[0] + 64u);
    set32(c.r[3], 0u + 10u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 8;
L_003AD6C4:
    set32(c.r[12], ld32((c.r[13].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[12].d[0] == c.r[7].d[0];  if (t) { goto L_003AD6F8; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[6].d[0];  if (t) { goto L_003AD6E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AD768; } }
L_003AD6E0:
    c.r[12].d[0] = ld8((c.r[13].w[0] + 4u));
    c.r[1].d[0] = c.r[12].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003AD768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003AD768; } }
L_003AD6F8:
    set32(c.r[12], ld32((c.r[13].w[0])));
    st32((c.r[9].w[0]), c.r[12].w[0]);
    set32(c.r[12], ld32((c.r[11].w[0])));
    set32(c.r[15], ld32((c.r[9].w[0])));
    set32(c.r[14], ld32((c.r[12].w[0] + 268u)));
    set32(c.r[13], ld32((c.r[14].w[0])));
    c.budget -= 8;
    { const bool t = c.r[13].d[0] == c.r[15].d[0];  if (t) { goto L_003AD758; } }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_003AD730; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 814u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    st8((c.r[13].w[0] + 814u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 4;
L_003AD730:
    st32((c.r[14].w[0]), c.r[15].w[0]);
    set32(c.r[13], ld32((c.r[14].w[0])));
    c.budget -= 4;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_003AD750; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 814u)));
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[13].w[0] + 814u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 4;
L_003AD750:
    set32(c.r[12], ld32((c.r[14].w[0] + 4u)));
    st8((c.r[12].w[0] + 1492u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003AD758:
    st32((c.r[14].w[0] + 12u), 0u);
    st32((c.r[14].w[0] + 16u), 0u);
    st8((c.r[14].w[0] + 21u), static_cast<std::uint8_t>(0u));
    st32((c.r[8].w[0]), 0u);
    c.budget -= 4;
L_003AD768:
    set32(c.r[14], ld32((c.r[11].w[0])));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[14].w[0] + 220u)));
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[14].w[0] + 220u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = c.r[12].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[12].d[0] == c.r[3].d[0]; set32(c.r[13], c.r[14].w[0] + 8u);  if (t) { goto L_003AD8E8; } }
L_003AD788:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 212u)));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == c.r[12].d[0];  if (t) { goto L_003AD8F0; } }
L_003AD798:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 212u)));
    set32(c.r[14], c.r[15].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[16], c.r[13].w[0] + c.r[14].w[0]);
    c.r[14].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[14].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_003AD808; } }
L_003AD7B8:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 212u)));
    set32(c.r[14], c.r[14].w[0] + 1u);
    st8((c.r[13].w[0] + 212u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = c.r[14].d[0] << 56;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[14].d[0] == c.r[3].d[0];  if (t) { goto L_003AD8F8; } }
    c.budget -= 1;
L_003AD7D8:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 212u)));
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == c.r[14].d[0];  if (t) { goto L_003AD900; } }
    set32(c.r[14], c.r[15].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[16], c.r[13].w[0] + c.r[14].w[0]);
    c.r[14].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD7B8u | kUnwind; return; } goto L_003AD7B8; } }
    c.budget -= 1;
L_003AD808:
    set32(c.r[25], ld32((c.r[13].w[0] + 208u)));
    set32(c.r[14], ld32((c.r[16].w[0] + 16u)));
    c.r[14].d[0] = c.r[14].d[0] & c.r[25].d[0];
    c.budget -= 5;
    { const bool t = c.r[14].d[0] != 0ull; set32(c.r[15], c.r[16].w[0] + 16u);  if (t) { goto L_003AD908; } }
    set32(c.r[14], ld32((c.r[15].w[0])));
    c.r[14].d[0] = c.r[14].d[0] | c.r[25].d[0];
    st32((c.r[15].w[0]), c.r[14].w[0]);
    c.r[25].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 212u)));
    set32(c.r[14], ld32((c.r[13].w[0] + 204u)));
    set32(c.r[15], c.r[25].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[25].w[0]);
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[15], c.r[13].w[0] + c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[15].w[0] + 12u)));
    c.r[14].d[0] = c.r[14].d[0] & c.r[15].d[0];
    c.budget -= 13;
    { const bool t = c.r[14].d[0] != 0ull;  if (t) { goto L_003AD880; } }
    set32(c.r[14], c.r[25].w[0] + 1u);
    st8((c.r[13].w[0] + 212u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = c.r[14].d[0] << 56;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[14].d[0] == c.r[3].d[0]; c.r[12].d[0] = c.r[24].d[0] + 0ull;  if (t) { goto L_003AD928; } }
L_003AD868:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 212u)));
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != c.r[14].d[0];  if (t) { goto L_003AD880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_003AD8A0; } }
L_003AD880:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD798u | kUnwind; return; } goto L_003AD798; } }
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 212u)));
    set32(c.r[12], c.r[14].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[12].w[0]);
    c.budget -= 6;
L_003AD8A0:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD6C4u | kUnwind; return; } goto L_003AD6C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 56u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD4D0u | kUnwind; return; } goto L_003AD4D0; } }
L_003AD8B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD5C0u | kUnwind; return; } goto L_003AD5C0; } }
L_003AD8B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD69Cu | kUnwind; return; } goto L_003AD69C; } }
L_003AD8C0:
    st8((c.r[12].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[12].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[12].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 213u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 213u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD680u | kUnwind; return; } goto L_003AD680; } }
L_003AD8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD668u | kUnwind; return; } goto L_003AD668; } }
L_003AD8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD788u | kUnwind; return; } goto L_003AD788; } }
L_003AD8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD8A0u | kUnwind; return; } goto L_003AD8A0; } }
L_003AD8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD7D8u | kUnwind; return; } goto L_003AD7D8; } }
L_003AD900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD8A0u | kUnwind; return; } goto L_003AD8A0; } }
L_003AD908:
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.r[12].d[0] = c.r[24].d[0] + 0ull;
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 213u)));
    set32(c.r[14], c.r[14].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0] + 213u), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD880u | kUnwind; return; } goto L_003AD880; } }
L_003AD928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD868u | kUnwind; return; } goto L_003AD868; } }
L_003AD930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD550u | kUnwind; return; } goto L_003AD550; } }
L_003AD938:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD550u | kUnwind; return; } goto L_003AD550; } }
L_003AD948:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD550u | kUnwind; return; } goto L_003AD550; } }
L_003AD958:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AD960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003ADC2C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[6].w[0] + 1484u), c.r[7].w[0]);  if (t) { goto L_003ADB24; } }
    c.r[2].d[0] = ld16((c.r[7].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 1488u), c.r[2].w[0]);  if (t) { goto L_003ADB24; } }
L_003AD9AC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AD9D4; } }
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003AD9D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADB6C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003ADB58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AD9ECu); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_006B(c, 132u, depth + 1u); else { c.pc = 0x003AE0C0u; return; } if (c.pc != 0x003AD9ECu) [[unlikely]] return; }
L_003AD9EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADB6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_003ADB5C; } }
L_003AD9FC:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 544u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003ADA20; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003ADA20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ADB18; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003ADB74; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ADB74; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003ADA54:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 811u));
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ADA78; } }
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003ADA78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ADB90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADA88u); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_006B(c, 132u, depth + 1u); else { c.pc = 0x003AE0C0u; return; } if (c.pc != 0x003ADA88u) [[unlikely]] return; }
L_003ADA88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADC1C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ADBA4; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADBA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 814u)));
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ADAD0; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_003ADAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADAD8u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003ADAD8u) [[unlikely]] return; }
L_003ADAD8:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_003ADBA4; } }
L_003ADB00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADB08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 233u, depth + 1u); else { c.pc = 0x0028A5E0u; return; } if (c.pc != 0x003ADB08u) [[unlikely]] return; }
L_003ADB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003ADB1C; } }
L_003ADB10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADB18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 233u, depth + 1u); else { c.pc = 0x0028A5E0u; return; } if (c.pc != 0x003ADB18u) [[unlikely]] return; }
L_003ADB18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003ADB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003ADC44; } }
L_003ADB24:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 92u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; set32(c.r[2], c.r[4].w[0] + 544u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADB00u | kUnwind; return; } goto L_003ADB00; } }
    set32(c.r[3], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD9FCu | kUnwind; return; } goto L_003AD9FC; } }
    set32(c.r[3], 0u + 90u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AD9ACu | kUnwind; return; } goto L_003AD9AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADB10u | kUnwind; return; } goto L_003ADB10; } }
L_003ADB58:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003ADB5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADB64u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 230u, depth + 1u); else { c.pc = 0x0028A590u; return; } if (c.pc != 0x003ADB64u) [[unlikely]] return; }
L_003ADB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADB18u | kUnwind; return; } goto L_003ADB18; } }
L_003ADB6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003ADC40; } }
L_003ADB74:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADB18u | kUnwind; return; } goto L_003ADB18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADB18u | kUnwind; return; } goto L_003ADB18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADA54u | kUnwind; return; } goto L_003ADA54; } }
L_003ADB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADB98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 233u, depth + 1u); else { c.pc = 0x0028A5E0u; return; } if (c.pc != 0x003ADB98u) [[unlikely]] return; }
L_003ADB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADB18u | kUnwind; return; } goto L_003ADB18; } }
L_003ADBA0:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_003ADBA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADBB8u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 227u, depth + 1u); else { c.pc = 0x0028A520u; return; } if (c.pc != 0x003ADBB8u) [[unlikely]] return; }
L_003ADBB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[3].w[0] + 752u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 106u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ADBF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADB18u | kUnwind; return; } goto L_003ADB18; } }
L_003ADBF8:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC10u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003ADC10u) [[unlikely]] return; }
L_003ADC10:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADB18u | kUnwind; return; } goto L_003ADB18; } }
L_003ADC1C:
    set32(c.r[3], 0u + 10u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003ADC40; } }
L_003ADC2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADC38u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 233u, depth + 1u); else { c.pc = 0x0028A5E0u; return; } if (c.pc != 0x003ADC38u) [[unlikely]] return; }
L_003ADC38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADB18u | kUnwind; return; } goto L_003ADB18; } }
L_003ADC40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003ADC44:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ADC60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003ADEC8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[6].w[0] + 1484u), c.r[7].w[0]);  if (t) { goto L_003ADDC8; } }
    c.r[2].d[0] = ld16((c.r[7].w[0] + 6u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 1488u), c.r[2].w[0]);  if (t) { goto L_003ADDC8; } }
L_003ADCAC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003ADDFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADCBCu); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_006B(c, 132u, depth + 1u); else { c.pc = 0x003AE0C0u; return; } if (c.pc != 0x003ADCBCu) [[unlikely]] return; }
L_003ADCBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ADDFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003ADEDC; } }
L_003ADCCC:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003ADE10; } }
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ADE10; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003ADCF8:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADD1C; } }
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003ADD1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADE2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADD2Cu); set32(c.r[5], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_006B(c, 132u, depth + 1u); else { c.pc = 0x003AE0C0u; return; } if (c.pc != 0x003ADD2Cu) [[unlikely]] return; }
L_003ADD2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADEB8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ADE40; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ADE3C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 814u)));
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ADD74; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_003ADD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADD7Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003ADD7Cu) [[unlikely]] return; }
L_003ADD7C:
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_003ADE40; } }
L_003ADDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADDACu); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 221u, depth + 1u); else { c.pc = 0x0028A480u; return; } if (c.pc != 0x003ADDACu) [[unlikely]] return; }
L_003ADDAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003ADDC0; } }
L_003ADDB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADDBCu); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 221u, depth + 1u); else { c.pc = 0x0028A480u; return; } if (c.pc != 0x003ADDBCu) [[unlikely]] return; }
L_003ADDBC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003ADDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003ADEE0; } }
L_003ADDC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 95u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[4].w[0] + 544u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDA4u | kUnwind; return; } goto L_003ADDA4; } }
    set32(c.r[2], 0u + 94u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADCCCu | kUnwind; return; } goto L_003ADCCC; } }
    set32(c.r[2], 0u + 93u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADCACu | kUnwind; return; } goto L_003ADCAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDB4u | kUnwind; return; } goto L_003ADDB4; } }
L_003ADDFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADE08u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 221u, depth + 1u); else { c.pc = 0x0028A480u; return; } if (c.pc != 0x003ADE08u) [[unlikely]] return; }
L_003ADE08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDBCu | kUnwind; return; } goto L_003ADDBC; } }
L_003ADE10:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDBCu | kUnwind; return; } goto L_003ADDBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDBCu | kUnwind; return; } goto L_003ADDBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADCF8u | kUnwind; return; } goto L_003ADCF8; } }
L_003ADE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADE34u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 221u, depth + 1u); else { c.pc = 0x0028A480u; return; } if (c.pc != 0x003ADE34u) [[unlikely]] return; }
L_003ADE34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDBCu | kUnwind; return; } goto L_003ADDBC; } }
L_003ADE3C:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_003ADE40:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADE54u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 218u, depth + 1u); else { c.pc = 0x0028A410u; return; } if (c.pc != 0x003ADE54u) [[unlikely]] return; }
L_003ADE54:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[3].w[0] + 752u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 106u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ADE94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDBCu | kUnwind; return; } goto L_003ADDBC; } }
L_003ADE94:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADEACu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x003ADEACu) [[unlikely]] return; }
L_003ADEAC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDBCu | kUnwind; return; } goto L_003ADDBC; } }
L_003ADEB8:
    set32(c.r[3], 0u + 10u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003ADEDC; } }
L_003ADEC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ADED4u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 221u, depth + 1u); else { c.pc = 0x0028A480u; return; } if (c.pc != 0x003ADED4u) [[unlikely]] return; }
L_003ADED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ADDBCu | kUnwind; return; } goto L_003ADDBC; } }
L_003ADEDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003ADEE0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ADEF0:
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_003ADF34; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003ADF10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 814u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[6].w[0] + 814u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003ADF10:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003ADF2C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 814u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 814u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003ADF2C:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st8((c.r[3].w[0] + 1492u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003ADF34:
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003ADF50:
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_003ADF94; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_003ADF70; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 814u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[7].w[0] + 814u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003ADF70:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003ADF8C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 814u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 814u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003ADF8C:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st8((c.r[3].w[0] + 1492u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003ADF94:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.f[12]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[6].w[0]);  c.pc = t; return; }
L_003ADFB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AE010; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 95u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AE004; } }
    set32(c.r[2], 0u + 94u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AE004; } }
    set32(c.r[2], 0u + 92u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AE004; } }
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AE004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_003AE014; } }
L_003AE004:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_003AE010:
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_003AE014:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 544u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AE040; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AE040; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003AE068; } }
L_003AE040:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 220u));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003AE060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE058u);  if (depth < kMaxDepth) unit_006B(c, 110u, depth + 1u); else { c.pc = 0x003ADC60u; return; } if (c.pc != 0x003AE058u) [[unlikely]] return; }
L_003AE058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AE06C; } }
L_003AE060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE068u);  if (depth < kMaxDepth) unit_006B(c, 94u, depth + 1u); else { c.pc = 0x003AD960u; return; } if (c.pc != 0x003AE068u) [[unlikely]] return; }
L_003AE068:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AE06C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AE080:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AE0AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8352u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AE0AC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 814u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 814u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_003AE0AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003AE0C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE0E8u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003AE0E8u) [[unlikely]] return; }
L_003AE0E8:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE0F8u); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003AE0F8u) [[unlikely]] return; }
L_003AE0F8:
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    set32(c.r[2], ld32((c.r[17].w[0] + 1416u)));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.r[3].d[0] = 0ull + 0ull;
    c.f[4] = ld32((c.r[17].w[0] + 32u));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);  if (t) { goto L_003AE238; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 522u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 8704u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1400u)));
    c.f[6] = 0u;
    c.f[12] = c.f[0] ^ fp::kSign;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[4].w[0];
    c.r[4].d[0] = c.r[5].d[0] | 52429ull;
    c.f[3] = c.r[4].w[0];
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[4].d[0] = c.r[4].d[0] | 26214ull;
    c.f[7] = c.r[4].w[0];
    c.budget -= 18;
L_003AE170:
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 522u));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AE218; } }
    c.f[9] = ld32((c.r[6].w[0] + 36u));
    c.f[8] = ld32((c.r[17].w[0] + 36u));
    c.f[5] = ld32((c.r[6].w[0] + 40u));
    c.f[4] = ld32((c.r[17].w[0] + 40u));
    c.f[11] = ld32((c.r[6].w[0] + 32u));
    c.f[10] = ld32((c.r[17].w[0] + 32u));
    c.f[8] = fp::ee::sub(c.fcr31, c.f[9], c.f[8]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[4] = c.f[8] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[7]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[10] = fp::ee::sub(c.fcr31, c.f[11], c.f[10]);  if (t) { goto L_003AE218; } }
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[10]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AE218; } }
    c.f[4] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[4]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[5], c.f[20]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[4]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[12]);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AE218; } }
    c.f[4] = c.f[5] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AE218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AE364; } }
L_003AE218:
    set32(c.r[4], ld32((c.r[17].w[0] + 1416u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE170u | kUnwind; return; } goto L_003AE170; } }
    c.budget -= 1;
L_003AE238:
    set32(c.r[3], ld32((c.r[16].w[0] + 1416u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AE360; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = c.r[5].d[0] | 26214ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 1400u)));
    c.f[2] = c.r[5].w[0];
    set32(c.r[8], 0u + 1u);
    c.f[4] = ld32((c.r[16].w[0] + 36u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.f[5] = c.r[6].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[6] = c.r[5].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[8] = 0u;
    set32(c.r[6], c.r[6].w[0] + 8704u);
    c.f[11] = c.f[0] ^ fp::kSign;
    c.budget -= 15;
L_003AE284:
    c.r[5].d[0] = c.r[4].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[9].d[0];  if (t) { goto L_003AE344; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 522u));
    c.r[7].d[0] = ld8((c.r[9].w[0] + 522u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[8].w[0] << (c.r[7].w[0] & 31u));
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003AE344; } }
    c.f[7] = ld32((c.r[9].w[0] + 40u));
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.f[10] = ld32((c.r[9].w[0] + 32u));
    c.f[9] = ld32((c.r[17].w[0] + 32u));
    c.f[7] = fp::ee::sub(c.fcr31, c.f[7], c.f[3]);
    c.f[9] = fp::ee::sub(c.fcr31, c.f[10], c.f[9]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[7]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[9]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[9].w[0] + 32u);  if (t) { goto L_003AE344; } }
    c.f[3] = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[8], c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[7], c.f[20]);
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[8], c.f[3]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[11]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[6]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AE344; } }
    c.f[3] = c.f[7] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AE344; } }
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[3] = c.f[3] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AE344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AE364; } }
L_003AE344:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[5].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE284u | kUnwind; return; } goto L_003AE284; } }
    c.budget -= 1;
L_003AE360:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003AE364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AE380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[16].w[0] + 1072u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE3A8u); set32(c.r[4], c.r[4].w[0] + 8912u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x003AE3A8u) [[unlikely]] return; }
L_003AE3A8:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE3BCu); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x003AE3BCu) [[unlikely]] return; }
L_003AE3BC:
    c.r[7].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 9u);
    set32(c.r[13], c.r[6].w[0] << 3);
    set32(c.r[3], 0u - 65u);
    set32(c.r[4], c.r[6].w[0] << 6);
    set32(c.r[10], c.r[6].w[0] << 8);
    set32(c.r[11], 0u - 33u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[9], 0u - 257u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[6], c.r[6].w[0] << 9);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[13].d[0] = c.r[5].d[0] | c.r[13].d[0];
    set32(c.r[7], 0u - 129u);
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[5], 0u - 513u);
    c.r[13].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[3].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 1236u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 94u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 56;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AE4A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003AE534; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AE534; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AE590; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1388u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AE518; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1396u)));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
L_003AE518:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AE590; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1497u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AE590; } }
L_003AE534:
    c.f[3] = ld32((c.r[18].w[0]));
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[6], c.r[3].w[0] << 5);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.r[3].d[0] = 0ull & 1ull;
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[5], 0u - 33u);
    set32(c.r[3], 0u - 9u);
    st32((c.r[19].w[0] + 48u), c.f[3]);
    st32((c.r[19].w[0] + 52u), c.f[2]);
    st32((c.r[19].w[0] + 56u), c.f[1]);
    st32((c.r[19].w[0] + 60u), c.f[0]);
    c.r[7].d[0] = ld8((c.r[19].w[0] + 94u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 94u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 94u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AE764; } }
L_003AE590:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AE5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003AE5B8; } }
L_003AE5B0:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1267u));
    c.budget -= 2;
L_003AE5B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AE6AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AE5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003AE5D8; } }
L_003AE5D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1180u));
    c.budget -= 2;
L_003AE5D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AE6AC; } }
    c.f[2] = ld32((c.r[19].w[0] + 72u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = ld32((c.r[19].w[0] + 64u));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE534u | kUnwind; return; } goto L_003AE534; } }
    c.r[7].d[0] = ld8((c.r[19].w[0] + 95u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 9u);
    set32(c.r[4], 0u - 5u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 16;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003AE6D0; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AE6D0; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 95u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE688u); set32(c.r[4], ld32((c.r[19].w[0] + 40u)));  if (depth < kMaxDepth) unit_0063(c, 55u, depth + 1u); else { c.pc = 0x0038CB10u; return; } if (c.pc != 0x003AE688u) [[unlikely]] return; }
L_003AE688:
    c.f[3] = ld32((c.r[17].w[0]));
    c.budget -= 1;
L_003AE68C:
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[19].w[0] + 64u), c.f[3]);
    st32((c.r[19].w[0] + 68u), c.f[2]);
    st32((c.r[19].w[0] + 72u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE534u | kUnwind; return; } goto L_003AE534; } }
L_003AE6AC:
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[19].w[0] + 64u), c.f[3]);
    st32((c.r[19].w[0] + 68u), c.f[2]);
    st32((c.r[19].w[0] + 72u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 76u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE534u | kUnwind; return; } goto L_003AE534; } }
L_003AE6D0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003AE744; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AE744; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 1388u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AE70C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 1396u)));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
L_003AE70C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AE744; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1497u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AE744; } }
    c.r[5].d[0] = ld8((c.r[19].w[0] + 95u));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE688u | kUnwind; return; } goto L_003AE688; } }
L_003AE744:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE688u | kUnwind; return; } goto L_003AE688; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE75Cu); set32(c.r[4], c.r[2].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 35u, depth + 1u); else { c.pc = 0x00300C70u; return; } if (c.pc != 0x003AE75Cu) [[unlikely]] return; }
L_003AE75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE68Cu | kUnwind; return; } goto L_003AE68C; } }
L_003AE764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003AE780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u - 65u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u - 2u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 94u));
    c.r[5].d[0] = 0ull & 1ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 94u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[4].w[0] + 36u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 292u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 292u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AE7EC; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003AE7EC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AE868; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 85u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AE83C; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 344u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 156u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AE910; } }
L_003AE810:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE824u) [[unlikely]] return; }
L_003AE824:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE834u); set32(c.r[4], c.r[3].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 393u, depth + 1u); else { c.pc = 0x0028BCC0u; return; } if (c.pc != 0x003AE834u) [[unlikely]] return; }
L_003AE834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  if (t) { goto L_003AE86C; } }
L_003AE83C:
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE850u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003AE850u) [[unlikely]] return; }
L_003AE850:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[12] = 0u;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 26u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE868u); set32(c.r[4], c.r[3].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 42u, depth + 1u); else { c.pc = 0x0028C860u; return; } if (c.pc != 0x003AE868u) [[unlikely]] return; }
L_003AE868:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_003AE86C:
    c.f[1] = ld32((c.r[16].w[0] + 120u));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 280u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 120u), c.f[1]);  if (t) { goto L_003AE9AC; } }
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.r[3].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[5].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[4].d[0] = c.r[5].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AE8F0; } }
    c.r[4].d[0] = c.r[5].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003AE8F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AE924; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 552u));
    set32(c.r[4], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_003AE9AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = ld16((c.r[3].w[0] + 544u));  if (t) { goto L_003AE928; } }
L_003AE910:
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AE810u | kUnwind; return; } goto L_003AE810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 120u), 0u);  if (t) { goto L_003AE9AC; } }
L_003AE924:
    c.r[9].d[0] = ld16((c.r[3].w[0] + 544u));
    c.budget -= 1;
L_003AE928:
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 20;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AE9A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.f[12] = ld32((c.r[16].w[0] + 96u));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.f[13] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE994u); set32(c.r[6], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_0022(c, 390u, depth + 1u); else { c.pc = 0x0028BC30u; return; } if (c.pc != 0x003AE994u) [[unlikely]] return; }
L_003AE994:
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.f[0]);  if (t) { goto L_003AE9AC; } }
L_003AE9A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AE9ACu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 150u, depth + 1u); else { c.pc = 0x0028D810u; return; } if (c.pc != 0x003AE9ACu) [[unlikely]] return; }
L_003AE9AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AE9C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 552u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_003AE9F8; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003AEA00; } }
L_003AE9F8:
    set32(c.r[3], 0u + 17u);
    st8((c.r[18].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_003AEA00:
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AEA20; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 176u));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_003AEA20:
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[18].w[0] + 108u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 94u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003AEB4C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AEAA8; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AEAEC; } }
L_003AEA74:
    c.f[1] = ld32((c.r[18].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AEAAC; } }
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AEAAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003AEAAC; } }
L_003AEAA8:
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003AEAAC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003AEB4C; } }
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 79u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003AEAD8; } }
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AEB4C; } }
L_003AEAD8:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 177u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEB04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003AEB4C; } }
L_003AEAEC:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEA74u | kUnwind; return; } goto L_003AEA74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEAACu | kUnwind; return; } goto L_003AEAAC; } }
L_003AEB04:
    c.f[0] = ld32((c.r[18].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[4], c.r[5].w[0] + 544u);
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.f[12] = ld32((c.r[18].w[0] + 96u));
    c.f[13] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEB2Cu); set32(c.r[6], c.r[3].w[0] + 80u);  if (depth < kMaxDepth) unit_0022(c, 390u, depth + 1u); else { c.pc = 0x0028BC30u; return; } if (c.pc != 0x003AEB2Cu) [[unlikely]] return; }
L_003AEB2C:
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 95u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_003AEB4C:
    set32(c.r[6], ld32((c.r[18].w[0] + 32u)));
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[6].w[0] + 688u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[6].w[0] + 692u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[6].w[0] + 696u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[6].w[0] + 700u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 724u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 95u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003AEBA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AEBB0; } }
L_003AEBA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 1267u));
    c.budget -= 2;
L_003AEBB0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AEBD8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AEBC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003AEBD0; } }
L_003AEBC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1266u));
    c.budget -= 2;
L_003AEBD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEC00; } }
L_003AEBD8:
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], ld32((c.r[18].w[0] + 32u)));  if (t) { goto L_003AEC10; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    st32((c.r[3].w[0] + 720u), c.f[0]);
    c.budget -= 2;
L_003AEC00:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003AEC20; } }
L_003AEC08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;  if (t) { goto L_003AEC58; } }
L_003AEC10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55051ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 720u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEC00u | kUnwind; return; } goto L_003AEC00; } }
L_003AEC20:
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 176u)));
    set32(c.r[4], c.r[28].w[0] - 29236u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEC38u); set32(c.r[6], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0054(c, 118u, depth + 1u); else { c.pc = 0x00351E00u; return; } if (c.pc != 0x003AEC38u) [[unlikely]] return; }
L_003AEC38:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 95u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEC08u | kUnwind; return; } goto L_003AEC08; } }
L_003AEC58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AEC70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 177u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003AEDC0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003AECA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 32u)));  if (t) { goto L_003AEE38; } }
L_003AECA0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AEF30; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEF30; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AEE34; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[3] = ld32((c.r[2].w[0] + 96u));
    c.f[1] = ld32((c.r[2].w[0] + 104u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AECF4u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x003AECF4u) [[unlikely]] return; }
L_003AECF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[6].d[0] = 0ull | 0ull;
    c.f[4] = c.r[2].w[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F850000u);
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | 59458ull;
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[5] = ld32((c.r[4].w[0] + 104u));
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[2] = 0u;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.f[3] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 35;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AEE34; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AED90u); set32(c.r[16], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003AED90u) [[unlikely]] return; }
L_003AED90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[6], 0u + 26u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.f[1] = c.r[3].w[0];
    c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEDB8u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 42u, depth + 1u); else { c.pc = 0x0028C860u; return; } if (c.pc != 0x003AEDB8u) [[unlikely]] return; }
L_003AEDB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003AEE34; } }
L_003AEDC0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AEDF4; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[6].w[0] + 1484u), c.r[5].w[0]);  if (t) { goto L_003AEDF4; } }
    c.r[2].d[0] = ld16((c.r[5].w[0] + 6u));
    st32((c.r[6].w[0] + 1488u), c.r[2].w[0]);
    c.budget -= 2;
L_003AEDF4:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[2], 0u + 27u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[5].w[0] + 544u);  if (t) { goto L_003AEF38; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AEF38; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 94u));
    c.budget -= 1;
L_003AEE20:
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003AEE34:
    set32(c.r[16], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_003AEE38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 8912u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEE48u); set32(c.r[5], c.r[16].w[0] + 1072u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x003AEE48u) [[unlikely]] return; }
L_003AEE48:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEE5Cu); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x003AEE5Cu) [[unlikely]] return; }
L_003AEE5C:
    c.r[7].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 9u);
    set32(c.r[13], c.r[6].w[0] << 3);
    set32(c.r[3], 0u - 65u);
    set32(c.r[4], c.r[6].w[0] << 6);
    set32(c.r[10], c.r[6].w[0] << 8);
    set32(c.r[11], 0u - 33u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[9], 0u - 257u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[6], c.r[6].w[0] << 9);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[13].d[0] = c.r[5].d[0] | c.r[13].d[0];
    set32(c.r[7], 0u - 129u);
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[5], 0u - 513u);
    c.r[13].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[3].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 1236u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 94u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 53;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), 0u);  if (t) { goto L_003AEF48; } }
L_003AEF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 177u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEDC0u | kUnwind; return; } goto L_003AEDC0; } }
L_003AEF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AEF40u);  if (depth < kMaxDepth) unit_0023(c, 150u, depth + 1u); else { c.pc = 0x0028D810u; return; } if (c.pc != 0x003AEF40u) [[unlikely]] return; }
L_003AEF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 94u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEE20u | kUnwind; return; } goto L_003AEE20; } }
L_003AEF48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AEF60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[3].d[0] = c.r[4].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AEFA8; } }
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AEFA8; } }
L_003AEFA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003AF118; } }
L_003AEFA8:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AF114; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 752u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 123u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AF114; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42100000u);
    set32(c.r[4], 0u + 1u);
    c.f[0] = c.r[3].w[0];
    st8((c.r[17].w[0] + 177u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.f[1] = ld32((c.r[3].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003AF114; } }
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF010u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x003AF010u) [[unlikely]] return; }
L_003AF010:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[4].d[0] = c.r[4].d[0] | 63875ull;
    c.r[7].d[0] = 0ull | 0ull;
    c.f[4] = c.r[4].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F850000u);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] | 59458ull;
    c.r[5].d[0] = c.r[5].d[0] | 4059ull;
    c.f[5] = ld32((c.r[3].w[0] + 104u));
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[2] = 0u;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[4].w[0];
    c.f[3] = c.r[5].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 35;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003AF114; } }
    c.r[10].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF0ECu); st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003AF0ECu) [[unlikely]] return; }
L_003AF0EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.f[1] = c.r[3].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 26u);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF10Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 42u, depth + 1u); else { c.pc = 0x0028C860u; return; } if (c.pc != 0x003AF10Cu) [[unlikely]] return; }
L_003AF10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AEFA0u | kUnwind; return; } goto L_003AEFA0; } }
L_003AF114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003AF118:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AF130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[3].w[0] << 4);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 17u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 724u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AF194; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003AF194:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AF1D8; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AF1D8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 525u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AF1C8; } }
L_003AF1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { [[clang::musttail]] return unit_006C(c, 9u, depth); } }
L_003AF1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF1D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 10u, depth + 1u); else { c.pc = 0x003B0100u; return; } if (c.pc != 0x003AF1D0u) [[unlikely]] return; }
L_003AF1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF1C0u | kUnwind; return; } goto L_003AF1C0; } }
L_003AF1D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AF6A4; } }
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 94u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[5] = ld32((c.r[3].w[0] + 32u));
    c.f[4] = ld32((c.r[5].w[0] + 32u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (t) { goto L_003AF784; } }
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003AF238; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AF238:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_003AF23C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[2].d[0] = c.r[4].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AF270; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003AF270; } }
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_003AF270:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[2].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AF7A8; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 1388u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AF2AC; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 1396u)));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
L_003AF2AC:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AF7A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003AF7A8; } }
L_003AF2C0:
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AF2DC; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003AF2DC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AF2FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003AF304; } }
L_003AF2FC:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1267u));
    c.budget -= 2;
L_003AF304:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AF7B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AF7B8; } }
L_003AF314:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003AF394; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003AF364; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1388u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AF358; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1396u)));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
L_003AF358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AF364; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AF364:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AF388; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1497u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AF388; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AF388:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AF394; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003AF394:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 112u));
    c.f[13] = c.r[2].w[0];
    c.r[9].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 12;
    { const bool t = c.r[9].d[0] == 0ull; c.r[7].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003AF3DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
L_003AF3DC:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], c.r[28].w[0] - 29236u);
    set32(c.r[8], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF3F0u); set32(c.r[6], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0054(c, 109u, depth + 1u); else { c.pc = 0x00351BA0u; return; } if (c.pc != 0x003AF3F0u) [[unlikely]] return; }
L_003AF3F0:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003AF438; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AF8FC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003AF438; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 95u));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003AF438:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AF454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003AF45C; } }
L_003AF454:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1267u));
    c.budget -= 2;
L_003AF45C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AF918; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 525u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AF48C; } }
    c.r[3].d[0] = c.r[4].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003AF48C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AFB58; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 525u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AF934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF4B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 10u, depth + 1u); else { c.pc = 0x003B0100u; return; } if (c.pc != 0x003AF4B0u) [[unlikely]] return; }
L_003AF4B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AF934; } }
L_003AF4B8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 94u));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 85u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AF648; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AF648; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AF560; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 512u);
    c.budget -= 3;
L_003AF504:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AF54C; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_003AF54C; } }
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 213u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003AF560; } }
L_003AF54C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF504u | kUnwind; return; } goto L_003AF504; } }
    c.budget -= 1;
L_003AF560:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_003AF57C:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 8u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003AF5E8; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 512u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 16u), 0u);
    set32(c.r[4], 0u + 10u);
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003AFE9C; } }
L_003AF5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[17].w[0] + 94u));  if (t) { goto L_003AF61C; } }
L_003AF5E8:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003AF600; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AF600:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF57Cu | kUnwind; return; } goto L_003AF57C; } }
    breakpoint(c, 0x003AF610u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld8((c.r[17].w[0] + 94u));
    c.budget -= 3;
L_003AF61C:
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[6].d[0] = c.r[6].d[0] << 62;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_003AF648:
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AF670; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003AF670:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AFEE0; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AFEE0; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 552u));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003AFEA4; } }
L_003AF69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_006C(c, 8u, depth); } }
L_003AF6A4:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 94u));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 544u));
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + 544u);  if (t) { goto L_003AF728; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 8u));
    set32(c.r[4], 0u + 51u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003AF728; } }
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    set32(c.r[3], 0u - 5u);
    set32(c.r[4], c.r[7].w[0] << 2);
    st32((c.r[6].w[0] + 688u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 36u));
    st32((c.r[6].w[0] + 692u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 40u));
    st32((c.r[6].w[0] + 696u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 44u));
    st32((c.r[6].w[0] + 700u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 724u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
L_003AF720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_006C(c, 8u, depth); } }
L_003AF728:
    c.r[11].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[9], 0u - 3u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[7], 0u - 17u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[3].w[0]));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[3].w[0]));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF77Cu); st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006B(c, 160u, depth + 1u); else { c.pc = 0x003AEC70u; return; } if (c.pc != 0x003AF77Cu) [[unlikely]] return; }
L_003AF77C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF720u | kUnwind; return; } goto L_003AF720; } }
L_003AF784:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003AF7A0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AF7A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF23Cu | kUnwind; return; } goto L_003AF23C; } }
L_003AF7A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF2DCu | kUnwind; return; } goto L_003AF2DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[2].w[0] + 1497u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF2C0u | kUnwind; return; } goto L_003AF2C0; } }
L_003AF7B8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003AF7D4; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AF7D8; } }
L_003AF7D4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AF7D8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 85u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AF7EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF314u | kUnwind; return; } goto L_003AF314; } }
L_003AF7EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF314u | kUnwind; return; } goto L_003AF314; } }
    c.r[7].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 9u);
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[4], 0u - 5u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 16;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 64u);  if (t) { goto L_003AF86C; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AF86C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF864u); set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  if (depth < kMaxDepth) unit_0063(c, 55u, depth + 1u); else { c.pc = 0x0038CB10u; return; } if (c.pc != 0x003AF864u) [[unlikely]] return; }
L_003AF864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 85u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF314u | kUnwind; return; } goto L_003AF314; } }
L_003AF86C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003AF8E0; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AF8E0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 1388u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003AF8A8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 1396u)));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
L_003AF8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AF8E0; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1497u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003AF8E0; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 95u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF864u | kUnwind; return; } goto L_003AF864; } }
L_003AF8E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF864u | kUnwind; return; } goto L_003AF864; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF8F4u); set32(c.r[4], c.r[2].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 35u, depth + 1u); else { c.pc = 0x00300C70u; return; } if (c.pc != 0x003AF8F4u) [[unlikely]] return; }
L_003AF8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF864u | kUnwind; return; } goto L_003AF864; } }
L_003AF8FC:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 95u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF438u | kUnwind; return; } goto L_003AF438; } }
L_003AF918:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 94u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF4B8u | kUnwind; return; } goto L_003AF4B8; } }
L_003AF934:
    set32(c.r[16], ld32((c.r[17].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 8912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF948u); set32(c.r[5], c.r[16].w[0] + 1072u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x003AF948u) [[unlikely]] return; }
L_003AF948:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AF95Cu); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x003AF95Cu) [[unlikely]] return; }
L_003AF95C:
    c.r[9].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[8].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 9u);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[4], 0u - 65u);
    set32(c.r[5], c.r[8].w[0] << 6);
    set32(c.r[18], 0u - 33u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[14], 0u - 257u);
    set32(c.r[15], c.r[8].w[0] << 8);
    set32(c.r[12], 0u - 129u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[9].d[0] = c.r[9].d[0] & c.r[6].d[0];
    set32(c.r[10], 0u - 513u);
    c.r[9].d[0] = c.r[9].d[0] | c.r[7].d[0];
    set32(c.r[11], c.r[8].w[0] << 9);
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[25].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[9].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.r[9].d[0] = c.r[25].d[0] & c.r[4].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[5].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[18].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[24].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[14].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[15].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[12].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[13].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 1236u), 0u);
    set32(c.r[9], ld32((c.r[17].w[0] + 32u)));
    c.f[0] = ld32((c.r[9].w[0] + 32u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 36u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 40u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 44u));
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.r[9].d[0] = ld8((c.r[17].w[0] + 94u));
    c.r[4].d[0] = c.r[9].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 57;
    { const bool t = !(c.fcr31 & kFpuCondition); st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003AFA5C; } }
L_003AFA40:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 94u));
    c.budget -= 1;
L_003AFA44:
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF4B8u | kUnwind; return; } goto L_003AF4B8; } }
L_003AFA5C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 95u));
    set32(c.r[9], c.r[8].w[0] << 2);
    set32(c.r[8], 0u - 5u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 64u);  if (t) { goto L_003AFAC8; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 530u));
    c.r[4].d[0] = c.r[4].d[0] << 60;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AFAC8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 95u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFAC0u); set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  if (depth < kMaxDepth) unit_0063(c, 55u, depth + 1u); else { c.pc = 0x0038CB10u; return; } if (c.pc != 0x003AFAC0u) [[unlikely]] return; }
L_003AFAC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[17].w[0] + 94u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFA44u | kUnwind; return; } goto L_003AFA44; } }
L_003AFAC8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003AFB3C; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AFB3C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 1388u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AFB04; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 1396u)));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
L_003AFB04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AFB3C; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1497u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AFB3C; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 95u));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFA40u | kUnwind; return; } goto L_003AFA40; } }
L_003AFB3C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFA40u | kUnwind; return; } goto L_003AFA40; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AFB50u); set32(c.r[4], c.r[2].w[0] + 1072u);  if (depth < kMaxDepth) unit_0040(c, 35u, depth + 1u); else { c.pc = 0x00300C70u; return; } if (c.pc != 0x003AFB50u) [[unlikely]] return; }
L_003AFB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFA40u | kUnwind; return; } goto L_003AFA40; } }
L_003AFB58:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 85u));
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 94u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003AFCFC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 85u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF4B8u | kUnwind; return; } goto L_003AF4B8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AFC10; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 512u);
    c.budget -= 3;
L_003AFBB4:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AFBFC; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_003AFBFC; } }
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 213u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003AFC10; } }
L_003AFBFC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFBB4u | kUnwind; return; } goto L_003AFBB4; } }
    c.budget -= 1;
L_003AFC10:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_003AFC2C:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 8u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003AFC98; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 512u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 16u), 0u);
    set32(c.r[4], 0u + 10u);
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003AFE94; } }
L_003AFC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[17].w[0] + 94u));  if (t) { goto L_003AFCCC; } }
L_003AFC98:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003AFCB0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AFCB0:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFC2Cu | kUnwind; return; } goto L_003AFC2C; } }
    breakpoint(c, 0x003AFCC0u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld8((c.r[17].w[0] + 94u));
    c.budget -= 3;
L_003AFCCC:
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[6].d[0] = c.r[6].d[0] << 62;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF4B8u | kUnwind; return; } goto L_003AF4B8; } }
L_003AFCFC:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 94u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 85u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF4B8u | kUnwind; return; } goto L_003AF4B8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 512ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AFDA0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 512u);
    c.budget -= 3;
L_003AFD48:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003AFD90; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_003AFD90; } }
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 213u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003AFDA0; } }
L_003AFD90:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFD48u | kUnwind; return; } goto L_003AFD48; } }
L_003AFDA0:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 512ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_003AFDBC:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 8u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003AFE28; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 512u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 16u), 0u);
    set32(c.r[4], 0u + 10u);
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003AFE8C; } }
L_003AFE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld8((c.r[17].w[0] + 94u));  if (t) { goto L_003AFE5C; } }
L_003AFE28:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003AFE40; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AFE40:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFDBCu | kUnwind; return; } goto L_003AFDBC; } }
    breakpoint(c, 0x003AFE50u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld8((c.r[17].w[0] + 94u));
    c.budget -= 3;
L_003AFE5C:
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[6].d[0] = c.r[6].d[0] << 62;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 95u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF4B8u | kUnwind; return; } goto L_003AF4B8; } }
L_003AFE8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFE20u | kUnwind; return; } goto L_003AFE20; } }
L_003AFE94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AFC90u | kUnwind; return; } goto L_003AFC90; } }
L_003AFE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF5E0u | kUnwind; return; } goto L_003AF5E0; } }
L_003AFEA4:
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st32((c.r[6].w[0] + 688u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    st32((c.r[6].w[0] + 692u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    st32((c.r[6].w[0] + 696u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[6].w[0] + 700u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 724u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 724u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AF69Cu | kUnwind; return; } goto L_003AF69C; } }
L_003AFEE0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AFEFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003AFF00; } }
L_003AFEFC:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1267u));
    c.budget -= 1;
L_003AFF00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003AFF24; } }
    c.f[3] = ld32((c.r[6].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 64u));
    c.f[1] = ld32((c.r[6].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 72u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003AFF3C; } }
L_003AFF24:
    c.f[3] = ld32((c.r[6].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 48u));
    c.f[1] = ld32((c.r[6].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
L_003AFF3C:
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.r[3].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = ld32((c.r[17].w[0] + 116u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_003AFF68; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003AFF68:
    c.r[6].d[0] = ld8((c.r[17].w[0] + 94u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[5], c.r[4].w[0] << 3);
    set32(c.r[4], 0u - 9u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 94u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 94u));
    c.r[4].d[0] = c.r[4].d[0] << 60;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003AFFC0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 544u));
    c.r[4].d[0] = c.r[4].d[0] << 61;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003AFFC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { [[clang::musttail]] return unit_006C(c, 4u, depth); } }
L_003AFFC0:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 95u));
    c.r[4].d[0] = c.r[4].d[0] << 60;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003AFFE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_003AFFE8; } }
L_003AFFE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1267u));
    c.budget -= 2;
L_003AFFE8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_006C(c, 3u, depth); } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 544u));
    c.r[4].d[0] = c.r[4].d[0] << 61;
    c.budget -= 4;
    [[clang::musttail]] return unit_006C(c, 1u, depth);
}

}

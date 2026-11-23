#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B4[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0,
    21, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0,
    0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 177, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191,
    0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 195, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B4(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004D0000;
    case 2u: goto L_004D0008;
    case 3u: goto L_004D0050;
    case 4u: goto L_004D00C8;
    case 5u: goto L_004D012C;
    case 6u: goto L_004D01B0;
    case 7u: goto L_004D01B4;
    case 8u: goto L_004D01D8;
    case 9u: goto L_004D01E0;
    case 10u: goto L_004D01F0;
    case 11u: goto L_004D01F4;
    case 12u: goto L_004D021C;
    case 13u: goto L_004D0228;
    case 14u: goto L_004D0230;
    case 15u: goto L_004D023C;
    case 16u: goto L_004D0244;
    case 17u: goto L_004D0250;
    case 18u: goto L_004D025C;
    case 19u: goto L_004D026C;
    case 20u: goto L_004D0274;
    case 21u: goto L_004D0280;
    case 22u: goto L_004D0288;
    case 23u: goto L_004D0294;
    case 24u: goto L_004D02A4;
    case 25u: goto L_004D02AC;
    case 26u: goto L_004D02BC;
    case 27u: goto L_004D02C0;
    case 28u: goto L_004D02E8;
    case 29u: goto L_004D030C;
    case 30u: goto L_004D0388;
    case 31u: goto L_004D03EC;
    case 32u: goto L_004D045C;
    case 33u: goto L_004D04D4;
    case 34u: goto L_004D0538;
    case 35u: goto L_004D059C;
    case 36u: goto L_004D05B0;
    case 37u: goto L_004D05D4;
    case 38u: goto L_004D0650;
    case 39u: goto L_004D06B4;
    case 40u: goto L_004D0724;
    case 41u: goto L_004D079C;
    case 42u: goto L_004D0800;
    case 43u: goto L_004D0864;
    case 44u: goto L_004D086C;
    case 45u: goto L_004D0888;
    case 46u: goto L_004D0890;
    case 47u: goto L_004D0898;
    case 48u: goto L_004D08A0;
    case 49u: goto L_004D08AC;
    case 50u: goto L_004D08D0;
    case 51u: goto L_004D09A4;
    case 52u: goto L_004D0A20;
    case 53u: goto L_004D0A84;
    case 54u: goto L_004D0AE0;
    case 55u: goto L_004D0AEC;
    case 56u: goto L_004D0B08;
    case 57u: goto L_004D0B3C;
    case 58u: goto L_004D0BB8;
    case 59u: goto L_004D0C1C;
    case 60u: goto L_004D0C8C;
    case 61u: goto L_004D0D04;
    case 62u: goto L_004D0D68;
    case 63u: goto L_004D0DCC;
    case 64u: goto L_004D0E00;
    case 65u: goto L_004D0E78;
    case 66u: goto L_004D0EDC;
    case 67u: goto L_004D0F38;
    case 68u: goto L_004D0F80;
    case 69u: goto L_004D0FF8;
    case 70u: goto L_004D1024;
    case 71u: goto L_004D105C;
    case 72u: goto L_004D10B8;
    case 73u: goto L_004D10BC;
    case 74u: goto L_004D10D0;
    case 75u: goto L_004D1110;
    case 76u: goto L_004D112C;
    case 77u: goto L_004D11B4;
    case 78u: goto L_004D11FC;
    case 79u: goto L_004D1230;
    case 80u: goto L_004D12C0;
    case 81u: goto L_004D12DC;
    case 82u: goto L_004D1328;
    case 83u: goto L_004D13D4;
    case 84u: goto L_004D1418;
    case 85u: goto L_004D1428;
    case 86u: goto L_004D1430;
    case 87u: goto L_004D144C;
    case 88u: goto L_004D1540;
    case 89u: goto L_004D15A0;
    case 90u: goto L_004D15E8;
    case 91u: goto L_004D16C8;
    case 92u: goto L_004D16FC;
    case 93u: goto L_004D173C;
    case 94u: goto L_004D1758;
    case 95u: goto L_004D17F8;
    case 96u: goto L_004D1804;
    case 97u: goto L_004D1864;
    case 98u: goto L_004D18C4;
    case 99u: goto L_004D18D0;
    case 100u: goto L_004D190C;
    case 101u: goto L_004D191C;
    case 102u: goto L_004D1930;
    case 103u: goto L_004D19B8;
    case 104u: goto L_004D19D0;
    case 105u: goto L_004D1A9C;
    case 106u: goto L_004D1B7C;
    case 107u: goto L_004D1BF8;
    case 108u: goto L_004D1C5C;
    case 109u: goto L_004D1CCC;
    case 110u: goto L_004D1D44;
    case 111u: goto L_004D1DA8;
    case 112u: goto L_004D1E50;
    case 113u: goto L_004D1F34;
    case 114u: goto L_004D1F60;
    case 115u: goto L_004D2000;
    case 116u: goto L_004D2140;
    case 117u: goto L_004D2154;
    case 118u: goto L_004D2174;
    case 119u: goto L_004D2190;
    case 120u: goto L_004D2220;
    case 121u: goto L_004D2230;
    case 122u: goto L_004D226C;
    case 123u: goto L_004D22B0;
    case 124u: goto L_004D22C0;
    case 125u: goto L_004D22D0;
    case 126u: goto L_004D22E0;
    case 127u: goto L_004D2334;
    case 128u: goto L_004D2368;
    case 129u: goto L_004D23D0;
    case 130u: goto L_004D23E0;
    case 131u: goto L_004D2498;
    case 132u: goto L_004D24AC;
    case 133u: goto L_004D2540;
    case 134u: goto L_004D2580;
    case 135u: goto L_004D25BC;
    case 136u: goto L_004D25F4;
    case 137u: goto L_004D2658;
    case 138u: goto L_004D26C4;
    case 139u: goto L_004D271C;
    case 140u: goto L_004D2728;
    case 141u: goto L_004D2730;
    case 142u: goto L_004D2768;
    case 143u: goto L_004D2920;
    case 144u: goto L_004D29C0;
    case 145u: goto L_004D2A20;
    case 146u: goto L_004D2A28;
    case 147u: goto L_004D2A34;
    case 148u: goto L_004D2A5C;
    case 149u: goto L_004D2A90;
    case 150u: goto L_004D2A98;
    case 151u: goto L_004D2AA4;
    case 152u: goto L_004D2B24;
    case 153u: goto L_004D2B2C;
    case 154u: goto L_004D2B34;
    case 155u: goto L_004D2B40;
    case 156u: goto L_004D2B48;
    case 157u: goto L_004D2CC8;
    case 158u: goto L_004D2D44;
    case 159u: goto L_004D2D8C;
    case 160u: goto L_004D2D94;
    case 161u: goto L_004D2E78;
    case 162u: goto L_004D2EC0;
    case 163u: goto L_004D2F54;
    case 164u: goto L_004D3004;
    case 165u: goto L_004D3124;
    case 166u: goto L_004D317C;
    case 167u: goto L_004D3298;
    case 168u: goto L_004D32F0;
    case 169u: goto L_004D3440;
    case 170u: goto L_004D35E0;
    case 171u: goto L_004D3644;
    case 172u: goto L_004D3660;
    case 173u: goto L_004D3670;
    case 174u: goto L_004D36A4;
    case 175u: goto L_004D36E4;
    case 176u: goto L_004D3700;
    case 177u: goto L_004D3720;
    case 178u: goto L_004D3724;
    case 179u: goto L_004D3748;
    case 180u: goto L_004D3770;
    case 181u: goto L_004D3788;
    case 182u: goto L_004D37A8;
    case 183u: goto L_004D37E0;
    case 184u: goto L_004D37F0;
    case 185u: goto L_004D3800;
    case 186u: goto L_004D3894;
    case 187u: goto L_004D3910;
    case 188u: goto L_004D39A0;
    case 189u: goto L_004D3A24;
    case 190u: goto L_004D3A30;
    case 191u: goto L_004D3A7C;
    case 192u: goto L_004D3A9C;
    case 193u: goto L_004D3ADC;
    case 194u: goto L_004D3AF8;
    case 195u: goto L_004D3B18;
    case 196u: goto L_004D3B1C;
    case 197u: goto L_004D3B40;
    case 198u: goto L_004D3B68;
    case 199u: goto L_004D3B80;
    case 200u: goto L_004D3BA0;
    case 201u: goto L_004D3BF0;
    case 202u: goto L_004D3C28;
    case 203u: goto L_004D3C70;
    case 204u: goto L_004D3C78;
    case 205u: goto L_004D3CEC;
    case 206u: goto L_004D3DB4;
    case 207u: goto L_004D3DD0;
    case 208u: goto L_004D3DF4;
    case 209u: goto L_004D3E18;
    case 210u: goto L_004D3E60;
    case 211u: goto L_004D3E7C;
    case 212u: goto L_004D3E90;
    case 213u: goto L_004D3F20;
    case 214u: goto L_004D3F84;
    case 215u: goto L_004D3F8C;
    case 216u: goto L_004D3FA8;
    default: bad_entry(c, 0x004D0000u); return;
    }
L_004D0000:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_004D0008:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CFFD4u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 239u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] > 0;  if (t) { goto L_004D017C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D017C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D00A8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_004D0050:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D0098; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004D0098; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D00A8; } }
L_004D0098:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0050u | kUnwind; return; } goto L_004D0050; } }
L_004D00A8:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_004D00C8:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004D0134; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D0F44; } }
L_004D012C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_004D016C; } }
L_004D0134:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004D0150; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004D0150:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D00C8u | kUnwind; return; } goto L_004D00C8; } }
    breakpoint(c, 0x004D0160u);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_004D016C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_004D017C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 109u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004D0F4C; } }
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D01B0; } }
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004D01B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_004D01B4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D10B8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D10B8; } }
    set32(c.r[3], 0u + 29u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D10B8; } }
L_004D01D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D01E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 171u, depth + 1u); else { c.pc = 0x004CEB10u; return; } if (c.pc != 0x004D01E0u) [[unlikely]] return; }
L_004D01E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CF118u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 191u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D10B8; } }
L_004D01F0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 84u));
    c.budget -= 1;
L_004D01F4:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(19ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 21648u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x004D0000u < 16384u) { entry = entries_00B4[(t - 0x004D0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004D021C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CF25Cu | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 196u, depth); } }
L_004D0228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0230u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 166u, depth + 1u); else { c.pc = 0x004CE8A0u; return; } if (c.pc != 0x004D0230u) [[unlikely]] return; }
L_004D0230:
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
L_004D023C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CF3ECu | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 199u, depth); } }
L_004D0244:
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
L_004D0250:
    set32(c.r[3], 0u + 75u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
L_004D025C:
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
L_004D026C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CF5D8u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 205u, depth); } }
L_004D0274:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0280u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_00B5(c, 174u, depth + 1u); else { c.pc = 0x004D77F0u; return; } if (c.pc != 0x004D0280u) [[unlikely]] return; }
L_004D0280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CF63Cu | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 207u, depth); } }
L_004D0288:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
L_004D0294:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CF718u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 211u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CF6FCu | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 210u, depth); } }
L_004D02A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CF780u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 213u, depth); } }
L_004D02AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CF798u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 215u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 76u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CF78Cu | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 214u, depth); } }
L_004D02BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.budget -= 1;
L_004D02C0:
    set32(c.r[4], 0u + 1u);
    c.f[0] = c.r[3].w[0];
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[1] = ld32((c.r[3].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D02E8u); set32(c.r[4], c.r[3].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 113u, depth + 1u); else { c.pc = 0x00395B60u; return; } if (c.pc != 0x004D02E8u) [[unlikely]] return; }
L_004D02E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D0368; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_004D030C:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D0354; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004D0354; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D0368; } }
L_004D0354:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D030Cu | kUnwind; return; } goto L_004D030C; } }
    c.budget -= 1;
L_004D0368:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_004D0388:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004D03F4; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D058C; } }
L_004D03EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_004D042C; } }
L_004D03F4:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004D0410; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004D0410:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0388u | kUnwind; return; } goto L_004D0388; } }
    breakpoint(c, 0x004D0420u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_004D042C:
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D04B8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
L_004D045C:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D04A4; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004D04A4; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D04B8; } }
L_004D04A4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D045Cu | kUnwind; return; } goto L_004D045C; } }
    c.budget -= 1;
L_004D04B8:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 32ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_004D04D4:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004D0540; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 32u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D0594; } }
L_004D0538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_004D0574; } }
L_004D0540:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004D0558; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D0558:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D04D4u | kUnwind; return; } goto L_004D04D4; } }
    breakpoint(c, 0x004D0568u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 3;
L_004D0574:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
L_004D058C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D03ECu | kUnwind; return; } goto L_004D03EC; } }
L_004D0594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0538u | kUnwind; return; } goto L_004D0538; } }
L_004D059C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D05B0u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 113u, depth + 1u); else { c.pc = 0x00395B60u; return; } if (c.pc != 0x004D05B0u) [[unlikely]] return; }
L_004D05B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D0630; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_004D05D4:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D061C; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004D061C; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D0630; } }
L_004D061C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D05D4u | kUnwind; return; } goto L_004D05D4; } }
    c.budget -= 1;
L_004D0630:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_004D0650:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004D06BC; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D0854; } }
L_004D06B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_004D06F4; } }
L_004D06BC:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004D06D8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004D06D8:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0650u | kUnwind; return; } goto L_004D0650; } }
    breakpoint(c, 0x004D06E8u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_004D06F4:
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D0780; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
L_004D0724:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D076C; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004D076C; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D0780; } }
L_004D076C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0724u | kUnwind; return; } goto L_004D0724; } }
    c.budget -= 1;
L_004D0780:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 32ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_004D079C:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004D0808; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 32u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D085C; } }
L_004D0800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_004D083C; } }
L_004D0808:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004D0820; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D0820:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D079Cu | kUnwind; return; } goto L_004D079C; } }
    breakpoint(c, 0x004D0830u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 3;
L_004D083C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
L_004D0854:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D06B4u | kUnwind; return; } goto L_004D06B4; } }
L_004D085C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0800u | kUnwind; return; } goto L_004D0800; } }
L_004D0864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CFA14u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 221u, depth); } }
L_004D086C:
    st32((c.r[16].w[0] + 80u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3652u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0888u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D0888u) [[unlikely]] return; }
L_004D0888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CFAACu | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 223u, depth); } }
L_004D0890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CFBF4u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 227u, depth); } }
L_004D0898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CFD40u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 230u, depth); } }
L_004D08A0:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
L_004D08AC:
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 85u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D08D0u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 113u, depth + 1u); else { c.pc = 0x00395B60u; return; } if (c.pc != 0x004D08D0u) [[unlikely]] return; }
L_004D08D0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 87u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D0950; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D0940; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D0934; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D0924; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D0914; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_004D0964; } }
L_004D0914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.f[0]);  if (t) { goto L_004D096C; } }
L_004D0924:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D0968; } }
L_004D0934:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D0968; } }
L_004D0940:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D0968; } }
L_004D0950:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D0968; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_004D0964:
    c.f[0] = c.r[3].w[0];
    c.budget -= 1;
L_004D0968:
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 1;
L_004D096C:
    set32(c.r[3], 0u + 10u);
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D0A00; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_004D09A4:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D09EC; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004D09EC; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D0A00; } }
L_004D09EC:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D09A4u | kUnwind; return; } goto L_004D09A4; } }
    c.budget -= 1;
L_004D0A00:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_004D0A20:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004D0A8C; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D0AD8; } }
L_004D0A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_004D0AC4; } }
L_004D0A8C:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004D0AA8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004D0AA8:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0A20u | kUnwind; return; } goto L_004D0A20; } }
    breakpoint(c, 0x004D0AB8u);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_004D0AC4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
L_004D0AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0A84u | kUnwind; return; } goto L_004D0A84; } }
L_004D0AE0:
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
L_004D0AEC:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D0B08u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 113u, depth + 1u); else { c.pc = 0x00395B60u; return; } if (c.pc != 0x004D0B08u) [[unlikely]] return; }
L_004D0B08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[3], 0u + 11u);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D0B98; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_004D0B3C:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D0B84; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004D0B84; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D0B98; } }
L_004D0B84:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0B3Cu | kUnwind; return; } goto L_004D0B3C; } }
    c.budget -= 1;
L_004D0B98:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_004D0BB8:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004D0C24; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D0DBC; } }
L_004D0C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_004D0C5C; } }
L_004D0C24:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004D0C40; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004D0C40:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0BB8u | kUnwind; return; } goto L_004D0BB8; } }
    breakpoint(c, 0x004D0C50u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_004D0C5C:
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D0CE8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
L_004D0C8C:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D0CD4; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004D0CD4; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D0CE8; } }
L_004D0CD4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0C8Cu | kUnwind; return; } goto L_004D0C8C; } }
    c.budget -= 1;
L_004D0CE8:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 32ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_004D0D04:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004D0D70; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 32u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D0DC4; } }
L_004D0D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_004D0DA4; } }
L_004D0D70:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004D0D88; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D0D88:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0D04u | kUnwind; return; } goto L_004D0D04; } }
    breakpoint(c, 0x004D0D98u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 3;
L_004D0DA4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
L_004D0DBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0C1Cu | kUnwind; return; } goto L_004D0C1C; } }
L_004D0DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0D68u | kUnwind; return; } goto L_004D0D68; } }
L_004D0DCC:
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CFE80u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 234u, depth); } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D0E58; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_004D0E00:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D0E48; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004D0E48; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D0E58; } }
L_004D0E48:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0E00u | kUnwind; return; } goto L_004D0E00; } }
L_004D0E58:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_004D0E78:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004D0EE4; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D0F30; } }
L_004D0EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_004D0F1C; } }
L_004D0EE4:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004D0F00; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004D0F00:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0E78u | kUnwind; return; } goto L_004D0E78; } }
    breakpoint(c, 0x004D0F10u);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_004D0F1C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CFE80u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 234u, depth); } }
L_004D0F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0EDCu | kUnwind; return; } goto L_004D0EDC; } }
L_004D0F38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CFEBCu | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 236u, depth); } }
L_004D0F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D012Cu | kUnwind; return; } goto L_004D012C; } }
L_004D0F4C:
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D0FD8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_004D0F80:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D0FC8; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004D0FC8; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D0FD8; } }
L_004D0FC8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0F80u | kUnwind; return; } goto L_004D0F80; } }
L_004D0FD8:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_004D0FF8:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004D1064; } }
L_004D1024:
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D10B0; } }
L_004D105C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_004D109C; } }
L_004D1064:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004D1080; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004D1080:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D0FF8u | kUnwind; return; } goto L_004D0FF8; } }
    breakpoint(c, 0x004D1090u);
    c.r[9].d[0] = 0ull + 0ull;
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_004D109C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D01B0u | kUnwind; return; } goto L_004D01B0; } }
L_004D10B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D105Cu | kUnwind; return; } goto L_004D105C; } }
L_004D10B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004D10BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D10D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[20], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 132u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.f[20] = 0u;
    c.budget -= 16;
L_004D1110:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D1180; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D112Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D112Cu) [[unlikely]] return; }
L_004D112C:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[5] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    st32((c.r[17].w[0]), c.f[2]);
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0]), c.f[4]);  if (t) { goto L_004D1180; } }
    c.r[20].d[0] = c.r[19].d[0] << 56;
    c.f[20] = c.f[0];
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.budget -= 3;
L_004D1180:
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[3].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.r[3].d[0] = c.r[19].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1110u | kUnwind; return; } goto L_004D1110; } }
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_004D11BC; } }
    st16((c.r[21].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 2u);
    st8((c.r[21].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004D11B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_004D1204; } }
L_004D11BC:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], 0u + 14u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[6], ld32((c.r[2].w[0] + 88u)));
    st8((c.r[21].w[0] + 84u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], 0u - 17u);
    set32(c.r[5], ld32((c.r[21].w[0] + 40u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D11FCu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0028CA70u; return; } if (c.pc != 0x004D11FCu) [[unlikely]] return; }
L_004D11FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D11B4u | kUnwind; return; } goto L_004D11B4; } }
L_004D1204:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004D1230:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 184u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 180u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    set32(c.r[20], 0u - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.f[25] = 0u;
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.f[24] = c.f[25];
    c.f[4] = ld32((c.r[5].w[0] + 32u));
    c.f[5] = ld32((c.r[3].w[0] + 32u));
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.f[2] = ld32((c.r[5].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 36;
L_004D12C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D1340; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D12DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D12DCu) [[unlikely]] return; }
L_004D12DC:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    set32(c.r[16], c.r[3].w[0] + 32u);
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[5] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[23] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[25]));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    st32((c.r[22].w[0]), c.f[2]);
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[23].w[0]), c.f[4]);  if (t) { goto L_004D1438; } }
L_004D1328:
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D1340; } }
    c.r[19].d[0] = c.r[18].d[0] << 56;
    c.f[24] = c.f[23];
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.budget -= 3;
L_004D1340:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D12C0u | kUnwind; return; } goto L_004D12C0; } }
    c.r[4].d[0] = c.r[19].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004D14D0; } }
    c.r[3].d[0] = c.r[20].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_004D14D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D13A8; } }
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[25]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D13A8; } }
    c.f[25] = c.f[24];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D13D4; } }
L_004D13A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[25]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D13D4; } }
    c.r[20].d[0] = c.r[19].d[0] << 56;
    c.f[25] = c.f[24];
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);
    c.budget -= 3;
L_004D13D4:
    c.r[4].d[0] = c.r[20].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004D14E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D14E8; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1418u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D1418u) [[unlikely]] return; }
L_004D1418:
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1428u); set32(c.r[4], c.r[3].w[0] + 544u);  if (depth < kMaxDepth) unit_00B5(c, 187u, depth + 1u); else { c.pc = 0x004D7AD0u; return; } if (c.pc != 0x004D1428u) [[unlikely]] return; }
L_004D1428:
    set32(c.r[3], 0u + 13u);
    st8((c.r[21].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004D1430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_004D14F8; } }
L_004D1438:
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D144Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D144Cu) [[unlikely]] return; }
L_004D144C:
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = c.r[3].w[0];
    c.f[7] = ld32((c.r[2].w[0]));
    c.f[6] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[22]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 28;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1328u | kUnwind; return; } goto L_004D1328; } }
    c.r[20].d[0] = c.r[18].d[0] << 56;
    c.f[25] = c.f[23];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1328u | kUnwind; return; } goto L_004D1328; } }
    c.budget -= 1;
L_004D14D0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D13D4u | kUnwind; return; } goto L_004D13D4; } }
    c.r[20].d[0] = c.r[19].d[0] << 56;
    c.f[25] = c.f[24];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D13D4u | kUnwind; return; } goto L_004D13D4; } }
L_004D14E8:
    st16((c.r[21].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1430u | kUnwind; return; } goto L_004D1430; } }
L_004D14F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004D1540:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D1938; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D1938; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004D1938; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 108u));
    c.budget -= 1;
L_004D15A0:
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D15E8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D15E8; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 552u));
    set32(c.r[4], 0u + 61u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], c.r[6].w[0] + 544u);  if (t) { goto L_004D1948; } }
    c.r[4].d[0] = ld8((c.r[6].w[0] + 736u));
    c.r[4].d[0] = c.r[4].d[0] << 58;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D1948; } }
L_004D15E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004D1618; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D1618; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D1618:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004D1E20; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 108u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 5u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], 0u + 6u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 84u));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004D186C; } }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D185C; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D176C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004D1748; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004D16A8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004D1E20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004D1E20; } }
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004D1E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (t) { goto L_004D1928; } }
L_004D16A8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 108u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D172C; } }
    set32(c.r[19], ld32((c.r[28].w[0] - 28268u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
L_004D16C8:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D1700; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D1700; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], ld32((c.r[19].w[0] + 200u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D16FCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 60u, depth + 1u); else { c.pc = 0x002D8C00u; return; } if (c.pc != 0x004D16FCu) [[unlikely]] return; }
L_004D16FC:
    c.budget -= 1;
L_004D1700:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[18].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D16C8u | kUnwind; return; } goto L_004D16C8; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 108u));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_004D172C:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D173Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_00B5(c, 182u, depth + 1u); else { c.pc = 0x004D7A70u; return; } if (c.pc != 0x004D173Cu) [[unlikely]] return; }
L_004D173C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004D1930; } }
L_004D1748:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28280u));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004D19B0; } }
L_004D1758:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004D1930; } }
L_004D176C:
    set32(c.r[7], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[4].d[0] = c.r[4].d[0] | 13107ull;
    c.f[2] = c.r[4].w[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 762u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 752u)));
    c.f[0] = c.r[4].w[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 82u)));
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D1A78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D17F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D17F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 9u);  if (t) { goto L_004D17F8; } }
L_004D17F4:
    set32(c.r[3], 0u + 12u);
    c.budget -= 1;
L_004D17F8:
    set32(c.r[6], ld32((c.r[28].w[0] - 28268u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_004D1804:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004D1838; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 530u));
    c.r[4].d[0] = c.r[4].d[0] << 62;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D1838; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D1838; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_004D1838:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[8].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1804u | kUnwind; return; } goto L_004D1804; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004D1A80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004D1930; } }
L_004D185C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1864u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 79u, depth + 1u); else { c.pc = 0x004D1230u; return; } if (c.pc != 0x004D1864u) [[unlikely]] return; }
L_004D1864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D1930; } }
L_004D186C:
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D1914; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D1914; } }
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[20] = ld32((c.r[3].w[0] + 104u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D18C4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004D18C4u) [[unlikely]] return; }
L_004D18C4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D18D0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004D18D0u) [[unlikely]] return; }
L_004D18D0:
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
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D1914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D190Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 74u, depth + 1u); else { c.pc = 0x004D10D0u; return; } if (c.pc != 0x004D190Cu) [[unlikely]] return; }
L_004D190C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D1930; } }
L_004D1914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D191Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 79u, depth + 1u); else { c.pc = 0x004D1230u; return; } if (c.pc != 0x004D191Cu) [[unlikely]] return; }
L_004D191C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D1930; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_004D1928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1930u);  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x004D1930u) [[unlikely]] return; }
L_004D1930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004D1E24; } }
L_004D1938:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D15E8u | kUnwind; return; } goto L_004D15E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 108u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D15A0u | kUnwind; return; } goto L_004D15A0; } }
L_004D1948:
    c.r[12].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[10], 0u - 3u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[8], 0u - 17u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[6], 0u - 2049u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], 0u - 5u);
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[3].w[0]));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0]));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 108u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D15E8u | kUnwind; return; } goto L_004D15E8; } }
L_004D19B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D19B8u); set32(c.r[4], ld32((c.r[28].w[0] - 28268u)));  if (depth < kMaxDepth) unit_00B6(c, 48u, depth + 1u); else { c.pc = 0x004D86B0u; return; } if (c.pc != 0x004D19B8u) [[unlikely]] return; }
L_004D19B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1758u | kUnwind; return; } goto L_004D1758; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D19D0u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_00B5(c, 193u, depth + 1u); else { c.pc = 0x004D7D00u; return; } if (c.pc != 0x004D19D0u) [[unlikely]] return; }
L_004D19D0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 87u));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D1A50; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D1A40; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D1A34; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D1A24; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D1A14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_004D1A64; } }
L_004D1A14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.f[0]);  if (t) { goto L_004D1A6C; } }
L_004D1A24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D1A68; } }
L_004D1A34:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D1A68; } }
L_004D1A40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D1A68; } }
L_004D1A50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D1A68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_004D1A64:
    c.f[0] = c.r[3].w[0];
    c.budget -= 1;
L_004D1A68:
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 1;
L_004D1A6C:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1930u | kUnwind; return; } goto L_004D1930; } }
L_004D1A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D17F8u | kUnwind; return; } goto L_004D17F8; } }
L_004D1A80:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[6].d[0] = c.r[3].d[0] << 48;
    set32(c.r[4], c.r[7].w[0] + 544u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1A9Cu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_00B5(c, 198u, depth + 1u); else { c.pc = 0x004D7D60u; return; } if (c.pc != 0x004D1A9Cu) [[unlikely]] return; }
L_004D1A9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D1DFC; } }
    set32(c.r[4], 0u + 9u);
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 87u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D1B3C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D1B2C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D1B20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D1B10; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D1B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_004D1B50; } }
L_004D1B00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.f[0]);  if (t) { goto L_004D1B58; } }
L_004D1B10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D1B54; } }
L_004D1B20:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D1B54; } }
L_004D1B2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D1B54; } }
L_004D1B3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D1B54; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_004D1B50:
    c.f[0] = c.r[3].w[0];
    c.budget -= 1;
L_004D1B54:
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.budget -= 1;
L_004D1B58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D1BD8; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_004D1B7C:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D1BC4; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004D1BC4; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D1BD8; } }
L_004D1BC4:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1B7Cu | kUnwind; return; } goto L_004D1B7C; } }
    c.budget -= 1;
L_004D1BD8:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_004D1BF8:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004D1C64; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D1E10; } }
L_004D1C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_004D1C9C; } }
L_004D1C64:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004D1C80; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004D1C80:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1BF8u | kUnwind; return; } goto L_004D1BF8; } }
    breakpoint(c, 0x004D1C90u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_004D1C9C:
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D1D28; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
L_004D1CCC:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D1D14; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004D1D14; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004D1D28; } }
L_004D1D14:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1CCCu | kUnwind; return; } goto L_004D1CCC; } }
    c.budget -= 1;
L_004D1D28:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 32ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_004D1D44:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004D1DB0; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 32u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004D1E18; } }
L_004D1DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_004D1DE4; } }
L_004D1DB0:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004D1DC8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D1DC8:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1D44u | kUnwind; return; } goto L_004D1D44; } }
    breakpoint(c, 0x004D1DD8u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 3;
L_004D1DE4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1930u | kUnwind; return; } goto L_004D1930; } }
L_004D1DFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1930u | kUnwind; return; } goto L_004D1930; } }
L_004D1E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1C5Cu | kUnwind; return; } goto L_004D1C5C; } }
L_004D1E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1DA8u | kUnwind; return; } goto L_004D1DA8; } }
L_004D1E20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004D1E24:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004D1E50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 8576u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 8912u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[11], 0u + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] - 26496u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8896u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8880u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 8752u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8736u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 30924u));
    st32((c.r[4].w[0] + 32u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 30920u));
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 28280u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[28].w[0] - 28280u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 72u), c.r[9].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] - 11964u), c.f[1]);
    set32(c.r[4], c.r[4].w[0] - 11984u);
    c.budget -= 57;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1F34u); st32((c.r[2].w[0] - 11960u), c.f[0]);  if (depth < kMaxDepth) unit_0095(c, 34u, depth + 1u); else { c.pc = 0x004546E0u; return; } if (c.pc != 0x004D1F34u) [[unlikely]] return; }
L_004D1F34:
    c.f[1] = ld32((c.r[28].w[0] - 30916u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[28].w[0] - 30912u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[4].w[0] - 11984u);
    st32((c.r[2].w[0] - 11928u), 0u);
    st32((c.r[5].w[0] - 11948u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D1F60u); st32((c.r[3].w[0] - 11944u), c.f[0]);  if (depth < kMaxDepth) unit_0095(c, 36u, depth + 1u); else { c.pc = 0x00454740u; return; } if (c.pc != 0x004D1F60u) [[unlikely]] return; }
L_004D1F60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 11940u), c.r[3].w[0]);
    set32(c.r[7], 0u - 129u);
    set32(c.r[10], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[8], c.r[2].w[0] << 7);
    set32(c.r[5], 0u - 3u);
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[3], 0u - 5u);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[9].d[0] = ld8((c.r[10].w[0] + 525u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[10].w[0] + 525u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[18].w[0] + 108u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 108u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 28268u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 200u)));
    c.budget -= 28;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D211C; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 108u));
    set32(c.r[4], 0u - 2u);
    set32(c.r[3], 0u + 18u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 88u), 0u);
    st32((c.r[18].w[0] + 92u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    st32((c.r[18].w[0] + 100u), 0u);
    st32((c.r[18].w[0] + 104u), 0u);
    c.budget -= 12;
L_004D2000:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 84u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[7], 0u - 9u);
    set32(c.r[8], c.r[2].w[0] << 3);
    set32(c.r[5], 0u - 17u);
    set32(c.r[6], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    set32(c.r[2], 0u + 4u);
    st8((c.r[18].w[0] + 86u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[18].w[0] + 85u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[18].w[0] + 109u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[9], ld32((c.r[9].w[0] + 752u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[9].w[0] + 82u)));
    st32((c.r[18].w[0] + 76u), c.r[9].w[0]);
    st8((c.r[18].w[0] + 87u), static_cast<std::uint8_t>(0u));
    c.r[9].d[0] = ld8((c.r[18].w[0] + 108u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[18].w[0] + 108u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 108u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 87u));
    c.budget -= 32;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D20F0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D20E0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D20D4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004D20C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D20B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_004D2100; } }
L_004D20B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 64u), c.f[0]);  if (t) { goto L_004D2108; } }
L_004D20C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D2104; } }
L_004D20D4:
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D2104; } }
L_004D20E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D2104; } }
L_004D20F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D2104; } }
L_004D2100:
    c.f[0] = c.r[2].w[0];
    c.budget -= 1;
L_004D2104:
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.budget -= 1;
L_004D2108:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 84u)));
    st8((c.r[18].w[0] + 85u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_004D2200; } }
L_004D211C:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 108u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 84u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_004D2140:
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2154u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D2154u) [[unlikely]] return; }
L_004D2154:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = c.r[17].d[0] << 56;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] - 21568u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2174u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x004D2174u) [[unlikely]] return; }
L_004D2174:
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[19], c.r[2].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2190u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x002BD2E0u; return; } if (c.pc != 0x004D2190u) [[unlikely]] return; }
L_004D2190:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 108u));
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 62;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2140u | kUnwind; return; } goto L_004D2140; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], 0u - 513u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(512ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 29166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2000u | kUnwind; return; } goto L_004D2000; } }
L_004D2200:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004D2220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_004D2230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 108u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D2274; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D226C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D226Cu);  if (depth < kMaxDepth) unit_0020(c, 40u, depth + 1u); else { c.pc = 0x00280530u; return; } if (c.pc != 0x004D226Cu) [[unlikely]] return; }
L_004D226C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_004D229C; } }
L_004D2274:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[6].d[0] = ld16((c.r[3].w[0] + 29166u));
    set32(c.r[5], c.r[4].w[0] << 9);
    set32(c.r[4], 0u - 513u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 29166u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D226Cu | kUnwind; return; } goto L_004D226C; } }
L_004D229C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D22B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004D1540u | kUnwind; return; } goto L_004D1540; }
L_004D22C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004CE030u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 131u, depth); }
L_004D22D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004CEFC0u | kUnwind; return; } [[clang::musttail]] return unit_00B3(c, 187u, depth); }
L_004D22E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004D23A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 26496u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28280u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[28].w[0] - 28280u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 108u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D2380; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 28268u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_004D2334:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D2368; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D2368; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 762u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2368u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 60u, depth + 1u); else { c.pc = 0x002D8C00u; return; } if (c.pc != 0x004D2368u) [[unlikely]] return; }
L_004D2368:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[18].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2334u | kUnwind; return; } goto L_004D2334; } }
    c.budget -= 1;
L_004D2380:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004D23A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_004D23A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004D23A4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D23D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D23E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.f[7] = ld32((c.r[29].w[0] + 44u));  if (t) { goto L_004D2570; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2570; } }
    c.f[6] = ld32((c.r[16].w[0] + 80u));
    set32(c.r[2], c.r[29].w[0] + 52u);
    c.f[4] = ld32((c.r[16].w[0] + 68u));
    c.f[3] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[6]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[6]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[6]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 60u), c.f[7]);
    st32((c.r[2].w[0]), c.f[4]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D2548; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D2498; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 4;
L_004D2498:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D24ACu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007A(c, 314u, depth + 1u); else { c.pc = 0x003EB580u; return; } if (c.pc != 0x004D24ACu) [[unlikely]] return; }
L_004D24AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D255C; } }
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D2570; } }
    c.r[7].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 3u);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[5], 0u - 2u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[4].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    ld128((c.r[16].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 96u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 97u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 30;
L_004D2540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004D2574; } }
L_004D2548:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2498u | kUnwind; return; } goto L_004D2498; } }
L_004D255C:
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2540u | kUnwind; return; } goto L_004D2540; } }
L_004D2570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004D2574:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004D2580:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004D25CC; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004D25BC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D263C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004D29A0; } }
L_004D25CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D25F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D25F4u) [[unlikely]] return; }
L_004D25F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D262C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2634; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D25BCu | kUnwind; return; } goto L_004D25BC; } }
L_004D262C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D25BCu | kUnwind; return; } goto L_004D25BC; } }
L_004D2634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D25BCu | kUnwind; return; } goto L_004D25BC; } }
L_004D263C:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2658u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D2658u) [[unlikely]] return; }
L_004D2658:
    c.f[4] = ld32((c.r[2].w[0]));
    set32(c.r[19], c.r[29].w[0] + 132u);
    c.f[3] = ld32((c.r[18].w[0]));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[29].w[0] + 144u), c.f[4]);
    c.f[4] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 148u), c.f[4]);
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 152u), c.f[4]);
    c.f[4] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 156u), c.f[4]);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 128u), c.f[3]);
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[19].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D26C4u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_007A(c, 316u, depth + 1u); else { c.pc = 0x003EB660u; return; } if (c.pc != 0x004D26C4u) [[unlikely]] return; }
L_004D26C4:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_004D26F0; } }
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.f[0]);  if (t) { goto L_004D2700; } }
L_004D26F0:
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.budget -= 4;
L_004D2700:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D271Cu); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_007A(c, 316u, depth + 1u); else { c.pc = 0x003EB660u; return; } if (c.pc != 0x004D271Cu) [[unlikely]] return; }
L_004D271C:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004D2910; } }
L_004D2728:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_004D295C; } }
L_004D2730:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004D2858; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D299C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004D296C; } }
L_004D2768:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.f[1] = ld32((c.r[17].w[0] + 4u));  if (t) { goto L_004D27B0; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 97u));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004D27B0; } }
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    ld128((c.r[4].w[0] + 96u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 64u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.budget -= 12;
L_004D27B0:
    c.r[7].d[0] = ld8((c.r[17].w[0] + 96u));
    set32(c.r[5], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 96u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 100u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.f[1] = ld32((c.r[17].w[0] + 100u));
    c.f[2] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = ld32((c.r[4].w[0] + 248u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 240u);  if (t) { goto L_004D281C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_004D2830; } }
L_004D281C:
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D2830; } }
    c.f[1] = c.f[0];
    c.budget -= 1;
L_004D2830:
    st32((c.r[4].w[0] + 116u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 112u), c.f[0]);  if (t) { goto L_004D2908; } }
L_004D2858:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004D299C; } }
    c.r[7].d[0] = ld8((c.r[17].w[0] + 96u));
    set32(c.r[5], 0u - 5u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.f[2] = ld32((c.r[29].w[0] + 116u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[3], 0u - 9u);
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 96u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.f[0] = ld32((c.r[4].w[0] + 248u));
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 240u);  if (t) { goto L_004D28C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[0];  if (t) { goto L_004D28DC; } }
L_004D28C8:
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D28DC; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_004D28DC:
    st32((c.r[17].w[0] + 116u), c.f[4]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 248u));
    c.f[1] = ld32((c.r[3].w[0] + 240u));
    c.f[3] = ld32((c.r[3].w[0] + 276u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[3].w[0] + 112u), c.f[0]);
    st32((c.r[3].w[0] + 116u), c.f[4]);
    c.budget -= 11;
L_004D2908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D299C; } }
L_004D2910:
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2920u); set32(c.r[6], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_0029(c, 178u, depth + 1u); else { c.pc = 0x002A63A0u; return; } if (c.pc != 0x004D2920u) [[unlikely]] return; }
L_004D2920:
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2728u | kUnwind; return; } goto L_004D2728; } }
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2728u | kUnwind; return; } goto L_004D2728; } }
L_004D295C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_004D299C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2730u | kUnwind; return; } goto L_004D2730; } }
L_004D296C:
    c.f[1] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2768u | kUnwind; return; } goto L_004D2768; } }
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D299C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2768u | kUnwind; return; } goto L_004D2768; } }
L_004D299C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004D29A0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004D29C0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 44u));
    c.f[22] = ld32((c.r[29].w[0] + 124u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_004D2E88; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] - 21488u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x004D0000u < 16384u) { entry = entries_00B4[(t - 0x004D0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004D2A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2A28u);  if (depth < kMaxDepth) unit_00B4(c, 134u, depth + 1u); else { c.pc = 0x004D2580u; return; } if (c.pc != 0x004D2A28u) [[unlikely]] return; }
L_004D2A28:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004D2C94; } }
L_004D2A34:
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2A5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D2A5Cu) [[unlikely]] return; }
L_004D2A5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D2C9C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2CA4; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2CA4; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004D2A90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2CAC; } }
L_004D2A98:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004D2C94; } }
L_004D2AA4:
    c.f[3] = ld32((c.r[20].w[0] + 16u));
    c.f[2] = ld32((c.r[20].w[0] + 128u));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D2E4C; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D2E4C; } }
    c.f[2] = ld32((c.r[20].w[0] + 132u));
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D2E54; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D2E54; } }
    c.f[2] = ld32((c.r[20].w[0] + 136u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D2E5C; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D2E5C; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004D2B24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2E64; } }
L_004D2B2C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 148u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004D2B34:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004D2C94; } }
L_004D2B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2B48u);  if (depth < kMaxDepth) unit_00B4(c, 130u, depth + 1u); else { c.pc = 0x004D23E0u; return; } if (c.pc != 0x004D2B48u) [[unlikely]] return; }
L_004D2B48:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 96u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2BAC; } }
    c.r[3].d[0] = c.r[5].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2BAC; } }
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u - 5u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 96u));
    c.r[4].d[0] = c.r[4].d[0] << 60;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 116u), 0u);
    c.budget -= 16;
L_004D2BAC:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 96u));
    c.r[3].d[0] = c.r[5].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2C18; } }
    c.r[3].d[0] = c.r[5].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2C18; } }
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 5);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u - 17u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 96u));
    c.r[4].d[0] = c.r[4].d[0] << 58;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 124u), 0u);
    st32((c.r[20].w[0] + 120u), 0u);
    st32((c.r[20].w[0] + 36u), 0u);
    c.budget -= 18;
L_004D2C18:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 96u));
    c.r[3].d[0] = c.r[5].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2C90; } }
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D2C90; } }
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 7);
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u - 65u);
    c.r[5].d[0] = ld8((c.r[20].w[0] + 96u));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[20].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 144u), c.f[0]);
    st8((c.r[20].w[0] + 148u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 40u), 0u);
    c.budget -= 21;
L_004D2C90:
    st8((c.r[20].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004D2C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_004D2E8C; } }
L_004D2C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2A90u | kUnwind; return; } goto L_004D2A90; } }
L_004D2CA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2A90u | kUnwind; return; } goto L_004D2A90; } }
L_004D2CAC:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2CC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D2CC8u) [[unlikely]] return; }
L_004D2CC8:
    c.f[3] = ld32((c.r[2].w[0]));
    set32(c.r[18], c.r[29].w[0] + 196u);
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[17], c.r[29].w[0] + 200u);
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[6], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 208u), c.f[3]);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 212u), c.f[3]);
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 216u), c.f[3]);
    c.f[3] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 220u), c.f[3]);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    c.f[21] = ld32((c.r[2].w[0] + 100u));
    c.f[20] = ld32((c.r[2].w[0] + 104u));
    c.f[3] = ld32((c.r[2].w[0] + 96u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    st32((c.r[18].w[0]), c.f[1]);
    c.f[23] = c.f[3] ^ fp::kSign;
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[23]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2D44u); set32(c.r[7], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_007A(c, 318u, depth + 1u); else { c.pc = 0x003EB840u; return; } if (c.pc != 0x004D2D44u) [[unlikely]] return; }
L_004D2D44:
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[6], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 204u), c.f[22]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[21]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[23]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[18].w[0]), c.f[2]);
    st32((c.r[17].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2D8Cu); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_007A(c, 318u, depth + 1u); else { c.pc = 0x003EB840u; return; } if (c.pc != 0x004D2D8Cu) [[unlikely]] return; }
L_004D2D8C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004D2DF0; } }
L_004D2D94:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004D2E00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2A98u | kUnwind; return; } goto L_004D2A98; } }
    c.r[9].d[0] = ld8((c.r[20].w[0] + 96u));
    set32(c.r[7], 0u - 17u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    set32(c.r[6], c.r[3].w[0] << 5);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[5], 0u - 33u);
    c.r[4].d[0] = c.r[4].d[0] | 39322ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[20].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[20].w[0] + 96u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[20].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[20].w[0] + 120u), c.r[4].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 124u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2A98u | kUnwind; return; } goto L_004D2A98; } }
L_004D2DF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2A98u | kUnwind; return; } goto L_004D2A98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2D94u | kUnwind; return; } goto L_004D2D94; } }
L_004D2E00:
    c.r[9].d[0] = ld8((c.r[20].w[0] + 96u));
    set32(c.r[7], 0u - 17u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBE190000u);
    set32(c.r[6], c.r[3].w[0] << 5);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[5], 0u - 33u);
    c.r[4].d[0] = c.r[4].d[0] | 39322ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[20].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[20].w[0] + 96u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[20].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[20].w[0] + 120u), c.r[4].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 124u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2A98u | kUnwind; return; } goto L_004D2A98; } }
L_004D2E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2B24u | kUnwind; return; } goto L_004D2B24; } }
L_004D2E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2B24u | kUnwind; return; } goto L_004D2B24; } }
L_004D2E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2B24u | kUnwind; return; } goto L_004D2B24; } }
L_004D2E64:
    set32(c.r[2], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2E78u); set32(c.r[6], c.r[20].w[0] + 128u);  if (depth < kMaxDepth) unit_007A(c, 314u, depth + 1u); else { c.pc = 0x003EB580u; return; } if (c.pc != 0x004D2E78u) [[unlikely]] return; }
L_004D2E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2B2Cu | kUnwind; return; } goto L_004D2B2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 148u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D2B34u | kUnwind; return; } goto L_004D2B34; } }
L_004D2E88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_004D2E8C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_004D2EC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[8] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[6] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[2] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.f[12] = ld32((c.r[4].w[0] + 12u));
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[9] = ld32((c.r[2].w[0] + 240u));
    c.f[10] = ld32((c.r[2].w[0] + 248u));
    c.f[11] = ld32((c.r[2].w[0] + 276u));
    c.f[3] = ld32((c.r[2].w[0] + 96u));
    c.f[7] = ld32((c.r[2].w[0] + 100u));
    c.f[5] = ld32((c.r[2].w[0] + 104u));
    c.facc = fp::ee::add(c.fcr31, c.f[8], c.f[9]);
    c.f[8] = fp::ee::sub(c.fcr31, c.f[12], c.f[10]);
    c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[8]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[8]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[8]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[8]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[6]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[7], c.f[6]);
    st32((c.r[4].w[0] + 128u), c.f[2]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[4].w[0] + 132u), c.f[6]);
    st32((c.r[4].w[0] + 136u), c.f[4]);
    st32((c.r[4].w[0] + 140u), c.f[1]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D2F54u); st32((c.r[4].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_00B4(c, 144u, depth + 1u); else { c.pc = 0x004D29C0u; return; } if (c.pc != 0x004D2F54u) [[unlikely]] return; }
L_004D2F54:
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 10u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D2F70; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 11u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004D2F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D31F8; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 96u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D3004; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D3004; } }
    c.f[3] = ld32((c.r[18].w[0] + 84u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[4] = ld32((c.r[18].w[0] + 32u));
    c.f[5] = ld32((c.r[18].w[0] + 104u));
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004D2FC8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D2FE4; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004D2FE4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004D2FE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D3004; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 96u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_004D3004:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 96u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D3144; } }
    c.r[2].d[0] = c.r[3].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D3144; } }
    set32(c.r[2], 0u - 3u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[5].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[4].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 96u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.f[6] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[4] = ld32((c.r[17].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 100u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    st32((c.r[18].w[0] + 112u), 0u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 97u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    c.f[8] = ld32((c.r[2].w[0] + 112u));
    c.f[7] = ld32((c.r[2].w[0] + 96u));
    c.f[3] = ld32((c.r[2].w[0] + 116u));
    c.f[5] = ld32((c.r[2].w[0] + 104u));
    c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[8]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[7], c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[8]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 40;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);  if (t) { goto L_004D3258; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[6], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D3258; } }
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D3260; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D3260; } }
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D3268; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D3268; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004D3124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D3144; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 96u));
    set32(c.r[2], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_004D3144:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 96u));
    c.r[2].d[0] = c.r[3].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004D3288; } }
    c.r[2].d[0] = c.r[3].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D3288; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D317Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D317Cu) [[unlikely]] return; }
L_004D317C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D3270; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D31A0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004D31A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004D3270; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[18].w[0] + 124u));
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 124u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 120u));
    st32((c.r[18].w[0] + 36u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D3288; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 96u));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004D3288; } }
L_004D31F8:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 96u));
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 3u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], 0u - 2u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[4].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 96u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 100u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    st32((c.r[18].w[0] + 112u), 0u);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 97u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3004u | kUnwind; return; } goto L_004D3004; } }
L_004D3258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3124u | kUnwind; return; } goto L_004D3124; } }
L_004D3260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3124u | kUnwind; return; } goto L_004D3124; } }
L_004D3268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3124u | kUnwind; return; } goto L_004D3124; } }
L_004D3270:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 96u));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_004D3288:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3298u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 129u, depth + 1u); else { c.pc = 0x004D23D0u; return; } if (c.pc != 0x004D3298u) [[unlikely]] return; }
L_004D3298:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    st32((c.r[18].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[18].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[18].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004D32F0:
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.r[15].d[0] = 0ull & 1ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 97u));
    set32(c.r[24], 0u - 2u);
    set32(c.r[14], c.r[15].w[0] << 1);
    set32(c.r[12], c.r[15].w[0] << 3);
    set32(c.r[9], c.r[15].w[0] << 5);
    set32(c.r[6], c.r[15].w[0] << 7);
    set32(c.r[13], 0u - 3u);
    set32(c.r[11], 0u - 9u);
    set32(c.r[10], 0u - 5u);
    set32(c.r[8], 0u - 33u);
    set32(c.r[7], 0u - 17u);
    set32(c.r[5], 0u - 129u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[15].d[0] = c.r[3].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[3], 0u - 65u);
    st32((c.r[4].w[0]), 0u);
    c.r[15].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = c.r[13].d[0] << 62;
    c.r[14].d[0] = c.r[13].d[0] >> 63;
    c.r[13].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[14].d[0] = c.r[14].d[0] & 1ull;
    c.r[13].d[0] = c.r[13].d[0] & c.r[24].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[11].d[0] = c.r[11].d[0] << 60;
    c.r[11].d[0] = c.r[11].d[0] >> 63;
    c.r[11].d[0] = c.r[11].d[0] & 1ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 116u), 0u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[8].d[0] = c.r[8].d[0] << 58;
    c.r[8].d[0] = c.r[8].d[0] >> 63;
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    set32(c.r[8], c.r[8].w[0] << 4);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 124u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], c.r[5].w[0] << 6);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 144u), c.f[0]);
    st8((c.r[4].w[0] + 148u), static_cast<std::uint8_t>(0u));
    c.budget -= 81;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), 0u);  c.pc = t; return; }
L_004D3440:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[25].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 64u), c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    st32((c.r[4].w[0] + 68u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    st32((c.r[4].w[0] + 72u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st32((c.r[4].w[0] + 80u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 84u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[24], 0u - 2u);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[13], 0u - 3u);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[14], c.r[25].w[0] << 1);
    st32((c.r[4].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[11], 0u - 9u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[12], c.r[25].w[0] << 3);
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], 0u - 5u);
    c.r[15].d[0] = ld8((c.r[4].w[0] + 97u));
    set32(c.r[8], 0u - 33u);
    set32(c.r[9], c.r[25].w[0] << 5);
    set32(c.r[7], 0u - 17u);
    set32(c.r[5], 0u - 129u);
    set32(c.r[6], c.r[25].w[0] << 7);
    set32(c.r[3], 0u - 65u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].d[0] & c.r[24].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[25].d[0];
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st32((c.r[4].w[0]), 0u);
    c.r[15].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = c.r[13].d[0] << 62;
    c.r[14].d[0] = c.r[13].d[0] >> 63;
    c.r[13].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[14].d[0] = c.r[14].d[0] & 1ull;
    c.r[13].d[0] = c.r[13].d[0] & c.r[24].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 112u), 0u);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[12].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[11].d[0] = c.r[11].d[0] << 60;
    c.r[11].d[0] = c.r[11].d[0] >> 63;
    c.r[11].d[0] = c.r[11].d[0] & 1ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 116u), 0u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[8].d[0] = c.r[8].d[0] << 58;
    c.r[8].d[0] = c.r[8].d[0] >> 63;
    c.r[8].d[0] = c.r[8].d[0] & 1ull;
    set32(c.r[8], c.r[8].w[0] << 4);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 124u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    set32(c.r[5], c.r[5].w[0] << 6);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 144u), c.f[0]);
    st8((c.r[4].w[0] + 148u), static_cast<std::uint8_t>(0u));
    c.budget -= 102;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), 0u);  c.pc = t; return; }
L_004D35E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004D3644; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 26480u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004D362C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004D362C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004D362C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004D3644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3644u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004D3644u) [[unlikely]] return; }
L_004D3644:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D3660:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D3670:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D36A4u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 55u, depth + 1u); else { c.pc = 0x004A4B00u; return; } if (c.pc != 0x004D36A4u) [[unlikely]] return; }
L_004D36A4:
    set32(c.r[9], ld32((c.r[28].w[0] - 28268u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], 0u + 100u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0] + 200u)));
    st32((c.r[29].w[0] + 84u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D36E4u); st32((c.r[29].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0029(c, 190u, depth + 1u); else { c.pc = 0x002A65C0u; return; } if (c.pc != 0x004D36E4u) [[unlikely]] return; }
L_004D36E4:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], ld32((c.r[28].w[0] - 28268u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D372C; } }
L_004D3700:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 40u);
    st8((c.r[16].w[0] + 252u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 248u), c.r[4].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004D3754; } }
L_004D3720:
    set32(c.r[3], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 1;
L_004D3724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 252u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004D37C0; } }
L_004D372C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 200u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3748u); set32(c.r[4], c.r[3].w[0] + 304u);  if (depth < kMaxDepth) unit_00B6(c, 153u, depth + 1u); else { c.pc = 0x004DA400u; return; } if (c.pc != 0x004D3748u) [[unlikely]] return; }
L_004D3748:
    st32((c.r[16].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 248u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3700u | kUnwind; return; } goto L_004D3700; } }
L_004D3754:
    set32(c.r[2], 0u + 21216u);
    set32(c.r[18], ld32((c.r[16].w[0] + 248u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 312u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_004D3770:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3788u); set32(c.r[19], c.r[2].w[0] + 532u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004D3788u) [[unlikely]] return; }
L_004D3788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3720u | kUnwind; return; } goto L_004D3720; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D37A8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 422u, depth + 1u); else { c.pc = 0x003F7C90u; return; } if (c.pc != 0x004D37A8u) [[unlikely]] return; }
L_004D37A8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3770u | kUnwind; return; } goto L_004D3770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 28268u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3724u | kUnwind; return; } goto L_004D3724; } }
L_004D37C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004D37E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004D37F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004D3800:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.f[3] = ld32((c.r[4].w[0] + 36u));
    c.f[5] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    c.f[6] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = ld32((c.r[3].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D3A84; } }
    c.f[1] = ld32((c.r[28].w[0] - 30900u));
    set32(c.r[25], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[28].w[0] - 30896u));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.f[20] = ld32((c.r[28].w[0] - 30900u));
    c.f[21] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3894u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004D3894u) [[unlikely]] return; }
L_004D3894:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[10] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[9] = ld32((c.r[2].w[0] + 8u));
    c.f[8] = ld32((c.r[28].w[0] - 32272u));
    c.f[7] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[10]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 40u));
    c.f[6] = ld32((c.r[3].w[0] + 112u));
    c.f[5] = ld32((c.r[3].w[0] + 40u));
    c.f[4] = ld32((c.r[3].w[0] + 120u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[9]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[8]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[8]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[10], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    c.f[12] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[9], c.f[1]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3910u); c.f[13] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x004D3910u) [[unlikely]] return; }
L_004D3910:
    c.f[5] = ld32((c.r[16].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[5].d[0] = 0ull | 0ull;
    c.f[1] = c.r[2].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[4] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    set32(c.r[2], c.f[3]);
    c.f[1] = 0u;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.f[1] ^ fp::kSign;
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[4]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 32;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D3BB8; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D39A0; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_004D39A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[6].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[2].d[0] | 63875ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.f[3] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    set32(c.r[3], c.f[2]);
    c.f[0] = 0u;
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[3] = c.r[5].w[0];
    c.f[0] = ld32((c.r[28].w[0] - 30900u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[3]);
    st32((c.r[16].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[20] = ld32((c.r[16].w[0] + 48u));
    c.f[21] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3A24u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004D3A24u) [[unlikely]] return; }
L_004D3A24:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3A30u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004D3A30u) [[unlikely]] return; }
L_004D3A30:
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[4] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[20]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 48u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3A7Cu); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00B4(c, 213u, depth + 1u); else { c.pc = 0x004D3F20u; return; } if (c.pc != 0x004D3A7Cu) [[unlikely]] return; }
L_004D3A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004D3BC4; } }
L_004D3A84:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3A9Cu); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 55u, depth + 1u); else { c.pc = 0x004A4B00u; return; } if (c.pc != 0x004D3A9Cu) [[unlikely]] return; }
L_004D3A9C:
    set32(c.r[9], ld32((c.r[28].w[0] - 28268u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], 0u + 100u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0] + 200u)));
    st32((c.r[29].w[0] + 100u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3ADCu); st32((c.r[29].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0029(c, 190u, depth + 1u); else { c.pc = 0x002A65C0u; return; } if (c.pc != 0x004D3ADCu) [[unlikely]] return; }
L_004D3ADC:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], ld32((c.r[28].w[0] - 28268u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004D3B24; } }
L_004D3AF8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 40u);
    st8((c.r[16].w[0] + 252u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 248u), c.r[4].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004D3B4C; } }
L_004D3B18:
    set32(c.r[3], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 1;
L_004D3B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 252u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004D3BC0; } }
L_004D3B24:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 200u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3B40u); set32(c.r[4], c.r[3].w[0] + 304u);  if (depth < kMaxDepth) unit_00B6(c, 153u, depth + 1u); else { c.pc = 0x004DA400u; return; } if (c.pc != 0x004D3B40u) [[unlikely]] return; }
L_004D3B40:
    st32((c.r[16].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 248u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3AF8u | kUnwind; return; } goto L_004D3AF8; } }
L_004D3B4C:
    set32(c.r[2], 0u + 21216u);
    set32(c.r[18], ld32((c.r[16].w[0] + 248u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 312u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_004D3B68:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 532u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3B80u); set32(c.r[19], c.r[2].w[0] + 532u);  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x004D3B80u) [[unlikely]] return; }
L_004D3B80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3B18u | kUnwind; return; } goto L_004D3B18; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3BA0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 422u, depth + 1u); else { c.pc = 0x003F7C90u; return; } if (c.pc != 0x004D3BA0u) [[unlikely]] return; }
L_004D3BA0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3B68u | kUnwind; return; } goto L_004D3B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 28268u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3B1Cu | kUnwind; return; } goto L_004D3B1C; } }
L_004D3BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = c.f[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D39A0u | kUnwind; return; } goto L_004D39A0; } }
L_004D3BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004D3BC4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004D3BF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[28].w[0] - 30904u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 52u), c.f[1]);  if (t) { goto L_004D3DE0; } }
L_004D3C28:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 60u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D3DEC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1064u));
    c.f[1] = ld32((c.r[3].w[0] - 20416u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 864u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D3C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3C70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004D3C70u) [[unlikely]] return; }
L_004D3C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1070u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004D3E40; } }
L_004D3C78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = c.r[4].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_004D3DD8; } }
    st16((c.r[16].w[0] + 1066u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1069u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004D3CC8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1064u));
    c.r[1].d[0] = c.r[3].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004D3CC8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 1066u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004D3CC8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1066u));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[21] = ld32((c.r[4].w[0] + 864u));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 64u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004D3DD8; } }
L_004D3CEC:
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D3DB8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[4] = ld32((c.r[5].w[0] + 36u));
    c.f[6] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[5].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004D3DB8; } }
    c.f[2] = fp::ee::sub(c.fcr31, c.f[21], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D3D78; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_004D3D94; } }
L_004D3D78:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 7;
L_004D3D94:
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.f[12] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[2], ld32((c.r[28].w[0] - 28268u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 200u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3DB4u); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_0099(c, 183u, depth + 1u); else { c.pc = 0x00466BA0u; return; } if (c.pc != 0x004D3DB4u) [[unlikely]] return; }
L_004D3DB4:
    c.budget -= 1;
L_004D3DB8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1066u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1064u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004D3DFC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004D3DD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3CECu | kUnwind; return; } goto L_004D3CEC; } }
L_004D3DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004D3E40; } }
L_004D3DE0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3C28u | kUnwind; return; } goto L_004D3C28; } }
L_004D3DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3DF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 185u, depth + 1u); else { c.pc = 0x004D3800u; return; } if (c.pc != 0x004D3DF4u) [[unlikely]] return; }
L_004D3DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3C78u | kUnwind; return; } goto L_004D3C78; } }
L_004D3DFC:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 1066u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1066u));
    c.r[1].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004D3E38; } }
    c.budget -= 1;
L_004D3E18:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 1066u));
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[21] = ld32((c.r[4].w[0] + 864u));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3DD0u | kUnwind; return; } goto L_004D3DD0; } }
L_004D3E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1066u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3E18u | kUnwind; return; } goto L_004D3E18; } }
L_004D3E40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004D3E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28268u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004D3E7Cu); st32((c.r[2].w[0] + 208u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004D3E7Cu) [[unlikely]] return; }
L_004D3E7C:
    st8((c.r[16].w[0] + 1070u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004D3E90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
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
    set32(c.r[3], c.r[3].w[0] - 26480u);
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
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 33;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 1070u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004D3F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[13] = c.f[12];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1070u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004D3FB0; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1064u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0]));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 72u));
    c.f[4] = ld32((c.r[3].w[0] + 64u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004D3FD0; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004D3F84:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_004D3FF8; } }
L_004D3F8C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1068u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 1068u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1068u));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B5(c, 2u, depth); } }
L_004D3FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_00B5(c, 4u, depth); } }
L_004D3FB0:
    st8((c.r[16].w[0] + 1069u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    st16((c.r[16].w[0] + 1064u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 1070u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1068u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3F84u | kUnwind; return; } goto L_004D3F84; } }
L_004D3FD0:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st16((c.r[16].w[0] + 1064u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3F84u | kUnwind; return; } goto L_004D3F84; } }
    st16((c.r[16].w[0] + 1064u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1069u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004D3F84u | kUnwind; return; } goto L_004D3F84; } }
L_004D3FF8:
    c.r[4].d[0] = ld16((c.r[16].w[0] + 1064u));
    c.f[3] = ld32((c.r[5].w[0]));
    c.budget -= 2;
    [[clang::musttail]] return unit_00B5(c, 1u, depth);
}

}

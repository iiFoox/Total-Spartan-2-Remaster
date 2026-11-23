#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D3[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 7, 8, 9, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0,
    55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00D3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0054C000;
    case 2u: goto L_0054C050;
    case 3u: goto L_0054C0F0;
    case 4u: goto L_0054C190;
    case 5u: goto L_0054CBF0;
    case 6u: goto L_0054CC90;
    case 7u: goto L_0054CC94;
    case 8u: goto L_0054CC98;
    case 9u: goto L_0054CC9C;
    case 10u: goto L_0054CCA0;
    case 11u: goto L_0054CCA4;
    case 12u: goto L_0054D1A0;
    case 13u: goto L_0054D200;
    case 14u: goto L_0054D438;
    case 15u: goto L_0054D454;
    case 16u: goto L_0054D498;
    case 17u: goto L_0054D4D0;
    case 18u: goto L_0054D51C;
    case 19u: goto L_0054D544;
    case 20u: goto L_0054D568;
    case 21u: goto L_0054D570;
    case 22u: goto L_0054D588;
    case 23u: goto L_0054D5A4;
    case 24u: goto L_0054D5B0;
    case 25u: goto L_0054D5D0;
    case 26u: goto L_0054D5F8;
    case 27u: goto L_0054D640;
    case 28u: goto L_0054D680;
    case 29u: goto L_0054D6A4;
    case 30u: goto L_0054D6CC;
    case 31u: goto L_0054D6F0;
    case 32u: goto L_0054D780;
    case 33u: goto L_0054D800;
    case 34u: goto L_0054D860;
    case 35u: goto L_0054D8C0;
    case 36u: goto L_0054D8D0;
    case 37u: goto L_0054D9E4;
    case 38u: goto L_0054D9FC;
    case 39u: goto L_0054DA3C;
    case 40u: goto L_0054DA50;
    case 41u: goto L_0054DA60;
    case 42u: goto L_0054DA70;
    case 43u: goto L_0054DCE8;
    case 44u: goto L_0054DF70;
    case 45u: goto L_0054DFC4;
    case 46u: goto L_0054E010;
    case 47u: goto L_0054E080;
    case 48u: goto L_0054E0C0;
    case 49u: goto L_0054E0DC;
    case 50u: goto L_0054E198;
    case 51u: goto L_0054E1B4;
    case 52u: goto L_0054E1D0;
    case 53u: goto L_0054E1E0;
    case 54u: goto L_0054E1F0;
    case 55u: goto L_0054E200;
    case 56u: goto L_0054E210;
    case 57u: goto L_0054E220;
    case 58u: goto L_0054E230;
    case 59u: goto L_0054E240;
    case 60u: goto L_0054E250;
    case 61u: goto L_0054E260;
    case 62u: goto L_0054E270;
    case 63u: goto L_0054E330;
    case 64u: goto L_0054E384;
    case 65u: goto L_0054E3A0;
    case 66u: goto L_0054E3B0;
    case 67u: goto L_0054E3D0;
    case 68u: goto L_0054E420;
    case 69u: goto L_0054E448;
    case 70u: goto L_0054E484;
    case 71u: goto L_0054E4C8;
    case 72u: goto L_0054E5C4;
    case 73u: goto L_0054E5D8;
    case 74u: goto L_0054E5F0;
    case 75u: goto L_0054E618;
    case 76u: goto L_0054E638;
    case 77u: goto L_0054E658;
    case 78u: goto L_0054E7C8;
    case 79u: goto L_0054E7EC;
    case 80u: goto L_0054E804;
    case 81u: goto L_0054E994;
    case 82u: goto L_0054E9A0;
    case 83u: goto L_0054E9B0;
    case 84u: goto L_0054E9C4;
    case 85u: goto L_0054E9E0;
    case 86u: goto L_0054E9F0;
    case 87u: goto L_0054EAC4;
    case 88u: goto L_0054EAE0;
    case 89u: goto L_0054EB04;
    case 90u: goto L_0054EB1C;
    case 91u: goto L_0054EB30;
    case 92u: goto L_0054EC00;
    case 93u: goto L_0054EC90;
    case 94u: goto L_0054ED60;
    case 95u: goto L_0054ED98;
    case 96u: goto L_0054EDF0;
    case 97u: goto L_0054EF70;
    case 98u: goto L_0054EF90;
    case 99u: goto L_0054F020;
    case 100u: goto L_0054F0B0;
    case 101u: goto L_0054F140;
    case 102u: goto L_0054F1D0;
    case 103u: goto L_0054F260;
    case 104u: goto L_0054F2F0;
    case 105u: goto L_0054F3A0;
    case 106u: goto L_0054F3C0;
    case 107u: goto L_0054F3E0;
    case 108u: goto L_0054F3F0;
    default: bad_entry(c, 0x0054C000u); return;
    }
L_0054C000:
    c.budget -= 20;
L_0054C050:
    c.budget -= 40;
L_0054C0F0:
    c.budget -= 40;
L_0054C190:
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0054C000u < 16384u) { entry = entries_00D3[(t - 0x0054C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0054CBF0:
    c.budget -= 40;
L_0054CC90:
    c.r[27].d[0] = c.r[15].d[0] << 20;
    c.budget -= 1;
L_0054CC94:
    if (c.r[2].sd[0] >= c.r[15].sd[0]) trap(c, 0x0054CC94u);
    c.budget -= 1;
L_0054CC98:
    set32(c.r[27], c.r[2].w[0] + c.r[15].w[0]);
    c.budget -= 1;
L_0054CC9C:
    c.r[27].d[0] = c.hi.d[0];
    c.budget -= 1;
L_0054CCA0:
    c.pc = 0x0054CCA4u; syscall(c, 0x0054CCA0u); if (c.pc != 0x0054CCA4u) return;
    c.budget -= 1;
L_0054CCA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; set32(c.r[27], c.r[15].w[0] << (c.r[2].w[0] & 31u));  c.pc = t; if (t - 0x0054C000u < 16384u) { entry = entries_00D3[(t - 0x0054C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0054D1A0:
    c.budget -= 24;
L_0054D200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull | 65279ull;
    st16((c.r[2].w[0] - 29800u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[13], 0u + 48u);
    st16((c.r[2].w[0] - 29792u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[12], 0u + 57u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 95u);
    st16((c.r[2].w[0] - 29784u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[11], 0u + 65u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 160u);
    st16((c.r[2].w[0] - 29776u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[10], 0u + 97u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 8203u);
    st16((c.r[2].w[0] - 29768u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[9], 0u + 49u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = 0ull | 65534ull;
    st16((c.r[2].w[0] - 29760u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[8], 0u + 50u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 9u);
    st16((c.r[2].w[0] - 29752u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 51u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 13u);
    st16((c.r[2].w[0] - 29744u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], 0u + 52u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 10u);
    st16((c.r[2].w[0] - 29736u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 53u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 8232u);
    st16((c.r[2].w[0] - 29728u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 54u);
    st16((c.r[2].w[0] - 29720u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[15], 0u + 66u);
    set32(c.r[3], 0u + 8233u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[2].w[0] - 29712u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 46u);
    st16((c.r[2].w[0] - 29704u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[2].w[0] - 29696u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[2].w[0] - 29688u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 90u);
    st16((c.r[2].w[0] - 29680u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[2].w[0] - 29672u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 122u);
    st16((c.r[2].w[0] - 29664u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[2].w[0] - 29656u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 55u);
    st16((c.r[2].w[0] - 29648u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[14].w[0] - 29634u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] - 29646u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[2].w[0] - 29644u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[2].w[0] - 29642u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[2].w[0] - 29640u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[2].w[0] - 29638u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[2].w[0] - 29636u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], 0u + 56u);
    st16((c.r[14].w[0] - 29632u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[14].w[0] - 29630u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[14].w[0] - 29628u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[14], 0u + 67u);
    st16((c.r[11].w[0] - 29626u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[15], 0u + 68u);
    st16((c.r[11].w[0] - 29624u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[14], 0u + 69u);
    st16((c.r[11].w[0] - 29622u), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[15], 0u + 70u);
    st16((c.r[11].w[0] - 29620u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[14].w[0] - 29618u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st16((c.r[11].w[0] - 29616u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[14].w[0] - 29614u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[11].w[0] - 29612u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[9].w[0] - 29610u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[8].w[0] - 29608u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[7].w[0] - 29606u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[6].w[0] - 29604u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[5].w[0] - 29602u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] - 29600u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[3].w[0] - 29598u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st16((c.r[2].w[0] - 29596u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[3], 0u + 98u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 99u);
    st16((c.r[2].w[0] - 29594u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 100u);
    st16((c.r[2].w[0] - 29592u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 101u);
    st16((c.r[2].w[0] - 29590u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], 0u + 102u);
    st16((c.r[2].w[0] - 29588u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 16400u);
    c.budget -= 142;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D438u); st16((c.r[2].w[0] - 29586u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0054D438u) [[unlikely]] return; }
L_0054D438:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 11344u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D454u); set32(c.r[8], 0u + 8192u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0054D454u) [[unlikely]] return; }
L_0054D454:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], 0u + 64u);
    st32((c.r[3].w[0] - 14300u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 30684u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 14296u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 30680u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 14292u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 30676u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 14288u), 0u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(256ll);
    set32(c.r[3], c.r[3].w[0] + 3u);
    set32(c.r[2], c.r[3].w[0] >> 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D498u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0054D498u) [[unlikely]] return; }
L_0054D498:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 14304u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 14288u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 14292u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0054D500; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 5;
L_0054D4D0:
    set32(c.r[8], ld32((c.r[6].w[0] - 14288u)));
    set32(c.r[7], ld32((c.r[4].w[0] - 14304u)));
    set32(c.r[9], c.r[8].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] << 2);
    st32((c.r[5].w[0] - 14288u), c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[7].w[0]), 0u);
    set32(c.r[8], ld32((c.r[3].w[0] - 14288u)));
    set32(c.r[7], ld32((c.r[2].w[0] - 14292u)));
    c.r[7].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D4D0u | kUnwind; return; } goto L_0054D4D0; } }
L_0054D500:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14304u);
    set32(c.r[5], c.r[5].w[0] - 5200u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D51Cu); set32(c.r[6], c.r[6].w[0] - 14328u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054D51Cu) [[unlikely]] return; }
L_0054D51C:
    set32(c.r[3], 0u + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 14260u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 14256u), 0u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(256ll);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D544u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0054D544u) [[unlikely]] return; }
L_0054D544:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 14264u);
    st32((c.r[3].w[0] - 14264u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 9648u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D568u); set32(c.r[6], c.r[6].w[0] - 14280u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054D568u) [[unlikely]] return; }
L_0054D568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D570u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0054D570u) [[unlikely]] return; }
L_0054D570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0054D588; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D588u); set32(c.r[5], c.r[5].w[0] - 29576u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0054D588u) [[unlikely]] return; }
L_0054D588:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[28].w[0] - 30672u), c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 30668u);
    set32(c.r[5], c.r[5].w[0] - 1792u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D5A4u); set32(c.r[6], c.r[6].w[0] - 14248u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054D5A4u) [[unlikely]] return; }
L_0054D5A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054D5B0:
    set32(c.r[6], ld32((c.r[28].w[0] - 32748u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 32744u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 6032u), c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 5008u), c.r[5].w[0]);  c.pc = t; return; }
L_0054D5D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[28].w[0] - 30656u);
    set32(c.r[5], c.r[5].w[0] + 25792u);
    set32(c.r[6], c.r[6].w[0] - 3920u);
    st32((c.r[28].w[0] - 30656u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D5F8u); st32((c.r[28].w[0] - 30652u), 0u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054D5F8u) [[unlikely]] return; }
L_0054D5F8:
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 3888u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[2].w[0] - 3872u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[2].w[0] - 3864u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 28472u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 3888u);
    st32((c.r[2].w[0] - 3860u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1600u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D640u); set32(c.r[6], c.r[6].w[0] - 3904u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054D640u) [[unlikely]] return; }
L_0054D640:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 3836u), 0u);
    st32((c.r[2].w[0] - 3832u), 0u);
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 3828u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 3824u), 0u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D680u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0054D680u) [[unlikely]] return; }
L_0054D680:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 3840u);
    st32((c.r[3].w[0] - 3840u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25504u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D6A4u); set32(c.r[6], c.r[6].w[0] - 3856u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054D6A4u) [[unlikely]] return; }
L_0054D6A4:
    set32(c.r[3], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 3796u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 3792u), 0u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D6CCu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0054D6CCu) [[unlikely]] return; }
L_0054D6CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 3800u);
    st32((c.r[3].w[0] - 3800u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25376u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D6F0u); set32(c.r[6], c.r[6].w[0] - 3816u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054D6F0u) [[unlikely]] return; }
L_0054D6F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], 0u - 1u);
    c.r[6].d[0] = ld16((c.r[2].w[0] - 29800u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 2688u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    st32((c.r[3].w[0] - 2672u), 0u);
    set32(c.r[5], c.r[5].w[0] + 12144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 2664u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[4].w[0] - 3776u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[2].w[0] - 2684u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 2656u), 0u);
    st32((c.r[2].w[0] - 2668u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 2660u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 2652u), 0u);
    st8((c.r[2].w[0] - 2648u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] - 2644u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 2640u), 0u);
    set32(c.r[4], c.r[4].w[0] - 2688u);
    st32((c.r[2].w[0] - 2636u), 0u);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D780u); set32(c.r[6], c.r[6].w[0] - 2712u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054D780u) [[unlikely]] return; }
L_0054D780:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 2608u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[2].w[0] - 2584u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 28544u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 2580u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[12], ld32((c.r[2].w[0] - 29568u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1248u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 2608u);
    set32(c.r[5], c.r[5].w[0] + 992u);
    set32(c.r[6], c.r[6].w[0] - 2632u);
    st32((c.r[11].w[0] - 2588u), c.r[12].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[10].w[0] - 2592u), c.r[12].w[0]);
    st32((c.r[9].w[0] - 2596u), c.r[12].w[0]);
    st32((c.r[8].w[0] - 2600u), c.r[12].w[0]);
    st32((c.r[7].w[0] - 2604u), c.r[12].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D800u); st32((c.r[2].w[0] - 2608u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054D800u) [[unlikely]] return; }
L_0054D800:
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 2560u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1248u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    st32((c.r[2].w[0] - 2544u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 28504u);
    st8((c.r[2].w[0] - 2536u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 24768u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 2576u);
    st32((c.r[2].w[0] - 2532u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 2560u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D860u); st32((c.r[2].w[0] - 2560u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054D860u) [[unlikely]] return; }
L_0054D860:
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 2512u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1248u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    st32((c.r[2].w[0] - 2496u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 28504u);
    st8((c.r[2].w[0] - 2488u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 24768u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 2528u);
    st32((c.r[2].w[0] - 2484u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 2512u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D8C0u); st32((c.r[2].w[0] - 2512u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054D8C0u) [[unlikely]] return; }
L_0054D8C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054D8D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 29504u), c.r[4].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 29488u), 0u);
    st32((c.r[2].w[0] - 29472u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 29456u), 0u);
    st32((c.r[2].w[0] - 29500u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 29484u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 29468u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 29452u), 0u);
    st32((c.r[2].w[0] - 29496u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 29480u), 0u);
    st32((c.r[2].w[0] - 29464u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 29448u), 0u);
    st32((c.r[2].w[0] - 29492u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[16], c.r[16].w[0] - 2464u);
    st32((c.r[2].w[0] - 29476u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 29460u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 2448u), 0u);
    st32((c.r[2].w[0] - 29444u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 2440u), 0u);
    st32((c.r[2].w[0] - 2444u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 2432u), 0u);
    st32((c.r[2].w[0] - 2436u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 2424u), 0u);
    st32((c.r[2].w[0] - 2428u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 2416u), 0u);
    st32((c.r[2].w[0] - 2420u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 2460u), 0u);
    st32((c.r[2].w[0] - 2412u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 2456u), 0u);
    st32((c.r[2].w[0] - 2464u), 0u);
    set32(c.r[4], 0u + 85u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 69;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054D9E4u); st32((c.r[2].w[0] - 2452u), 0u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0054D9E4u) [[unlikely]] return; }
L_0054D9E4:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 85u);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0054DA20; } }
L_0054D9FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32728u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054D9FCu | kUnwind; return; } goto L_0054D9FC; } }
L_0054DA20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 2464u);
    set32(c.r[5], c.r[5].w[0] + 31184u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054DA3Cu); set32(c.r[6], c.r[6].w[0] - 2480u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054DA3Cu) [[unlikely]] return; }
L_0054DA3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0054DA50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 1792u), 0u);  c.pc = t; return; }
L_0054DA60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0054DA70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 1216u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[5].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 128u);
    c.r[5].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[3].w[0] + 19u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[9], 0u - 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[7].w[0] + 2611u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 18u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[7].w[0] + 2610u), static_cast<std::uint8_t>(0u));
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[7].w[0] + 2608u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0] + 20u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[7].w[0] + 3235u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 819u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[7].w[0] + 3232u), static_cast<std::uint16_t>(0u));
    st8((c.r[3].w[0] + 818u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[7].w[0] + 4051u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[3].w[0] + 816u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[7].w[0] + 4048u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0] + 820u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[7].w[0] + 4851u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 1619u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[7].w[0] + 4848u), static_cast<std::uint16_t>(0u));
    st8((c.r[3].w[0] + 1618u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[7].w[0] + 6563u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[3].w[0] + 1616u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[7].w[0] + 6560u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0] + 1620u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[7].w[0] + 8275u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 2076u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[7].w[0] + 8272u), static_cast<std::uint16_t>(0u));
    st8((c.r[3].w[0] + 2083u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[7].w[0] + 9987u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 2082u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[7].w[0] + 9984u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 2080u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[7].w[0] + 13107u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[3].w[0] + 2084u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[7].w[0] + 13106u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 2160u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 2240u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u - 5u);
    st8((c.r[3].w[0] + 2259u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[7].w[0] + 13108u), 0u);
    st8((c.r[3].w[0] + 2258u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[3].w[0] + 2256u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 2260u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 2336u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 2416u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[2].w[0] + 2435u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[2].w[0] + 2434u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[4].w[0] + 13104u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 2432u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] + 16224u);
    st32((c.r[2].w[0] + 2436u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[2].w[0] + 2593u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[2].d[0] = 0ull & 1ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    set32(c.r[6], c.r[2].w[0] << 2);
    st8((c.r[8].w[0] + 2593u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2593u));
    st32((c.r[8].w[0] + 2612u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[8].w[0] + 3234u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[8].w[0] + 3236u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st8((c.r[8].w[0] + 4050u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[2].w[0] + 2593u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[8].w[0] + 4052u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[8].w[0] + 4850u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[8].w[0] + 4852u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[8].w[0] + 6562u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[8].w[0] + 6564u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[8].w[0] + 8274u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[8].w[0] + 8276u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[8].w[0] + 9986u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 158;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054DCE8u); st32((c.r[8].w[0] + 9988u), 0u);  if (depth < kMaxDepth) unit_0017(c, 61u, depth + 1u); else { c.pc = 0x0025DC80u; return; } if (c.pc != 0x0054DCE8u) [[unlikely]] return; }
L_0054DCE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[3].w[0] + 16432u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] + 18128u);
    st8((c.r[3].w[0] + 16451u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[3].w[0] + 16450u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[3].w[0] + 16448u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 16452u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[3].w[0] + 17251u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[3].w[0] + 17250u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[3].w[0] + 17248u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 17252u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[3].w[0] + 18051u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[3].w[0] + 18050u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[3].w[0] + 18048u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 18052u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[7].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[5].w[0] + 26528u), c.r[7].w[0]);
    st8((c.r[6].w[0] + 26547u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[5].w[0] + 26546u), static_cast<std::uint8_t>(0u));
    st16((c.r[6].w[0] + 26544u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[5].w[0] + 26548u), 0u);
    st8((c.r[6].w[0] + 26963u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[5].w[0] + 26962u), static_cast<std::uint8_t>(0u));
    st16((c.r[6].w[0] + 26960u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[5].w[0] + 26964u), 0u);
    st8((c.r[6].w[0] + 27763u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[5].w[0] + 27762u), static_cast<std::uint8_t>(0u));
    st16((c.r[6].w[0] + 27760u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[5].w[0] + 27764u), 0u);
    st8((c.r[6].w[0] + 28563u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[5].w[0] + 28562u), static_cast<std::uint8_t>(0u));
    st16((c.r[6].w[0] + 28560u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[5].w[0] + 28564u), 0u);
    set32(c.r[6], c.r[6].w[0] + 28640u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[5].w[0] - 28496u), c.r[7].w[0]);
    st8((c.r[6].w[0] - 28477u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[5].w[0] - 28478u), static_cast<std::uint8_t>(0u));
    st16((c.r[6].w[0] - 28480u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[5].w[0] - 28476u), 0u);
    st8((c.r[6].w[0] - 28061u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[5].w[0] - 28062u), static_cast<std::uint8_t>(0u));
    st16((c.r[6].w[0] - 28064u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[5].w[0] - 28060u), 0u);
    st8((c.r[6].w[0] - 27261u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[5].w[0] - 27262u), static_cast<std::uint8_t>(0u));
    st16((c.r[6].w[0] - 27264u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[5].w[0] - 27260u), 0u);
    st8((c.r[6].w[0] - 26461u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[5].w[0] - 26462u), static_cast<std::uint8_t>(0u));
    st16((c.r[6].w[0] - 26464u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[5].w[0] - 26460u), 0u);
    set32(c.r[6], c.r[6].w[0] - 26384u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[5].w[0] - 17984u), c.r[7].w[0]);
    st8((c.r[6].w[0] - 17965u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[5].w[0] - 17966u), static_cast<std::uint8_t>(0u));
    st16((c.r[6].w[0] - 17968u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[5].w[0] - 17964u), 0u);
    set32(c.r[6], c.r[6].w[0] - 17888u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[5].w[0] - 9488u), c.r[7].w[0]);
    st8((c.r[6].w[0] - 9469u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[5].w[0] - 9470u), static_cast<std::uint8_t>(0u));
    st16((c.r[6].w[0] - 9472u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[5].w[0] - 9468u), 0u);
    set32(c.r[6], c.r[6].w[0] - 9392u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[5].w[0] - 992u), c.r[7].w[0]);
    st8((c.r[6].w[0] - 957u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[5].w[0] - 958u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] - 960u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[5].w[0] - 956u), 0u);
    st8((c.r[4].w[0] - 1280u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u - 1u);
    st8((c.r[4].w[0] + 4032u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[4].w[0] + 4033u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[5].w[0] + 2580u), c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[4].w[0] + 2077u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] - 512u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[28].w[0] - 30628u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 160;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054DF70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 6000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 280u), c.r[4].w[0]);
    set32(c.r[3], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] - 269u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] - 288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 28352u);
    st8((c.r[2].w[0] - 270u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] - 272u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054DFC4u); st32((c.r[2].w[0] - 268u), 0u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054DFC4u) [[unlikely]] return; }
L_0054DFC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 1024u);
    set32(c.r[3], ld32((c.r[3].w[0] - 29056u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0054DFE4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0054DFE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; st32((c.r[3].w[0] - 29048u), c.r[5].w[0]);  if (t) { goto L_0054DFFC; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0054DFFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 29040u), c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054E010:
    set32(c.r[5], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] - 189u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[3].w[0] - 190u), static_cast<std::uint8_t>(0u));
    st16((c.r[2].w[0] - 192u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] - 157u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[4].w[0] - 188u), 0u);
    st8((c.r[3].w[0] - 158u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] - 160u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    st32((c.r[3].w[0] - 156u), 0u);
    set32(c.r[4], c.r[4].w[0] - 128u);
    st32((c.r[2].w[0] - 224u), 0u);
    set32(c.r[5], c.r[5].w[0] - 12640u);
    set32(c.r[7], 0u + 64u);
    c.budget -= 27;
    { set32(c.r[8], 0u + 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B3F0u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 183u, depth); }
L_0054E080:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2432u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[4].w[0] + 2436u), 0u);
    st32((c.r[3].w[0] + 2440u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[4].w[0] + 2448u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 2452u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 2456u), c.r[4].w[0]);  c.pc = t; return; }
L_0054E0C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] + 3056u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E0DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 194u, depth + 1u); else { c.pc = 0x00262A50u; return; } if (c.pc != 0x0054E0DCu) [[unlikely]] return; }
L_0054E0DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F350000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 1267ull;
    set32(c.r[4], c.r[4].w[0] + 3376u);
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], 0u + 120u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[16].w[0] + 116u), 0u);
    st8((c.r[2].w[0] + 3344u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[2].w[0] + 3348u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 3352u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[16].w[0] + 133u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 3356u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[16].w[0] + 188u), 0u);
    st8((c.r[2].w[0] + 3360u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 192u), 0u);
    st32((c.r[16].w[0] + 200u), 0u);
    st32((c.r[16].w[0] + 204u), 0u);
    st32((c.r[16].w[0] + 208u), 0u);
    st32((c.r[16].w[0] + 212u), 0u);
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 220u), 0u);
    st32((c.r[16].w[0] + 224u), 0u);
    st32((c.r[16].w[0] + 228u), 0u);
    st32((c.r[16].w[0] + 232u), 0u);
    st32((c.r[16].w[0] + 236u), 0u);
    st32((c.r[16].w[0] + 240u), 0u);
    st8((c.r[16].w[0] + 244u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 245u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 248u), 0u);
    st32((c.r[16].w[0] + 252u), 0u);
    st32((c.r[16].w[0] + 256u), 0u);
    st32((c.r[16].w[0] + 260u), 0u);
    st32((c.r[16].w[0] + 264u), 0u);
    st32((c.r[16].w[0] + 268u), 0u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(0u));
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E198u); st8((c.r[16].w[0] + 281u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 96u, depth + 1u); else { c.pc = 0x0026CE60u; return; } if (c.pc != 0x0054E198u) [[unlikely]] return; }
L_0054E198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 3040u);
    set32(c.r[5], c.r[5].w[0] + 2752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E1B4u); set32(c.r[6], c.r[6].w[0] + 3024u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054E1B4u) [[unlikely]] return; }
L_0054E1B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0054E1D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E1E0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 104u, depth + 1u); else { c.pc = 0x0020E380u; return; } if (c.pc != 0x0054E1E0u) [[unlikely]] return; }
L_0054E1E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E1F0u); st32((c.r[3].w[0] + 9056u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 104u, depth + 1u); else { c.pc = 0x0020E380u; return; } if (c.pc != 0x0054E1F0u) [[unlikely]] return; }
L_0054E1F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E200u); st32((c.r[3].w[0] + 9060u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 104u, depth + 1u); else { c.pc = 0x0020E380u; return; } if (c.pc != 0x0054E200u) [[unlikely]] return; }
L_0054E200:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E210u); st32((c.r[3].w[0] + 9064u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 104u, depth + 1u); else { c.pc = 0x0020E380u; return; } if (c.pc != 0x0054E210u) [[unlikely]] return; }
L_0054E210:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E220u); st32((c.r[3].w[0] + 9068u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 104u, depth + 1u); else { c.pc = 0x0020E380u; return; } if (c.pc != 0x0054E220u) [[unlikely]] return; }
L_0054E220:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E230u); st32((c.r[3].w[0] + 9072u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 104u, depth + 1u); else { c.pc = 0x0020E380u; return; } if (c.pc != 0x0054E230u) [[unlikely]] return; }
L_0054E230:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E240u); st32((c.r[3].w[0] + 9076u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 104u, depth + 1u); else { c.pc = 0x0020E380u; return; } if (c.pc != 0x0054E240u) [[unlikely]] return; }
L_0054E240:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E250u); st32((c.r[3].w[0] + 9080u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 104u, depth + 1u); else { c.pc = 0x0020E380u; return; } if (c.pc != 0x0054E250u) [[unlikely]] return; }
L_0054E250:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E260u); st32((c.r[3].w[0] + 9084u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 104u, depth + 1u); else { c.pc = 0x0020E380u; return; } if (c.pc != 0x0054E260u) [[unlikely]] return; }
L_0054E260:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E270u); st32((c.r[3].w[0] + 9088u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0003(c, 104u, depth + 1u); else { c.pc = 0x0020E380u; return; } if (c.pc != 0x0054E270u) [[unlikely]] return; }
L_0054E270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 9092u), c.r[2].w[0]);
    set32(c.r[9], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], ld32((c.r[4].w[0] + 9096u)));
    set32(c.r[7], 0u - 3u);
    set32(c.r[8], c.r[5].w[0] << 1);
    set32(c.r[6], 0u - 13u);
    set32(c.r[11], c.r[5].w[0] << 6);
    set32(c.r[3], 0u + 1u);
    c.r[9].d[0] = c.r[10].d[0] & c.r[9].d[0];
    c.r[4].d[0] = 0ull & 3ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[14].d[0];
    set32(c.r[10], c.r[5].w[0] << 7);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    set32(c.r[12], c.r[4].w[0] << 2);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    set32(c.r[13], c.r[4].w[0] << 4);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    set32(c.r[4], 0u - 49u);
    c.r[12].d[0] = c.r[6].d[0] | c.r[12].d[0];
    set32(c.r[5], 0u - 65u);
    c.r[12].d[0] = c.r[12].d[0] & c.r[4].d[0];
    set32(c.r[9], 0u - 129u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st32((c.r[4].w[0] + 9100u), 0u);
    set32(c.r[7], 0u - 257u);
    c.r[4].d[0] = c.r[12].d[0] & c.r[5].d[0];
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(256ll);
    c.r[11].d[0] = c.r[4].d[0] | c.r[11].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[6].w[0] + 9096u), c.r[7].w[0]);
    st32((c.r[5].w[0] + 12288u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 12304u), 0u);
    st32((c.r[4].w[0] - 2672u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 47;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054E330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 13u);
    st8((c.r[2].w[0] + 9347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 9344u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st8((c.r[2].w[0] + 9346u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 9120u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st16((c.r[2].w[0] + 9344u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] + 9356u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[2].w[0] + 9348u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C0C0000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E384u); c.r[5].d[0] = c.r[2].d[0] | 88ull;  if (depth < kMaxDepth) unit_0016(c, 70u, depth + 1u); else { c.pc = 0x002597F0u; return; } if (c.pc != 0x0054E384u) [[unlikely]] return; }
L_0054E384:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9344u);
    set32(c.r[5], c.r[5].w[0] + 7632u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E3A0u); set32(c.r[6], c.r[6].w[0] + 9328u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054E3A0u) [[unlikely]] return; }
L_0054E3A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054E3B0:
    st32((c.r[28].w[0] - 30496u), 0u);
    st8((c.r[28].w[0] - 30492u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 30491u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 30490u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0054E3D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[3].w[0] + 10732u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[4].w[0] + 20368u), 0u);
    st32((c.r[3].w[0] + 10736u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 9920u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[3].w[0] + 10740u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[4].w[0] + 20576u), 0u);
    st32((c.r[3].w[0] + 20372u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 20656u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0054E420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[28].w[0] - 30168u);
    set32(c.r[5], c.r[5].w[0] + 11648u);
    set32(c.r[6], c.r[6].w[0] - 29208u);
    st32((c.r[28].w[0] - 30168u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E448u); st32((c.r[28].w[0] - 30164u), 0u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054E448u) [[unlikely]] return; }
L_0054E448:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 29168u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 29164u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 29160u), 0u);
    set32(c.r[4], c.r[4].w[0] - 29168u);
    st32((c.r[2].w[0] - 29156u), 0u);
    set32(c.r[5], c.r[5].w[0] + 11440u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E484u); set32(c.r[6], c.r[6].w[0] - 29192u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054E484u) [[unlikely]] return; }
L_0054E484:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] - 27613u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 255u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] - 27614u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[2].w[0] - 27616u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 29152u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[2].w[0] - 27615u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 27612u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[2].w[0] - 27608u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 17;
L_0054E4C8:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[7].d[0] = c.r[5].d[0] & 255ull;
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[8], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[6], c.r[5].w[0] + 2u);
    st8((c.r[8].w[0] + 200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    st32((c.r[2].w[0] + 4u), 0u);
    st8((c.r[7].w[0] + 200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[6], c.r[5].w[0] + 3u);
    st8((c.r[7].w[0] + 200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[5].w[0] + 4u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[5].w[0] + 5u);
    st8((c.r[7].w[0] + 200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[5].w[0] + 6u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[5].w[0] + 7u);
    st8((c.r[7].w[0] + 200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[2].w[0] + 200u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[5].w[0] + 8u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].sd[0] < 42ll ? 1ull : 0ull;
    c.budget -= 46;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0054E4C8u | kUnwind; return; } goto L_0054E4C8; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 28952u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[7].w[0] + 4u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], 0u + 256u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E5C4u); set32(c.r[4], c.r[4].w[0] - 28644u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0054E5C4u) [[unlikely]] return; }
L_0054E5C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] - 28902u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E5D8u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0054E5D8u) [[unlikely]] return; }
L_0054E5D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054E5F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 25296u);
    set32(c.r[5], c.r[5].w[0] + 31824u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E618u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x0054E618u) [[unlikely]] return; }
L_0054E618:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] - 25264u);
    set32(c.r[5], c.r[5].w[0] + 31712u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 44u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E638u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x0054E638u) [[unlikely]] return; }
L_0054E638:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] - 25088u);
    set32(c.r[5], c.r[5].w[0] + 31584u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E658u); set32(c.r[8], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x0054E658u) [[unlikely]] return; }
L_0054E658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[2].w[0] - 23020u)));
    c.r[4].d[0] = 0ull & 15ull;
    st32((c.r[3].w[0] - 23024u), 0u);
    set32(c.r[5], 0u - 8u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[11], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] - 23016u);
    c.r[8].d[0] = 0ull & 7ull;
    set32(c.r[6], 0u - 64u);
    c.r[12].d[0] = 0ull & 63ull;
    st32((c.r[3].w[0]), 0u);
    c.r[4].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[3].w[0] + 12u)));
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    st32((c.r[2].w[0] - 23020u), c.r[4].w[0]);
    set32(c.r[5], 0u - 961u);
    c.r[2].d[0] = 0ull << 46;
    set32(c.r[8], ld32((c.r[3].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] >> 46;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[10], c.r[2].w[0] << 10);
    st32((c.r[3].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    st32((c.r[3].w[0] + 20u), 0u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[9].d[0] = c.r[2].d[0] | 1023ull;
    c.r[6].d[0] = c.r[4].d[0] | 65535ull;
    c.r[2].d[0] = 0ull & 1ull;
    c.r[4].d[0] = c.r[7].d[0] | c.r[12].d[0];
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    set32(c.r[7], c.r[2].w[0] << 18);
    c.r[11].d[0] = c.r[4].d[0] | c.r[11].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[8].d[0] = c.r[9].d[0] | c.r[10].d[0];
    set32(c.r[5], c.r[2].w[0] << 19);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 12u), c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    set32(c.r[7], c.r[2].w[0] << 20);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    set32(c.r[5], c.r[2].w[0] << 21);
    c.r[6].d[0] = c.r[6].d[0] & c.r[4].d[0];
    st32((c.r[3].w[0] + 24u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    set32(c.r[8], 0u - 2u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[7].d[0] = c.r[4].d[0] | c.r[5].d[0];
    set32(c.r[6], c.r[2].w[0] << 22);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[5].d[0] = c.r[4].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    st8((c.r[4].w[0] - 22988u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 22964u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st16((c.r[4].w[0] - 22980u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0] - 22956u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[4].w[0] - 22960u), 0u);
    c.r[9].d[0] = ld8((c.r[3].w[0] - 22948u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[5].w[0] - 22984u), 0u);
    set32(c.r[6], c.r[6].w[0] - 23040u);
    st32((c.r[4].w[0] - 22952u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 31424u);
    set32(c.r[4], c.r[4].w[0] - 23024u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 22944u), 0u);
    c.r[3].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 92;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E7C8u); st8((c.r[7].w[0] - 22948u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054E7C8u) [[unlikely]] return; }
L_0054E7C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] - 22912u);
    set32(c.r[5], c.r[5].w[0] + 31024u);
    set32(c.r[6], c.r[6].w[0] + 30864u);
    set32(c.r[7], 0u + 108u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E7ECu); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x0054E7ECu) [[unlikely]] return; }
L_0054E7EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30832u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E804u); set32(c.r[6], c.r[6].w[0] - 22936u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054E804u) [[unlikely]] return; }
L_0054E804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], ld32((c.r[2].w[0] - 22668u)));
    set32(c.r[4], 0u - 8u);
    st32((c.r[3].w[0] - 22672u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], c.r[7].w[0] - 22660u);
    c.r[9].d[0] = 0ull & 7ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[13], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[11], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[5], 0u - 64u);
    c.r[6].d[0] = 0ull & 63ull;
    st32((c.r[7].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[8].d[0] = c.r[8].d[0] & c.r[4].d[0];
    st32((c.r[2].w[0] - 22664u), 0u);
    c.r[2].d[0] = 0ull & 15ull;
    st32((c.r[7].w[0] + 4u), 0u);
    set32(c.r[4], c.r[2].w[0] << 6);
    st32((c.r[7].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[11].d[0] = c.r[11].d[0] & c.r[5].d[0];
    st32((c.r[3].w[0] - 22668u), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[2].d[0] = 0ull << 46;
    c.r[10].d[0] = c.r[8].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] >> 46;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[15], c.r[2].w[0] << 10);
    c.r[10].d[0] = c.r[13].d[0] & c.r[10].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.r[14].d[0] = c.r[2].d[0] | 1023ull;
    c.r[24].d[0] = c.r[11].d[0] | c.r[6].d[0];
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 961u);
    set32(c.r[12], c.r[2].w[0] << 18);
    set32(c.r[9], c.r[2].w[0] << 19);
    c.r[10].d[0] = c.r[10].d[0] | c.r[12].d[0];
    c.r[13].d[0] = c.r[24].d[0] & c.r[3].d[0];
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[12].d[0] = c.r[13].d[0] | c.r[4].d[0];
    c.r[10].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[12].d[0] = c.r[12].d[0] & c.r[14].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[12].d[0] = c.r[12].d[0] | c.r[15].d[0];
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    set32(c.r[11], c.r[2].w[0] << 20);
    c.r[10].d[0] = c.r[10].d[0] & c.r[8].d[0];
    set32(c.r[9], c.r[2].w[0] << 21);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    st32((c.r[7].w[0] + 24u), 0u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    st32((c.r[7].w[0] + 12u), c.r[12].w[0]);
    c.r[11].d[0] = c.r[8].d[0] | c.r[9].d[0];
    set32(c.r[10], c.r[2].w[0] << 22);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[9].d[0] = c.r[8].d[0] | 65535ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    st32((c.r[8].w[0] - 22632u), 0u);
    c.r[8].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[7].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] - 22620u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[7].w[0] - 22616u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[7].w[0] - 22615u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[7].w[0] - 22612u), 0u);
    c.r[5].d[0] = c.r[9].d[0] & c.r[5].d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[7].w[0] - 22596u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[9].d[0] = ld8((c.r[5].w[0] - 22584u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[8].w[0] - 22620u), c.r[3].w[0]);
    st32((c.r[7].w[0] - 22592u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[7].w[0] - 22588u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u - 2u);
    set32(c.r[4], c.r[4].w[0] - 22672u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[5], c.r[5].w[0] + 30672u);
    set32(c.r[6], c.r[6].w[0] - 22696u);
    c.budget -= 100;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E994u); st8((c.r[3].w[0] - 22584u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054E994u) [[unlikely]] return; }
L_0054E994:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054E9A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] - 20912u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0054E9B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E9C4u); set32(c.r[4], c.r[4].w[0] - 20688u);  if (depth < kMaxDepth) unit_0010(c, 62u, depth + 1u); else { c.pc = 0x002407C0u; return; } if (c.pc != 0x0054E9C4u) [[unlikely]] return; }
L_0054E9C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 20688u);
    set32(c.r[5], c.r[5].w[0] + 1600u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054E9E0u); set32(c.r[6], c.r[6].w[0] - 20712u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054E9E0u) [[unlikely]] return; }
L_0054E9E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054E9F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 24192u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 24176u), 0u);
    st32((c.r[2].w[0] - 24160u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 24144u), 0u);
    st32((c.r[2].w[0] - 24188u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 24172u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 24156u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 24140u), 0u);
    st32((c.r[2].w[0] - 24184u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 24168u), 0u);
    st32((c.r[2].w[0] - 24152u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 24136u), 0u);
    st32((c.r[2].w[0] - 24180u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    st32((c.r[2].w[0] - 24164u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 24148u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 24132u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44340000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 19264u);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0] - 24112u), c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 53;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EAC4u); st32((c.r[2].w[0] - 24104u), c.f[0]);  if (depth < kMaxDepth) unit_0094(c, 101u, depth + 1u); else { c.pc = 0x00451300u; return; } if (c.pc != 0x0054EAC4u) [[unlikely]] return; }
L_0054EAC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19264u);
    set32(c.r[5], c.r[5].w[0] + 25584u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EAE0u); set32(c.r[6], c.r[6].w[0] - 19280u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054EAE0u) [[unlikely]] return; }
L_0054EAE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00450000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[4].w[0] - 18800u);
    set32(c.r[5], c.r[5].w[0] + 4864u);
    set32(c.r[6], c.r[6].w[0] + 25584u);
    set32(c.r[7], 0u + 448u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EB04u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x0054EB04u) [[unlikely]] return; }
L_0054EB04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25552u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EB1Cu); set32(c.r[6], c.r[6].w[0] - 18816u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054EB1Cu) [[unlikely]] return; }
L_0054EB1C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054EB30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 22432u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22416u), 0u);
    st32((c.r[2].w[0] - 22400u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22384u), 0u);
    st32((c.r[2].w[0] - 22428u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22412u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 22396u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22380u), 0u);
    st32((c.r[2].w[0] - 22424u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22408u), 0u);
    st32((c.r[2].w[0] - 22392u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22376u), 0u);
    st32((c.r[2].w[0] - 22420u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 22404u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] + 30592u);
    st32((c.r[2].w[0] - 22388u), 0u);
    set32(c.r[6], c.r[6].w[0] - 16560u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 22372u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 16544u), 0u);
    set32(c.r[4], c.r[4].w[0] - 16544u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 16540u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 16536u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 49;
    { st32((c.r[2].w[0] - 16532u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B6D0u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 198u, depth); }
L_0054EC00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22240u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 22224u), 0u);
    st32((c.r[3].w[0] - 22208u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 22192u), 0u);
    st32((c.r[3].w[0] - 22236u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 22220u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 22204u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 22188u), 0u);
    st32((c.r[3].w[0] - 22232u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 22216u), 0u);
    st32((c.r[3].w[0] - 22200u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 22184u), 0u);
    st32((c.r[3].w[0] - 22228u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22212u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22196u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 22180u), c.r[5].w[0]);  c.pc = t; return; }
L_0054EC90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 22176u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22160u), 0u);
    st32((c.r[2].w[0] - 22144u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22128u), 0u);
    st32((c.r[2].w[0] - 22172u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22156u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 22140u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22124u), 0u);
    st32((c.r[2].w[0] - 22168u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22152u), 0u);
    st32((c.r[2].w[0] - 22136u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22120u), 0u);
    st32((c.r[2].w[0] - 22164u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 22148u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 22132u), 0u);
    set32(c.r[3], c.r[3].w[0] - 14640u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[2].w[0] - 22116u), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 29360u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] - 14752u);
    st32((c.r[3].w[0] + 4u), 0u);
    st8((c.r[4].w[0] + 4304u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] - 14776u);
    st32((c.r[4].w[0] + 4308u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 20u), 0u);
    c.budget -= 50;
    { st32((c.r[3].w[0] + 24u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B6D0u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 198u, depth); }
L_0054ED60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22064u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 22048u), 0u);
    st32((c.r[3].w[0] - 22032u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 22016u), 0u);
    st32((c.r[3].w[0] - 22060u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 22044u), c.r[5].w[0]);
    c.budget -= 14;
L_0054ED98:
    st32((c.r[3].w[0] - 22028u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 22012u), 0u);
    st32((c.r[3].w[0] - 22056u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 22040u), 0u);
    st32((c.r[3].w[0] - 22024u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 22008u), 0u);
    st32((c.r[3].w[0] - 22052u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22036u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 22020u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 22004u), c.r[5].w[0]);  c.pc = t; return; }
L_0054EDF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[9].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], 0u - 5u);
    st32((c.r[2].w[0] - 21952u), c.r[4].w[0]);
    set32(c.r[8], c.r[9].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21936u), 0u);
    st32((c.r[2].w[0] - 21920u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21904u), 0u);
    st32((c.r[2].w[0] - 21948u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21932u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 21916u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21900u), 0u);
    st32((c.r[2].w[0] - 21944u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21928u), 0u);
    st32((c.r[2].w[0] - 21912u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21896u), 0u);
    st32((c.r[2].w[0] - 21940u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 21924u), c.r[3].w[0]);
    set32(c.r[12], 0u + 211u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 21908u), 0u);
    set32(c.r[16], 0u - 9u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[17], c.r[9].w[0] << 3);
    st32((c.r[2].w[0] - 21892u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].d[0] = ld16((c.r[2].w[0] - 10368u));
    set32(c.r[25], 0u - 17u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[15], 0u - 33u);
    set32(c.r[24], c.r[9].w[0] << 5);
    set32(c.r[14], c.r[9].w[0] << 11);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[13], 0u - 2049u);
    c.r[7].d[0] = c.r[10].d[0] & c.r[7].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st16((c.r[5].w[0] - 10368u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[18].d[0] = ld16((c.r[3].w[0] - 10368u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] - 27616u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 10364u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[3].w[0] - 10360u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[3].d[0] = c.r[18].d[0] & c.r[16].d[0];
    c.r[12].d[0] = c.r[3].d[0] | c.r[17].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st16((c.r[4].w[0] - 10368u), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[3].w[0] - 10356u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = ld16((c.r[6].w[0] - 10368u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00290000u);
    set32(c.r[4], c.r[4].w[0] - 10368u);
    set32(c.r[5], c.r[5].w[0] - 8304u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[25].d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[6], c.r[6].w[0] - 10384u);
    st16((c.r[11].w[0] - 10368u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[10].w[0] - 10368u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[15].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[24].d[0];
    st16((c.r[9].w[0] - 10368u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[8].w[0] - 10368u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[13].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[14].d[0];
    c.budget -= 96;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054EF70u); st16((c.r[7].w[0] - 10368u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054EF70u) [[unlikely]] return; }
L_0054EF70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0054EF90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21888u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21872u), 0u);
    st32((c.r[3].w[0] - 21856u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21840u), 0u);
    st32((c.r[3].w[0] - 21884u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21868u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 21852u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21836u), 0u);
    st32((c.r[3].w[0] - 21880u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21864u), 0u);
    st32((c.r[3].w[0] - 21848u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21832u), 0u);
    st32((c.r[3].w[0] - 21876u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21860u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21844u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 21828u), c.r[5].w[0]);  c.pc = t; return; }
L_0054F020:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21824u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21808u), 0u);
    st32((c.r[3].w[0] - 21792u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21776u), 0u);
    st32((c.r[3].w[0] - 21820u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21804u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 21788u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21772u), 0u);
    st32((c.r[3].w[0] - 21816u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21800u), 0u);
    st32((c.r[3].w[0] - 21784u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21768u), 0u);
    st32((c.r[3].w[0] - 21812u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21796u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21780u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 21764u), c.r[5].w[0]);  c.pc = t; return; }
L_0054F0B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21728u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21712u), 0u);
    st32((c.r[3].w[0] - 21696u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21680u), 0u);
    st32((c.r[3].w[0] - 21724u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21708u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 21692u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21676u), 0u);
    st32((c.r[3].w[0] - 21720u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21704u), 0u);
    st32((c.r[3].w[0] - 21688u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21672u), 0u);
    st32((c.r[3].w[0] - 21716u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21700u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21684u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 21668u), c.r[5].w[0]);  c.pc = t; return; }
L_0054F140:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21536u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21520u), 0u);
    st32((c.r[3].w[0] - 21504u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21488u), 0u);
    st32((c.r[3].w[0] - 21532u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21516u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 21500u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21484u), 0u);
    st32((c.r[3].w[0] - 21528u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21512u), 0u);
    st32((c.r[3].w[0] - 21496u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21480u), 0u);
    st32((c.r[3].w[0] - 21524u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21508u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21492u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 21476u), c.r[5].w[0]);  c.pc = t; return; }
L_0054F1D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21248u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21232u), 0u);
    st32((c.r[3].w[0] - 21216u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21200u), 0u);
    st32((c.r[3].w[0] - 21244u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21228u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 21212u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21196u), 0u);
    st32((c.r[3].w[0] - 21240u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21224u), 0u);
    st32((c.r[3].w[0] - 21208u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 21192u), 0u);
    st32((c.r[3].w[0] - 21236u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21220u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 21204u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 21188u), c.r[5].w[0]);  c.pc = t; return; }
L_0054F260:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 20864u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 20848u), 0u);
    st32((c.r[3].w[0] - 20832u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 20816u), 0u);
    st32((c.r[3].w[0] - 20860u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 20844u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 20828u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 20812u), 0u);
    st32((c.r[3].w[0] - 20856u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 20840u), 0u);
    st32((c.r[3].w[0] - 20824u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 20808u), 0u);
    st32((c.r[3].w[0] - 20852u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 20836u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 20820u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 20804u), c.r[5].w[0]);  c.pc = t; return; }
L_0054F2F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[2].w[0] - 20720u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 20704u), 0u);
    st32((c.r[2].w[0] - 20688u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 20672u), 0u);
    st32((c.r[2].w[0] - 20716u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 20700u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 20684u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 20668u), 0u);
    st32((c.r[2].w[0] - 20712u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 20696u), 0u);
    st32((c.r[2].w[0] - 20680u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 20664u), 0u);
    st32((c.r[2].w[0] - 20708u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] + 26752u);
    st32((c.r[2].w[0] - 20692u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] - 10352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[28].w[0] - 29744u), 0u);
    st32((c.r[2].w[0] - 20676u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[28].w[0] - 29740u), 0u);
    st32((c.r[2].w[0] - 20660u), c.r[4].w[0]);
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F3A0u); set32(c.r[4], c.r[28].w[0] - 29744u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054F3A0u) [[unlikely]] return; }
L_0054F3A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[28].w[0] - 29736u);
    set32(c.r[5], c.r[5].w[0] - 32768u);
    set32(c.r[6], c.r[6].w[0] - 10336u);
    st32((c.r[28].w[0] - 29736u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F3C0u); st32((c.r[28].w[0] - 29732u), 0u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054F3C0u) [[unlikely]] return; }
L_0054F3C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[28].w[0] - 29728u);
    set32(c.r[5], c.r[5].w[0] + 32672u);
    set32(c.r[6], c.r[6].w[0] - 10320u);
    st32((c.r[28].w[0] - 29728u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0054F3E0u); st32((c.r[28].w[0] - 29724u), 0u);  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x0054F3E0u) [[unlikely]] return; }
L_0054F3E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0054F3F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 20656u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 20640u), 0u);
    st32((c.r[3].w[0] - 20624u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 20608u), 0u);
    st32((c.r[3].w[0] - 20652u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 20636u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 20620u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 20604u), 0u);
    st32((c.r[3].w[0] - 20648u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 20632u), 0u);
    st32((c.r[3].w[0] - 20616u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[4].w[0] - 20600u), 0u);
    st32((c.r[3].w[0] - 20644u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 20628u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] - 20612u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 20596u), c.r[5].w[0]);  c.pc = t; return; }
}

}

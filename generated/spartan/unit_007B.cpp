#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007B[4096] = {
    1, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0,
    0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0,
};

void unit_007B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003EC000;
    case 2u: goto L_003EC004;
    case 3u: goto L_003EC008;
    case 4u: goto L_003EC054;
    case 5u: goto L_003EC070;
    case 6u: goto L_003EC080;
    case 7u: goto L_003EC0F4;
    case 8u: goto L_003EC110;
    case 9u: goto L_003EC120;
    case 10u: goto L_003EC130;
    case 11u: goto L_003EC140;
    case 12u: goto L_003EC150;
    case 13u: goto L_003EC188;
    case 14u: goto L_003EC1B0;
    case 15u: goto L_003EC1BC;
    case 16u: goto L_003EC1E8;
    case 17u: goto L_003EC220;
    case 18u: goto L_003EC25C;
    case 19u: goto L_003EC27C;
    case 20u: goto L_003EC294;
    case 21u: goto L_003EC2D8;
    case 22u: goto L_003EC2EC;
    case 23u: goto L_003EC30C;
    case 24u: goto L_003EC330;
    case 25u: goto L_003EC370;
    case 26u: goto L_003EC3C0;
    case 27u: goto L_003EC3F0;
    case 28u: goto L_003EC410;
    case 29u: goto L_003EC420;
    case 30u: goto L_003EC4B0;
    case 31u: goto L_003EC4C0;
    case 32u: goto L_003EC5C0;
    case 33u: goto L_003EC604;
    case 34u: goto L_003EC648;
    case 35u: goto L_003EC67C;
    case 36u: goto L_003EC6BC;
    case 37u: goto L_003EC700;
    case 38u: goto L_003EC780;
    case 39u: goto L_003EC7D4;
    case 40u: goto L_003EC810;
    case 41u: goto L_003EC840;
    case 42u: goto L_003EC874;
    case 43u: goto L_003EC8AC;
    case 44u: goto L_003EC8CC;
    case 45u: goto L_003EC8EC;
    case 46u: goto L_003EC910;
    case 47u: goto L_003ECAD0;
    case 48u: goto L_003ECAE8;
    case 49u: goto L_003ECB18;
    case 50u: goto L_003ECB48;
    case 51u: goto L_003ECB64;
    case 52u: goto L_003ECDF4;
    case 53u: goto L_003ECE2C;
    case 54u: goto L_003ECE80;
    case 55u: goto L_003ECF3C;
    case 56u: goto L_003ED070;
    case 57u: goto L_003ED084;
    case 58u: goto L_003ED098;
    case 59u: goto L_003ED108;
    case 60u: goto L_003ED174;
    case 61u: goto L_003ED1BC;
    case 62u: goto L_003ED290;
    case 63u: goto L_003ED340;
    case 64u: goto L_003ED3B0;
    case 65u: goto L_003ED464;
    case 66u: goto L_003ED4B4;
    case 67u: goto L_003ED4E0;
    case 68u: goto L_003ED4FC;
    case 69u: goto L_003ED5B0;
    case 70u: goto L_003ED668;
    case 71u: goto L_003ED708;
    case 72u: goto L_003ED7D4;
    case 73u: goto L_003ED838;
    case 74u: goto L_003ED904;
    case 75u: goto L_003ED950;
    case 76u: goto L_003ED9C8;
    case 77u: goto L_003ED9D4;
    case 78u: goto L_003EDA10;
    case 79u: goto L_003EDA48;
    case 80u: goto L_003EDA80;
    case 81u: goto L_003EDAB4;
    case 82u: goto L_003EDAEC;
    case 83u: goto L_003EDB0C;
    case 84u: goto L_003EDB2C;
    case 85u: goto L_003EDB50;
    case 86u: goto L_003EDD18;
    case 87u: goto L_003EDD30;
    case 88u: goto L_003EDD50;
    case 89u: goto L_003EDD90;
    case 90u: goto L_003EDDA0;
    case 91u: goto L_003EDDBC;
    case 92u: goto L_003EDDDC;
    case 93u: goto L_003EDDF0;
    case 94u: goto L_003EDE0C;
    case 95u: goto L_003EDE20;
    case 96u: goto L_003EDE60;
    case 97u: goto L_003EE098;
    case 98u: goto L_003EE0B8;
    case 99u: goto L_003EE190;
    case 100u: goto L_003EE1AC;
    case 101u: goto L_003EE1C4;
    case 102u: goto L_003EE23C;
    case 103u: goto L_003EE250;
    case 104u: goto L_003EE26C;
    case 105u: goto L_003EE290;
    case 106u: goto L_003EE300;
    case 107u: goto L_003EE380;
    case 108u: goto L_003EE390;
    case 109u: goto L_003EE3C0;
    case 110u: goto L_003EE3E0;
    case 111u: goto L_003EE400;
    case 112u: goto L_003EE464;
    case 113u: goto L_003EE500;
    case 114u: goto L_003EE52C;
    case 115u: goto L_003EE540;
    case 116u: goto L_003EE55C;
    case 117u: goto L_003EE580;
    case 118u: goto L_003EE5C0;
    case 119u: goto L_003EE5E0;
    case 120u: goto L_003EE6EC;
    case 121u: goto L_003EE76C;
    case 122u: goto L_003EE81C;
    case 123u: goto L_003EE868;
    case 124u: goto L_003EE8AC;
    case 125u: goto L_003EE93C;
    case 126u: goto L_003EE980;
    case 127u: goto L_003EEA7C;
    case 128u: goto L_003EEAE0;
    case 129u: goto L_003EEB90;
    case 130u: goto L_003EEBE8;
    case 131u: goto L_003EEC14;
    case 132u: goto L_003EEC30;
    case 133u: goto L_003EEC40;
    case 134u: goto L_003EECF0;
    case 135u: goto L_003EED00;
    case 136u: goto L_003EED18;
    case 137u: goto L_003EED44;
    case 138u: goto L_003EED70;
    case 139u: goto L_003EEDA8;
    case 140u: goto L_003EEDF8;
    case 141u: goto L_003EEE20;
    case 142u: goto L_003EEE80;
    case 143u: goto L_003EEED8;
    case 144u: goto L_003EEEE0;
    case 145u: goto L_003EEF08;
    case 146u: goto L_003EEF38;
    case 147u: goto L_003EEFB8;
    case 148u: goto L_003EEFD8;
    case 149u: goto L_003EF028;
    case 150u: goto L_003EF058;
    case 151u: goto L_003EF098;
    case 152u: goto L_003EF0EC;
    case 153u: goto L_003EF110;
    case 154u: goto L_003EF128;
    case 155u: goto L_003EF160;
    case 156u: goto L_003EF188;
    case 157u: goto L_003EF1AC;
    case 158u: goto L_003EF1F0;
    case 159u: goto L_003EF280;
    case 160u: goto L_003EF2B8;
    case 161u: goto L_003EF340;
    case 162u: goto L_003EF360;
    case 163u: goto L_003EF394;
    case 164u: goto L_003EF3B8;
    case 165u: goto L_003EF400;
    case 166u: goto L_003EF468;
    case 167u: goto L_003EF4A0;
    case 168u: goto L_003EF530;
    case 169u: goto L_003EF55C;
    case 170u: goto L_003EF578;
    case 171u: goto L_003EF5D0;
    case 172u: goto L_003EF618;
    case 173u: goto L_003EF680;
    case 174u: goto L_003EF6D0;
    case 175u: goto L_003EF720;
    case 176u: goto L_003EF75C;
    case 177u: goto L_003EF77C;
    case 178u: goto L_003EF794;
    case 179u: goto L_003EF7AC;
    case 180u: goto L_003EF7C0;
    case 181u: goto L_003EF7D8;
    case 182u: goto L_003EF7F4;
    case 183u: goto L_003EF80C;
    case 184u: goto L_003EF828;
    case 185u: goto L_003EF844;
    case 186u: goto L_003EF858;
    case 187u: goto L_003EF898;
    case 188u: goto L_003EF8C8;
    case 189u: goto L_003EF8D8;
    case 190u: goto L_003EF8F0;
    case 191u: goto L_003EF930;
    case 192u: goto L_003EF970;
    case 193u: goto L_003EF988;
    case 194u: goto L_003EF994;
    case 195u: goto L_003EF9A8;
    case 196u: goto L_003EF9B4;
    case 197u: goto L_003EF9D0;
    case 198u: goto L_003EFA30;
    case 199u: goto L_003EFA50;
    case 200u: goto L_003EFA60;
    case 201u: goto L_003EFA84;
    case 202u: goto L_003EFA90;
    case 203u: goto L_003EFAA4;
    case 204u: goto L_003EFAF0;
    case 205u: goto L_003EFB0C;
    case 206u: goto L_003EFB30;
    case 207u: goto L_003EFB58;
    case 208u: goto L_003EFBB0;
    case 209u: goto L_003EFBD0;
    case 210u: goto L_003EFBFC;
    case 211u: goto L_003EFC60;
    case 212u: goto L_003EFCA4;
    case 213u: goto L_003EFCB0;
    case 214u: goto L_003EFCCC;
    case 215u: goto L_003EFCD8;
    case 216u: goto L_003EFCF4;
    case 217u: goto L_003EFD00;
    case 218u: goto L_003EFD18;
    case 219u: goto L_003EFD54;
    case 220u: goto L_003EFD74;
    case 221u: goto L_003EFD84;
    case 222u: goto L_003EFD98;
    case 223u: goto L_003EFDB8;
    case 224u: goto L_003EFDD0;
    case 225u: goto L_003EFDEC;
    case 226u: goto L_003EFDF8;
    case 227u: goto L_003EFE64;
    case 228u: goto L_003EFE78;
    case 229u: goto L_003EFEB0;
    case 230u: goto L_003EFF14;
    case 231u: goto L_003EFF44;
    case 232u: goto L_003EFF5C;
    case 233u: goto L_003EFF90;
    case 234u: goto L_003EFF9C;
    case 235u: goto L_003EFFCC;
    case 236u: goto L_003EFFF4;
    default: bad_entry(c, 0x003EC000u); return;
    }
L_003EC000:
    c.budget -= 1;
L_003EC004:
    c.budget -= 1;
L_003EC008:
    set32(c.r[8], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[10].w[0] + 1u);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    c.r[10].d[0] = c.r[3].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[3].d[0] = c.r[10].sd[0] < 6ll ? 1ull : 0ull;
    st32((c.r[7].w[0] + 44u), c.r[8].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBFF8u | kUnwind; return; } [[clang::musttail]] return unit_007A(c, 343u, depth); } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 25u));
    set32(c.r[3], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003EC068; } }
L_003EC054:
    c.r[3].d[0] = c.r[10].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 37u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC008u | kUnwind; return; } goto L_003EC008; } }
    c.budget -= 1;
L_003EC068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EC070:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[4].w[0] + 32u)));  [[clang::musttail]] return unit_00AC(c, 278u, depth); }
L_003EC080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EC0F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 3152u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003EC0DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003EC0DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003EC0DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003EC0DC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003EC0F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC0F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003EC0F4u) [[unlikely]] return; }
L_003EC0F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EC110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EC120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EC130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EC140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EC150:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 92u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[29].w[0] + 88u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 1504u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC188u); set32(c.r[18], c.r[18].w[0] + 2432u);  if (depth < kMaxDepth) unit_0012(c, 55u, depth + 1u); else { c.pc = 0x00249320u; return; } if (c.pc != 0x003EC188u) [[unlikely]] return; }
L_003EC188:
    c.f[1] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    st32((c.r[29].w[0] + 92u), c.f[1]);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003EC1B8; } }
L_003EC1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003EC204; } }
L_003EC1B8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EC1BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0] + 60u), c.f[0]);
    set32(c.r[4], c.r[2].w[0] + 52u);
    st32((c.r[2].w[0] + 56u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC1E8u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0083(c, 27u, depth + 1u); else { c.pc = 0x0040C3C0u; return; } if (c.pc != 0x003EC1E8u) [[unlikely]] return; }
L_003EC1E8:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC1BCu | kUnwind; return; } goto L_003EC1BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC1B0u | kUnwind; return; } goto L_003EC1B0; } }
L_003EC204:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EC220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003EC2D8; } }
    set32(c.r[16], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC25Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003EC25Cu) [[unlikely]] return; }
L_003EC25C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15344u);
    set32(c.r[6], c.r[6].w[0] - 15424u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC27Cu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003EC27Cu) [[unlikely]] return; }
L_003EC27C:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003EC2C8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EC294:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC294u | kUnwind; return; } goto L_003EC294; } }
    c.budget -= 1;
L_003EC2C8:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC2D8u); set32(c.r[5], c.r[5].w[0] - 15424u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003EC2D8u) [[unlikely]] return; }
L_003EC2D8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[16], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC2ECu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003EC2ECu) [[unlikely]] return; }
L_003EC2EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15344u);
    set32(c.r[6], c.r[6].w[0] - 15424u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC30Cu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003EC30Cu) [[unlikely]] return; }
L_003EC30C:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003EC370; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EC360; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003EC330:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC330u | kUnwind; return; } goto L_003EC330; } }
L_003EC360:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC370u); set32(c.r[5], c.r[5].w[0] - 15424u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003EC370u) [[unlikely]] return; }
L_003EC370:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[16].w[0] << 3);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EC3C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EC3F0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003EC3F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC3F0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003EC3F0u) [[unlikely]] return; }
L_003EC3F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EC410:
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_003EC420:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7F7F0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[29].w[0] + 20u), c.f[25]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.f[26] = c.r[3].w[0];
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 124u));
    c.f[21] = ld32((c.r[29].w[0] + 140u));
    c.f[27] = c.r[5].w[0];
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.f[25] = c.f[27];
    c.f[24] = c.f[26];
    c.f[23] = c.f[27];
    c.budget -= 33;
    { const bool t = c.r[1].d[0] == 0ull; c.f[22] = c.f[26];  if (t) { goto L_003EC560; } }
    c.r[1].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 144u);  if (t) { goto L_003EC560; } }
L_003EC4B0:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC4C0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0087(c, 207u, depth + 1u); else { c.pc = 0x0041F990u; return; } if (c.pc != 0x003EC4C0u) [[unlikely]] return; }
L_003EC4C0:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[27]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EC4D8; } }
    c.f[27] = ld32((c.r[16].w[0]));
    c.budget -= 2;
L_003EC4D8:
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[26]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EC4F0; } }
    c.f[26] = c.f[0];
    c.budget -= 2;
L_003EC4F0:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EC508; } }
    c.f[23] = c.f[0];
    c.budget -= 2;
L_003EC508:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EC518; } }
    c.f[22] = c.f[0];
    c.budget -= 1;
L_003EC518:
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[25]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EC530; } }
    c.f[25] = c.f[0];
    c.budget -= 2;
L_003EC530:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[24]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EC540; } }
    c.f[24] = c.f[0];
    c.budget -= 1;
L_003EC540:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC4B0u | kUnwind; return; } goto L_003EC4B0; } }
    c.budget -= 1;
L_003EC560:
    st32((c.r[18].w[0]), c.f[27]);
    st32((c.r[18].w[0] + 4u), c.f[25]);
    st32((c.r[18].w[0] + 8u), c.f[23]);
    st32((c.r[18].w[0] + 12u), c.f[21]);
    st32((c.r[18].w[0] + 16u), c.f[26]);
    st32((c.r[18].w[0] + 20u), c.f[24]);
    st32((c.r[18].w[0] + 24u), c.f[22]);
    st32((c.r[18].w[0] + 28u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003EC5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EC650; } }
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 64u), c.f[0]);  if (t) { goto L_003EC6C4; } }
    c.f[20] = ld32((c.r[16].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC604u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003EC604u) [[unlikely]] return; }
L_003EC604:
    c.f[3] = ld32((c.r[16].w[0] + 88u));
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[20]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 78u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EC6CC; } }
L_003EC648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003EC6E4; } }
L_003EC650:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { goto L_003EC6C4; } }
    st32((c.r[16].w[0] + 72u), c.f[1]);
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 76u)));
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[20] = ld32((c.r[16].w[0] + 84u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC67Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003EC67Cu) [[unlikely]] return; }
L_003EC67C:
    c.f[2] = ld32((c.r[16].w[0] + 88u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 48;
    st16((c.r[16].w[0] + 80u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 78u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EC6D8; } }
L_003EC6BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003EC6E4; } }
L_003EC6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EC6E4; } }
L_003EC6CC:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC648u | kUnwind; return; } goto L_003EC648; } }
L_003EC6D8:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 72u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC6BCu | kUnwind; return; } goto L_003EC6BC; } }
L_003EC6E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EC700:
    set32(c.r[29], c.r[29].w[0] - 256u);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].d[0] = ld16((c.r[4].w[0] + 16u));
    c.f[22] = c.f[12];
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5u));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 32;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_003ECB58; } }
L_003EC780:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 5u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ECAE8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003ECAE8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003EC7BC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_003EC7C4; } }
L_003EC7BC:
    set32(c.r[2], ld32((c.r[20].w[0] + 232u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 2;
L_003EC7C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 50u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 48u)));
    c.r[18].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
L_003EC7D4:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ECBC0; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003ECBC0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003ECB74; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 48u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003EC840; } }
    set32(c.r[6], c.r[20].w[0] + 94u);
    c.budget -= 1;
L_003EC810:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003EC830; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003EC840; } }
L_003EC830:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC810u | kUnwind; return; } goto L_003EC810; } }
L_003EC840:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003ECAE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[21], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[21].w[0] + c.r[20].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[22], c.r[4].w[0] + 94u);  if (t) { goto L_003EC878; } }
    set32(c.r[6], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003EC874u) [[unlikely]] return; }
L_003EC874:
    c.budget -= 1;
L_003EC878:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[23], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[23].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 34u));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 32u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[22].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[21] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC8ACu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003EC8ACu) [[unlikely]] return; }
L_003EC8AC:
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = 0u;
    c.f[20] = ld32((c.r[16].w[0] + 20u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[21]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC8CCu); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003EC8CCu) [[unlikely]] return; }
L_003EC8CC:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = 0u;
    c.f[23] = ld32((c.r[16].w[0] + 24u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC8ECu); c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003EC8ECu) [[unlikely]] return; }
L_003EC8EC:
    c.f[2] = ld32((c.r[16].w[0] + 40u));
    c.r[6].d[0] = ld16((c.r[20].w[0] + 10u));
    c.f[1] = 0u;
    set32(c.r[5], ld32((c.r[20].w[0] + 236u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[23]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[23]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC910u); c.f[23] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0087(c, 207u, depth + 1u); else { c.pc = 0x0041F990u; return; } if (c.pc != 0x003EC910u) [[unlikely]] return; }
L_003EC910:
    set32(c.r[2], c.r[20].w[0] + c.r[21].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 160u)));
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.f[4] = ld32((c.r[20].w[0] + 36u));
    c.f[5] = ld32((c.r[20].w[0] + 40u));
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[21]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[20]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[8] = fp::ee::add(c.fcr31, c.f[5], c.f[23]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.f[6] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[2].w[0]), c.f[4]);
    st32((c.r[3].w[0]), c.f[7]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[5] = fp::ee::add(c.fcr31, c.f[8], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[6]);
    st32((c.r[3].w[0] + 8u), c.f[5]);
    st32((c.r[2].w[0]), c.f[8]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[29].w[0] + 224u), c.f[3]);
    c.f[9] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 16u));
    c.f[10] = ld32((c.r[19].w[0] + 4u));
    c.f[12] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[8] = fp::ee::add(c.fcr31, c.f[9], c.f[2]);
    c.f[13] = fp::ee::add(c.fcr31, c.f[4], c.f[7]);
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[14] = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    c.f[11] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[10], c.f[1]);
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[8]));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[7]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.budget -= 53;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);  if (t) { goto L_003EC9E8; } }
    c.f[8] = c.f[13];
    c.budget -= 1;
L_003EC9E8:
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EC9F8; } }
    c.f[9] = c.f[13];
    c.budget -= 1;
L_003EC9F8:
    fpu_compare(c, fp::key(c.f[14]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ECA08; } }
    c.f[4] = c.f[14];
    c.budget -= 1;
L_003ECA08:
    fpu_compare(c, fp::key(c.f[14]) < fp::key(c.f[10]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ECA18; } }
    c.f[10] = c.f[14];
    c.budget -= 1;
L_003ECA18:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ECA28; } }
    c.f[11] = c.f[3];
    c.budget -= 1;
L_003ECA28:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ECA38; } }
    c.f[12] = c.f[3];
    c.budget -= 1;
L_003ECA38:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[8]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ECA48; } }
    c.f[8] = c.f[2];
    c.budget -= 1;
L_003ECA48:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ECA58; } }
    c.f[9] = c.f[2];
    c.budget -= 1;
L_003ECA58:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ECA68; } }
    c.f[4] = c.f[1];
    c.budget -= 1;
L_003ECA68:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[10]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ECA78; } }
    c.f[10] = c.f[1];
    c.budget -= 1;
L_003ECA78:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003ECA88; } }
    c.f[11] = c.f[0];
    c.budget -= 1;
L_003ECA88:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ECA98; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_003ECA98:
    st32((c.r[19].w[0]), c.f[9]);
    st32((c.r[19].w[0] + 4u), c.f[10]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[8], c.f[9]);
    st32((c.r[19].w[0] + 8u), c.f[12]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[10]);
    st32((c.r[19].w[0] + 16u), c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[11], c.f[12]);
    st32((c.r[19].w[0] + 20u), c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[19].w[0] + 24u), c.f[0]);  if (t) { goto L_003ECB88; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ECB88; } }
L_003ECAD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 50u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[20].w[0] + 50u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003ECAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC7D4u | kUnwind; return; } goto L_003EC7D4; } }
L_003ECAE8:
    st32((c.r[20].w[0]), 0u);
    c.r[15].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 50u)));
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[20].w[0] + 94u);
    c.r[11].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], c.r[29].w[0] + 255u);
    set32(c.r[9], c.r[29].w[0] + 253u);
    set32(c.r[8], c.r[29].w[0] + 254u);
    set32(c.r[5], ld32((c.r[30].w[0] + 16u)));
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[30].w[0] + 20u)));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 12;
L_003ECB18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 48u)));
    c.r[1].d[0] = c.r[14].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ECDD8; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_003ECDD8; } }
    c.r[13].d[0] = ld16((c.r[12].w[0]));
    c.r[3].d[0] = ld16((c.r[12].w[0] + 2u));
    set32(c.r[6], c.r[13].w[0] << 16);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_003ECBE4; } }
L_003ECB48:
    set32(c.r[12], c.r[12].w[0] + 4u);
    set32(c.r[11], c.r[11].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[14].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECB18u | kUnwind; return; } goto L_003ECB18; } }
L_003ECB58:
    c.f[0] = ld32((c.r[28].w[0] - 29672u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB64u); c.f[12] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_007B(c, 32u, depth + 1u); else { c.pc = 0x003EC5C0u; return; } if (c.pc != 0x003ECB64u) [[unlikely]] return; }
L_003ECB64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC780u | kUnwind; return; } goto L_003EC780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC780u | kUnwind; return; } goto L_003EC780; } }
L_003ECB74:
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC840u | kUnwind; return; } goto L_003EC840; } }
    c.budget -= 1;
L_003ECB88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], ld32((c.r[20].w[0] + 228u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], ld32((c.r[20].w[0] + 232u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECAD0u | kUnwind; return; } goto L_003ECAD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECAD0u | kUnwind; return; } goto L_003ECAD0; } }
    c.budget -= 1;
L_003ECBC0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECAE8u | kUnwind; return; } goto L_003ECAE8; } }
    st32((c.r[20].w[0] + 64u), 0u);
    st16((c.r[20].w[0] + 80u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECAE8u | kUnwind; return; } goto L_003ECAE8; } }
L_003ECBE4:
    set32(c.r[3], c.r[13].w[0] << 1);
    set32(c.r[6], ld32((c.r[11].w[0] + 160u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    c.r[17].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[13], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[17], c.r[17].w[0] << 4);
    set32(c.r[13], c.r[13].w[0] + c.r[17].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[13].w[0]));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[22]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[13].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0] + 4u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[22]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[13].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[13].w[0] + 8u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[22]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[13].w[0] + 8u), c.f[0]);
    c.r[13].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 28;
    { const bool t = c.r[13].d[0] == 0ull; set32(c.r[15], c.r[15].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECB48u | kUnwind; return; } goto L_003ECB48; } }
    c.r[17].d[0] = ld16((c.r[6].w[0] + 6u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[13], ld32((c.r[6].w[0])));
    set32(c.r[17], c.r[17].w[0] << 4);
    set32(c.r[13], c.r[13].w[0] + c.r[17].w[0]);
    st32((c.r[13].w[0] + 12u), c.f[0]);
    set32(c.r[17], ld32((c.r[6].w[0])));
    c.r[13].d[0] = ld16((c.r[6].w[0] + 6u));
    c.r[18].d[0] = ld8((c.r[3].w[0] + 24u));
    set32(c.r[17], c.r[17].w[0] + 396u);
    set32(c.r[13], c.r[17].w[0] + c.r[13].w[0]);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[18], ld32((c.r[6].w[0])));
    c.r[17].d[0] = ld16((c.r[6].w[0] + 6u));
    c.r[13].d[0] = ld8((c.r[3].w[0] + 16u));
    set32(c.r[18], c.r[18].w[0] + 260u);
    set32(c.r[17], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[18].w[0] + c.r[17].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[3].w[0] + 17u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[3].w[0] + 18u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[3].w[0] + 19u));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[18].d[0] = ld8((c.r[3].w[0] + 20u));
    c.r[17].d[0] = ld8((c.r[3].w[0] + 21u));
    c.r[13].d[0] = ld8((c.r[3].w[0] + 22u));
    st8((c.r[29].w[0] + 252u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[29].w[0] + 253u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 23u));
    st8((c.r[29].w[0] + 255u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    c.budget -= 35;
    { const bool t = c.r[3].sd[0] < 0; st8((c.r[29].w[0] + 254u), static_cast<std::uint8_t>(c.r[13].w[0]));  if (t) { goto L_003ECCEC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003ECD08; } }
L_003ECCEC:
    set32(c.r[13], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[13].d[0] = c.r[13].d[0] | c.r[3].d[0];
    c.f[0] = c.r[13].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003ECD08:
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    set32(c.r[22], ld32((c.r[6].w[0])));
    c.r[21].d[0] = ld16((c.r[6].w[0] + 6u));
    c.r[13].d[0] = 0ull | 0ull;
    c.r[13].d[0] = c.r[13].d[0] << 16;
    c.r[19].d[0] = ld8((c.r[29].w[0] + 252u));
    c.r[13].d[0] = c.r[13].d[0] << 16;
    c.r[18].d[0] = ld8((c.r[9].w[0]));
    c.r[13].d[0] = c.r[13].d[0] | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[13].d[0] = c.r[13].d[0] << 16;
    c.r[17].d[0] = ld8((c.r[8].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[22], c.r[22].w[0] + 328u);
    set32(c.r[21], c.r[21].w[0] << 2);
    set32(c.r[21], c.r[22].w[0] + c.r[21].w[0]);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[18], c.f[0]);
    st8((c.r[21].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[13].d[0] = c.r[13].d[0] & c.r[18].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[13].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st8((c.r[21].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[12].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[12].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[13].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = ld16((c.r[12].w[0] + 2u));
    c.r[3].d[0] = c.r[13].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 40;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECB48u | kUnwind; return; } goto L_003ECB48; } }
    st16((c.r[12].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[12].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[13].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[13].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 50u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECB48u | kUnwind; return; } goto L_003ECB48; } }
L_003ECDD8:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003ECDFC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 50u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ECDFC; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003ECDF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003ECE34; } }
L_003ECDFC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECDF4u | kUnwind; return; } goto L_003ECDF4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECDF4u | kUnwind; return; } goto L_003ECDF4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECDF4u | kUnwind; return; } goto L_003ECDF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECE2Cu);  if (depth < kMaxDepth) unit_0087(c, 213u, depth + 1u); else { c.pc = 0x0041FC20u; return; } if (c.pc != 0x003ECE2Cu) [[unlikely]] return; }
L_003ECE2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ECDF4u | kUnwind; return; } goto L_003ECDF4; } }
L_003ECE34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
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
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003ECE80:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], ld32((c.r[11].w[0])));
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] << 48;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[7], ld32((c.r[11].w[0] + 8u)));
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[11].w[0] + 4u)));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    set32(c.r[20], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[4].w[0] + 36u), c.f[2]);
    set32(c.r[16], ld32((c.r[29].w[0] + 248u)));
    st32((c.r[4].w[0] + 40u), c.f[1]);
    set32(c.r[5], c.r[29].w[0] + 236u);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[21] = c.f[12];
    st32((c.r[4].w[0] + 16u), c.r[9].w[0]);
    c.f[20] = c.f[13];
    st32((c.r[4].w[0] + 236u), c.r[7].w[0]);
    set32(c.r[6], c.r[29].w[0] + 232u);
    st32((c.r[4].w[0] + 228u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 232u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 64u), 0u);
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECF3Cu); set32(c.r[4], c.r[4].w[0] - 1504u);  if (depth < kMaxDepth) unit_0012(c, 55u, depth + 1u); else { c.pc = 0x00249320u; return; } if (c.pc != 0x003ECF3Cu) [[unlikely]] return; }
L_003ECF3C:
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    st32((c.r[21].w[0] + 56u), c.f[0]);
    st32((c.r[21].w[0] + 60u), c.f[1]);
    st32((c.r[21].w[0] + 68u), c.f[20]);
    st32((c.r[21].w[0] + 72u), c.f[21]);
    st16((c.r[21].w[0] + 76u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[21].w[0] + 78u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[21].w[0] + 80u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 76u)));
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[21].w[0] + 244u), c.r[16].w[0]);
    c.budget -= 20;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[21].w[0] + 240u), 0u);  if (t) { goto L_003ECF90; } }
    st32((c.r[16].w[0] + 240u), c.r[21].w[0]);
    c.budget -= 1;
L_003ECF90:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 236u)));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003ECFC4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003ECFE0; } }
L_003ECFC4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003ECFE0:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[21].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 236u)));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003ED024; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003ED040; } }
L_003ED024:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003ED040:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[17].d[0] = ld16((c.r[17].w[0] + 58u));
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[21].w[0] + 84u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 15u);
    set32(c.r[22], c.r[2].w[0] >> 4);
    c.r[1].d[0] = 0ll < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003ED118; } }
L_003ED070:
    set32(c.r[4], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[2], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED084u); set32(c.r[16], c.r[2].w[0] + 92u);  if (depth < kMaxDepth) unit_007B(c, 206u, depth + 1u); else { c.pc = 0x003EFB30u; return; } if (c.pc != 0x003ED084u) [[unlikely]] return; }
L_003ED084:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], c.r[2].w[0] << 4);
    c.budget -= 5;
L_003ED098:
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ED0E0; } }
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ED0E0; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 224u)));
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 160u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED098u | kUnwind; return; } goto L_003ED098; } }
L_003ED0E0:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[5], ld32((c.r[21].w[0] + 224u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 3856u);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED108u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 43u, depth + 1u); else { c.pc = 0x003048C0u; return; } if (c.pc != 0x003ED108u) [[unlikely]] return; }
L_003ED108:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED070u | kUnwind; return; } goto L_003ED070; } }
L_003ED118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[5] = ld32((c.r[20].w[0] + 8u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[7] = ld32((c.r[20].w[0] + 24u));
    set32(c.r[4], c.r[21].w[0] + 52u);
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[4] = 0u;
    set32(c.r[6], c.r[6].w[0] + 2432u);
    c.f[3] = ld32((c.r[20].w[0] + 20u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[6] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[7]);
    c.f[1] = ld32((c.r[20].w[0] + 16u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[1]);
    st32((c.r[29].w[0] + 164u), c.f[2]);
    st32((c.r[29].w[0] + 168u), c.f[5]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED174u); st32((c.r[29].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_0083(c, 27u, depth + 1u); else { c.pc = 0x0040C3C0u; return; } if (c.pc != 0x003ED174u) [[unlikely]] return; }
L_003ED174:
    set32(c.r[4], c.r[21].w[0] + 228u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B180000u);
    c.r[2].d[0] = c.r[2].d[0] | 38528ull;
    set32(c.r[21], c.r[29].w[0] + 180u);
    set32(c.r[19], c.r[29].w[0] + 184u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[29].w[0] + 192u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[29].w[0] + 196u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCB180000u);
    set32(c.r[16], c.r[29].w[0] + 200u);
    c.r[2].d[0] = c.r[2].d[0] | 38528ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED1BCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007B(c, 29u, depth + 1u); else { c.pc = 0x003EC420u; return; } if (c.pc != 0x003ED1BCu) [[unlikely]] return; }
L_003ED1BC:
    c.f[6] = ld32((c.r[23].w[0]));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.f[5] = ld32((c.r[29].w[0] + 176u));
    c.f[2] = ld32((c.r[23].w[0] + 8u));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[4] = ld32((c.r[23].w[0] + 4u));
    c.f[3] = ld32((c.r[21].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[6]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[5]);
    st32((c.r[21].w[0]), c.f[3]);
    st32((c.r[17].w[0]), c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[20].w[0]), c.f[5]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 53;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003ED290:
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 264u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[20]);
    st32((c.r[29].w[0] + 268u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 300u), 0u);
    st32((c.r[29].w[0] + 296u), 0u);
    c.r[6].d[0] = ld16((c.r[7].w[0]));
    c.budget -= 24;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_003ED4C4; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 264u));
    c.f[2] = ld32((c.r[28].w[0] - 29672u));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[22] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[2]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ED504; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[2];  if (t) { goto L_003ED504; } }
L_003ED340:
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0] + 236u), 0u);
    set32(c.r[3], c.r[2].w[0] + 15u);
    c.r[23].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.f[21] = 0u;
    set32(c.r[2], c.r[3].w[0] >> 4);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ED4C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 240u), c.r[2].w[0]);  if (t) { goto L_003ED4C4; } }
L_003ED3B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ED3F4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ED3EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 16u);  if (t) { goto L_003ED3F8; } }
L_003ED3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003ED3F8; } }
L_003ED3F4:
    set32(c.r[30], 0u + 16u);
    c.budget -= 1;
L_003ED3F8:
    st32((c.r[29].w[0] + 280u), 0u);
    c.r[7].d[0] = c.r[23].d[0] << 48;
    c.r[3].d[0] = ld16((c.r[22].w[0]));
    set32(c.r[2], c.r[29].w[0] + 284u);
    c.r[8].d[0] = c.r[30].d[0] << 48;
    set32(c.r[5], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 264u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[21];
    set32(c.r[11], c.r[29].w[0] + 280u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.f[13] = c.f[20];
    set32(c.r[2], c.r[29].w[0] + 288u);
    st32((c.r[2].w[0]), c.r[22].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED464u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_007B(c, 54u, depth + 1u); else { c.pc = 0x003ECE80u; return; } if (c.pc != 0x003ED464u) [[unlikely]] return; }
L_003ED464:
    c.r[2].d[0] = ld16((c.r[22].w[0]));
    set32(c.r[3], c.r[23].w[0] + c.r[30].w[0]);
    st32((c.r[29].w[0] + 236u), c.r[19].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[23].d[0] = c.r[2].d[0] << 48;
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 48);
    mmi::div(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ED494; } }
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[22]);
    c.budget -= 1;
L_003ED494:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4B4u); set32(c.r[6], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_007B(c, 75u, depth + 1u); else { c.pc = 0x003ED950u; return; } if (c.pc != 0x003ED4B4u) [[unlikely]] return; }
L_003ED4B4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED3B0u | kUnwind; return; } goto L_003ED3B0; } }
L_003ED4C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003ED4E0; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 161u, depth + 1u); else { c.pc = 0x003EF340u; return; } if (c.pc != 0x003ED4E0u) [[unlikely]] return; }
L_003ED4E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[5], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4FCu); st32((c.r[29].w[0] + 276u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007B(c, 17u, depth + 1u); else { c.pc = 0x003EC220u; return; } if (c.pc != 0x003ED4FCu) [[unlikely]] return; }
L_003ED4FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  if (t) { goto L_003ED56C; } }
L_003ED504:
    c.f[0] = ld32((c.r[21].w[0] + 60u));
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[22]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.budget -= 24;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED340u | kUnwind; return; } goto L_003ED340; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED340u | kUnwind; return; } goto L_003ED340; } }
L_003ED56C:
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003ED5B0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[4], 0u - 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st8((c.r[29].w[0] + 336u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st8((c.r[29].w[0] + 311u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[29].w[0] + 16u), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[10].d[0] = ld16((c.r[9].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 316u), c.r[6].w[0]);
    c.budget -= 26;
    { const bool t = c.r[10].d[0] == 0ull; st32((c.r[29].w[0] + 312u), c.r[7].w[0]);  if (t) { goto L_003ED860; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 56u)));
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = c.r[5].d[0] & 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[7].w[0] << 2);
    c.f[1] = c.r[5].w[0];
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 4);
    c.f[2] = ld32((c.r[28].w[0] - 29672u));
    set32(c.r[5], ld32((c.r[9].w[0] + 12u)));
    set32(c.r[21], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[22] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[2]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003ED874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[2];  if (t) { goto L_003ED874; } }
L_003ED668:
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] << 48;
    set32(c.r[7], c.r[5].w[0] + 15u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = c.r[5].d[0] & 15ull;
    set32(c.r[7], c.r[7].w[0] >> 4);
    c.r[5].d[0] = c.r[5].d[0] << 48;
    c.r[18].d[0] = c.r[7].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[5]);
    c.f[21] = 0u;
    st32((c.r[29].w[0] + 304u), 0u);
    c.r[30].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[17].d[0] = c.r[6].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[6], c.r[7].w[0] + c.r[17].w[0]);
    c.r[6].d[0] = c.r[6].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 25;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003ED860; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[7].w[0] << 2);
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);  if (t) { goto L_003ED84C; } }
    set32(c.r[2], c.r[8].w[0] << 3);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 6;
L_003ED708:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[20].d[0] << 48;
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    mmi::div(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ED750; } }
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003ED750; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003ED750:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003ED760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 272u)));  if (t) { goto L_003ED764; } }
L_003ED760:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_003ED764:
    st32((c.r[29].w[0] + 320u), 0u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = ld16((c.r[23].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    mmi::paddub(c.r[8], c.r[2], c.r[0]);
    set32(c.r[2], c.r[29].w[0] + 324u);
    set32(c.r[5], ld32((c.r[29].w[0] + 316u)));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 311u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 312u)));
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.r[10].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.f[13] = c.f[20];
    set32(c.r[2], c.r[29].w[0] + 328u);
    set32(c.r[11], c.r[29].w[0] + 320u);
    st32((c.r[2].w[0]), c.r[23].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED7D4u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_007B(c, 54u, depth + 1u); else { c.pc = 0x003ECE80u; return; } if (c.pc != 0x003ED7D4u) [[unlikely]] return; }
L_003ED7D4:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[30].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    st32((c.r[29].w[0] + 304u), c.r[19].w[0]);
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = ld16((c.r[23].w[0]));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[30].d[0] = c.r[3].d[0] << 48;
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 48);
    mmi::div(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003ED81C; } }
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[22]);
    c.budget -= 1;
L_003ED81C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 56u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003ED8E4; } }
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_003ED838:
    c.r[20].d[0] = c.r[3].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED708u | kUnwind; return; } goto L_003ED708; } }
L_003ED84C:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[29].w[0] + 336u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 5;
L_003ED860:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 336u)));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[22].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_003ED90C; } }
L_003ED874:
    c.f[0] = ld32((c.r[21].w[0] + 60u));
    c.r[7].d[0] = 0ull | 0ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[20], c.f[22]);
    set32(c.r[9], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[5].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 26;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED668u | kUnwind; return; } goto L_003ED668; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED668u | kUnwind; return; } goto L_003ED668; } }
L_003ED8E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = c.r[20].d[0] << 48;
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 288u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED904u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007B(c, 111u, depth + 1u); else { c.pc = 0x003EE400u; return; } if (c.pc != 0x003ED904u) [[unlikely]] return; }
L_003ED904:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED838u | kUnwind; return; } goto L_003ED838; } }
L_003ED90C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_003ED950:
    set32(c.r[29], c.r[29].w[0] - 400u);
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 220u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 16u));
    c.f[22] = ld32((c.r[28].w[0] - 29672u));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 30;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[29].w[0] + 192u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003EDDA0; } }
L_003ED9C8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED9D4u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_007B(c, 32u, depth + 1u); else { c.pc = 0x003EC5C0u; return; } if (c.pc != 0x003ED9D4u) [[unlikely]] return; }
L_003ED9D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EDD30; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003ED9F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_003EDA00; } }
L_003ED9F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 232u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 2;
L_003EDA00:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 50u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 48u)));
    c.r[17].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
L_003EDA10:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[1].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EDEB8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003EDEB8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 8u)));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003EDE68; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 48u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003EDA80; } }
L_003EDA48:
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 94u));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 96u));
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003EDA70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003EDA80; } }
L_003EDA70:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDA48u | kUnwind; return; } goto L_003EDA48; } }
L_003EDA80:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003EDD28; } }
    set32(c.r[3], c.r[21].w[0] << 2);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[23], c.r[4].w[0] + 94u);  if (t) { goto L_003EDAB8; } }
    set32(c.r[6], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDAB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003EDAB4u) [[unlikely]] return; }
L_003EDAB4:
    c.budget -= 1;
L_003EDAB8:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[30], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[30].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 34u));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 32u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[23].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[23].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[21] = ld32((c.r[16].w[0] + 16u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDAECu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003EDAECu) [[unlikely]] return; }
L_003EDAEC:
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = 0u;
    c.f[20] = ld32((c.r[16].w[0] + 20u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[21]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB0Cu); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003EDB0Cu) [[unlikely]] return; }
L_003EDB0C:
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = 0u;
    c.f[23] = ld32((c.r[16].w[0] + 24u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB2Cu); c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003EDB2Cu) [[unlikely]] return; }
L_003EDB2C:
    c.f[2] = ld32((c.r[16].w[0] + 40u));
    c.r[6].d[0] = ld16((c.r[20].w[0] + 10u));
    c.f[1] = 0u;
    set32(c.r[5], ld32((c.r[20].w[0] + 236u)));
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[23]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[23]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB50u); c.f[23] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0087(c, 207u, depth + 1u); else { c.pc = 0x0041F990u; return; } if (c.pc != 0x003EDB50u) [[unlikely]] return; }
L_003EDB50:
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 160u)));
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.f[4] = ld32((c.r[20].w[0] + 36u));
    c.f[5] = ld32((c.r[20].w[0] + 40u));
    c.f[2] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[2], c.r[29].w[0] + 292u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[21]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[20]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[29].w[0] + 296u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[8] = fp::ee::add(c.fcr31, c.f[5], c.f[23]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.f[6] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 308u);
    st32((c.r[2].w[0]), c.f[4]);
    st32((c.r[3].w[0]), c.f[7]);
    set32(c.r[2], c.r[29].w[0] + 312u);
    c.f[5] = fp::ee::add(c.fcr31, c.f[8], c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[6]);
    st32((c.r[3].w[0] + 8u), c.f[5]);
    st32((c.r[2].w[0]), c.f[8]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[29].w[0] + 304u), c.f[3]);
    c.f[9] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 16u));
    c.f[10] = ld32((c.r[18].w[0] + 4u));
    c.f[12] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[8] = fp::ee::add(c.fcr31, c.f[9], c.f[2]);
    c.f[13] = fp::ee::add(c.fcr31, c.f[4], c.f[7]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    c.f[11] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[10], c.f[1]);
    c.f[3] = ld32((c.r[2].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 16u));
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[8]));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[7]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.budget -= 54;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);  if (t) { goto L_003EDC30; } }
    c.f[8] = c.f[13];
    c.budget -= 2;
L_003EDC30:
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EDC40; } }
    c.f[9] = c.f[13];
    c.budget -= 1;
L_003EDC40:
    fpu_compare(c, fp::key(c.f[14]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EDC50; } }
    c.f[4] = c.f[14];
    c.budget -= 1;
L_003EDC50:
    fpu_compare(c, fp::key(c.f[14]) < fp::key(c.f[10]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EDC60; } }
    c.f[10] = c.f[14];
    c.budget -= 1;
L_003EDC60:
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EDC70; } }
    c.f[11] = c.f[3];
    c.budget -= 1;
L_003EDC70:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EDC80; } }
    c.f[12] = c.f[3];
    c.budget -= 1;
L_003EDC80:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[8]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EDC90; } }
    c.f[8] = c.f[2];
    c.budget -= 1;
L_003EDC90:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EDCA0; } }
    c.f[9] = c.f[2];
    c.budget -= 1;
L_003EDCA0:
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[4]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EDCB0; } }
    c.f[4] = c.f[1];
    c.budget -= 1;
L_003EDCB0:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[10]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EDCC0; } }
    c.f[10] = c.f[1];
    c.budget -= 1;
L_003EDCC0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EDCD0; } }
    c.f[11] = c.f[0];
    c.budget -= 1;
L_003EDCD0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EDCE0; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_003EDCE0:
    st32((c.r[18].w[0]), c.f[9]);
    st32((c.r[18].w[0] + 4u), c.f[10]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[8], c.f[9]);
    st32((c.r[18].w[0] + 8u), c.f[12]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[10]);
    st32((c.r[18].w[0] + 16u), c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[11], c.f[12]);
    st32((c.r[18].w[0] + 20u), c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[18].w[0] + 24u), c.f[0]);  if (t) { goto L_003EDE78; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003EDE78; } }
L_003EDD18:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 50u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[20].w[0] + 50u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003EDD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDA10u | kUnwind; return; } goto L_003EDA10; } }
L_003EDD30:
    st32((c.r[20].w[0]), 0u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 50u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[6], 0u - 1u);
    c.r[10].d[0] = 0ull | 65535ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 8;
L_003EDD50:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 48u)));
    c.r[5].d[0] = c.r[8].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EE0E0; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_003EE0E0; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[12], c.r[2].w[0] + c.r[20].w[0]);
    c.r[11].d[0] = ld16((c.r[12].w[0] + 94u));
    c.r[2].d[0] = ld16((c.r[12].w[0] + 96u));
    set32(c.r[5], c.r[11].w[0] << 16);
    c.r[2].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; set32(c.r[7], c.r[12].w[0] + 94u);  if (t) { goto L_003EDEDC; } }
L_003EDD90:
    set32(c.r[2], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDD50u | kUnwind; return; } goto L_003EDD50; } }
L_003EDDA0:
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 50u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    c.f[20] = ld32((c.r[20].w[0] + 72u));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 80u)));
    set32(c.r[2], c.r[21].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDDBCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003EDDBCu) [[unlikely]] return; }
L_003EDDBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7200u);
    set32(c.r[6], c.r[6].w[0] - 7280u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDDDCu); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003EDDDCu) [[unlikely]] return; }
L_003EDDDC:
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 50u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[22].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDDF0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003EDDF0u) [[unlikely]] return; }
L_003EDDF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 21472u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDE0Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003EDE0Cu) [[unlikely]] return; }
L_003EDE0C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 50u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[8], 0u - 1u);
    c.budget -= 5;
L_003EDE20:
    c.r[6].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003EE148; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EE148; } }
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[11], c.r[6].w[0] + c.r[20].w[0]);
    c.r[9].d[0] = ld16((c.r[11].w[0] + 94u));
    c.r[6].d[0] = ld16((c.r[11].w[0] + 96u));
    set32(c.r[7], c.r[9].w[0] << 16);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != c.r[8].d[0]; set32(c.r[10], c.r[11].w[0] + 94u);  if (t) { goto L_003EE0F8; } }
    c.budget -= 1;
L_003EDE60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDE20u | kUnwind; return; } goto L_003EDE20; } }
L_003EDE68:
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDA80u | kUnwind; return; } goto L_003EDA80; } }
L_003EDE78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], ld32((c.r[20].w[0] + 228u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[2], ld32((c.r[20].w[0] + 232u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDD18u | kUnwind; return; } goto L_003EDD18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDD18u | kUnwind; return; } goto L_003EDD18; } }
    c.budget -= 1;
L_003EDEB8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDD30u | kUnwind; return; } goto L_003EDD30; } }
    st32((c.r[20].w[0] + 64u), 0u);
    st16((c.r[20].w[0] + 80u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[20].w[0] + 68u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDD30u | kUnwind; return; } goto L_003EDD30; } }
L_003EDEDC:
    set32(c.r[5], ld32((c.r[12].w[0] + 160u)));
    set32(c.r[2], c.r[11].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[12].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[11], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[12], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.f[1] = ld32((c.r[11].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[11].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[11].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[11].w[0] + 8u), c.f[0]);
    c.r[12].d[0] = ld16((c.r[5].w[0] + 6u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[11], ld32((c.r[5].w[0])));
    set32(c.r[12], c.r[12].w[0] << 4);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    st32((c.r[11].w[0] + 12u), c.f[0]);
    set32(c.r[12], ld32((c.r[5].w[0])));
    c.r[11].d[0] = ld16((c.r[5].w[0] + 6u));
    c.r[13].d[0] = ld8((c.r[2].w[0] + 24u));
    set32(c.r[12], c.r[12].w[0] + 396u);
    set32(c.r[11], c.r[12].w[0] + c.r[11].w[0]);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[13], ld32((c.r[5].w[0])));
    c.r[12].d[0] = ld16((c.r[5].w[0] + 6u));
    c.r[11].d[0] = ld8((c.r[2].w[0] + 16u));
    set32(c.r[13], c.r[13].w[0] + 260u);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[2].w[0] + 17u));
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[2].w[0] + 18u));
    st8((c.r[12].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[2].w[0] + 19u));
    st8((c.r[12].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[13].d[0] = ld8((c.r[2].w[0] + 20u));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 21u));
    c.r[11].d[0] = ld8((c.r[2].w[0] + 22u));
    st8((c.r[29].w[0] + 396u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[29].w[0] + 397u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 23u));
    st8((c.r[29].w[0] + 399u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 399u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 59;
    { const bool t = c.r[2].sd[0] < 0; st8((c.r[29].w[0] + 398u), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_003EDFD4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003EDFF0; } }
L_003EDFD4:
    set32(c.r[11], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[11].d[0] = c.r[11].d[0] | c.r[2].d[0];
    c.f[0] = c.r[11].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003EDFF0:
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    set32(c.r[2], c.r[29].w[0] + 397u);
    c.r[11].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[14], ld32((c.r[5].w[0])));
    c.r[13].d[0] = ld16((c.r[5].w[0] + 6u));
    c.r[12].d[0] = ld8((c.r[29].w[0] + 396u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 398u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[14], c.r[14].w[0] + 328u);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[13], c.r[14].w[0] + c.r[13].w[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[13].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[13].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.f[0]);
    st8((c.r[13].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[11].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[2].d[0] = c.r[11].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 30;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDD90u | kUnwind; return; } goto L_003EDD90; } }
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[7].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[5], c.r[7].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 50u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 50u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDD90u | kUnwind; return; } goto L_003EDD90; } }
L_003EE098:
    set32(c.r[2], ld32((c.r[20].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EE0B8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EE0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE0B8u);  if (depth < kMaxDepth) unit_0087(c, 213u, depth + 1u); else { c.pc = 0x0041FC20u; return; } if (c.pc != 0x003EE0B8u) [[unlikely]] return; }
L_003EE0B8:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 192u));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[29].w[0] + 192u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 192u));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED9C8u | kUnwind; return; } goto L_003ED9C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDDA0u | kUnwind; return; } goto L_003EDDA0; } }
L_003EE0E0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE0B8u | kUnwind; return; } goto L_003EE0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE098u | kUnwind; return; } goto L_003EE098; } }
L_003EE0F8:
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[6].d[0] = ld16((c.r[10].w[0] + 2u));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[11].w[0] + 160u)));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[7].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDE60u | kUnwind; return; } goto L_003EDE60; } }
L_003EE148:
    ld128((c.r[18].w[0]) & ~15u, c.r[4]);
    c.f[2] = ld32((c.r[18].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 28u)));
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    set32(c.r[5], c.r[29].w[0] + 364u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[4]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 352u), c.f[2]);
    st32((c.r[29].w[0] + 356u), c.f[1]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 360u), c.f[0]);  if (t) { goto L_003EE23C; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[18].w[0] << 6);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE190u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003EE190u) [[unlikely]] return; }
L_003EE190:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7296u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE1ACu); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003EE1ACu) [[unlikely]] return; }
L_003EE1AC:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003EE228; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EE1C4:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + 64u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2u)));
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 4u)));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[4]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[4]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    st32((c.r[2].w[0] + 48u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 52u)));
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 56u)));
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE1C4u | kUnwind; return; } goto L_003EE1C4; } }
    c.budget -= 1;
L_003EE228:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EE23C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE23Cu); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003EE23Cu) [[unlikely]] return; }
L_003EE23C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[20], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[20].w[0] << 6);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE250u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003EE250u) [[unlikely]] return; }
L_003EE250:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7296u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE26Cu); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003EE26Cu) [[unlikely]] return; }
L_003EE26C:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003EE300; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EE2F0; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003EE290:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[5], c.r[4].w[0] + c.r[6].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 4u)));
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[7].w[0] + 16u) & ~15u, c.r[4]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[4]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[7].w[0] + 48u));
    st32((c.r[5].w[0] + 48u), c.f[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 52u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 56u)));
    st32((c.r[5].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE290u | kUnwind; return; } goto L_003EE290; } }
L_003EE2F0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003EE300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE300u); set32(c.r[4], c.r[18].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003EE300u) [[unlikely]] return; }
L_003EE300:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], c.r[20].w[0] << 6);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[4]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[21].w[0]));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[4]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[3]);
    st32((c.r[5].w[0] + 48u), c.f[20]);
    st32((c.r[5].w[0] + 52u), c.r[22].w[0]);
    st32((c.r[5].w[0] + 56u), c.r[23].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
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
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_003EE380:
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), 0u);  c.pc = t; return; }
L_003EE390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EE3C0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003EE3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE3C0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003EE3C0u) [[unlikely]] return; }
L_003EE3C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EE3E0:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003EE400:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[9], c.r[5].w[0] << 6);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[4].w[0] + 50u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[4].w[0] + 72u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    st16((c.r[4].w[0] + 80u), static_cast<std::uint16_t>(c.r[9].w[0]));
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[9]);
    st128((c.r[7].w[0]) & ~15u, c.r[9]);
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[7].w[0] + 16u), c.f[2]);
    st32((c.r[7].w[0] + 20u), c.f[1]);
    st32((c.r[7].w[0] + 24u), c.f[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 44u)));
    st8((c.r[7].w[0] + 28u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = 0ull | 65535ull;
    c.budget -= 25;
L_003EE464:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 50u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EE4D0; } }
    set32(c.r[11], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[10], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[11], c.r[11].w[0] + c.r[6].w[0]);
    c.r[7].d[0] = ld16((c.r[11].w[0]));
    st16((c.r[10].w[0] + 94u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[11].w[0] + 2u));
    st16((c.r[10].w[0] + 96u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[10].w[0] + 160u)));
    set32(c.r[11], ld32((c.r[3].w[0] + 52u)));
    c.r[10].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[11], c.r[11].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[11].w[0]));
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 4u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 8u));
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 8u), c.f[0]);  if (t) { goto L_003EE4E0; } }
    c.budget -= 1;
L_003EE4D0:
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    st16((c.r[7].w[0] + 96u), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[7].w[0] + 94u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 4;
L_003EE4E0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[7].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE464u | kUnwind; return; } goto L_003EE464; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EE500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EE540; } }
    set32(c.r[4], c.r[17].w[0] + 94u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003EE548; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003EE52C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003EE540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE540u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003EE540u) [[unlikely]] return; }
L_003EE540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EE564; } }
L_003EE548:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] - 7280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE55Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x003EE55Cu) [[unlikely]] return; }
L_003EE55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE52Cu | kUnwind; return; } goto L_003EE52C; } }
L_003EE564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EE580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 60u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 56u), 0u);
    set32(c.r[5], c.r[5].w[0] - 7200u);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 7280u);
    set32(c.r[4], c.r[16].w[0] + 94u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE5C0u); set32(c.r[8], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x003EE5C0u) [[unlikely]] return; }
L_003EE5C0:
    st32((c.r[16].w[0] + 236u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EE5E0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[12].d[0] = c.r[3].d[0] & 65535ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    set32(c.r[11], c.r[12].w[0] << 2);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    set32(c.r[12], c.r[11].w[0] << 4);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 316u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    st32((c.r[29].w[0] + 312u), c.r[7].w[0]);
    set32(c.r[13], ld32((c.r[5].w[0] + 56u)));
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 308u), c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[13].w[0] + 12u)));
    set32(c.r[22], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].d[0] = ld8((c.r[22].w[0] + 48u));
    c.budget -= 31;
    { const bool t = c.r[11].d[0] == c.r[3].d[0]; st8((c.r[29].w[0] + 307u), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { goto L_003EE8A4; } }
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], 0u - 1u);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 336u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003EE890; } }
    c.f[0] = ld32((c.r[22].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003EE6A4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003EE6C0; } }
L_003EE6A4:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003EE6C0:
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 29672u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EE8B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_003EE8B4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003EE6EC:
    c.r[23].d[0] = c.r[3].d[0] << 48;
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 48);
    st32((c.r[29].w[0] + 284u), 0u);
    c.r[3].d[0] = c.r[23].d[0] & 15ull;
    st16((c.r[29].w[0] + 288u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[21] = 0u;
    set32(c.r[3], c.r[23].w[0] + 15u);
    set32(c.r[3], c.r[3].w[0] >> 4);
    c.r[19].d[0] = c.r[3].d[0] << 48;
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[4], c.r[5].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[29].w[0] + 256u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003EE890; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[1].d[0] = 0ll < c.r[19].sd[0] ? 1ull : 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);  if (t) { goto L_003EE87C; } }
    set32(c.r[2], c.r[19].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 7;
L_003EE76C:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = c.r[21].d[0] << 48;
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003EE7A0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 288u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EE7A4; } }
L_003EE7A0:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_003EE7A4:
    st32((c.r[29].w[0] + 320u), 0u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    set32(c.r[2], c.r[23].w[0] - c.r[18].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 316u)));
    c.f[0] = c.r[2].w[0];
    c.r[6].d[0] = ld8((c.r[29].w[0] + 307u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 256u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 324u);
    set32(c.r[9], ld32((c.r[29].w[0] + 312u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 328u);
    set32(c.r[11], c.r[29].w[0] + 320u);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.f[13] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.f[12] = c.f[21];
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE81Cu); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_007B(c, 54u, depth + 1u); else { c.pc = 0x003ECE80u; return; } if (c.pc != 0x003EE81Cu) [[unlikely]] return; }
L_003EE81C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 256u)));
    st32((c.r[29].w[0] + 284u), c.r[20].w[0]);
    c.r[3].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.f[0] = 0u;
    c.f[1] = c.r[18].w[0];
    st16((c.r[29].w[0] + 256u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    c.f[0] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 18;
    { const bool t = c.r[3].sd[0] >= 0; c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[20]);  if (t) { goto L_003EE91C; } }
    set32(c.r[3], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_003EE868:
    c.r[21].d[0] = c.r[3].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.r[3].d[0] = c.r[21].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE76Cu | kUnwind; return; } goto L_003EE76C; } }
L_003EE87C:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[29].w[0] + 336u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = c.r[3].d[0] << 48;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 5;
L_003EE890:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 336u)));
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[30].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0] + 8u), c.r[7].w[0]);  if (t) { goto L_003EE944; } }
L_003EE8A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE8ACu);  if (depth < kMaxDepth) unit_007B(c, 69u, depth + 1u); else { c.pc = 0x003ED5B0u; return; } if (c.pc != 0x003EE8ACu) [[unlikely]] return; }
L_003EE8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  if (t) { goto L_003EE948; } }
L_003EE8B4:
    c.f[0] = ld32((c.r[22].w[0] + 60u));
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE6ECu | kUnwind; return; } goto L_003EE6EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE6ECu | kUnwind; return; } goto L_003EE6EC; } }
L_003EE91C:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.r[5].d[0] = c.r[21].d[0] << 48;
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 240u)));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE93Cu); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007B(c, 111u, depth + 1u); else { c.pc = 0x003EE400u; return; } if (c.pc != 0x003EE93Cu) [[unlikely]] return; }
L_003EE93C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[21].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE868u | kUnwind; return; } goto L_003EE868; } }
L_003EE944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_003EE948:
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_003EE980:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    set32(c.r[2], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    set32(c.r[3], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 284u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    set32(c.r[8], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 12u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 56u));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 280u), c.r[6].w[0]);  if (t) { goto L_003EECB0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003EEC38; } }
    st32((c.r[29].w[0] + 316u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 312u), 0u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003EEA34; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003EEA50; } }
L_003EEA34:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003EEA50:
    c.f[20] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 29672u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EEC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[1];  if (t) { goto L_003EEC48; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003EEA7C:
    c.r[22].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 48);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[22].d[0] & 15ull;
    st32((c.r[29].w[0] + 252u), 0u);
    st16((c.r[29].w[0] + 256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[21] = 0u;
    set32(c.r[2], c.r[22].w[0] + 15u);
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] >> 4);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[23].d[0] = c.r[2].d[0] << 48;
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = 0ll < c.r[23].sd[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (t) { goto L_003EEC00; } }
    set32(c.r[2], c.r[23].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 4;
L_003EEAE0:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.r[21].d[0] << 48;
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003EEB14; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 256u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EEB18; } }
L_003EEB14:
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_003EEB18:
    st32((c.r[29].w[0] + 296u), 0u);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[2], c.r[22].w[0] - c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 284u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[9], ld32((c.r[29].w[0] + 280u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 300u);
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 304u);
    set32(c.r[11], c.r[29].w[0] + 296u);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.f[13] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.f[12] = c.f[21];
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEB90u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_007B(c, 54u, depth + 1u); else { c.pc = 0x003ECE80u; return; } if (c.pc != 0x003EEB90u) [[unlikely]] return; }
L_003EEB90:
    c.r[2].d[0] = c.r[30].d[0] << 48;
    st32((c.r[29].w[0] + 252u), c.r[20].w[0]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.f[0] = 0u;
    set32(c.r[7], ld32((c.r[29].w[0] + 224u)));
    c.f[1] = c.r[19].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    c.r[30].d[0] = c.r[3].d[0] << 48;
    c.f[0] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], c.r[29].w[0] + 312u);
    c.r[30].d[0] = static_cast<std::uint64_t>(c.r[30].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEBE8u); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_007B(c, 75u, depth + 1u); else { c.pc = 0x003ED950u; return; } if (c.pc != 0x003EEBE8u) [[unlikely]] return; }
L_003EEBE8:
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.r[2].d[0] = c.r[21].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEAE0u | kUnwind; return; } goto L_003EEAE0; } }
L_003EEC00:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC14u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_007B(c, 161u, depth + 1u); else { c.pc = 0x003EF340u; return; } if (c.pc != 0x003EEC14u) [[unlikely]] return; }
L_003EEC14:
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[5], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 288u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC30u); st32((c.r[29].w[0] + 292u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007B(c, 17u, depth + 1u); else { c.pc = 0x003EC220u; return; } if (c.pc != 0x003EEC30u) [[unlikely]] return; }
L_003EEC30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  if (t) { goto L_003EECB8; } }
L_003EEC38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC40u);  if (depth < kMaxDepth) unit_007B(c, 62u, depth + 1u); else { c.pc = 0x003ED290u; return; } if (c.pc != 0x003EEC40u) [[unlikely]] return; }
L_003EEC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EECB4; } }
L_003EEC48:
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[20]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 24;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEA7Cu | kUnwind; return; } goto L_003EEA7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEA7Cu | kUnwind; return; } goto L_003EEA7C; } }
L_003EECB0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003EECB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_003EECB8:
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003EECF0:
    c.budget -= 2;
    {  goto L_003EF340; }
L_003EED00:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EED38; } }
L_003EED18:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 244u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EED18u | kUnwind; return; } goto L_003EED18; } }
    c.budget -= 1;
L_003EED38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EED60; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003EED44:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EED44u | kUnwind; return; } goto L_003EED44; } }
L_003EED60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EED70:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003EEE50; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EEDA8:
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EEE30; } }
    c.r[3].d[0] = c.r[20].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 50u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EEE30; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[16], c.r[3].w[0] >> 4);
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003EEE30; } }
L_003EEDF8:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 224u)));
    set32(c.r[4], c.r[4].w[0] + 3856u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 92u));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE20u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0041(c, 44u, depth + 1u); else { c.pc = 0x003048E0u; return; } if (c.pc != 0x003EEE20u) [[unlikely]] return; }
L_003EEE20:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEDF8u | kUnwind; return; } goto L_003EEDF8; } }
L_003EEE30:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[4].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEDA8u | kUnwind; return; } goto L_003EEDA8; } }
    c.budget -= 1;
L_003EEE50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EEE80:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[18].w[0] + 2432u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003EEF30; } }
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003EEED8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003EF0B8; } }
L_003EEEE0:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    c.r[4].d[0] = c.r[18].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 244u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EF038; } }
L_003EEF08:
    set32(c.r[4], ld32((c.r[4].w[0] + 244u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEF08u | kUnwind; return; } goto L_003EEF08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF038; } }
    c.budget -= 1;
L_003EEF30:
    set32(c.r[22], c.r[29].w[0] + 164u);
    set32(c.r[23], c.r[29].w[0] + 168u);
    c.budget -= 2;
L_003EEF38:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[7], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[6] = c.r[2].w[0];
    c.f[4] = 0u;
    set32(c.r[2], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + 52u);
    set32(c.r[2], c.r[21].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[7] = ld32((c.r[2].w[0] + 24u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[7]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[22].w[0]), c.f[2]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEFB8u); st32((c.r[23].w[0]), c.f[5]);  if (depth < kMaxDepth) unit_0083(c, 27u, depth + 1u); else { c.pc = 0x0040C3C0u; return; } if (c.pc != 0x003EEFB8u) [[unlikely]] return; }
L_003EEFB8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003EEFD8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EF000; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_003EEFD8:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEF38u | kUnwind; return; } goto L_003EEF38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEED8u | kUnwind; return; } goto L_003EEED8; } }
L_003EF000:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[3].d[0] = c.r[21].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[21], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF028u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 182u, depth + 1u); else { c.pc = 0x00207A00u; return; } if (c.pc != 0x003EF028u) [[unlikely]] return; }
L_003EF028:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 28u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEFD8u | kUnwind; return; } goto L_003EEFD8; } }
    c.budget -= 1;
L_003EF038:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EF088; } }
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
L_003EF058:
    c.budget -= 2;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EF078; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EF078; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003EF090; } }
    c.budget -= 1;
L_003EF078:
    set32(c.r[4], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF058u | kUnwind; return; } goto L_003EF058; } }
    c.budget -= 1;
L_003EF088:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003EF090:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EF0C0; } }
L_003EF098:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 48;
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEEE0u | kUnwind; return; } goto L_003EEEE0; } }
    c.budget -= 1;
L_003EF0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EF130; } }
L_003EF0C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[3].d[0] = c.r[16].d[0] << 48;
    set32(c.r[5], ld32((c.r[20].w[0] + 56u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << 5);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[20].w[0] + 12u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF0ECu); set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_007B(c, 37u, depth + 1u); else { c.pc = 0x003EC700u; return; } if (c.pc != 0x003EF0ECu) [[unlikely]] return; }
L_003EF0EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF098u | kUnwind; return; } goto L_003EF098; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EF118; } }
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF110u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_007B(c, 155u, depth + 1u); else { c.pc = 0x003EF160u; return; } if (c.pc != 0x003EF110u) [[unlikely]] return; }
L_003EF110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF098u | kUnwind; return; } goto L_003EF098; } }
L_003EF118:
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF128u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 161u, depth + 1u); else { c.pc = 0x003EF340u; return; } if (c.pc != 0x003EF128u) [[unlikely]] return; }
L_003EF128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF098u | kUnwind; return; } goto L_003EF098; } }
L_003EF130:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003EF160:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[7], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 244u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], ld32((c.r[7].w[0] + 240u)));  if (t) { goto L_003EF228; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EF228; } }
    st32((c.r[5].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[3].w[0] + 244u), c.r[5].w[0]);
    c.budget -= 2;
L_003EF188:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[6], c.r[3].w[0] >> 4);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003EF268; } }
    set32(c.r[8], c.r[7].w[0] + 92u);
    set32(c.r[14], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_003EF1AC:
    set32(c.r[5], ld32((c.r[7].w[0] + 224u)));
    c.r[15].d[0] = ld16((c.r[8].w[0]));
    set32(c.r[11], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 3));
    c.r[9].d[0] = c.r[15].d[0] & 7ull;
    set32(c.r[13], c.r[3].w[0] << (c.r[9].w[0] & 31u));
    set32(c.r[9], c.r[15].w[0] << 4);
    c.r[13].d[0] = ~(c.r[13].d[0] | 0ull);
    set32(c.r[15], c.r[9].w[0] + 16u);
    c.r[13].d[0] = c.r[13].d[0] & 255ull;
    c.r[1].d[0] = c.r[9].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    set32(c.r[12], c.r[11].w[0] + c.r[12].w[0]);
    c.r[11].d[0] = ld8((c.r[12].w[0]));
    c.r[11].d[0] = c.r[11].d[0] & c.r[13].d[0];
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_003EF248; } }
    set32(c.r[24], c.r[9].w[0] << 3);
    c.budget -= 1;
L_003EF1F0:
    set32(c.r[12], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[11].d[0] = c.r[9].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    set32(c.r[12], c.r[12].w[0] + c.r[24].w[0]);
    c.r[13].d[0] = ld16((c.r[12].w[0] + 6u));
    set32(c.r[24], c.r[24].w[0] + 8u);
    set32(c.r[12], ld32((c.r[12].w[0])));
    set32(c.r[13], c.r[13].w[0] << 4);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    c.budget -= 11;
    { const bool t = c.r[11].d[0] != 0ull; st32((c.r[12].w[0] + 12u), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF1F0u | kUnwind; return; } goto L_003EF1F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], ld32((c.r[5].w[0] + 4u)));  if (t) { goto L_003EF24C; } }
    c.budget -= 1;
L_003EF228:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003EF238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 240u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF188u | kUnwind; return; } goto L_003EF188; } }
L_003EF238:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF188u | kUnwind; return; } goto L_003EF188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 244u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF188u | kUnwind; return; } goto L_003EF188; } }
L_003EF248:
    set32(c.r[11], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 1;
L_003EF24C:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[9].d[0] = c.r[10].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] + 2u);
    set32(c.r[11], c.r[11].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[5].w[0] + 4u), c.r[11].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF1ACu | kUnwind; return; } goto L_003EF1AC; } }
    c.budget -= 1;
L_003EF268:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 48u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003EF2A0; } }
    set32(c.r[6], c.r[7].w[0] + 94u);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 2;
L_003EF280:
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 48u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF280u | kUnwind; return; } goto L_003EF280; } }
    c.budget -= 1;
L_003EF2A0:
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003EF330; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 1;
L_003EF2B8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_003EF314; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[5].d[0] = c.r[8].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003EF330; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[6], ld32((c.r[7].w[0])));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_003EF330; } }
L_003EF314:
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF2B8u | kUnwind; return; } goto L_003EF2B8; } }
    c.budget -= 1;
L_003EF330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EF340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[5].w[0] << 8);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[13], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[13].w[0] + 244u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EF380; } }
L_003EF360:
    c.r[13].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 244u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF360u | kUnwind; return; } goto L_003EF360; } }
    c.budget -= 1;
L_003EF380:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_003EF520; } }
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
L_003EF394:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 48u)));
    set32(c.r[10], ld32((c.r[13].w[0] + 240u)));
    set32(c.r[7], c.r[7].w[0] + 15u);
    set32(c.r[8], c.r[7].w[0] >> 4);
    c.r[1].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_003EF450; } }
    set32(c.r[9], c.r[13].w[0] + 92u);
    c.budget -= 2;
L_003EF3B8:
    set32(c.r[7], ld32((c.r[13].w[0] + 224u)));
    c.r[25].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[14], ld32((c.r[7].w[0] + 20u)));
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 3));
    c.r[11].d[0] = c.r[25].d[0] & 7ull;
    set32(c.r[24], c.r[6].w[0] << (c.r[11].w[0] & 31u));
    set32(c.r[11], c.r[25].w[0] << 4);
    c.r[24].d[0] = ~(c.r[24].d[0] | 0ull);
    set32(c.r[25], c.r[11].w[0] + 16u);
    c.r[24].d[0] = c.r[24].d[0] & 255ull;
    c.r[1].d[0] = c.r[11].d[0] < c.r[25].d[0] ? 1ull : 0ull;
    set32(c.r[15], c.r[14].w[0] + c.r[15].w[0]);
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.r[14].d[0] = c.r[14].d[0] & c.r[24].d[0];
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[15].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { goto L_003EF430; } }
    set32(c.r[16], c.r[11].w[0] << 3);
    c.budget -= 2;
L_003EF400:
    set32(c.r[15], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[14].d[0] = c.r[11].d[0] < c.r[25].d[0] ? 1ull : 0ull;
    set32(c.r[15], c.r[15].w[0] + c.r[16].w[0]);
    c.r[24].d[0] = ld16((c.r[15].w[0] + 6u));
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[15], ld32((c.r[15].w[0])));
    set32(c.r[24], c.r[24].w[0] << 4);
    set32(c.r[15], c.r[15].w[0] + c.r[24].w[0]);
    c.budget -= 11;
    { const bool t = c.r[14].d[0] != 0ull; st32((c.r[15].w[0] + 12u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF400u | kUnwind; return; } goto L_003EF400; } }
    c.budget -= 1;
L_003EF430:
    set32(c.r[14], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[11].d[0] = c.r[12].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    set32(c.r[14], c.r[14].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[11].d[0] != 0ull; st32((c.r[7].w[0] + 4u), c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF3B8u | kUnwind; return; } goto L_003EF3B8; } }
    c.budget -= 1;
L_003EF450:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 48u)));
    c.r[1].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003EF488; } }
    set32(c.r[8], c.r[13].w[0] + 94u);
    c.budget -= 2;
L_003EF468:
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[13].w[0] + 48u)));
    c.r[7].d[0] = c.r[9].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF468u | kUnwind; return; } goto L_003EF468; } }
    c.budget -= 1;
L_003EF488:
    st16((c.r[13].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_003EF518; } }
    set32(c.r[9], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 1;
L_003EF4A0:
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[13].d[0];  if (t) { goto L_003EF500; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.r[8].d[0] = c.r[11].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    set32(c.r[7], c.r[7].w[0] - 1u);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_003EF518; } }
    set32(c.r[9], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[9], ld32((c.r[11].w[0])));
    st32((c.r[11].w[0]), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[9].w[0]);  if (t) { goto L_003EF518; } }
    c.budget -= 1;
L_003EF500:
    set32(c.r[7], c.r[11].w[0] + 1u);
    c.r[11].d[0] = c.r[7].d[0] << 48;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 48);
    c.r[7].d[0] = c.r[11].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF4A0u | kUnwind; return; } goto L_003EF4A0; } }
L_003EF518:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull; c.r[13].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF394u | kUnwind; return; } goto L_003EF394; } }
L_003EF520:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EF530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_003EF6B8; } }
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    c.r[14].d[0] = 0ull | 65535ull;
    c.budget -= 4;
L_003EF55C:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 48u)));
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003EF5B0; } }
L_003EF578:
    set32(c.r[5], c.r[9].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], ld32((c.r[5].w[0] + 160u)));
    c.r[6].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[7].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 48u)));
    c.r[5].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF578u | kUnwind; return; } goto L_003EF578; } }
    c.budget -= 1;
L_003EF5B0:
    c.r[5].d[0] = c.r[6].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    set32(c.r[5], c.r[5].w[0] + 15u);
    set32(c.r[6], c.r[5].w[0] >> 4);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_003EF668; } }
    set32(c.r[9], c.r[8].w[0] + 92u);
    c.budget -= 1;
L_003EF5D0:
    set32(c.r[5], ld32((c.r[8].w[0] + 224u)));
    c.r[25].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[15], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[24], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 3));
    c.r[11].d[0] = c.r[25].d[0] & 7ull;
    set32(c.r[16], c.r[3].w[0] << (c.r[11].w[0] & 31u));
    set32(c.r[11], c.r[25].w[0] << 4);
    c.r[25].d[0] = ~(c.r[16].d[0] | 0ull);
    set32(c.r[16], c.r[11].w[0] + 16u);
    c.r[25].d[0] = c.r[25].d[0] & 255ull;
    set32(c.r[24], c.r[15].w[0] + c.r[24].w[0]);
    c.r[1].d[0] = c.r[11].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.r[15].d[0] = ld8((c.r[24].w[0]));
    c.r[15].d[0] = c.r[15].d[0] & c.r[25].d[0];
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[24].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));  if (t) { goto L_003EF648; } }
    set32(c.r[17], c.r[11].w[0] << 3);
    c.budget -= 2;
L_003EF618:
    set32(c.r[24], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[15].d[0] = c.r[11].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[24], c.r[24].w[0] + c.r[17].w[0]);
    c.r[25].d[0] = ld16((c.r[24].w[0] + 6u));
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[24], ld32((c.r[24].w[0])));
    set32(c.r[25], c.r[25].w[0] << 4);
    set32(c.r[24], c.r[24].w[0] + c.r[25].w[0]);
    c.budget -= 11;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[24].w[0] + 12u), c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF618u | kUnwind; return; } goto L_003EF618; } }
    c.budget -= 1;
L_003EF648:
    set32(c.r[15], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[11].d[0] = c.r[12].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[15], c.r[15].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[11].d[0] != 0ull; st32((c.r[5].w[0] + 4u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF5D0u | kUnwind; return; } goto L_003EF5D0; } }
    c.budget -= 1;
L_003EF668:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 48u)));
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003EF6A0; } }
    set32(c.r[6], c.r[8].w[0] + 94u);
    c.budget -= 2;
L_003EF680:
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[14].w[0]));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 48u)));
    c.r[5].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF680u | kUnwind; return; } goto L_003EF680; } }
    c.budget -= 1;
L_003EF6A0:
    st16((c.r[8].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[5].d[0] = c.r[13].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[10], c.r[10].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF55Cu | kUnwind; return; } goto L_003EF55C; } }
L_003EF6B8:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003EF700; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003EF6D0:
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 256u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF6D0u | kUnwind; return; } goto L_003EF6D0; } }
    c.budget -= 1;
L_003EF700:
    st32((c.r[4].w[0] + 8u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EF720:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EF760; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF75Cu); set32(c.r[5], c.r[5].w[0] - 6912u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003EF75Cu) [[unlikely]] return; }
L_003EF75C:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_003EF760:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EF780; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EF77C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF77Cu); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003EF77Cu) [[unlikely]] return; }
L_003EF77C:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_003EF780:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EF798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF794u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003EF794u) [[unlikely]] return; }
L_003EF794:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003EF798:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003EF8D4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003EF7AC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EF7C4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF7C0u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003EF7C0u) [[unlikely]] return; }
L_003EF7C0:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_003EF7C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EF7DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF7D8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003EF7D8u) [[unlikely]] return; }
L_003EF7D8:
    st32((c.r[16].w[0] + 48u), 0u);
    c.budget -= 1;
L_003EF7DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EF7F8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF7F4u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003EF7F4u) [[unlikely]] return; }
L_003EF7F4:
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 1;
L_003EF7F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003EF8B8; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EF80C:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003EF878; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EF828:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[17], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EF848; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF844u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003EF844u) [[unlikely]] return; }
L_003EF844:
    c.budget -= 1;
L_003EF848:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF858u); set32(c.r[5], c.r[5].w[0] - 7280u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003EF858u) [[unlikely]] return; }
L_003EF858:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF828u | kUnwind; return; } goto L_003EF828; } }
    c.budget -= 1;
L_003EF878:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EF898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF898u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003EF898u) [[unlikely]] return; }
L_003EF898:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF80Cu | kUnwind; return; } goto L_003EF80C; } }
L_003EF8B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF8C8u); set32(c.r[5], c.r[5].w[0] - 15424u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003EF8C8u) [[unlikely]] return; }
L_003EF8C8:
    st32((c.r[16].w[0] + 68u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), 0u);  if (t) { goto L_003EF90C; } }
L_003EF8D4:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EF8D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF8F0u); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 39u, depth + 1u); else { c.pc = 0x00304850u; return; } if (c.pc != 0x003EF8F0u) [[unlikely]] return; }
L_003EF8F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF8D8u | kUnwind; return; } goto L_003EF8D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF7ACu | kUnwind; return; } goto L_003EF7AC; } }
L_003EF90C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EF930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[7].w[0] + 20u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[4].w[0] + 56u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF970u); set32(c.r[4], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_007B(c, 211u, depth + 1u); else { c.pc = 0x003EFC60u; return; } if (c.pc != 0x003EF970u) [[unlikely]] return; }
L_003EF970:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_003EF98C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF988u); set32(c.r[5], c.r[5].w[0] - 6912u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003EF988u) [[unlikely]] return; }
L_003EF988:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_003EF98C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003EFA24; } }
L_003EF994:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_003EF9AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF9A8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003EF9A8u) [[unlikely]] return; }
L_003EF9A8:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_003EF9AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003EFA58; } }
L_003EF9B4:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003EFA68; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[17].w[0] + 28u);
    c.budget -= 3;
L_003EF9D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st32((c.r[3].w[0] + 224u), c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0] + 240u), 0u);
    st32((c.r[3].w[0] + 244u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 256u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF9D0u | kUnwind; return; } goto L_003EF9D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (t) { goto L_003EFA6C; } }
L_003EFA24:
    set32(c.r[2], c.r[16].w[0] << 8);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFA30u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003EFA30u) [[unlikely]] return; }
L_003EFA30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6784u);
    set32(c.r[6], c.r[6].w[0] - 6912u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFA50u); set32(c.r[7], 0u + 256u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003EFA50u) [[unlikely]] return; }
L_003EFA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF994u | kUnwind; return; } goto L_003EF994; } }
L_003EFA58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFA60u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003EFA60u) [[unlikely]] return; }
L_003EFA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EF9B4u | kUnwind; return; } goto L_003EF9B4; } }
L_003EFA68:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003EFA6C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EFA88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EFA84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFA84u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003EFA84u) [[unlikely]] return; }
L_003EFA84:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_003EFA88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003EFAE4; } }
L_003EFA90:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003EFB14; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EFAA4:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), c.f[20]);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 20u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFAA4u | kUnwind; return; } goto L_003EFAA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_003EFB18; } }
L_003EFAE4:
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFAF0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003EFAF0u) [[unlikely]] return; }
L_003EFAF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22352u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFB0Cu); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003EFB0Cu) [[unlikely]] return; }
L_003EFB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFA90u | kUnwind; return; } goto L_003EFA90; } }
L_003EFB14:
    st32((c.r[17].w[0] + 64u), 0u);
    c.budget -= 1;
L_003EFB18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EFB30:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_003EFC04; } }
    set32(c.r[11], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = 0ll < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_003EFBB0; } }
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[8], 0u + 1u);
    c.budget -= 2;
L_003EFB58:
    c.r[9].d[0] = c.r[12].d[0] & 65535ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 3));
    c.r[3].d[0] = c.r[9].d[0] & 7ull;
    set32(c.r[6], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[8].w[0] << (c.r[3].w[0] & 31u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EFB9C; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_003EFBB0; } }
L_003EFB9C:
    set32(c.r[3], c.r[12].w[0] + 1u);
    c.r[12].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[12].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFB58u | kUnwind; return; } goto L_003EFB58; } }
L_003EFBB0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EFC40; } }
L_003EFBD0:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 8u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[5].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EFC48; } }
L_003EFBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EFC54; } }
L_003EFC04:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFBB0u | kUnwind; return; } goto L_003EFBB0; } }
L_003EFC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFBD0u | kUnwind; return; } goto L_003EFBD0; } }
L_003EFC48:
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFBFCu | kUnwind; return; } goto L_003EFBFC; } }
L_003EFC54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EFC60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EFE94; } }
    st32((c.r[17].w[0] + 4u), 0u);
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_003EFCA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFCA4u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003EFCA4u) [[unlikely]] return; }
L_003EFCA4:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_003EFCA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003EFD48; } }
L_003EFCB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 7u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_003EFCD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFCCCu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003EFCCCu) [[unlikely]] return; }
L_003EFCCC:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_003EFCD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003EFD7C; } }
L_003EFCD8:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] << 4);  if (t) { goto L_003EFCF8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFCF4u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003EFCF4u) [[unlikely]] return; }
L_003EFCF4:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_003EFCF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003EFD8C; } }
L_003EFD00:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003EFDC0; } }
L_003EFD18:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] + 7u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFD18u | kUnwind; return; } goto L_003EFD18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { goto L_003EFDC4; } }
L_003EFD48:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFD54u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003EFD54u) [[unlikely]] return; }
L_003EFD54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2160u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFD74u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003EFD74u) [[unlikely]] return; }
L_003EFD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFCB0u | kUnwind; return; } goto L_003EFCB0; } }
L_003EFD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFD84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003EFD84u) [[unlikely]] return; }
L_003EFD84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFCD8u | kUnwind; return; } goto L_003EFCD8; } }
L_003EFD8C:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFD98u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003EFD98u) [[unlikely]] return; }
L_003EFD98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2160u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFDB8u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003EFDB8u) [[unlikely]] return; }
L_003EFDB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFD00u | kUnwind; return; } goto L_003EFD00; } }
L_003EFDC0:
    c.r[3].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003EFDC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003EFE60; } }
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003EFDD0:
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[14].d[0] = 0ull + 0ull;  if (t) { goto L_003EFE50; } }
    c.r[12].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[29].w[0] + 76u);
    set32(c.r[9], c.r[29].w[0] + 78u);
    c.budget -= 4;
L_003EFDEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 3;
L_003EFDF8:
    c.r[6].d[0] = ld16((c.r[8].w[0] + 4u));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[15], c.r[15].w[0] + 1u);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[4].d[0] = ld16((c.r[9].w[0]));
    c.r[3].d[0] = c.r[13].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[6], c.r[5].w[0] + c.r[11].w[0]);
    c.r[5].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[11], c.r[11].w[0] + 8u);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[7].w[0]);
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFDF8u | kUnwind; return; } goto L_003EFDF8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[3].d[0] = c.r[14].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFDECu | kUnwind; return; } goto L_003EFDEC; } }
L_003EFE50:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_003EFE98; } }
L_003EFE60:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EFE64:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 3856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFE78u); set32(c.r[5], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_0041(c, 58u, depth + 1u); else { c.pc = 0x00304A80u; return; } if (c.pc != 0x003EFE78u) [[unlikely]] return; }
L_003EFE78:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFE64u | kUnwind; return; } goto L_003EFE64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFDD0u | kUnwind; return; } goto L_003EFDD0; } }
L_003EFE94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003EFE98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EFEB0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + 2u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 172u), c.r[6].w[0]);  if (t) { goto L_003EFF4C; } }
    set32(c.r[16], c.r[3].w[0] - c.r[4].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 238u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF14u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003EFF14u) [[unlikely]] return; }
L_003EFF14:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003EFF68; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF44u); set32(c.r[5], c.r[2].w[0] + 238u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EFF44u) [[unlikely]] return; }
L_003EFF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[29].w[0] + 238u));  if (t) { goto L_003EFF6C; } }
L_003EFF4C:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF5Cu); set32(c.r[4], c.r[29].w[0] + 238u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003EFF5Cu) [[unlikely]] return; }
L_003EFF5C:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003EFF68:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 238u));
    c.budget -= 1;
L_003EFF6C:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_007C(c, 46u, depth); } }
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[20].w[0] + 2u));  if (t) { goto L_003EFF94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFF90u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003EFF90u) [[unlikely]] return; }
L_003EFF90:
    st32((c.r[20].w[0] + 16u), 0u);
    c.budget -= 1;
L_003EFF94:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_007C(c, 47u, depth); } }
L_003EFF9C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 2u));
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[18], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 16u)));  if (t) { goto L_003EFFFC; } }
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFFCCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003EFFCCu) [[unlikely]] return; }
L_003EFFCC:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_007C(c, 3u, depth); } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EFFF4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EFFF4u) [[unlikely]] return; }
L_003EFFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 20u)));  if (t) { [[clang::musttail]] return unit_007C(c, 4u, depth); } }
L_003EFFFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_007C(c, 1u, depth);
}

}

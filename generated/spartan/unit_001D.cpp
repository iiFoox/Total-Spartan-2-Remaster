#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0,
    133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 209,
    0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_001D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00274000;
    case 2u: goto L_00274068;
    case 3u: goto L_0027406C;
    case 4u: goto L_0027409C;
    case 5u: goto L_002740C4;
    case 6u: goto L_002740D8;
    case 7u: goto L_002740DC;
    case 8u: goto L_00274188;
    case 9u: goto L_002742C4;
    case 10u: goto L_00274360;
    case 11u: goto L_002743F8;
    case 12u: goto L_00274490;
    case 13u: goto L_002744A8;
    case 14u: goto L_00274590;
    case 15u: goto L_002745A4;
    case 16u: goto L_00274628;
    case 17u: goto L_00274630;
    case 18u: goto L_00274634;
    case 19u: goto L_00274654;
    case 20u: goto L_002746C4;
    case 21u: goto L_00274740;
    case 22u: goto L_00274748;
    case 23u: goto L_0027476C;
    case 24u: goto L_00274780;
    case 25u: goto L_00274798;
    case 26u: goto L_002747A8;
    case 27u: goto L_002747DC;
    case 28u: goto L_00274818;
    case 29u: goto L_00274868;
    case 30u: goto L_002748B0;
    case 31u: goto L_002748DC;
    case 32u: goto L_00274900;
    case 33u: goto L_00274944;
    case 34u: goto L_00274958;
    case 35u: goto L_00274970;
    case 36u: goto L_00274980;
    case 37u: goto L_002749B4;
    case 38u: goto L_002749F0;
    case 39u: goto L_00274AE8;
    case 40u: goto L_00274AF0;
    case 41u: goto L_00274B18;
    case 42u: goto L_00274BAC;
    case 43u: goto L_00274BB0;
    case 44u: goto L_00274BE0;
    case 45u: goto L_00274D00;
    case 46u: goto L_00274DAC;
    case 47u: goto L_00274E58;
    case 48u: goto L_00274E90;
    case 49u: goto L_00274F6C;
    case 50u: goto L_002751A4;
    case 51u: goto L_002751B8;
    case 52u: goto L_002751D0;
    case 53u: goto L_002752A0;
    case 54u: goto L_002752F0;
    case 55u: goto L_00275338;
    case 56u: goto L_00275364;
    case 57u: goto L_00275388;
    case 58u: goto L_002753B0;
    case 59u: goto L_002753D8;
    case 60u: goto L_002753EC;
    case 61u: goto L_00275418;
    case 62u: goto L_002754AC;
    case 63u: goto L_002754B0;
    case 64u: goto L_002754E0;
    case 65u: goto L_00275508;
    case 66u: goto L_00275580;
    case 67u: goto L_00275728;
    case 68u: goto L_00275748;
    case 69u: goto L_0027574C;
    case 70u: goto L_002757F8;
    case 71u: goto L_00275824;
    case 72u: goto L_00275838;
    case 73u: goto L_00275850;
    case 74u: goto L_00275860;
    case 75u: goto L_00275894;
    case 76u: goto L_00275920;
    case 77u: goto L_00275968;
    case 78u: goto L_00275994;
    case 79u: goto L_002759B8;
    case 80u: goto L_002759FC;
    case 81u: goto L_00275A10;
    case 82u: goto L_00275A28;
    case 83u: goto L_00275A38;
    case 84u: goto L_00275A6C;
    case 85u: goto L_00275AB8;
    case 86u: goto L_00275B4C;
    case 87u: goto L_00275B50;
    case 88u: goto L_00275B80;
    case 89u: goto L_00275CA0;
    case 90u: goto L_00275DB8;
    case 91u: goto L_00275E10;
    case 92u: goto L_00275FF4;
    case 93u: goto L_00276094;
    case 94u: goto L_0027612C;
    case 95u: goto L_002761C0;
    case 96u: goto L_002761D0;
    case 97u: goto L_00276240;
    case 98u: goto L_00276264;
    case 99u: goto L_00276274;
    case 100u: goto L_00276294;
    case 101u: goto L_002762B4;
    case 102u: goto L_00276360;
    case 103u: goto L_00276410;
    case 104u: goto L_00276548;
    case 105u: goto L_0027655C;
    case 106u: goto L_00276694;
    case 107u: goto L_00276730;
    case 108u: goto L_002767CC;
    case 109u: goto L_00276864;
    case 110u: goto L_0027687C;
    case 111u: goto L_0027689C;
    case 112u: goto L_00276934;
    case 113u: goto L_00276990;
    case 114u: goto L_00276C80;
    case 115u: goto L_00276CA4;
    case 116u: goto L_00276CB4;
    case 117u: goto L_00276CD4;
    case 118u: goto L_00276CF4;
    case 119u: goto L_00276D34;
    case 120u: goto L_00276F3C;
    case 121u: goto L_00276F4C;
    case 122u: goto L_00276F80;
    case 123u: goto L_00276FA0;
    case 124u: goto L_00276FB0;
    case 125u: goto L_00276FCC;
    case 126u: goto L_00276FE4;
    case 127u: goto L_00276FFC;
    case 128u: goto L_00277010;
    case 129u: goto L_0027702C;
    case 130u: goto L_00277044;
    case 131u: goto L_0027705C;
    case 132u: goto L_00277070;
    case 133u: goto L_00277080;
    case 134u: goto L_00277090;
    case 135u: goto L_002770A0;
    case 136u: goto L_002770B0;
    case 137u: goto L_002770C0;
    case 138u: goto L_002770D0;
    case 139u: goto L_002770F0;
    case 140u: goto L_0027710C;
    case 141u: goto L_00277114;
    case 142u: goto L_00277134;
    case 143u: goto L_0027713C;
    case 144u: goto L_0027715C;
    case 145u: goto L_00277168;
    case 146u: goto L_00277170;
    case 147u: goto L_00277190;
    case 148u: goto L_00277198;
    case 149u: goto L_002771B0;
    case 150u: goto L_002771D0;
    case 151u: goto L_002771D8;
    case 152u: goto L_002771F8;
    case 153u: goto L_00277200;
    case 154u: goto L_0027727C;
    case 155u: goto L_0027728C;
    case 156u: goto L_00277298;
    case 157u: goto L_002772A0;
    case 158u: goto L_002772B4;
    case 159u: goto L_002772D4;
    case 160u: goto L_002772DC;
    case 161u: goto L_0027733C;
    case 162u: goto L_0027734C;
    case 163u: goto L_00277354;
    case 164u: goto L_0027735C;
    case 165u: goto L_002773C8;
    case 166u: goto L_00277434;
    case 167u: goto L_00277450;
    case 168u: goto L_0027746C;
    case 169u: goto L_002774A0;
    case 170u: goto L_002774AC;
    case 171u: goto L_002774B8;
    case 172u: goto L_00277538;
    case 173u: goto L_00277544;
    case 174u: goto L_002775DC;
    case 175u: goto L_002775F4;
    case 176u: goto L_00277654;
    case 177u: goto L_00277660;
    case 178u: goto L_00277678;
    case 179u: goto L_0027771C;
    case 180u: goto L_0027772C;
    case 181u: goto L_00277744;
    case 182u: goto L_00277758;
    case 183u: goto L_002777D0;
    case 184u: goto L_00277810;
    case 185u: goto L_00277820;
    case 186u: goto L_00277858;
    case 187u: goto L_00277870;
    case 188u: goto L_00277890;
    case 189u: goto L_002778D0;
    case 190u: goto L_002778E0;
    case 191u: goto L_00277918;
    case 192u: goto L_00277930;
    case 193u: goto L_00277AC0;
    case 194u: goto L_00277B00;
    case 195u: goto L_00277B10;
    case 196u: goto L_00277B48;
    case 197u: goto L_00277B60;
    case 198u: goto L_00277BE0;
    case 199u: goto L_00277C50;
    case 200u: goto L_00277C60;
    case 201u: goto L_00277C70;
    case 202u: goto L_00277C90;
    case 203u: goto L_00277CA8;
    case 204u: goto L_00277CC0;
    case 205u: goto L_00277D44;
    case 206u: goto L_00277D4C;
    case 207u: goto L_00277D68;
    case 208u: goto L_00277D74;
    case 209u: goto L_00277D7C;
    case 210u: goto L_00277D90;
    case 211u: goto L_00277DA0;
    case 212u: goto L_00277DAC;
    case 213u: goto L_00277E00;
    case 214u: goto L_00277E08;
    case 215u: goto L_00277E24;
    case 216u: goto L_00277E30;
    case 217u: goto L_00277E38;
    case 218u: goto L_00277E88;
    case 219u: goto L_00277E8C;
    case 220u: goto L_00277EA8;
    case 221u: goto L_00277F14;
    case 222u: goto L_00277F30;
    case 223u: goto L_00277F50;
    case 224u: goto L_00277FAC;
    default: bad_entry(c, 0x00274000u); return;
    }
L_00274000:
    c.r[3].d[0] = c.r[5].d[0] << 42;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00274A6C; } }
    set32(c.r[9], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], c.r[4].w[0] << 18);
    c.r[7].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[6], c.r[4].w[0] << 19);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[4], c.r[4].w[0] << 22);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[17].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 22;
L_00274068:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0027406C:
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00274634; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00274634; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_0027409C:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027409Cu | kUnwind; return; } goto L_0027409C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 100u)));  if (t) { goto L_00274638; } }
L_002740C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] << 41;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00274B08; } }
L_002740D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_002740DC:
    c.r[3].d[0] = c.r[3].d[0] << 42;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002745AC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00274108; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00274124; } }
L_00274108:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[20]);
    c.budget -= 7;
L_00274124:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30080u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.f[21] = ld32((c.r[18].w[0]));  if (t) { goto L_002744AC; } }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00274D08; } }
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00274D08; } }
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[21]);
    st32((c.r[17].w[0] + 44u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.budget -= 10;
L_00274188:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002744A8; } }
    c.r[2].d[0] = c.r[16].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[0] = ld32((c.r[17].w[0] + 44u));  if (t) { goto L_002741AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = ld32((c.r[17].w[0] + 92u));  if (t) { goto L_002741B0; } }
L_002741AC:
    c.f[4] = 0u;
    c.budget -= 1;
L_002741B0:
    c.r[2].d[0] = c.r[16].d[0] & 2048ull;
    c.f[2] = ld32((c.r[17].w[0] + 64u));
    c.f[6] = ld32((c.r[17].w[0] + 48u));
    c.f[8] = ld32((c.r[17].w[0] + 52u));
    c.f[11] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = ld32((c.r[17].w[0] + 68u));  if (t) { goto L_00274210; } }
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002741EC; } }
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[4]);  if (t) { goto L_00274210; } }
L_002741EC:
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00274210; } }
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    c.budget -= 6;
L_00274210:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[5] = ld32((c.r[2].w[0] - 22576u));
    c.f[4] = ld32((c.r[3].w[0] - 22572u));
    c.f[7] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[3] = ld32((c.r[2].w[0] - 22568u));
    c.f[9] = fp::ee::sub(c.fcr31, c.f[8], c.f[4]);
    c.f[10] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[9], c.f[9]);
    c.f[8] = fp::ee::sub(c.fcr31, c.f[11], c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[10]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    c.f[11] = fp::ee::sqrt(c.fcr31, c.f[3]);
    fpu_compare(c, fp::key(c.f[7]) == fp::key(c.f[11]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00274D1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[6] = ld32((c.r[2].w[0] - 22556u));
    c.f[5] = ld32((c.r[3].w[0] - 22564u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[4] = ld32((c.r[2].w[0] - 22560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[9]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[4]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[10]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[4]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[8]);
    c.f[5] = fp::ee::div(c.fcr31, c.f[4], c.f[11]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[3]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00274DC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[3] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002742C4; } }
    c.f[5] = c.f[3];
    c.budget -= 1;
L_002742C4:
    fpu_compare(c, fp::key(c.f[11]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002742D4; } }
    c.f[11] = c.f[2];
    c.budget -= 1;
L_002742D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00274DC8; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002742FC; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_002742FC:
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00274314; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_00274314:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 64512ull;
    c.f[4] = c.r[3].w[0];
    c.f[3] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00274348; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274360; } }
L_00274348:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_00274360:
    fpu_compare(c, fp::key(c.f[11]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00274DD0; } }
    c.f[4] = ld32((c.r[28].w[0] - 30084u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    c.f[3] = fp::ee::sub(c.fcr31, c.f[11], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[4], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[3]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002743A8; } }
    c.f[3] = c.f[1];
    c.budget -= 1;
L_002743A8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002743C0; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_002743C0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002743D4; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002743F0; } }
L_002743D4:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002743F0:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 2;
L_002743F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00274434; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_00274450; } }
L_00274434:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_00274450:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00274474; } }
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_00274490; } }
L_00274474:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
L_00274490:
    c.r[6].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002744A8u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0018(c, 270u, depth + 1u); else { c.pc = 0x00263AF0u; return; } if (c.pc != 0x002744A8u) [[unlikely]] return; }
L_002744A8:
    st32((c.r[17].w[0] + 96u), c.f[21]);
    c.budget -= 1;
L_002744AC:
    c.r[3].d[0] = c.r[16].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00274634; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[3].w[0] - 22576u));
    c.f[3] = ld32((c.r[17].w[0] + 48u));
    c.f[7] = ld32((c.r[17].w[0] + 52u));
    c.f[5] = ld32((c.r[17].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[6] = ld32((c.r[3].w[0] - 22572u));
    c.f[8] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[4] = ld32((c.r[3].w[0] - 22568u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[7]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    c.r[4].d[0] = c.r[3].d[0] | 50682ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41840000u);
    c.r[3].d[0] = c.r[3].d[0] | 38012ull;
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[4] = fp::ee::sqrt(c.fcr31, c.f[4]);
    c.f[2] = ld32((c.r[17].w[0] + 72u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    set32(c.r[3], 0u + 1u);
    c.f[1] = c.r[4].w[0];
    st32((c.r[17].w[0] + 40u), c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 33;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (t) { goto L_00274634; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30080u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00274634; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00274570; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274588; } }
L_00274570:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_00274588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274590u);  if (depth < kMaxDepth) unit_0019(c, 525u, depth + 1u); else { c.pc = 0x00267A90u; return; } if (c.pc != 0x00274590u) [[unlikely]] return; }
L_00274590:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002745A4u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_001A(c, 306u, depth + 1u); else { c.pc = 0x0026ACD0u; return; } if (c.pc != 0x002745A4u) [[unlikely]] return; }
L_002745A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274634; } }
L_002745AC:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00274634; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00274DDC; } }
    set32(c.r[8], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[7], c.r[3].w[0] << 18);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[3].w[0] << 19);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[3], c.r[3].w[0] << 22);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[17].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 22;
L_00274628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274630u); c.r[4].d[0] = ld8((c.r[17].w[0] + 36u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x00274630u) [[unlikely]] return; }
L_00274630:
    st32((c.r[17].w[0] + 60u), 0u);
    c.budget -= 1;
L_00274634:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 1;
L_00274638:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00274648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0027464C; } }
L_00274648:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_0027464C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_00274E60; } }
L_00274654:
    c.f[4] = ld32((c.r[17].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    c.r[3].d[0] = c.r[2].d[0] | 50682ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41840000u);
    c.r[2].d[0] = c.r[2].d[0] | 38012ull;
    c.f[3] = ld32((c.r[17].w[0] + 52u));
    c.f[2] = ld32((c.r[17].w[0] + 56u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[8], c.f[3]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[7], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[4] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[3] = ld32((c.r[17].w[0] + 40u));
    c.f[2] = ld32((c.r[17].w[0] + 72u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 40u), c.f[4]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273D2Cu | kUnwind; return; } [[clang::musttail]] return unit_001C(c, 389u, depth); } }
L_002746C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 21);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[4].w[0] << 18);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[4].w[0] << 19);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 24u)));
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 22);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[17].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274740u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x00274740u) [[unlikely]] return; }
L_00274740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273E78u | kUnwind; return; } [[clang::musttail]] return unit_001C(c, 393u, depth); } }
L_00274748:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002747D0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027476Cu); c.r[5].d[0] = c.r[3].d[0] >> 60;  if (depth < kMaxDepth) unit_0019(c, 330u, depth + 1u); else { c.pc = 0x00266610u; return; } if (c.pc != 0x0027476Cu) [[unlikely]] return; }
L_0027476C:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274780u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0019(c, 258u, depth + 1u); else { c.pc = 0x00265D30u; return; } if (c.pc != 0x00274780u) [[unlikely]] return; }
L_00274780:
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002747D0; } }
L_00274798:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002747A8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_001C(c, 138u, depth + 1u); else { c.pc = 0x00271170u; return; } if (c.pc != 0x002747A8u) [[unlikely]] return; }
L_002747A8:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274798u | kUnwind; return; } goto L_00274798; } }
L_002747D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002747DCu); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0019(c, 204u, depth + 1u); else { c.pc = 0x002657B0u; return; } if (c.pc != 0x002747DCu) [[unlikely]] return; }
L_002747DC:
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273F88u | kUnwind; return; } [[clang::musttail]] return unit_001C(c, 398u, depth); } }
L_00274818:
    c.r[2].d[0] = c.r[5].d[0] << 41;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273F88u | kUnwind; return; } [[clang::musttail]] return unit_001C(c, 398u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30180u));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00274858; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00274858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 30184u)));  if (t) { goto L_0027485C; } }
L_00274858:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_0027485C:
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274868u); set32(c.r[6], c.r[6].w[0] - 64u);  if (depth < kMaxDepth) unit_0019(c, 392u, depth + 1u); else { c.pc = 0x00266D10u; return; } if (c.pc != 0x00274868u) [[unlikely]] return; }
L_00274868:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30180u));
    c.r[18].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_002748A4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002748A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[28].w[0] - 30184u)));  if (t) { goto L_002748A8; } }
L_002748A4:
    set32(c.r[20], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_002748A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 525u, depth + 1u); else { c.pc = 0x00267A90u; return; } if (c.pc != 0x002748B0u) [[unlikely]] return; }
L_002748B0:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[6].d[0] = c.r[18].d[0] & 255ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002748DCu); c.r[5].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 460u, depth + 1u); else { c.pc = 0x0026BF70u; return; } if (c.pc != 0x002748DCu) [[unlikely]] return; }
L_002748DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00274920; } }
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 2;
L_00274900:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274900u | kUnwind; return; } goto L_00274900; } }
L_00274920:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002749A8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274944u); c.r[5].d[0] = c.r[3].d[0] >> 60;  if (depth < kMaxDepth) unit_0019(c, 330u, depth + 1u); else { c.pc = 0x00266610u; return; } if (c.pc != 0x00274944u) [[unlikely]] return; }
L_00274944:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274958u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0019(c, 258u, depth + 1u); else { c.pc = 0x00265D30u; return; } if (c.pc != 0x00274958u) [[unlikely]] return; }
L_00274958:
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002749A8; } }
L_00274970:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274980u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_001C(c, 138u, depth + 1u); else { c.pc = 0x00271170u; return; } if (c.pc != 0x00274980u) [[unlikely]] return; }
L_00274980:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274970u | kUnwind; return; } goto L_00274970; } }
L_002749A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002749B4u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0019(c, 204u, depth + 1u); else { c.pc = 0x002657B0u; return; } if (c.pc != 0x002749B4u) [[unlikely]] return; }
L_002749B4:
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00273F88u | kUnwind; return; } [[clang::musttail]] return unit_001C(c, 398u, depth); } }
L_002749F0:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 226u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00274A4C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274068u | kUnwind; return; } goto L_00274068; } }
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[3].w[0] << 19);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[3].w[0] << 18);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274068u | kUnwind; return; } goto L_00274068; } }
L_00274A4C:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274068u | kUnwind; return; } goto L_00274068; } }
L_00274A6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 21);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[4].w[0] << 18);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[4].w[0] << 19);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 24u)));
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 22);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[17].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274AE8u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x00274AE8u) [[unlikely]] return; }
L_00274AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027406Cu | kUnwind; return; } goto L_0027406C; } }
L_00274AF0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30080u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274634u | kUnwind; return; } goto L_00274634; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274634u | kUnwind; return; } goto L_00274634; } }
L_00274B08:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274B18u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0019(c, 197u, depth + 1u); else { c.pc = 0x002654B0u; return; } if (c.pc != 0x00274B18u) [[unlikely]] return; }
L_00274B18:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 145u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00274C08; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00274BAC; } }
    c.r[4].d[0] = ld8((c.r[29].w[0] + 146u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00274BAC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] << 42;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00274C84; } }
    set32(c.r[9], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], c.r[4].w[0] << 18);
    c.r[7].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[6], c.r[4].w[0] << 19);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[4], c.r[4].w[0] << 22);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[17].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 22;
L_00274BAC:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00274BB0:
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002740D8u | kUnwind; return; } goto L_002740D8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002740D8u | kUnwind; return; } goto L_002740D8; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_00274BE0:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274BE0u | kUnwind; return; } goto L_00274BE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002740DCu | kUnwind; return; } goto L_002740DC; } }
L_00274C08:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 146u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00274C64; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274BACu | kUnwind; return; } goto L_00274BAC; } }
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[3].w[0] << 19);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[3].w[0] << 18);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274BACu | kUnwind; return; } goto L_00274BAC; } }
L_00274C64:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274BACu | kUnwind; return; } goto L_00274BAC; } }
L_00274C84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 21);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[4].w[0] << 18);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[4].w[0] << 19);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 24u)));
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 22);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[17].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274D00u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x00274D00u) [[unlikely]] return; }
L_00274D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274BB0u | kUnwind; return; } goto L_00274BB0; } }
L_00274D08:
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274188u | kUnwind; return; } goto L_00274188; } }
L_00274D1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00274DB8; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00274D44; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00274D44:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00274D5C; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00274D5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 64512ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00274D94; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00274DAC; } }
L_00274D94:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_00274DAC:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274490u | kUnwind; return; } goto L_00274490; } }
L_00274DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 16383u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274DACu | kUnwind; return; } goto L_00274DAC; } }
L_00274DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[5] = c.f[3];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002742C4u | kUnwind; return; } goto L_002742C4; } }
L_00274DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 16383u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274360u | kUnwind; return; } goto L_00274360; } }
L_00274DD0:
    c.f[3] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002743F8u | kUnwind; return; } goto L_002743F8; } }
L_00274DDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 21);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[4].w[0] << 18);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[4].w[0] << 19);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 24u)));
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 22);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[17].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00274E58u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x00274E58u) [[unlikely]] return; }
L_00274E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274628u | kUnwind; return; } goto L_00274628; } }
L_00274E60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00274E90:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027574C; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[16], ld32((c.r[18].w[0])));  if (t) { goto L_00274EE0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00274EFC; } }
L_00274EE0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[21] = fp::cvt_s_w(c.f[0]);
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[21]);
    c.budget -= 7;
L_00274EFC:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 25296u);
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[16].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.f[2] = ld32((c.r[17].w[0]));  if (t) { goto L_00274F24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[18].w[0] + 60u));  if (t) { goto L_00274F2C; } }
L_00274F24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 2;
L_00274F2C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 76u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);  if (t) { goto L_002753F4; } }
    c.r[4].d[0] = ld16((c.r[18].w[0] + 44u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00275CA8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027574C; } }
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027576C; } }
L_00274F6C:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 76u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[16].d[0] & 2048ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[4] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.f[1] = ld32((c.r[18].w[0] + 68u));  if (t) { goto L_00274FD8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00274FB4; } }
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);  if (t) { goto L_00274FD8; } }
L_00274FB4:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00274FD8; } }
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[1]);
    c.budget -= 6;
L_00274FD8:
    c.r[2].d[0] = c.r[16].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002750D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[3] = c.f[20];  if (t) { goto L_00275000; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00275000:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00275018; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00275018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[2].d[0] | 64512ull;
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = 0u;
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027506C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[19], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_00275088; } }
L_0027506C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[0]);
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_00275088:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002750AC; } }
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] - c.r[19].w[0]);  if (t) { goto L_002750C8; } }
L_002750AC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[16], c.r[3].w[0] - c.r[19].w[0]);
    c.budget -= 7;
L_002750C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_00275160; } }
L_002750D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = c.f[20];  if (t) { goto L_002750EC; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_002750EC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00275104; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_00275104:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 64512ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027513C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] >> 1);  if (t) { goto L_00275158; } }
L_0027513C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[19], c.r[3].w[0] >> 1);
    c.budget -= 7;
L_00275158:
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 2;
L_00275160:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00275184; } }
    c.f[0] = fp::cvt_w_s(c.f[21]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027519C; } }
L_00275184:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_0027519C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751A4u);  if (depth < kMaxDepth) unit_0019(c, 525u, depth + 1u); else { c.pc = 0x00267A90u; return; } if (c.pc != 0x002751A4u) [[unlikely]] return; }
L_002751A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 36u));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751B8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_001A(c, 306u, depth + 1u); else { c.pc = 0x0026ACD0u; return; } if (c.pc != 0x002751B8u) [[unlikely]] return; }
L_002751B8:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 36u));
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.r[6].d[0] = c.r[19].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002751D0u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0018(c, 270u, depth + 1u); else { c.pc = 0x00263AF0u; return; } if (c.pc != 0x002751D0u) [[unlikely]] return; }
L_002751D0:
    c.f[1] = ld32((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[18].w[0] + 72u), c.f[1]);  if (t) { goto L_002751FC; } }
    c.f[0] = fp::cvt_w_s(c.f[21]);
    set32(c.r[17], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0])));  if (t) { goto L_00275218; } }
L_002751FC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 7;
L_00275218:
    c.r[20].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[19].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[5].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002758D0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027577C; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[7], c.r[3].w[0] << 18);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[3].w[0] << 19);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[3], c.r[3].w[0] << 22);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[18].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 23;
L_002752A0:
    c.r[2].d[0] = c.r[2].d[0] << 41;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002753B0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30180u));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_002752E0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002752E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 30184u)));  if (t) { goto L_002752E4; } }
L_002752E0:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_002752E4:
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002752F0u); set32(c.r[6], c.r[6].w[0] - 64u);  if (depth < kMaxDepth) unit_0019(c, 392u, depth + 1u); else { c.pc = 0x00266D10u; return; } if (c.pc != 0x002752F0u) [[unlikely]] return; }
L_002752F0:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30180u));
    c.r[22].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_0027532C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027532C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[28].w[0] - 30184u)));  if (t) { goto L_00275330; } }
L_0027532C:
    set32(c.r[21], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_00275330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275338u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 525u, depth + 1u); else { c.pc = 0x00267A90u; return; } if (c.pc != 0x00275338u) [[unlikely]] return; }
L_00275338:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[6].d[0] = c.r[22].d[0] & 255ull;
    c.r[7].d[0] = c.r[19].d[0] & 65535ull;
    c.r[8].d[0] = c.r[20].d[0] & 65535ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275364u); c.r[5].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 460u, depth + 1u); else { c.pc = 0x0026BF70u; return; } if (c.pc != 0x00275364u) [[unlikely]] return; }
L_00275364:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00275800; } }
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 2;
L_00275388:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00275388u | kUnwind; return; } goto L_00275388; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00275800; } }
L_002753B0:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002753D8u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0019(c, 219u, depth + 1u); else { c.pc = 0x00265940u; return; } if (c.pc != 0x002753D8u) [[unlikely]] return; }
L_002753D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] << 41;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00275AA8; } }
L_002753EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.f[20]);  if (t) { goto L_0027574C; } }
L_002753F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] << 41;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275500; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275418u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0019(c, 197u, depth + 1u); else { c.pc = 0x002654B0u; return; } if (c.pc != 0x00275418u) [[unlikely]] return; }
L_00275418:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 177u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00275CC0; } }
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002754AC; } }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 178u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002754AC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00275D3C; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[7], c.r[3].w[0] << 18);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[3].w[0] << 19);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[3], c.r[3].w[0] << 22);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[18].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 22;
L_002754AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_002754B0:
    c.r[2].d[0] = c.r[2].d[0] << 44;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00275500; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00275500; } }
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 2;
L_002754E0:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002754E0u | kUnwind; return; } goto L_002754E0; } }
L_00275500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275508u); c.r[4].d[0] = ld8((c.r[18].w[0] + 36u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00275508u) [[unlikely]] return; }
L_00275508:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00275730; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30080u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.f[3] = ld32((c.r[17].w[0]));  if (t) { goto L_00275580; } }
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00275DC0; } }
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = ld32((c.r[18].w[0] + 60u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00275DC0; } }
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[3]);
    st32((c.r[18].w[0] + 60u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.budget -= 10;
L_00275580:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0027574C; } }
    c.r[2].d[0] = c.r[16].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.f[3] = ld32((c.r[18].w[0] + 40u));  if (t) { goto L_00275684; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002755B8; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002755B8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002755D0; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002755D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[2].d[0] | 64512ull;
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[1] = 0u;
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00275620; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_0027563C; } }
L_00275620:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_0027563C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00275660; } }
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_0027567C; } }
L_00275660:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
L_0027567C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] << 48;  if (t) { goto L_00275714; } }
L_00275684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002756A0; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002756A0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002756B8; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002756B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 64512ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002756F0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_0027570C; } }
L_002756F0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.budget -= 7;
L_0027570C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] << 48;
    c.budget -= 2;
L_00275714:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = ld8((c.r[18].w[0] + 36u));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275728u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0018(c, 270u, depth + 1u); else { c.pc = 0x00263AF0u; return; } if (c.pc != 0x00275728u) [[unlikely]] return; }
L_00275728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 80u)));  if (t) { goto L_00275750; } }
L_00275730:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0027574C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275748u); c.r[4].d[0] = ld8((c.r[18].w[0] + 36u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x00275748u) [[unlikely]] return; }
L_00275748:
    st32((c.r[18].w[0] + 64u), 0u);
    c.budget -= 1;
L_0027574C:
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_00275750:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00275760; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00275764; } }
L_00275760:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00275764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_00275DD4; } }
L_0027576C:
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 60u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00274F6Cu | kUnwind; return; } goto L_00274F6C; } }
L_0027577C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 21);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[4].w[0] << 18);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[4].w[0] << 19);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 24u)));
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 22);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[18].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002757F8u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x002757F8u) [[unlikely]] return; }
L_002757F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002752A0u | kUnwind; return; } goto L_002752A0; } }
L_00275800:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00275888; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275824u); c.r[5].d[0] = c.r[3].d[0] >> 60;  if (depth < kMaxDepth) unit_0019(c, 330u, depth + 1u); else { c.pc = 0x00266610u; return; } if (c.pc != 0x00275824u) [[unlikely]] return; }
L_00275824:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275838u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0019(c, 258u, depth + 1u); else { c.pc = 0x00265D30u; return; } if (c.pc != 0x00275838u) [[unlikely]] return; }
L_00275838:
    set32(c.r[16], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00275888; } }
L_00275850:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275860u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_001C(c, 138u, depth + 1u); else { c.pc = 0x00271170u; return; } if (c.pc != 0x00275860u) [[unlikely]] return; }
L_00275860:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00275850u | kUnwind; return; } goto L_00275850; } }
L_00275888:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275894u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0019(c, 204u, depth + 1u); else { c.pc = 0x002657B0u; return; } if (c.pc != 0x00275894u) [[unlikely]] return; }
L_00275894:
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002753B0u | kUnwind; return; } goto L_002753B0; } }
L_002758D0:
    c.r[2].d[0] = c.r[5].d[0] << 41;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002753B0u | kUnwind; return; } goto L_002753B0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30180u));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00275910; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00275910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 30184u)));  if (t) { goto L_00275914; } }
L_00275910:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_00275914:
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275920u); set32(c.r[6], c.r[6].w[0] - 64u);  if (depth < kMaxDepth) unit_0019(c, 392u, depth + 1u); else { c.pc = 0x00266D10u; return; } if (c.pc != 0x00275920u) [[unlikely]] return; }
L_00275920:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30180u));
    c.r[22].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_0027595C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027595C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[28].w[0] - 30184u)));  if (t) { goto L_00275960; } }
L_0027595C:
    set32(c.r[21], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_00275960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275968u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 525u, depth + 1u); else { c.pc = 0x00267A90u; return; } if (c.pc != 0x00275968u) [[unlikely]] return; }
L_00275968:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), 0ull);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.r[6].d[0] = c.r[22].d[0] & 255ull;
    c.r[7].d[0] = c.r[19].d[0] & 65535ull;
    c.r[8].d[0] = c.r[20].d[0] & 65535ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275994u); c.r[5].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 460u, depth + 1u); else { c.pc = 0x0026BF70u; return; } if (c.pc != 0x00275994u) [[unlikely]] return; }
L_00275994:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[4].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002759D8; } }
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 2;
L_002759B8:
    c.r[2].d[0] = c.r[4].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002759B8u | kUnwind; return; } goto L_002759B8; } }
L_002759D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00275A60; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002759FCu); c.r[5].d[0] = c.r[3].d[0] >> 60;  if (depth < kMaxDepth) unit_0019(c, 330u, depth + 1u); else { c.pc = 0x00266610u; return; } if (c.pc != 0x002759FCu) [[unlikely]] return; }
L_002759FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A10u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0019(c, 258u, depth + 1u); else { c.pc = 0x00265D30u; return; } if (c.pc != 0x00275A10u) [[unlikely]] return; }
L_00275A10:
    set32(c.r[16], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00275A60; } }
L_00275A28:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A38u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_001C(c, 138u, depth + 1u); else { c.pc = 0x00271170u; return; } if (c.pc != 0x00275A38u) [[unlikely]] return; }
L_00275A38:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00275A28u | kUnwind; return; } goto L_00275A28; } }
L_00275A60:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275A6Cu); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0019(c, 204u, depth + 1u); else { c.pc = 0x002657B0u; return; } if (c.pc != 0x00275A6Cu) [[unlikely]] return; }
L_00275A6C:
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002753B0u | kUnwind; return; } goto L_002753B0; } }
L_00275AA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275AB8u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_0019(c, 197u, depth + 1u); else { c.pc = 0x002654B0u; return; } if (c.pc != 0x00275AB8u) [[unlikely]] return; }
L_00275AB8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 257u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00275BA8; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00275B4C; } }
    c.r[4].d[0] = ld8((c.r[29].w[0] + 258u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00275B4C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] << 42;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00275C24; } }
    set32(c.r[9], ld32((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], c.r[4].w[0] << 18);
    c.r[7].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[6], c.r[4].w[0] << 19);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[4], c.r[4].w[0] << 22);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st32((c.r[18].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 24u)));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[18].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 22;
L_00275B4C:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00275B50:
    c.r[3].d[0] = c.r[3].d[0] << 44;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002753ECu | kUnwind; return; } goto L_002753EC; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002753ECu | kUnwind; return; } goto L_002753EC; } }
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 2;
L_00275B80:
    c.r[3].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00275B80u | kUnwind; return; } goto L_00275B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002753ECu | kUnwind; return; } goto L_002753EC; } }
L_00275BA8:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 258u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00275C04; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00275B4Cu | kUnwind; return; } goto L_00275B4C; } }
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[3].w[0] << 19);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[3].w[0] << 18);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    st32((c.r[18].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00275B4Cu | kUnwind; return; } goto L_00275B4C; } }
L_00275C04:
    set32(c.r[5], ld32((c.r[18].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00275B4Cu | kUnwind; return; } goto L_00275B4C; } }
L_00275C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 21);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[4].w[0] << 18);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[4].w[0] << 19);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 24u)));
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 22);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[18].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275CA0u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x00275CA0u) [[unlikely]] return; }
L_00275CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00275B50u | kUnwind; return; } goto L_00275B50; } }
L_00275CA8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30080u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027574Cu | kUnwind; return; } goto L_0027574C; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027574Cu | kUnwind; return; } goto L_0027574C; } }
L_00275CC0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 178u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00275D1C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002754ACu | kUnwind; return; } goto L_002754AC; } }
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[2].w[0] << 19);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[5], c.r[2].w[0] << 18);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002754ACu | kUnwind; return; } goto L_002754AC; } }
L_00275D1C:
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002754ACu | kUnwind; return; } goto L_002754AC; } }
L_00275D3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 21);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    set32(c.r[7], c.r[4].w[0] << 18);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], c.r[4].w[0] << 19);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[8], ld32((c.r[18].w[0] + 24u)));
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[3], c.r[4].w[0] << 22);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st32((c.r[18].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 24u)));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[18].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00275DB8u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x00275DB8u) [[unlikely]] return; }
L_00275DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002754B0u | kUnwind; return; } goto L_002754B0; } }
L_00275DC0:
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[18].w[0] + 60u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 52u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00275580u | kUnwind; return; } goto L_00275580; } }
L_00275DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_00275E10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002762B4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00276404; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 32u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002763EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002762B4; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { goto L_00275E7C; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00275E98; } }
L_00275E7C:
    set32(c.r[5], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_00275E98:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 25296u);
    set32(c.r[19], c.r[5].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.f[1] = ld32((c.r[19].w[0]));  if (t) { goto L_00275EC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 24u));  if (t) { goto L_00275EC8; } }
L_00275EC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    c.budget -= 2;
L_00275EC8:
    c.r[4].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_00275EDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[5] = ld32((c.r[16].w[0] + 48u));  if (t) { goto L_00275EE0; } }
L_00275EDC:
    c.f[5] = 0u;
    c.budget -= 1;
L_00275EE0:
    c.r[4].d[0] = c.r[3].d[0] & 2048ull;
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[7] = ld32((c.r[16].w[0] + 12u));
    c.f[9] = ld32((c.r[16].w[0] + 16u));
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.f[1] = ld32((c.r[16].w[0] + 40u));  if (t) { goto L_00275F40; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00275F1C; } }
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[5]);  if (t) { goto L_00275F40; } }
L_00275F1C:
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00275F40; } }
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[5]);
    c.budget -= 6;
L_00275F40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[6] = ld32((c.r[4].w[0] - 22576u));
    c.f[5] = ld32((c.r[5].w[0] - 22572u));
    c.f[8] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[4].w[0] - 22568u));
    c.f[10] = fp::ee::sub(c.fcr31, c.f[9], c.f[5]);
    c.f[11] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[10], c.f[10]);
    c.f[9] = fp::ee::sub(c.fcr31, c.f[12], c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[11]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[9]);
    c.f[12] = fp::ee::sqrt(c.fcr31, c.f[0]);
    fpu_compare(c, fp::key(c.f[8]) == fp::key(c.f[12]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002762D4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[7] = ld32((c.r[4].w[0] - 22556u));
    c.f[6] = ld32((c.r[5].w[0] - 22564u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[5] = ld32((c.r[4].w[0] - 22560u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[5].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[10]);
    c.facc = fp::ee::add(c.fcr31, c.f[8], c.f[5]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[11]);
    c.facc = fp::ee::add(c.fcr31, c.f[8], c.f[5]);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[9]);
    c.f[7] = fp::ee::div(c.fcr31, c.f[5], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276374; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[5] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[5]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00275FF4; } }
    c.f[7] = c.f[5];
    c.budget -= 1;
L_00275FF4:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276004; } }
    c.f[12] = c.f[2];
    c.budget -= 1;
L_00276004:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[5]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027637C; } }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027602C; } }
    c.f[4] = c.f[5];
    c.budget -= 1;
L_0027602C:
    c.f[5] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[5]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276044; } }
    c.f[4] = c.f[5];
    c.budget -= 1;
L_00276044:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[5].d[0] = c.r[5].d[0] | 64512ull;
    c.f[6] = c.r[5].w[0];
    c.f[5] = c.r[4].w[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[6]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[4]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027607C; } }
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[6], c.f[4]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276094; } }
L_0027607C:
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[6], c.f[4]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.budget -= 6;
L_00276094:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276384; } }
    c.f[6] = ld32((c.r[28].w[0] - 30084u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[4].w[0];
    c.f[1] = 0u;
    c.f[5] = fp::ee::sub(c.fcr31, c.f[12], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[6], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[5]);
    c.f[5] = fp::ee::div(c.fcr31, c.f[4], c.f[1]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[4]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002760DC; } }
    c.f[5] = c.f[4];
    c.budget -= 1;
L_002760DC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002760F4; } }
    c.f[5] = c.f[1];
    c.budget -= 1;
L_002760F4:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_00276108; } }
    c.f[1] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_00276124; } }
L_00276108:
    set32(c.r[5], c.r[6].w[0] >> 1);
    c.r[4].d[0] = c.r[6].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00276124:
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 2;
L_0027612C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[4] = c.r[5].w[0];
    c.f[2] = 0u;
    c.f[1] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[7]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276164; } }
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[6], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_00276180; } }
L_00276164:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[1]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_00276180:
    c.f[1] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[5]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002761A4; } }
    c.f[1] = fp::cvt_w_s(c.f[5]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[5].w[0] - c.r[6].w[0]);  if (t) { goto L_002761C0; } }
L_002761A4:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    set32(c.r[7], c.r[5].w[0] - c.r[6].w[0]);
    c.budget -= 7;
L_002761C0:
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.f[7] = 0u;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00276390; } }
L_002761D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002761F8; } }
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { goto L_00276214; } }
L_002761F8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 7;
L_00276214:
    c.r[18].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.r[6].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] & 65535ull;  if (t) { goto L_00276294; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0027626C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276240u); c.r[20].d[0] = ld16((c.r[5].w[0] + 2u));  if (depth < kMaxDepth) unit_0019(c, 525u, depth + 1u); else { c.pc = 0x00267A90u; return; } if (c.pc != 0x00276240u) [[unlikely]] return; }
L_00276240:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[4].d[0] = c.r[20].d[0] & 65535ull;
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.r[7].d[0] = c.r[18].d[0] & 65535ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276264u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 324u, depth + 1u); else { c.pc = 0x0026AEB0u; return; } if (c.pc != 0x00276264u) [[unlikely]] return; }
L_00276264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 34u));  if (t) { goto L_00276298; } }
L_0027626C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276274u); c.r[20].d[0] = ld16((c.r[5].w[0] + 2u));  if (depth < kMaxDepth) unit_0019(c, 525u, depth + 1u); else { c.pc = 0x00267A90u; return; } if (c.pc != 0x00276274u) [[unlikely]] return; }
L_00276274:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[4].d[0] = c.r[20].d[0] & 65535ull;
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.r[7].d[0] = c.r[18].d[0] & 65535ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276294u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 368u, depth + 1u); else { c.pc = 0x0026B470u; return; } if (c.pc != 0x00276294u) [[unlikely]] return; }
L_00276294:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 34u));
    c.budget -= 1;
L_00276298:
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 7;
L_002762B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002762C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002762CC; } }
L_002762C8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002762CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_00276964; } }
L_002762D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027636C; } }
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002762FC; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_002762FC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276314; } }
    c.f[4] = c.f[1];
    c.budget -= 1;
L_00276314:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[5].d[0] = c.r[5].d[0] | 64512ull;
    c.f[2] = c.r[5].w[0];
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276348; } }
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[5], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276360; } }
L_00276348:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 6;
L_00276360:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002761C0u | kUnwind; return; } goto L_002761C0; } }
L_0027636C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 16383u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276360u | kUnwind; return; } goto L_00276360; } }
L_00276374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[7] = c.f[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00275FF4u | kUnwind; return; } goto L_00275FF4; } }
L_0027637C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 16383u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276094u | kUnwind; return; } goto L_00276094; } }
L_00276384:
    c.f[5] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027612Cu | kUnwind; return; } goto L_0027612C; } }
L_00276390:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[4].w[0] - 22572u));
    c.f[4] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = ld32((c.r[3].w[0] - 22568u));
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[5] = ld32((c.r[5].w[0] - 22576u));
    c.f[6] = ld32((c.r[16].w[0] + 12u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[4]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002761D0u | kUnwind; return; } goto L_002761D0; } }
L_002763EC:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30080u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002762B4u | kUnwind; return; } goto L_002762B4; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002762B4u | kUnwind; return; } goto L_002762B4; } }
L_00276404:
    set32(c.r[18], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276410u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00276410u) [[unlikely]] return; }
L_00276410:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00276884; } }
    c.r[17].d[0] = c.r[18].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0027655C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0027644C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[6] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00276468; } }
L_0027644C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[6] = fp::cvt_s_w(c.f[0]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[6]);
    c.budget -= 7;
L_00276468:
    c.r[3].d[0] = c.r[18].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027655C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[3].w[0] - 22576u));
    c.f[5] = ld32((c.r[16].w[0] + 12u));
    c.f[4] = ld32((c.r[16].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[3] = ld32((c.r[3].w[0] - 22572u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 22568u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    c.r[4].d[0] = c.r[3].d[0] | 50682ull;
    set32(c.r[3], 0u + 1u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[3] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.f[1] = c.r[4].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[3]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 32;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);  if (t) { goto L_0027655C; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30080u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027655C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276528; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276540; } }
L_00276528:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_00276540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276548u);  if (depth < kMaxDepth) unit_0019(c, 525u, depth + 1u); else { c.pc = 0x00267A90u; return; } if (c.pc != 0x00276548u) [[unlikely]] return; }
L_00276548:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[3].d[0] << 48;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027655Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_001A(c, 306u, depth + 1u); else { c.pc = 0x0026ACD0u; return; } if (c.pc != 0x0027655Cu) [[unlikely]] return; }
L_0027655C:
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 25296u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30080u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.f[20] = ld32((c.r[3].w[0]));  if (t) { goto L_0027658C; } }
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276594; } }
L_0027658C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002762B4u | kUnwind; return; } goto L_002762B4; } }
L_00276594:
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002762B4u | kUnwind; return; } goto L_002762B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002762B4u | kUnwind; return; } goto L_002762B4; } }
    c.r[2].d[0] = c.r[18].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002765BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 24u));  if (t) { goto L_002765C4; } }
L_002765BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_002765C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[3] = ld32((c.r[4].w[0] - 22576u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[7] = ld32((c.r[16].w[0] + 12u));
    c.f[9] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] - 22572u));
    c.f[6] = ld32((c.r[16].w[0] + 16u));
    c.f[8] = fp::ee::sub(c.fcr31, c.f[7], c.f[3]);
    c.f[1] = ld32((c.r[2].w[0] - 22568u));
    c.f[7] = fp::ee::sub(c.fcr31, c.f[6], c.f[2]);
    c.f[4] = ld32((c.r[16].w[0] + 20u));
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[7]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    c.f[11] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[5] = 0u;
    c.f[6] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[10] = fp::ee::sqrt(c.fcr31, c.f[1]);
    fpu_compare(c, fp::key(c.f[5]) == fp::key(c.f[10]));
    c.budget -= 26;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002768A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[4] = ld32((c.r[2].w[0] - 22556u));
    c.f[3] = ld32((c.r[3].w[0] - 22564u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[2] = ld32((c.r[2].w[0] - 22560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[7]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[8]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[6]);
    c.f[5] = fp::ee::div(c.fcr31, c.f[2], c.f[10]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[1]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276948; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276694; } }
    c.f[5] = c.f[1];
    c.budget -= 1;
L_00276694:
    fpu_compare(c, fp::key(c.f[10]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002766A4; } }
    c.f[10] = c.f[0];
    c.budget -= 1;
L_002766A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276950; } }
    fpu_compare(c, fp::key(c.f[9]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002766CC; } }
    c.f[9] = c.f[1];
    c.budget -= 1;
L_002766CC:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002766E4; } }
    c.f[9] = c.f[1];
    c.budget -= 1;
L_002766E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 64512ull;
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[9], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276718; } }
    c.f[1] = fp::cvt_w_s(c.f[2]);
    set32(c.r[4], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276730; } }
L_00276718:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_00276730:
    fpu_compare(c, fp::key(c.f[10]) <= fp::key(c.f[11]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276958; } }
    c.f[4] = ld32((c.r[28].w[0] - 30084u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[10], c.f[0]);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[4], c.f[0]);
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[3]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027677C; } }
    c.f[3] = c.f[2];
    c.budget -= 1;
L_0027677C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276794; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00276794:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002767A8; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002767C4; } }
L_002767A8:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002767C4:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 2;
L_002767CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276808; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_00276824; } }
L_00276808:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_00276824:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276848; } }
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_00276864; } }
L_00276848:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
L_00276864:
    c.r[6].d[0] = c.r[4].d[0] << 48;
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027687Cu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0018(c, 270u, depth + 1u); else { c.pc = 0x00263AF0u; return; } if (c.pc != 0x0027687Cu) [[unlikely]] return; }
L_0027687C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002762B4u | kUnwind; return; } goto L_002762B4; } }
L_00276884:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002762B4u | kUnwind; return; } goto L_002762B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027689Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x0027689Cu) [[unlikely]] return; }
L_0027689C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002762B4u | kUnwind; return; } goto L_002762B4; } }
L_002768A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276940; } }
    fpu_compare(c, fp::key(c.f[9]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002768CC; } }
    c.f[9] = c.f[0];
    c.budget -= 1;
L_002768CC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[9]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002768E4; } }
    c.f[9] = c.f[0];
    c.budget -= 1;
L_002768E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 64512ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[9], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027691C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00276934; } }
L_0027691C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_00276934:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276864u | kUnwind; return; } goto L_00276864; } }
L_00276940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 16383u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276934u | kUnwind; return; } goto L_00276934; } }
L_00276948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[5] = c.f[1];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276694u | kUnwind; return; } goto L_00276694; } }
L_00276950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 16383u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276730u | kUnwind; return; } goto L_00276730; } }
L_00276958:
    c.f[3] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002767CCu | kUnwind; return; } goto L_002767CC; } }
L_00276964:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00276990:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00276CF4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002769D4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002769F0; } }
L_002769D4:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[4]);
    c.budget -= 7;
L_002769F0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00276D2C; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00276D14; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] - 25296u);
    c.r[7].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[3].d[0] & 512ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[19], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.f[1] = ld32((c.r[19].w[0]));  if (t) { goto L_00276A38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 12u));  if (t) { goto L_00276A40; } }
L_00276A38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    c.budget -= 2;
L_00276A40:
    c.f[5] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[3].d[0] & 2048ull;
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.f[1] = ld32((c.r[16].w[0] + 28u));  if (t) { goto L_00276A98; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276A74; } }
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);  if (t) { goto L_00276A98; } }
L_00276A74:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276A98; } }
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[1]);
    c.budget -= 6;
L_00276A98:
    c.r[4].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00276B8C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276AC0; } }
    c.f[5] = c.f[0];
    c.budget -= 1;
L_00276AC0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276AD8; } }
    c.f[5] = c.f[0];
    c.budget -= 1;
L_00276AD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = c.r[4].d[0] | 64512ull;
    c.f[0] = c.r[7].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[6].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.f[1] = 0u;
    c.f[0] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276B28; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_00276B44; } }
L_00276B28:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_00276B44:
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276B68; } }
    c.f[0] = fp::cvt_w_s(c.f[5]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[7].w[0]);  if (t) { goto L_00276B84; } }
L_00276B68:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[5], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    set32(c.r[8], c.r[6].w[0] - c.r[7].w[0]);
    c.budget -= 7;
L_00276B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_00276C1C; } }
L_00276B8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276BA8; } }
    c.f[5] = c.f[0];
    c.budget -= 1;
L_00276BA8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276BC0; } }
    c.f[5] = c.f[0];
    c.budget -= 1;
L_00276BC0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[6].d[0] = c.r[6].d[0] | 64512ull;
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276BF8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[6].w[0] >> 1);  if (t) { goto L_00276C14; } }
L_00276BF8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    set32(c.r[7], c.r[6].w[0] >> 1);
    c.budget -= 7;
L_00276C14:
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 2;
L_00276C1C:
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276C40; } }
    c.f[0] = fp::cvt_w_s(c.f[4]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] & 256ull;  if (t) { goto L_00276C5C; } }
L_00276C40:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[6].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 7;
L_00276C5C:
    c.r[18].d[0] = c.r[7].d[0] & 65535ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[17].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;  if (t) { goto L_00276CD4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00276CAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276C80u); c.r[20].d[0] = ld16((c.r[5].w[0] + 2u));  if (depth < kMaxDepth) unit_0019(c, 525u, depth + 1u); else { c.pc = 0x00267A90u; return; } if (c.pc != 0x00276C80u) [[unlikely]] return; }
L_00276C80:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[4].d[0] = c.r[20].d[0] & 65535ull;
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.r[7].d[0] = c.r[18].d[0] & 65535ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276CA4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 324u, depth + 1u); else { c.pc = 0x0026AEB0u; return; } if (c.pc != 0x00276CA4u) [[unlikely]] return; }
L_00276CA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 24u));  if (t) { goto L_00276CD8; } }
L_00276CAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276CB4u); c.r[20].d[0] = ld16((c.r[5].w[0] + 2u));  if (depth < kMaxDepth) unit_0019(c, 525u, depth + 1u); else { c.pc = 0x00267A90u; return; } if (c.pc != 0x00276CB4u) [[unlikely]] return; }
L_00276CB4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[4].d[0] = c.r[20].d[0] & 65535ull;
    c.r[6].d[0] = c.r[17].d[0] & 65535ull;
    c.r[7].d[0] = c.r[18].d[0] & 65535ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276CD4u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 368u, depth + 1u); else { c.pc = 0x0026B470u; return; } if (c.pc != 0x00276CD4u) [[unlikely]] return; }
L_00276CD4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 24u));
    c.budget -= 1;
L_00276CD8:
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[19].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.budget -= 7;
L_00276CF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00276D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00276D0C; } }
L_00276D08:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00276D0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_00276F54; } }
L_00276D14:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30080u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276CF4u | kUnwind; return; } goto L_00276CF4; } }
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276CF4u | kUnwind; return; } goto L_00276CF4; } }
L_00276D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276D34u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00276D34u) [[unlikely]] return; }
L_00276D34:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00276F44; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 25296u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30080u));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = ld32((c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276CF4u | kUnwind; return; } goto L_00276CF4; } }
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276CF4u | kUnwind; return; } goto L_00276CF4; } }
    c.r[2].d[0] = c.r[6].d[0] & 512ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00276D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 12u));  if (t) { goto L_00276D98; } }
L_00276D90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_00276D98:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.f[3] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);  if (t) { goto L_00276E98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276DC8; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00276DC8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276DE0; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00276DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[2].d[0] | 64512ull;
    c.f[0] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = 0u;
    c.f[0] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276E34; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);  if (t) { goto L_00276E50; } }
L_00276E34:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.budget -= 7;
L_00276E50:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276E74; } }
    c.f[0] = fp::cvt_w_s(c.f[3]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);  if (t) { goto L_00276E90; } }
L_00276E74:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
L_00276E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] << 48;  if (t) { goto L_00276F28; } }
L_00276E98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276EB4; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00276EB4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00276ECC; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_00276ECC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x467F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 64512ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00276F04; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_00276F20; } }
L_00276F04:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.budget -= 7;
L_00276F20:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] << 48;
    c.budget -= 2;
L_00276F28:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F3Cu); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);  if (depth < kMaxDepth) unit_0018(c, 270u, depth + 1u); else { c.pc = 0x00263AF0u; return; } if (c.pc != 0x00276F3Cu) [[unlikely]] return; }
L_00276F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276CF4u | kUnwind; return; } goto L_00276CF4; } }
L_00276F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276F4Cu); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x00276F4Cu) [[unlikely]] return; }
L_00276F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00276CF4u | kUnwind; return; } goto L_00276CF4; } }
L_00276F54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00276F80:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { set32(c.r[4], c.r[4].w[0] - 29152u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00271E90u | kUnwind; return; } [[clang::musttail]] return unit_001C(c, 228u, depth); }
L_00276FA0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] - 29152u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00271D60u | kUnwind; return; } [[clang::musttail]] return unit_001C(c, 224u, depth); }
L_00276FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30128u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00276FD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276FCCu);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00276FCCu) [[unlikely]] return; }
L_00276FCC:
    st32((c.r[28].w[0] - 30128u), 0u);
    c.budget -= 1;
L_00276FD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00276FE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276FE4u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00276FE4u) [[unlikely]] return; }
L_00276FE4:
    st32((c.r[28].w[0] - 30124u), 0u);
    c.budget -= 1;
L_00276FE8:
    set32(c.r[4], ld32((c.r[28].w[0] - 30100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00277000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00276FFCu);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00276FFCu) [[unlikely]] return; }
L_00276FFC:
    st32((c.r[28].w[0] - 30100u), 0u);
    c.budget -= 1;
L_00277000:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00277010:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30128u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00277030; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027702Cu);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0027702Cu) [[unlikely]] return; }
L_0027702C:
    st32((c.r[28].w[0] - 30128u), 0u);
    c.budget -= 1;
L_00277030:
    set32(c.r[4], ld32((c.r[28].w[0] - 30124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00277048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277044u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00277044u) [[unlikely]] return; }
L_00277044:
    st32((c.r[28].w[0] - 30124u), 0u);
    c.budget -= 1;
L_00277048:
    set32(c.r[4], ld32((c.r[28].w[0] - 30100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00277060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027705Cu);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0027705Cu) [[unlikely]] return; }
L_0027705C:
    st32((c.r[28].w[0] - 30100u), 0u);
    c.budget -= 1;
L_00277060:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00277070:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002703C0u | kUnwind; return; } [[clang::musttail]] return unit_001C(c, 27u, depth); }
L_00277080:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00270690u | kUnwind; return; } [[clang::musttail]] return unit_001C(c, 45u, depth); }
L_00277090:
    c.budget -= 2;
    {  goto L_002770F0; }
L_002770A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002770B0u);  if (depth < kMaxDepth) unit_001A(c, 248u, depth + 1u); else { c.pc = 0x0026A6D0u; return; } if (c.pc != 0x002770B0u) [[unlikely]] return; }
L_002770B0:
    st8((c.r[28].w[0] - 30080u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002770C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002770D0u);  if (depth < kMaxDepth) unit_001A(c, 260u, depth + 1u); else { c.pc = 0x0026A7E0u; return; } if (c.pc != 0x002770D0u) [[unlikely]] return; }
L_002770D0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 30080u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002770F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[16].w[0] - 25264u);
    c.budget -= 7;
L_0027710C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277114u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 113u, depth + 1u); else { c.pc = 0x00276990u; return; } if (c.pc != 0x00277114u) [[unlikely]] return; }
L_00277114:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 44u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027710Cu | kUnwind; return; } goto L_0027710C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 25088u);
    c.budget -= 3;
L_00277134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027713Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 91u, depth + 1u); else { c.pc = 0x00275E10u; return; } if (c.pc != 0x0027713Cu) [[unlikely]] return; }
L_0027713C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 64u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277134u | kUnwind; return; } goto L_00277134; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027715Cu); set32(c.r[4], c.r[4].w[0] - 23024u);  if (depth < kMaxDepth) unit_001D(c, 48u, depth + 1u); else { c.pc = 0x00274E90u; return; } if (c.pc != 0x0027715Cu) [[unlikely]] return; }
L_0027715C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 22912u);
    c.budget -= 3;
L_00277168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277170u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 388u, depth + 1u); else { c.pc = 0x00273C00u; return; } if (c.pc != 0x00277170u) [[unlikely]] return; }
L_00277170:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 108u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277168u | kUnwind; return; } goto L_00277168; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277190u); set32(c.r[4], c.r[4].w[0] - 22672u);  if (depth < kMaxDepth) unit_001C(c, 342u, depth + 1u); else { c.pc = 0x00272E50u; return; } if (c.pc != 0x00277190u) [[unlikely]] return; }
L_00277190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277198u);  if (depth < kMaxDepth) unit_001C(c, 82u, depth + 1u); else { c.pc = 0x00270A40u; return; } if (c.pc != 0x00277198u) [[unlikely]] return; }
L_00277198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002771B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[28].w[0] - 30080u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] - 25264u);
    c.budget -= 8;
L_002771D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002771D8u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x002771D8u) [[unlikely]] return; }
L_002771D8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 44u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002771D0u | kUnwind; return; } goto L_002771D0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 25088u);
    c.budget -= 3;
L_002771F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277200u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x00277200u) [[unlikely]] return; }
L_00277200:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002771F8u | kUnwind; return; } goto L_002771F8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[16].w[0] - 23024u);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00277364; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[7], c.r[3].w[0] << 18);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[3].w[0] << 19);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[3], c.r[3].w[0] << 22);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 19;
L_0027727C:
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[6], 0u + 16384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027728Cu); st32((c.r[16].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_001C(c, 134u, depth + 1u); else { c.pc = 0x00271050u; return; } if (c.pc != 0x0027728Cu) [[unlikely]] return; }
L_0027728C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 22912u);
    c.budget -= 3;
L_00277298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002772A0u); c.r[4].d[0] = ld8((c.r[16].w[0] + 36u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x002772A0u) [[unlikely]] return; }
L_002772A0:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[6], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002772B4u); st32((c.r[16].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_001C(c, 134u, depth + 1u); else { c.pc = 0x00271050u; return; } if (c.pc != 0x002772B4u) [[unlikely]] return; }
L_002772B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 108u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277298u | kUnwind; return; } goto L_00277298; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[16].w[0] - 22672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002772D4u); c.r[4].d[0] = ld8((c.r[16].w[0] + 56u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x002772D4u) [[unlikely]] return; }
L_002772D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002772DCu); c.r[4].d[0] = ld8((c.r[16].w[0] + 57u));  if (depth < kMaxDepth) unit_001A(c, 272u, depth + 1u); else { c.pc = 0x0026A8F0u; return; } if (c.pc != 0x002772DCu) [[unlikely]] return; }
L_002772DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[3].d[0] << 42;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002773D0; } }
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    set32(c.r[7], c.r[3].w[0] << 18);
    c.r[6].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[3].w[0] << 19);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    set32(c.r[3], c.r[3].w[0] << 22);
    c.r[4].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 19;
L_0027733C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027734Cu); st32((c.r[16].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_001C(c, 134u, depth + 1u); else { c.pc = 0x00271050u; return; } if (c.pc != 0x0027734Cu) [[unlikely]] return; }
L_0027734C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277354u); set32(c.r[4], 0u + 46u);  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x00277354u) [[unlikely]] return; }
L_00277354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027735Cu);  if (depth < kMaxDepth) unit_001C(c, 89u, depth + 1u); else { c.pc = 0x00270AB0u; return; } if (c.pc != 0x0027735Cu) [[unlikely]] return; }
L_0027735C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0027743C; } }
L_00277364:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[5].w[0] << 21);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[6], c.r[5].w[0] << 19);
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] << 18);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[5].w[0] << 22);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002773C8u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x002773C8u) [[unlikely]] return; }
L_002773C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027727Cu | kUnwind; return; } goto L_0027727C; } }
L_002773D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[5].w[0] << 21);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[6], c.r[5].w[0] << 19);
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[5].w[0] << 18);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[4], c.r[5].w[0] << 22);
    c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[16].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277434u); c.r[4].d[0] = c.r[2].d[0] & 63ull;  if (depth < kMaxDepth) unit_001A(c, 287u, depth + 1u); else { c.pc = 0x0026AA80u; return; } if (c.pc != 0x00277434u) [[unlikely]] return; }
L_00277434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027733Cu | kUnwind; return; } goto L_0027733C; } }
L_0027743C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00277450:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027746Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_001C(c, 107u, depth + 1u); else { c.pc = 0x00270D30u; return; } if (c.pc != 0x0027746Cu) [[unlikely]] return; }
L_0027746C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0] - 25296u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 25292u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 25288u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 25284u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 25280u), c.r[4].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002774A0u); st8((c.r[28].w[0] - 30080u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001C(c, 89u, depth + 1u); else { c.pc = 0x00270AB0u; return; } if (c.pc != 0x002774A0u) [[unlikely]] return; }
L_002774A0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 25264u);
    c.budget -= 3;
L_002774AC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002774B8u); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_001A(c, 108u, depth + 1u); else { c.pc = 0x00268C60u; return; } if (c.pc != 0x002774B8u) [[unlikely]] return; }
L_002774B8:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u - 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].d[0] = 0ull & 7ull;
    c.r[8].d[0] = ld8((c.r[16].w[0] + 24u));
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[4], ld32((c.r[28].w[0] - 30072u)));
    set32(c.r[5], 0u - 15u);
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[7].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 24u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 40u), c.r[4].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 44u);
    c.budget -= 29;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 30072u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002774ACu | kUnwind; return; } goto L_002774AC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 25088u);
    c.budget -= 3;
L_00277538:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277544u); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_001A(c, 108u, depth + 1u); else { c.pc = 0x00268C60u; return; } if (c.pc != 0x00277544u) [[unlikely]] return; }
L_00277544:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = 0ull & 7ull;
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[6], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[7].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[5], 0u - 15u);
    st32((c.r[16].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 34u));
    set32(c.r[4], ld32((c.r[28].w[0] - 30076u)));
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[7].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 60u), c.r[4].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 64u);
    c.budget -= 32;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 30076u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277538u | kUnwind; return; } goto L_00277538; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 47u);
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775DCu); set32(c.r[16], c.r[16].w[0] - 23024u);  if (depth < kMaxDepth) unit_001A(c, 108u, depth + 1u); else { c.pc = 0x00268C60u; return; } if (c.pc != 0x002775DCu) [[unlikely]] return; }
L_002775DC:
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull | 32768ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002775F4u); set32(c.r[7], 0u + 16384u);  if (depth < kMaxDepth) unit_001C(c, 135u, depth + 1u); else { c.pc = 0x002710A0u; return; } if (c.pc != 0x002775F4u) [[unlikely]] return; }
L_002775F4:
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] + 36u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 76u));
    set32(c.r[5], 0u - 8u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = 0ull & 7ull;
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 2u);
    st32((c.r[16].w[0]), 0u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    st32((c.r[16].w[0] + 40u), 0u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 22912u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st8((c.r[16].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 24;
L_00277654:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277660u); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_001A(c, 108u, depth + 1u); else { c.pc = 0x00268C60u; return; } if (c.pc != 0x00277660u) [[unlikely]] return; }
L_00277660:
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.r[6].d[0] = 0ull | 32768ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277678u); set32(c.r[7], 0u + 16384u);  if (depth < kMaxDepth) unit_001C(c, 135u, depth + 1u); else { c.pc = 0x002710A0u; return; } if (c.pc != 0x00277678u) [[unlikely]] return; }
L_00277678:
    set32(c.r[2], c.r[17].w[0] + 36u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[8].d[0] = 0ull & 1ull;
    st32((c.r[17].w[0]), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[5], 0u - 8u);
    st32((c.r[17].w[0] + 44u), 0u);
    c.r[6].d[0] = 0ull & 7ull;
    st32((c.r[17].w[0] + 48u), 0u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 60u), 0u);
    c.r[9].d[0] = ld8((c.r[17].w[0] + 104u));
    set32(c.r[4], ld32((c.r[28].w[0] - 30068u)));
    c.r[3].d[0] = c.r[9].d[0] & c.r[3].d[0];
    c.r[8].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 104u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 64u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 72u), 0u);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[17].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 100u), c.r[4].w[0]);
    mmi::divu(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 108u);
    c.budget -= 36;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 30068u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277654u | kUnwind; return; } goto L_00277654; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 47u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027771Cu); set32(c.r[16], c.r[16].w[0] - 22672u);  if (depth < kMaxDepth) unit_001A(c, 108u, depth + 1u); else { c.pc = 0x00268C60u; return; } if (c.pc != 0x0027771Cu) [[unlikely]] return; }
L_0027771C:
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027772Cu); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_001A(c, 108u, depth + 1u); else { c.pc = 0x00268C60u; return; } if (c.pc != 0x0027772Cu) [[unlikely]] return; }
L_0027772C:
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277744u); c.r[7].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_001C(c, 135u, depth + 1u); else { c.pc = 0x002710A0u; return; } if (c.pc != 0x00277744u) [[unlikely]] return; }
L_00277744:
    set32(c.r[2], c.r[19].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277758u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_001C(c, 139u, depth + 1u); else { c.pc = 0x002711B0u; return; } if (c.pc != 0x00277758u) [[unlikely]] return; }
L_00277758:
    set32(c.r[3], c.r[16].w[0] + 56u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 88u));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[7], 0u - 2u);
    set32(c.r[3], c.r[16].w[0] + 57u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.r[8].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u - 8u);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull & 7ull;
    c.r[3].d[0] = c.r[9].d[0] & c.r[7].d[0];
    st32((c.r[16].w[0] + 60u), 0u);
    c.r[7].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[4].d[0];
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002777D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00277858; } }
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277840; } }
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277840; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277838; } }
L_00277810:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277820u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00277820u) [[unlikely]] return; }
L_00277820:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277810u | kUnwind; return; } goto L_00277810; } }
    c.budget -= 1;
L_00277838:
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 2;
L_00277840:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00277858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277858u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00277858u) [[unlikely]] return; }
L_00277858:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00277870:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00270000u);
    set32(c.r[4], c.r[4].w[0] - 22912u);
    set32(c.r[5], c.r[5].w[0] + 30864u);
    set32(c.r[6], 0u + 108u);
    c.budget -= 7;
    { set32(c.r[7], 0u + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B370u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 179u, depth); }
L_00277890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00277918; } }
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277900; } }
    set32(c.r[2], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277900; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002778F8; } }
L_002778D0:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002778E0u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002778E0u) [[unlikely]] return; }
L_002778E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002778D0u | kUnwind; return; } goto L_002778D0; } }
    c.budget -= 1;
L_002778F8:
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 2;
L_00277900:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00277918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277918u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00277918u) [[unlikely]] return; }
L_00277918:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00277930:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = 0ull & 15ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[11], c.r[3].w[0] << 6);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull << 46;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[5].d[0] >> 46;
    st32((c.r[4].w[0]), 0u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[6], 0u - 8u);
    c.r[8].d[0] = c.r[3].d[0] | 1023ull;
    c.r[13].d[0] = 0ull & 7ull;
    set32(c.r[2], 0u - 64u);
    c.r[12].d[0] = 0ull & 63ull;
    set32(c.r[10], 0u - 961u);
    set32(c.r[9], c.r[5].w[0] << 10);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[3].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[13].d[0];
    c.r[7].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[19], ld32((c.r[4].w[0] + 20u)));
    c.r[18].d[0] = c.r[13].d[0] | 65535ull;
    c.r[13].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    set32(c.r[6], c.r[7].w[0] << 18);
    c.r[16].d[0] = c.r[13].d[0] | 65535ull;
    set32(c.r[3], c.r[7].w[0] << 19);
    c.r[13].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    set32(c.r[17], c.r[7].w[0] << 20);
    c.r[24].d[0] = c.r[13].d[0] | 65535ull;
    set32(c.r[25], c.r[7].w[0] << 21);
    set32(c.r[15], c.r[7].w[0] << 22);
    set32(c.r[13], 0u - 2u);
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[12].d[0] = c.r[2].d[0] | c.r[12].d[0];
    st32((c.r[4].w[0] + 20u), c.r[12].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[12], ld32((c.r[4].w[0] + 20u)));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st32((c.r[4].w[0] + 20u), c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 20u)));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st32((c.r[4].w[0] + 20u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 24u)));
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[18].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[17].d[0];
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[25].d[0];
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[14].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[15].d[0];
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 104u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[13].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 100;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00277AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00277B48; } }
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277B30; } }
    set32(c.r[2], c.r[17].w[0] + 28u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277B30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00277B28; } }
L_00277B00:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B10u); set32(c.r[4], ld32((c.r[17].w[0] + 28u)));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00277B10u) [[unlikely]] return; }
L_00277B10:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277B00u | kUnwind; return; } goto L_00277B00; } }
    c.budget -= 1;
L_00277B28:
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 2;
L_00277B30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00277B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277B48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00277B48u) [[unlikely]] return; }
L_00277B48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00277B60:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = 0ull & 7ull;
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[2].w[0] << 1);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[7].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[3], 0u - 15u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st16((c.r[4].w[0] + 32u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 34u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 34u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 34u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 34u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), 0u);  c.pc = t; return; }
L_00277BE0:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = 0ull & 7ull;
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[2].w[0] << 1);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[7].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u - 15u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = ld8((c.r[4].w[0] + 24u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 24u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), 0u);  c.pc = t; return; }
L_00277C50:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00277C60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00277C70:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30044u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00277C98; } }
L_00277C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { [[clang::musttail]] return unit_001E(c, 8u, depth); } }
L_00277C98:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277CA8u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 299u, depth + 1u); else { c.pc = 0x00263EC0u; return; } if (c.pc != 0x00277CA8u) [[unlikely]] return; }
L_00277CA8:
    set32(c.r[5], ld32((c.r[28].w[0] - 30060u)));
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00277CF0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30052u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 30048u)));
    c.budget -= 2;
L_00277CC0:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 49u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00277CE0; } }
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[7].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00277CE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00277CF0; } }
L_00277CE0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277CC0u | kUnwind; return; } goto L_00277CC0; } }
L_00277CF0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00277D84; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001E(c, 7u, depth); } }
    st32((c.r[28].w[0] - 30048u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30064u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00277D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00277D2C; } }
L_00277D28:
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 1;
L_00277D2C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D44u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 392u, depth + 1u); else { c.pc = 0x00266D10u; return; } if (c.pc != 0x00277D44u) [[unlikely]] return; }
L_00277D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D4Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x00277D4Cu) [[unlikely]] return; }
L_00277D4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], 0u + 126u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u + 46u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D68u); set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 405u, depth + 1u); else { c.pc = 0x0026B970u; return; } if (c.pc != 0x00277D68u) [[unlikely]] return; }
L_00277D68:
    set32(c.r[4], 0u + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D74u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 245u, depth + 1u); else { c.pc = 0x00263880u; return; } if (c.pc != 0x00277D74u) [[unlikely]] return; }
L_00277D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D7Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x00277D7Cu) [[unlikely]] return; }
L_00277D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277C90u | kUnwind; return; } goto L_00277C90; } }
L_00277D84:
    set32(c.r[4], 0u + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277D90u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0019(c, 197u, depth + 1u); else { c.pc = 0x002654B0u; return; } if (c.pc != 0x00277D90u) [[unlikely]] return; }
L_00277D90:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 81u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277E40; } }
L_00277DA0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00277E48; } }
L_00277DAC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_001E(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001E(c, 7u, depth); } }
    st32((c.r[28].w[0] - 30048u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30064u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00277DE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00277DE8; } }
L_00277DE4:
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 1;
L_00277DE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E00u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 392u, depth + 1u); else { c.pc = 0x00266D10u; return; } if (c.pc != 0x00277E00u) [[unlikely]] return; }
L_00277E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x00277E08u) [[unlikely]] return; }
L_00277E08:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], 0u + 126u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u + 46u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E24u); set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 405u, depth + 1u); else { c.pc = 0x0026B970u; return; } if (c.pc != 0x00277E24u) [[unlikely]] return; }
L_00277E24:
    set32(c.r[4], 0u + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E30u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 245u, depth + 1u); else { c.pc = 0x00263880u; return; } if (c.pc != 0x00277E30u) [[unlikely]] return; }
L_00277E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277E38u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x00277E38u) [[unlikely]] return; }
L_00277E38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277C90u | kUnwind; return; } goto L_00277C90; } }
L_00277E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30040u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277DA0u | kUnwind; return; } goto L_00277DA0; } }
L_00277E48:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30040u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277DACu | kUnwind; return; } goto L_00277DAC; } }
    st8((c.r[28].w[0] - 30040u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00277EE8; } }
L_00277E88:
    set32(c.r[3], ld32((c.r[28].w[0] - 30056u)));
    c.budget -= 1;
L_00277E8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00277FB4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30060u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_001E(c, 7u, depth); } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30052u)));
    c.budget -= 1;
L_00277EA8:
    c.r[3].d[0] = c.r[16].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00277EB8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00277EB8:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 49u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00277FC0; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277EA8u | kUnwind; return; } goto L_00277EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277C90u | kUnwind; return; } goto L_00277C90; } }
L_00277EE8:
    st8((c.r[17].w[0] + 49u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00277F14; } }
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F14u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00277F14u) [[unlikely]] return; }
L_00277F14:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 50u));
    set32(c.r[7], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00277F30u); set32(c.r[5], c.r[17].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00277F30u) [[unlikely]] return; }
L_00277F30:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 50u));
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[9].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00277F68; } }
L_00277F50:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00277FA0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30056u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30056u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277E88u | kUnwind; return; } goto L_00277E88; } }
L_00277F68:
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 49u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 50u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277F50u | kUnwind; return; } goto L_00277F50; } }
L_00277FA0:
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00277FACu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 10u, depth + 1u); else { c.pc = 0x00278080u; return; } if (c.pc != 0x00277FACu) [[unlikely]] return; }
L_00277FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30056u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277E8Cu | kUnwind; return; } goto L_00277E8C; } }
L_00277FB4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30048u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277C90u | kUnwind; return; } goto L_00277C90; } }
L_00277FC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30064u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00277FE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00277FE8; } }
L_00277FE4:
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 1;
L_00277FE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278000u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 392u, depth + 1u); else { c.pc = 0x00266D10u; return; } if (c.pc != 0x00278000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_001E(c, 1u, depth);
}

}

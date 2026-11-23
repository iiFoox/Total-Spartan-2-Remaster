#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0012[4096] = {
    1, 2, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0012(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00248000;
    case 2u: goto L_00248004;
    case 3u: goto L_0024800C;
    case 4u: goto L_00248014;
    case 5u: goto L_00248020;
    case 6u: goto L_00248030;
    case 7u: goto L_00248048;
    case 8u: goto L_00248060;
    case 9u: goto L_0024807C;
    case 10u: goto L_00248098;
    case 11u: goto L_002480A8;
    case 12u: goto L_002480B4;
    case 13u: goto L_002480D0;
    case 14u: goto L_002480E0;
    case 15u: goto L_002480F8;
    case 16u: goto L_00248100;
    case 17u: goto L_00248144;
    case 18u: goto L_00248150;
    case 19u: goto L_00248160;
    case 20u: goto L_00248180;
    case 21u: goto L_00248190;
    case 22u: goto L_00248198;
    case 23u: goto L_002481A0;
    case 24u: goto L_002481B0;
    case 25u: goto L_002481C0;
    case 26u: goto L_002481C8;
    case 27u: goto L_002481F0;
    case 28u: goto L_00248240;
    case 29u: goto L_00248260;
    case 30u: goto L_00248284;
    case 31u: goto L_002482A4;
    case 32u: goto L_002482C8;
    case 33u: goto L_002482E8;
    case 34u: goto L_00248308;
    case 35u: goto L_00248330;
    case 36u: goto L_00248340;
    case 37u: goto L_00248350;
    case 38u: goto L_00248430;
    case 39u: goto L_002486C0;
    case 40u: goto L_00248804;
    case 41u: goto L_00248B08;
    case 42u: goto L_00248D30;
    case 43u: goto L_00248E40;
    case 44u: goto L_00248E50;
    case 45u: goto L_00248E64;
    case 46u: goto L_00248E74;
    case 47u: goto L_00248E90;
    case 48u: goto L_00248EB0;
    case 49u: goto L_00248ED0;
    case 50u: goto L_00248EE0;
    case 51u: goto L_00248EF0;
    case 52u: goto L_00248F30;
    case 53u: goto L_00248F70;
    case 54u: goto L_002490C0;
    case 55u: goto L_00249320;
    case 56u: goto L_00249330;
    case 57u: goto L_002493BC;
    case 58u: goto L_002493EC;
    case 59u: goto L_00249428;
    case 60u: goto L_0024949C;
    case 61u: goto L_002494D4;
    case 62u: goto L_002494F0;
    case 63u: goto L_00249500;
    case 64u: goto L_002495BC;
    case 65u: goto L_002495EC;
    case 66u: goto L_00249628;
    case 67u: goto L_00249680;
    case 68u: goto L_00249718;
    case 69u: goto L_00249754;
    case 70u: goto L_00249768;
    case 71u: goto L_0024979C;
    case 72u: goto L_002497D8;
    case 73u: goto L_0024983C;
    case 74u: goto L_0024986C;
    case 75u: goto L_002498A8;
    case 76u: goto L_002498E0;
    case 77u: goto L_00249978;
    case 78u: goto L_002499B4;
    case 79u: goto L_002499C8;
    case 80u: goto L_002499FC;
    case 81u: goto L_00249A38;
    case 82u: goto L_00249A9C;
    case 83u: goto L_00249ACC;
    case 84u: goto L_00249B08;
    case 85u: goto L_00249B40;
    case 86u: goto L_00249B54;
    case 87u: goto L_00249B5C;
    case 88u: goto L_00249B64;
    case 89u: goto L_00249B94;
    case 90u: goto L_00249CEC;
    case 91u: goto L_00249D1C;
    case 92u: goto L_00249D58;
    case 93u: goto L_00249E08;
    case 94u: goto L_00249E3C;
    case 95u: goto L_00249E78;
    case 96u: goto L_00249F18;
    case 97u: goto L_00249F4C;
    case 98u: goto L_00249F88;
    case 99u: goto L_00249FF0;
    case 100u: goto L_0024A11C;
    case 101u: goto L_0024A140;
    case 102u: goto L_0024A158;
    case 103u: goto L_0024A164;
    case 104u: goto L_0024A180;
    case 105u: goto L_0024A2E4;
    case 106u: goto L_0024A2F0;
    case 107u: goto L_0024A2F8;
    case 108u: goto L_0024A320;
    case 109u: goto L_0024A814;
    case 110u: goto L_0024A850;
    case 111u: goto L_0024A9E0;
    case 112u: goto L_0024AA04;
    case 113u: goto L_0024AA28;
    case 114u: goto L_0024AA78;
    case 115u: goto L_0024AB10;
    case 116u: goto L_0024ABB0;
    case 117u: goto L_0024ABD4;
    case 118u: goto L_0024ABF8;
    case 119u: goto L_0024AC48;
    case 120u: goto L_0024ACE0;
    case 121u: goto L_0024AD80;
    case 122u: goto L_0024B1B0;
    case 123u: goto L_0024B210;
    case 124u: goto L_0024B5DC;
    case 125u: goto L_0024B620;
    case 126u: goto L_0024B68C;
    case 127u: goto L_0024B69C;
    case 128u: goto L_0024B6B4;
    case 129u: goto L_0024B720;
    case 130u: goto L_0024B730;
    case 131u: goto L_0024B740;
    case 132u: goto L_0024B790;
    case 133u: goto L_0024B7E0;
    case 134u: goto L_0024B930;
    case 135u: goto L_0024B964;
    case 136u: goto L_0024BAB0;
    case 137u: goto L_0024BB20;
    case 138u: goto L_0024BFC4;
    default: bad_entry(c, 0x00248000u); return;
    }
L_00248000:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_00248004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024800Cu); set32(c.r[4], c.r[29].w[0] + 300u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0024800Cu) [[unlikely]] return; }
L_0024800C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248014u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 225u, depth + 1u); else { c.pc = 0x00242290u; return; } if (c.pc != 0x00248014u) [[unlikely]] return; }
L_00248014:
    set32(c.r[4], c.r[29].w[0] + 300u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248020u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00248020u) [[unlikely]] return; }
L_00248020:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248030u); set32(c.r[5], c.r[5].w[0] - 29208u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00248030u) [[unlikely]] return; }
L_00248030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002480BC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248048u); set32(c.r[5], c.r[5].w[0] - 29192u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00248048u) [[unlikely]] return; }
L_00248048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002480F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248060u); set32(c.r[5], c.r[5].w[0] - 29184u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00248060u) [[unlikely]] return; }
L_00248060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002480F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] - 29168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024807Cu); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_000D(c, 67u, depth + 1u); else { c.pc = 0x002352D0u; return; } if (c.pc != 0x0024807Cu) [[unlikely]] return; }
L_0024807C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00248170; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[4], c.r[16].w[0] + 328u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248098u); set32(c.r[5], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00248098u) [[unlikely]] return; }
L_00248098:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002480A8u); set32(c.r[5], c.r[5].w[0] - 29152u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002480A8u) [[unlikely]] return; }
L_002480A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 29128u);
    st32((c.r[16].w[0] + 324u), c.r[3].w[0]);
    c.budget -= 3;
L_002480B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00248174; } }
L_002480BC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 328u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002480D0u); set32(c.r[5], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002480D0u) [[unlikely]] return; }
L_002480D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002480E0u); set32(c.r[5], c.r[5].w[0] - 29152u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002480E0u) [[unlikely]] return; }
L_002480E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 29128u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 324u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002480B4u | kUnwind; return; } goto L_002480B4; } }
L_002480F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002480F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 87u, depth + 1u); else { c.pc = 0x00228A40u; return; } if (c.pc != 0x002480F8u) [[unlikely]] return; }
L_002480F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248100u);  if (depth < kMaxDepth) unit_000A(c, 145u, depth + 1u); else { c.pc = 0x002291F8u; return; } if (c.pc != 0x00248100u) [[unlikely]] return; }
L_00248100:
    set32(c.r[3], 0u + 18u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0024812C; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00248120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00248138; } }
L_00248120:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00248144; } }
L_0024812C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00248144; } }
L_00248138:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248144u); set32(c.r[4], c.r[4].w[0] - 29120u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00248144u) [[unlikely]] return; }
L_00248144:
    set32(c.r[4], c.r[16].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248150u); set32(c.r[5], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00248150u) [[unlikely]] return; }
L_00248150:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248160u); set32(c.r[5], c.r[5].w[0] - 29096u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00248160u) [[unlikely]] return; }
L_00248160:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - 29400u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 324u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002480B4u | kUnwind; return; } goto L_002480B4; } }
L_00248170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00248174:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00248180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_00248190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248198u); set32(c.r[4], c.r[16].w[0] + 65u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00248198u) [[unlikely]] return; }
L_00248198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002481A0u); set32(c.r[4], c.r[16].w[0] + 65u);  if (depth < kMaxDepth) unit_000D(c, 192u, depth + 1u); else { c.pc = 0x00236B50u; return; } if (c.pc != 0x002481A0u) [[unlikely]] return; }
L_002481A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002481B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00234FA8u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 57u, depth); }
L_002481C0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    set32(c.r[8], c.r[29].w[0]);
    c.budget -= 2;
L_002481C8:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002481C8u | kUnwind; return; } goto L_002481C8; } }
    set32(c.r[9], c.r[29].w[0]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
L_002481F0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00248210; } }
    c.r[1].d[0] = c.r[7].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00248210; } }
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00248210:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00248224; } }
    set32(c.r[3], c.r[7].w[0] - 32u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 3;
L_00248224:
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002481F0u | kUnwind; return; } goto L_002481F0; } }
    set32(c.r[7], c.r[4].w[0] + 1u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 2;
L_00248240:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00248240u | kUnwind; return; } goto L_00248240; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_00248260:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00248260u | kUnwind; return; } goto L_00248260; } }
    set32(c.r[8], c.r[5].w[0] - 1u);
    set32(c.r[7], c.r[4].w[0] + 65u);
    c.budget -= 2;
L_00248284:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00248284u | kUnwind; return; } goto L_00248284; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_002482A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002482A4u | kUnwind; return; } goto L_002482A4; } }
    set32(c.r[8], c.r[5].w[0] - 1u);
    set32(c.r[7], c.r[29].w[0]);
    c.budget -= 2;
L_002482C8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002482C8u | kUnwind; return; } goto L_002482C8; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 1;
L_002482E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002482E8u | kUnwind; return; } goto L_002482E8; } }
    set32(c.r[5], c.r[6].w[0] - 1u);
    c.budget -= 1;
L_00248308:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00248308u | kUnwind; return; } goto L_00248308; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00248330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248340u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 87u, depth + 1u); else { c.pc = 0x00228A40u; return; } if (c.pc != 0x00248340u) [[unlikely]] return; }
L_00248340:
    st8((c.r[28].w[0] - 30632u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00248350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43520000u);
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = c.r[3].w[0];
    st32((c.r[29].w[0] + 20u), 0u);
    c.f[3] = ld32((c.r[5].w[0] + 2440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[3].w[0] + 2432u));
    c.f[4] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[29].w[0]);
    c.f[2] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[4], c.r[4].w[0] + 2656u);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mulabc4<0>(c.vu0, 15u, 4u, c.vu0.vf[8].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[8].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[8].w[2]);
    vu::maddbc4<1>(c.vu0, 15u, 9u, 7u, c.vu0.vf[8].w[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[9]);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st32((c.r[28].w[0] - 30548u), c.r[3].w[0]);
    c.budget -= 54;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00248430:
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.f[1] = c.r[3].w[0];
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 32632u));
    set32(c.r[7], c.r[7].w[0] - c.r[8].w[0]);
    c.f[0] = c.r[7].w[0];
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_00248480; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0024849C; } }
L_00248480:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0024849C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = ld16((c.r[28].w[0] - 32624u));
    c.f[1] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] < 0; c.f[6] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);  if (t) { goto L_002484C0; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002484DC; } }
L_002484C0:
    set32(c.r[5], c.r[6].w[0] >> 1);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002484DC:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2988u), c.r[13].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[3].w[0] + 3004u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 2720u);
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[5].w[0] + 2976u), c.f[3]);
    c.f[1] = c.r[11].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[10].w[0] + 2980u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    st32((c.r[7].w[0] + 2992u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[3] = ld32((c.r[9].w[0] - 28888u));
    c.f[4] = c.r[13].w[0];
    c.f[2] = c.r[12].w[0];
    st32((c.r[6].w[0] + 2996u), c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[0] = c.f[3] ^ fp::kSign;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[8].w[0] + 2984u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[5].w[0] + 3000u), c.f[0]);
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[3].w[0] + 2976u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2980u));
    st32((c.r[5].w[0] + 2720u), c.f[2]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[4] = ld32((c.r[5].w[0] + 3000u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[3].w[0] + 2984u));
    st32((c.r[6].w[0] + 2740u), c.f[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[5].w[0] + 2996u));
    st32((c.r[6].w[0] + 2776u), c.f[4]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[6] = ld32((c.r[3].w[0] + 2992u));
    st32((c.r[8].w[0] + 2760u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2996u));
    st32((c.r[7].w[0] + 2768u), c.f[6]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[7].w[0] + 3012u), c.f[3]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2992u));
    st32((c.r[9].w[0] + 2772u), c.f[5]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[3].w[0] + 3000u));
    st32((c.r[8].w[0] + 3008u), c.f[1]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[3].w[0] + 3004u));
    st32((c.r[5].w[0] + 3016u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    ld128((c.r[5].w[0] + 2736u) & ~15u, c.r[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[6].w[0] + 3020u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    ld128((c.r[3].w[0] + 2720u) & ~15u, c.r[13]);
    ld128((c.r[5].w[0] + 2768u) & ~15u, c.r[10]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[9].w[0] + 2992u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    ld128((c.r[3].w[0] + 2752u) & ~15u, c.r[11]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[5].w[0] + 2800u) & ~15u, c.r[12]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[8].w[0] + 2996u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[3].w[0] + 2784u) & ~15u, c.r[13]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[6].w[0] + 2816u) & ~15u, c.r[11]);
    st128((c.r[3].w[0] + 2832u) & ~15u, c.r[10]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[7].w[0] + 3000u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 2840u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 2840u), c.f[0]);
    c.budget -= 121;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 288u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002486C0:
    set32(c.r[29], c.r[29].w[0] - 432u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[1] = ld32((c.r[29].w[0] + 236u));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[6] = ld32((c.r[5].w[0] + 2440u));
    c.f[5] = ld32((c.r[3].w[0] + 2456u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[4] = ld32((c.r[5].w[0] + 2436u));
    c.f[3] = ld32((c.r[3].w[0] + 2452u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[6]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[3].w[0] + 2432u));
    c.f[2] = ld32((c.r[5].w[0] + 2448u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x2EDB0000u);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 59135ull;
    st32((c.r[4].w[0] + 32u), c.f[2]);
    st32((c.r[4].w[0] + 36u), c.f[3]);
    st32((c.r[4].w[0] + 40u), c.f[5]);
    st32((c.r[4].w[0] + 44u), c.f[1]);
    st32((c.r[29].w[0] + 224u), c.f[2]);
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 228u), c.f[3]);
    c.f[3] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 52;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 232u), c.f[5]);  if (t) { goto L_00248DF0; } }
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 40u), c.f[0]);
    c.f[12] = ld32((c.r[20].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[12]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002487FC; } }
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002487FC; } }
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00248DF0; } }
L_002487FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248804u); c.f[13] = ld32((c.r[20].w[0] + 40u));  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x00248804u) [[unlikely]] return; }
L_00248804:
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    st32((c.r[29].w[0] + 388u), c.r[25].w[0]);
    c.f[8] = ld32((c.r[20].w[0] + 36u));
    set32(c.r[2], c.r[29].w[0] + 388u);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    set32(c.r[3], c.r[29].w[0] + 376u);
    c.f[4] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 372u);
    c.f[7] = 0u;
    st32((c.r[29].w[0] + 392u), 0u);
    c.f[23] = c.r[25].w[0];
    set32(c.r[24], c.r[29].w[0] + 420u);
    st32((c.r[29].w[0] + 376u), c.f[1]);
    set32(c.r[21], c.r[29].w[0] + 424u);
    c.f[3] = ld32((c.r[3].w[0]));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[29].w[0] + 372u), c.f[8]);
    set32(c.r[22], c.r[29].w[0] + 200u);
    c.f[5] = ld32((c.r[4].w[0]));
    set32(c.r[2], c.r[29].w[0] + 392u);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 196u);
    set32(c.r[30], c.r[29].w[0] + 212u);
    set32(c.r[23], c.r[29].w[0] + 216u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[7], c.f[5]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[29].w[0] + 384u), 0u);
    set32(c.r[18], c.r[29].w[0] + 304u);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[4], c.f[6]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[7], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[4] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[5]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[6]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[23], c.f[2]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    st32((c.r[24].w[0]), c.f[3]);
    st32((c.r[21].w[0]), c.f[2]);
    c.f[3] = ld32((c.r[24].w[0]));
    c.f[5] = ld32((c.r[29].w[0] + 424u));
    c.f[6] = ld32((c.r[29].w[0] + 420u));
    c.f[2] = ld32((c.r[21].w[0]));
    st32((c.r[29].w[0] + 368u), c.f[0]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[8], c.f[7]);
    st32((c.r[15].w[0] + 2560u), c.f[2]);
    st32((c.r[29].w[0] + 200u), c.f[5]);
    st32((c.r[16].w[0] + 2544u), c.f[3]);
    c.f[3] = ld32((c.r[22].w[0]));
    st32((c.r[29].w[0] + 196u), c.f[6]);
    c.f[5] = ld32((c.r[19].w[0]));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.facc = fp::ee::mul(c.fcr31, c.f[8], c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 212u), c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.f[5] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[5]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[3] = ld32((c.r[30].w[0]));
    c.f[4] = ld32((c.r[23].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[23], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[14].w[0] + 2532u), c.f[0]);
    st32((c.r[29].w[0] + 400u), c.f[0]);
    set32(c.r[14], c.r[29].w[0] + 404u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[13].w[0] + 2548u), c.f[1]);
    set32(c.r[13], c.r[29].w[0] + 408u);
    st32((c.r[17].w[0] + 2528u), c.f[7]);
    st32((c.r[13].w[0]), c.f[0]);
    st32((c.r[12].w[0] + 2564u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    st32((c.r[29].w[0] + 416u), c.f[7]);
    st32((c.r[29].w[0] + 192u), c.f[7]);
    st32((c.r[29].w[0] + 208u), c.f[5]);
    st32((c.r[14].w[0]), c.f[1]);
    st32((c.r[11].w[0] + 2536u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 36u));
    st32((c.r[10].w[0] + 2552u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    st32((c.r[9].w[0] + 2568u), c.f[0]);
    st32((c.r[2].w[0] + 2588u), c.r[25].w[0]);
    st32((c.r[8].w[0] + 2584u), 0u);
    st32((c.r[7].w[0] + 2580u), 0u);
    st32((c.r[6].w[0] + 2576u), 0u);
    st32((c.r[5].w[0] + 2572u), 0u);
    st32((c.r[4].w[0] + 2556u), 0u);
    st32((c.r[3].w[0] + 2540u), 0u);
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[2].w[0] + 2432u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[2].w[0] + 2436u));
    c.f[2] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 352u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[2].w[0] + 2440u));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 356u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[2], c.r[2].w[0] + 2528u);
    st32((c.r[29].w[0] + 360u), c.f[0]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[1].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[1].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 9u, 8u, c.vu0.vf[1].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[2].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[2].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[2].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 10u, 8u, c.vu0.vf[2].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[3].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[3].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[3].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 11u, 8u, c.vu0.vf[3].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[4].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[4].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[4].w[2]);
    vu::maddbc4<1>(c.vu0, 15u, 12u, 8u, c.vu0.vf[4].w[3]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[9]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    set32(c.r[2], c.r[29].w[0] + 240u);
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.f[2] = ld32((c.r[28].w[0] - 32672u));
    c.f[1] = ld32((c.r[28].w[0] - 32676u));
    c.f[0] = ld32((c.r[28].w[0] - 32680u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[3].d[0] = c.r[2].d[0] | 64053ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[24] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[21] = c.r[3].w[0];
    c.f[22] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 193;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248B08u); c.f[12] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0022DA40u; return; } if (c.pc != 0x00248B08u) [[unlikely]] return; }
L_00248B08:
    c.f[3] = fp::ee::div(c.fcr31, c.f[23], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[29].w[0] + 260u);
    set32(c.r[18], c.r[29].w[0] + 280u);
    set32(c.r[16], c.r[29].w[0] + 284u);
    set32(c.r[21], c.r[29].w[0] + 300u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[29].w[0] + 296u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[2].w[0] + 2528u);
    st32((c.r[21].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] + 2592u);
    c.f[20] = c.r[3].w[0];
    c.f[2] = ld32((c.r[28].w[0] - 30556u));
    c.f[0] = ld32((c.r[28].w[0] - 32676u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[24]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 240u), c.f[2]);
    st32((c.r[19].w[0]), c.f[3]);
    st32((c.r[18].w[0]), c.f[24]);
    st32((c.r[16].w[0]), c.f[23]);
    st32((c.r[17].w[0]), c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[1].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[1].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 9u, 8u, c.vu0.vf[1].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[2].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[2].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[2].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 10u, 8u, c.vu0.vf[2].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[3].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[3].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[3].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 11u, 8u, c.vu0.vf[3].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[4].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[4].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[4].w[2]);
    vu::maddbc4<1>(c.vu0, 15u, 12u, 8u, c.vu0.vf[4].w[3]);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 2720u);
    set32(c.r[2], c.r[2].w[0] + 2656u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    vu::move4(c.vu0, 15u, 4u, 12u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[1].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[1].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 9u, 8u, c.vu0.vf[1].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[2].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[2].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[2].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 10u, 8u, c.vu0.vf[2].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[3].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[3].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[3].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 11u, 8u, c.vu0.vf[3].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[4].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[4].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[4].w[2]);
    vu::maddbc4<1>(c.vu0, 15u, 12u, 8u, c.vu0.vf[4].w[3]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[9]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 2784u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] + 2848u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[1].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[1].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 9u, 8u, c.vu0.vf[1].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[2].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[2].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[2].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 10u, 8u, c.vu0.vf[2].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[3].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[3].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[3].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 11u, 8u, c.vu0.vf[3].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[4].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[4].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[4].w[2]);
    vu::maddbc4<1>(c.vu0, 15u, 12u, 8u, c.vu0.vf[4].w[3]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[9]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = ld32((c.r[28].w[0] - 32672u));
    c.f[2] = ld32((c.r[28].w[0] - 32676u));
    c.f[1] = ld32((c.r[28].w[0] - 32680u));
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[24] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 138;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248D30u); c.f[12] = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 72u, depth + 1u); else { c.pc = 0x0022DA40u; return; } if (c.pc != 0x00248D30u) [[unlikely]] return; }
L_00248D30:
    c.f[3] = fp::ee::div(c.fcr31, c.f[23], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[4], c.r[4].w[0] + 2528u);
    st32((c.r[21].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 2912u);
    c.f[2] = ld32((c.r[28].w[0] - 30556u));
    c.f[0] = ld32((c.r[28].w[0] - 32676u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[20], c.f[24]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 240u), c.f[2]);
    st32((c.r[18].w[0]), c.f[24]);
    st32((c.r[16].w[0]), c.f[23]);
    st32((c.r[19].w[0]), c.f[3]);
    st32((c.r[17].w[0]), c.f[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[1].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[1].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 9u, 8u, c.vu0.vf[1].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[2].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[2].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[2].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 10u, 8u, c.vu0.vf[2].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[3].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[3].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[3].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 11u, 8u, c.vu0.vf[3].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[4].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[4].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[4].w[2]);
    vu::maddbc4<1>(c.vu0, 15u, 12u, 8u, c.vu0.vf[4].w[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[9]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    st8((c.r[20].w[0] + 128u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 208u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 288u), static_cast<std::uint8_t>(0u));
    c.budget -= 48;
L_00248DF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_00248E40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 2528u);  c.pc = t; return; }
L_00248E50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30560u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 32680u), c.f[12]);  if (t) { goto L_00248E6C; } }
L_00248E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00248E7C; } }
L_00248E6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248E74u);  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x002486C0u; return; } if (c.pc != 0x00248E74u) [[unlikely]] return; }
L_00248E74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00248E64u | kUnwind; return; } goto L_00248E64; } }
L_00248E7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00248E90:
    c.f[0] = ld32((c.r[28].w[0] - 32676u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32672u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.f[0]);  c.pc = t; return; }
L_00248EB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[13], c.f[13]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30560u));
    st32((c.r[28].w[0] - 32676u), c.f[12]);
    st32((c.r[28].w[0] - 32672u), c.f[13]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 32668u), c.f[0]);  if (t) { goto L_00248ED8; } }
L_00248ED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00248EE8; } }
L_00248ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00248EE0u);  if (depth < kMaxDepth) unit_0012(c, 39u, depth + 1u); else { c.pc = 0x002486C0u; return; } if (c.pc != 0x00248EE0u) [[unlikely]] return; }
L_00248EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00248ED0u | kUnwind; return; } goto L_00248ED0; } }
L_00248EE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00248EF0:
    c.f[3] = ld32((c.r[5].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[7].w[0] + 2448u), c.f[3]);
    st32((c.r[6].w[0] + 2452u), c.f[2]);
    st32((c.r[4].w[0] + 2456u), c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 2460u), c.f[0]);  c.pc = t; return; }
L_00248F30:
    c.f[3] = ld32((c.r[5].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[7].w[0] + 2432u), c.f[3]);
    st32((c.r[6].w[0] + 2436u), c.f[2]);
    st32((c.r[4].w[0] + 2440u), c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 2444u), c.f[0]);  c.pc = t; return; }
L_00248F70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[28].w[0] - 30560u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 30552u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 2464u);
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[9].d[0] = ld16((c.r[28].w[0] - 32632u));
    st32((c.r[4].w[0] + 8u), c.r[9].w[0]);
    c.r[8].d[0] = ld16((c.r[28].w[0] - 32624u));
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[7].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 36;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_0024900C; } }
    c.f[0] = c.r[8].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00249028; } }
L_0024900C:
    set32(c.r[4], c.r[8].w[0] >> 1);
    c.r[3].d[0] = c.r[8].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00249028:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { goto L_0024903C; } }
    c.f[0] = c.r[9].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00249058; } }
L_0024903C:
    set32(c.r[4], c.r[9].w[0] >> 1);
    c.r[3].d[0] = c.r[9].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00249058:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30532u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 30556u), c.f[1]);  if (t) { goto L_00249098; } }
    c.f[0] = ld32((c.r[28].w[0] - 30556u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30556u), c.f[0]);  if (t) { goto L_002490AC; } }
L_00249098:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F100000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[28].w[0] - 30556u), c.f[0]);
    c.budget -= 5;
L_002490AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002490C0:
    set32(c.r[2], 0u + 61u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[4].w[0] + 216u), c.r[2].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st128((c.r[4].w[0] + 192u) & ~15u, c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 192u));
    c.r[7].d[0] = c.r[2].d[0] | 32767ull;
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[9], 0u - 32768u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[5], 0u - 1u);
    mmi::pcpyld(c.r[5], c.r[5], c.r[2]);
    c.r[3].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[8].d[0] = c.r[10].d[0] << 15;
    c.r[2].d[0] = c.r[3].d[0] | c.r[10].d[0];
    c.r[6].d[0] = c.r[10].d[0] << 60;
    st64((c.r[4].w[0] + 192u), c.r[2].d[0]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(14ll);
    c.r[25].d[0] = ld64((c.r[4].w[0] + 192u));
    set32(c.r[2], 0u - 16u);
    set32(c.r[24], 0u + 71u);
    set32(c.r[15], 0u + 66u);
    set32(c.r[14], 0u + 78u);
    set32(c.r[13], 0u + 72u);
    set32(c.r[12], 0u + 67u);
    set32(c.r[11], 0u + 79u);
    c.r[25].d[0] = c.r[25].d[0] & c.r[7].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0] + 192u), c.r[25].d[0]);
    c.r[25].d[0] = ld64((c.r[4].w[0] + 192u));
    c.r[25].d[0] = c.r[25].d[0] & c.r[5].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0] + 192u), c.r[25].d[0]);
    c.r[25].d[0] = ld64((c.r[4].w[0] + 200u));
    c.r[25].d[0] = c.r[25].d[0] & c.r[2].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 200u), c.r[25].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[24].d[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[0]);
    c.r[24].d[0] = ld64((c.r[4].w[0]));
    c.r[24].d[0] = c.r[24].d[0] & c.r[9].d[0];
    c.r[24].d[0] = c.r[24].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0]), c.r[24].d[0]);
    c.r[24].d[0] = ld64((c.r[4].w[0]));
    c.r[24].d[0] = c.r[24].d[0] & c.r[7].d[0];
    c.r[24].d[0] = c.r[24].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0]), c.r[24].d[0]);
    c.r[24].d[0] = ld64((c.r[4].w[0]));
    c.r[24].d[0] = c.r[24].d[0] & c.r[5].d[0];
    c.r[24].d[0] = c.r[24].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0]), c.r[24].d[0]);
    c.r[24].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[24].d[0] = c.r[24].d[0] & c.r[2].d[0];
    c.r[24].d[0] = c.r[24].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 8u), c.r[24].d[0]);
    st64((c.r[4].w[0] + 56u), c.r[15].d[0]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[0]);
    c.r[15].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[15].d[0] = c.r[15].d[0] & c.r[9].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0] + 32u), c.r[15].d[0]);
    c.r[15].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[15].d[0] = c.r[15].d[0] & c.r[7].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0] + 32u), c.r[15].d[0]);
    c.r[15].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[15].d[0] = c.r[15].d[0] & c.r[5].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0] + 32u), c.r[15].d[0]);
    c.r[15].d[0] = ld64((c.r[4].w[0] + 40u));
    c.r[15].d[0] = c.r[15].d[0] & c.r[2].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 40u), c.r[15].d[0]);
    st64((c.r[4].w[0] + 88u), c.r[14].d[0]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[0]);
    c.r[14].d[0] = ld64((c.r[4].w[0] + 64u));
    c.r[14].d[0] = c.r[14].d[0] & c.r[9].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0] + 64u), c.r[14].d[0]);
    c.r[14].d[0] = ld64((c.r[4].w[0] + 64u));
    c.r[14].d[0] = c.r[14].d[0] & c.r[7].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0] + 64u), c.r[14].d[0]);
    c.r[14].d[0] = ld64((c.r[4].w[0] + 64u));
    c.r[14].d[0] = c.r[14].d[0] & c.r[5].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0] + 64u), c.r[14].d[0]);
    c.r[14].d[0] = ld64((c.r[4].w[0] + 72u));
    c.r[14].d[0] = c.r[14].d[0] & c.r[2].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 72u), c.r[14].d[0]);
    st64((c.r[4].w[0] + 120u), c.r[13].d[0]);
    st128((c.r[4].w[0] + 96u) & ~15u, c.r[0]);
    c.r[13].d[0] = ld64((c.r[4].w[0] + 96u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[9].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0] + 96u), c.r[13].d[0]);
    c.r[13].d[0] = ld64((c.r[4].w[0] + 96u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[7].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0] + 96u), c.r[13].d[0]);
    c.r[13].d[0] = ld64((c.r[4].w[0] + 96u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[5].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0] + 96u), c.r[13].d[0]);
    c.r[13].d[0] = ld64((c.r[4].w[0] + 104u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[2].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 104u), c.r[13].d[0]);
    st64((c.r[4].w[0] + 152u), c.r[12].d[0]);
    st128((c.r[4].w[0] + 128u) & ~15u, c.r[0]);
    c.r[12].d[0] = ld64((c.r[4].w[0] + 128u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[9].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0] + 128u), c.r[12].d[0]);
    c.r[12].d[0] = ld64((c.r[4].w[0] + 128u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[7].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0] + 128u), c.r[12].d[0]);
    c.r[12].d[0] = ld64((c.r[4].w[0] + 128u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[5].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0] + 128u), c.r[12].d[0]);
    c.r[12].d[0] = ld64((c.r[4].w[0] + 136u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[2].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 136u), c.r[12].d[0]);
    st64((c.r[4].w[0] + 184u), c.r[11].d[0]);
    st128((c.r[4].w[0] + 160u) & ~15u, c.r[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 160u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0] + 160u), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 160u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0] + 160u), c.r[7].d[0]);
    c.r[7].d[0] = ld64((c.r[4].w[0] + 160u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0] + 160u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 168u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 168u), c.r[2].d[0]);
    c.budget -= 152;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021BBA0u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 214u, depth); }
L_00249320:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 1808u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00248E90u | kUnwind; return; } goto L_00248E90; }
L_00249330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[4].w[0] + 208u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 36u), c.r[7].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[28].w[0] - 32644u), c.r[5].w[0]);
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = ld8((c.r[29].w[0] + 37u));
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 38u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[8].d[0] = ld8((c.r[29].w[0] + 36u));
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 39u));
    st32((c.r[28].w[0] - 32640u), c.r[16].w[0]);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st8((c.r[28].w[0] - 32635u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[9].d[0] = ld8((c.r[28].w[0] - 32635u));
    st8((c.r[28].w[0] - 32636u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[28].w[0] - 32634u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[8].d[0] = ld8((c.r[28].w[0] - 32634u));
    c.r[10].d[0] = ld8((c.r[28].w[0] - 32636u));
    st8((c.r[28].w[0] - 32633u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[9].d[0] = c.r[9].d[0] << 8;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st64((c.r[7].w[0]), c.r[8].d[0]);
    set32(c.r[8], ld32((c.r[6].w[0] + 12320u)));
    c.r[7].d[0] = c.r[8].d[0] & 64ull;
    c.budget -= 35;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002493D8; } }
L_002493BC:
    set32(c.r[8], ld32((c.r[6].w[0] + 12320u)));
    c.r[7].d[0] = c.r[8].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002493BCu | kUnwind; return; } goto L_002493BC; } }
L_002493D8:
    c.r[6].d[0] = c.r[8].d[0] & 3072ull;
    set32(c.r[8], 0u + 3072u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { goto L_00249408; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_002493EC:
    set32(c.r[7], ld32((c.r[6].w[0] + 12320u)));
    c.r[7].d[0] = c.r[7].d[0] & 3072ull;
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002493ECu | kUnwind; return; } goto L_002493EC; } }
L_00249408:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], ld32((c.r[6].w[0] + 9064u)));
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[6].d[0] = c.r[6].d[0] << 55;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00249448; } }
L_00249428:
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[6].d[0] = c.r[6].d[0] << 55;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249428u | kUnwind; return; } goto L_00249428; } }
L_00249448:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], ld32((c.r[6].w[0] + 9064u)));
    set32(c.r[4], c.r[4].w[0] + 192u);
    c.r[4].d[0] = c.r[4].d[0] << 36;
    c.r[4].d[0] = c.r[4].d[0] >> 36;
    set32(c.r[6], 0u + 2u);
    st32((c.r[7].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 16u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 45u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[29].w[0] + 47u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st8((c.r[29].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1616u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 36u));
    set32(c.r[3], ld32((c.r[5].w[0] + 9096u)));
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024949Cu); st32((c.r[7].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0014(c, 271u, depth + 1u); else { c.pc = 0x002536C0u; return; } if (c.pc != 0x0024949Cu) [[unlikely]] return; }
L_0024949C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_002494AC; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002494AC:
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 1808u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002494D4u); c.f[13] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0012(c, 48u, depth + 1u); else { c.pc = 0x00248EB0u; return; } if (c.pc != 0x002494D4u) [[unlikely]] return; }
L_002494D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002494F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 32652u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00249500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[28].w[0] - 32660u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0024955C; } }
    c.r[9].d[0] = ld8((c.r[28].w[0] - 32664u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[6].d[0] = c.r[3].d[0] | 32768ull;
    c.r[8].d[0] = ld8((c.r[28].w[0] - 32648u));
    set32(c.r[3], c.r[4].w[0] + 16u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 30540u));
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[9].d[0] = c.r[9].d[0] | 12ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[8].d[0] << 4;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[8].d[0] = c.r[9].d[0] | c.r[5].d[0];
    c.r[5].d[0] = c.r[7].d[0] << 14;
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st64((c.r[3].w[0]), c.r[5].d[0]);  if (t) { goto L_002495A8; } }
L_0024955C:
    c.r[9].d[0] = ld8((c.r[28].w[0] - 32664u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[6].d[0] = c.r[3].d[0] | 32768ull;
    c.r[8].d[0] = ld8((c.r[28].w[0] - 32648u));
    set32(c.r[3], c.r[4].w[0] + 16u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 30540u));
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[9].d[0] = c.r[9].d[0] | 12ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[8].d[0] << 4;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[8].d[0] = c.r[9].d[0] | c.r[5].d[0];
    c.r[5].d[0] = c.r[7].d[0] << 14;
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st64((c.r[3].w[0]), c.r[5].d[0]);
    c.budget -= 19;
L_002495A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 12320u)));
    c.r[5].d[0] = c.r[6].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002495D8; } }
L_002495BC:
    set32(c.r[6], ld32((c.r[3].w[0] + 12320u)));
    c.r[5].d[0] = c.r[6].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002495BCu | kUnwind; return; } goto L_002495BC; } }
L_002495D8:
    c.r[3].d[0] = c.r[6].d[0] & 3072ull;
    set32(c.r[6], 0u + 3072u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_00249608; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_002495EC:
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[5].d[0] = c.r[5].d[0] & 3072ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002495ECu | kUnwind; return; } goto L_002495EC; } }
L_00249608:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 9064u)));
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00249648; } }
L_00249628:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249628u | kUnwind; return; } goto L_00249628; } }
L_00249648:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 9064u)));
    c.r[4].d[0] = c.r[4].d[0] << 36;
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[4].d[0] >> 36;
    st32((c.r[6].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 16u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 9096u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00249680:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] << 15;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[2].d[0] << 60;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[8], 0u - 32768u);
    c.r[6].d[0] = c.r[2].d[0] | 32767ull;
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(5ll);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(14ll);
    c.r[7].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[6].d[0] = ld64((c.r[29].w[0] + 40u));
    mmi::pcpyld(c.r[2], c.r[4], c.r[2]);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[2], 0u - 16u);
    st64((c.r[29].w[0] + 32u), c.r[4].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249718u); st64((c.r[29].w[0] + 40u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000B(c, 175u, depth + 1u); else { c.pc = 0x0022F8D0u; return; } if (c.pc != 0x00249718u) [[unlikely]] return; }
L_00249718:
    set32(c.r[2], 0u + 255u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[2], 0u + 68u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u + 128u);
    st64((c.r[16].w[0]), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    st64((c.r[29].w[0] + 80u), c.r[2].d[0]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 112u), c.r[2].d[0]);
    set32(c.r[2], 0u + 70u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249754u); st64((c.r[29].w[0] + 120u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x00249754u) [[unlikely]] return; }
L_00249754:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00249788; } }
L_00249768:
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249768u | kUnwind; return; } goto L_00249768; } }
    c.budget -= 1;
L_00249788:
    c.r[3].d[0] = c.r[5].d[0] & 3072ull;
    set32(c.r[5], 0u + 3072u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002497B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0024979C:
    set32(c.r[4], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[4].d[0] & 3072ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024979Cu | kUnwind; return; } goto L_0024979C; } }
L_002497B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 9064u)));
    st32((c.r[29].w[0] + 140u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002497F8; } }
L_002497D8:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002497D8u | kUnwind; return; } goto L_002497D8; } }
L_002497F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 9064u)));
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], c.r[29].w[0] + 32u);
    st32((c.r[5].w[0] + 32u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 9096u)));
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00249858; } }
L_0024983C:
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024983Cu | kUnwind; return; } goto L_0024983C; } }
L_00249858:
    c.r[3].d[0] = c.r[5].d[0] & 3072ull;
    set32(c.r[5], 0u + 3072u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00249888; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_0024986C:
    set32(c.r[4], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[4].d[0] & 3072ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024986Cu | kUnwind; return; } goto L_0024986C; } }
L_00249888:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 9064u)));
    st32((c.r[29].w[0] + 136u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002498C8; } }
L_002498A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002498A8u | kUnwind; return; } goto L_002498A8; } }
L_002498C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002498E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] << 15;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[2].d[0] << 60;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[10].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[8], 0u - 32768u);
    c.r[6].d[0] = c.r[2].d[0] | 32767ull;
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(5ll);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[4], 0u - 1u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(14ll);
    c.r[7].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[6].d[0] = ld64((c.r[29].w[0] + 40u));
    mmi::pcpyld(c.r[2], c.r[4], c.r[2]);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] | c.r[5].d[0];
    set32(c.r[2], 0u - 16u);
    st64((c.r[29].w[0] + 32u), c.r[4].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249978u); st64((c.r[29].w[0] + 40u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_000B(c, 132u, depth + 1u); else { c.pc = 0x0022EA48u; return; } if (c.pc != 0x00249978u) [[unlikely]] return; }
L_00249978:
    set32(c.r[2], 0u + 255u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    st64((c.r[29].w[0] + 64u), 0ull);
    set32(c.r[2], 0u + 68u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], 0u + 128u);
    st64((c.r[16].w[0]), c.r[3].d[0]);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    st64((c.r[29].w[0] + 80u), c.r[2].d[0]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 112u), c.r[2].d[0]);
    set32(c.r[2], 0u + 70u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002499B4u); st64((c.r[29].w[0] + 120u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x002499B4u) [[unlikely]] return; }
L_002499B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002499E8; } }
L_002499C8:
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002499C8u | kUnwind; return; } goto L_002499C8; } }
    c.budget -= 1;
L_002499E8:
    c.r[3].d[0] = c.r[5].d[0] & 3072ull;
    set32(c.r[5], 0u + 3072u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00249A18; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_002499FC:
    set32(c.r[4], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[4].d[0] & 3072ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002499FCu | kUnwind; return; } goto L_002499FC; } }
L_00249A18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 9064u)));
    st32((c.r[29].w[0] + 140u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00249A58; } }
L_00249A38:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249A38u | kUnwind; return; } goto L_00249A38; } }
L_00249A58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 9064u)));
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], c.r[29].w[0] + 32u);
    st32((c.r[5].w[0] + 32u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 9096u)));
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00249AB8; } }
L_00249A9C:
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249A9Cu | kUnwind; return; } goto L_00249A9C; } }
L_00249AB8:
    c.r[3].d[0] = c.r[5].d[0] & 3072ull;
    set32(c.r[5], 0u + 3072u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00249AE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00249ACC:
    set32(c.r[4], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[4].d[0] & 3072ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249ACCu | kUnwind; return; } goto L_00249ACC; } }
L_00249AE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 9064u)));
    st32((c.r[29].w[0] + 136u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00249B28; } }
L_00249B08:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 136u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249B08u | kUnwind; return; } goto L_00249B08; } }
L_00249B28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00249B40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 54u, depth + 1u); else { c.pc = 0x002490C0u; return; } if (c.pc != 0x00249B54u) [[unlikely]] return; }
L_00249B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 76u, depth + 1u); else { c.pc = 0x002498E0u; return; } if (c.pc != 0x00249B5Cu) [[unlikely]] return; }
L_00249B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00249B64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 67u, depth + 1u); else { c.pc = 0x00249680u; return; } if (c.pc != 0x00249B64u) [[unlikely]] return; }
L_00249B64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[4].w[0] - 8160u)));
    st32((c.r[29].w[0] + 60u), 0u);
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    st32((c.r[4].w[0] - 8160u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 9056u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00249BB8; } }
L_00249B94:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249B94u | kUnwind; return; } goto L_00249B94; } }
    c.budget -= 1;
L_00249BB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 9056u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] + 14464u);
    c.r[4].d[0] = c.r[4].d[0] << 36;
    c.r[4].d[0] = c.r[4].d[0] >> 36;
    st32((c.r[3].w[0] + 32u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[13], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[11], 0u - 13u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[9], 0u - 2u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u - 65u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[5], 0u - 257u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(256ll);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12304u), 0u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32660u));
    c.budget -= 33;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 56u), c.r[5].w[0]);  if (t) { goto L_00249C8C; } }
    c.r[8].d[0] = ld8((c.r[28].w[0] - 32664u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00050000u);
    c.r[5].d[0] = c.r[3].d[0] | 32768ull;
    c.r[7].d[0] = ld8((c.r[28].w[0] - 32648u));
    set32(c.r[3], c.r[16].w[0] + 16u);
    c.r[6].d[0] = ld8((c.r[28].w[0] - 30540u));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[8].d[0] = c.r[8].d[0] | 12ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[7].d[0] << 4;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[7].d[0] = c.r[8].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[6].d[0] << 14;
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st64((c.r[3].w[0]), c.r[4].d[0]);  if (t) { goto L_00249CD8; } }
L_00249C8C:
    c.r[8].d[0] = ld8((c.r[28].w[0] - 32664u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[5].d[0] = c.r[3].d[0] | 32768ull;
    c.r[7].d[0] = ld8((c.r[28].w[0] - 32648u));
    set32(c.r[3], c.r[16].w[0] + 16u);
    c.r[6].d[0] = ld8((c.r[28].w[0] - 30540u));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[8].d[0] = c.r[8].d[0] | 12ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[7].d[0] << 4;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[7].d[0] = c.r[8].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[6].d[0] << 14;
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st64((c.r[3].w[0]), c.r[4].d[0]);
    c.budget -= 19;
L_00249CD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00249D08; } }
L_00249CEC:
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249CECu | kUnwind; return; } goto L_00249CEC; } }
L_00249D08:
    c.r[3].d[0] = c.r[5].d[0] & 3072ull;
    set32(c.r[5], 0u + 3072u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00249D38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00249D1C:
    set32(c.r[4], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[4].d[0] & 3072ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249D1Cu | kUnwind; return; } goto L_00249D1C; } }
L_00249D38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 9064u)));
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00249D78; } }
L_00249D58:
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249D58u | kUnwind; return; } goto L_00249D58; } }
L_00249D78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[9], ld32((c.r[3].w[0] + 9064u)));
    set32(c.r[4], 0u + 2u);
    c.r[3].d[0] = c.r[16].d[0] << 36;
    st32((c.r[9].w[0] + 32u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    st32((c.r[9].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[8], ld32((c.r[3].w[0] + 9096u)));
    c.r[7].d[0] = ld32((c.r[4].w[0] - 28920u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[9].w[0]), c.r[8].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0] - 28944u));
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[8].d[0] = ld8((c.r[28].w[0] - 32656u));
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = c.r[6].d[0] << 24;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = 0ull < c.r[8].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0]), c.r[5].d[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 36;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00249E28; } }
L_00249E08:
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249E08u | kUnwind; return; } goto L_00249E08; } }
    c.budget -= 1;
L_00249E28:
    c.r[3].d[0] = c.r[5].d[0] & 3072ull;
    set32(c.r[5], 0u + 3072u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00249E58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00249E3C:
    set32(c.r[4], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[4].d[0] & 3072ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249E3Cu | kUnwind; return; } goto L_00249E3C; } }
L_00249E58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 9064u)));
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00249E98; } }
L_00249E78:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249E78u | kUnwind; return; } goto L_00249E78; } }
L_00249E98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], ld32((c.r[3].w[0] + 9064u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[16].w[0] + 64u);
    st32((c.r[7].w[0] + 32u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    st32((c.r[7].w[0] + 16u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 208u);
    set32(c.r[6], ld32((c.r[3].w[0] + 9096u)));
    c.r[5].d[0] = c.r[4].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[6].d[0] = ld8((c.r[28].w[0] - 32635u));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32634u));
    c.r[7].d[0] = ld8((c.r[28].w[0] - 32636u));
    c.r[6].d[0] = c.r[6].d[0] << 8;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0]), c.r[5].d[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 32;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00249F38; } }
L_00249F18:
    set32(c.r[5], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249F18u | kUnwind; return; } goto L_00249F18; } }
    c.budget -= 1;
L_00249F38:
    c.r[3].d[0] = c.r[5].d[0] & 3072ull;
    set32(c.r[5], 0u + 3072u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00249F68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 1;
L_00249F4C:
    set32(c.r[4], ld32((c.r[3].w[0] + 12320u)));
    c.r[4].d[0] = c.r[4].d[0] & 3072ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249F4Cu | kUnwind; return; } goto L_00249F4C; } }
L_00249F68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 9064u)));
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00249FA8; } }
L_00249F88:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00249F88u | kUnwind; return; } goto L_00249F88; } }
L_00249FA8:
    set32(c.r[3], c.r[16].w[0] + 192u);
    c.r[4].d[0] = c.r[3].d[0] << 36;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[4].d[0] >> 36;
    set32(c.r[5], ld32((c.r[3].w[0] + 9064u)));
    set32(c.r[3], 0u + 2u);
    st32((c.r[5].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 16u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 9096u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00249FF0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0024A124; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[12].d[0] = 0ull & 255ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[13], ld32((c.r[3].w[0] + 368u)));
    set32(c.r[8], 0u - 256u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[10].d[0] = c.r[5].d[0] | 255ull;
    set32(c.r[11], c.r[12].w[0] << 8);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[9], c.r[12].w[0] << 16);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[8].d[0] = c.r[13].d[0] & c.r[8].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[12].d[0] = c.r[8].d[0] | c.r[12].d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0] + 368u), c.r[12].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[12], ld32((c.r[3].w[0] + 368u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[7].w[0];
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[7].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[12]);
    c.r[7].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 368u), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 368u)));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.r[5].d[0] = c.r[5].d[0] & c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[9].d[0];
    c.budget -= 40;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0] + 368u), c.r[5].w[0]);  if (t) { goto L_0024A0B4; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_0024A0D0; } }
L_0024A0B4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 7;
L_0024A0D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[5].w[0] << 24);
    set32(c.r[9], ld32((c.r[3].w[0] + 368u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], 0u - 1u);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[7].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    st32((c.r[5].w[0] + 368u), c.r[4].w[0]);
    st8((c.r[3].w[0] + 304u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 19;
L_0024A11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024A134; } }
L_0024A124:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 304u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024A11Cu | kUnwind; return; } goto L_0024A11C; } }
L_0024A134:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0024A140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A158u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 27u, depth + 1u); else { c.pc = 0x0021C400u; return; } if (c.pc != 0x0024A158u) [[unlikely]] return; }
L_0024A158:
    set32(c.r[5], ld32((c.r[16].w[0] + 3860u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A164u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0006(c, 144u, depth + 1u); else { c.pc = 0x0021B620u; return; } if (c.pc != 0x0024A164u) [[unlikely]] return; }
L_0024A164:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 3860u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024A180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[24].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 3808u)));
    set32(c.r[3], 0u - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(125ll);
    c.r[10].d[0] = c.r[9].d[0] | 255ull;
    c.r[11].d[0] = 0ull | 44800ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00E10000u);
    set32(c.r[6], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x14000000u);
    c.r[13].d[0] = 0ull | 33088ull;
    c.r[12].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 3808u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[6].d[0] << 32;
    set32(c.r[25], ld32((c.r[4].w[0] + 3808u)));
    c.r[14].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[12].d[0] << 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[7].d[0] = c.r[12].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[3].d[0] = c.r[2].d[0] << 32;
    set32(c.r[5], c.r[5].w[0] - 480u);
    c.r[2].d[0] = c.r[12].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[10].d[0] = c.r[25].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st32((c.r[4].w[0] + 3808u), c.r[10].w[0]);
    mmi::pcpyld(c.r[2], c.r[6], c.r[2]);
    set32(c.r[10], ld32((c.r[4].w[0] + 3808u)));
    c.r[10].d[0] = c.r[10].d[0] & c.r[24].d[0];
    c.r[8].d[0] = c.r[10].d[0] | c.r[8].d[0];
    st32((c.r[4].w[0] + 3808u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 3808u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[14].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[15].d[0];
    st32((c.r[4].w[0] + 3808u), c.r[8].w[0]);
    c.r[10].d[0] = ld16((c.r[28].w[0] - 32632u));
    c.r[8].d[0] = ld64((c.r[4].w[0] + 3824u));
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[10], c.r[13].w[0] - c.r[10].w[0]);
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.r[10].d[0] = c.r[10].d[0] & 65535ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0] + 3824u), c.r[8].d[0]);
    c.r[10].d[0] = ld16((c.r[28].w[0] - 32624u));
    c.r[8].d[0] = ld64((c.r[4].w[0] + 3824u));
    set32(c.r[10], c.r[10].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] + 32416u);
    c.r[8].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[10].d[0] = c.r[10].d[0] & 65535ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0] + 3824u), c.r[8].d[0]);
    c.r[8].d[0] = ld64((c.r[4].w[0] + 3824u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 3824u), c.r[8].d[0]);
    c.r[10].d[0] = ld16((c.r[4].w[0] + 3824u));
    c.r[8].d[0] = ld64((c.r[4].w[0] + 3840u));
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(64ll);
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[10].d[0] & 65535ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st64((c.r[4].w[0] + 3840u), c.r[8].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 3824u));
    c.r[8].d[0] = ld64((c.r[4].w[0] + 3840u));
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[8].d[0] = c.r[9].d[0] >> 48;
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(160ll);
    c.r[8].d[0] = c.r[8].d[0] & 65535ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0] + 3840u), c.r[7].d[0]);
    c.r[7].d[0] = ld64((c.r[4].w[0] + 3840u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 3840u), c.r[2].d[0]);
    c.budget -= 89;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A2E4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0006(c, 140u, depth + 1u); else { c.pc = 0x0021B600u; return; } if (c.pc != 0x0024A2E4u) [[unlikely]] return; }
L_0024A2E4:
    st32((c.r[16].w[0] + 3860u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A2F0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0007(c, 31u, depth + 1u); else { c.pc = 0x0021C468u; return; } if (c.pc != 0x0024A2F0u) [[unlikely]] return; }
L_0024A2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A2F8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0022E588u; return; } if (c.pc != 0x0024A2F8u) [[unlikely]] return; }
L_0024A2F8:
    st32((c.r[16].w[0] + 3856u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 3856u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 3856u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0024A320:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(326ll);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] << 47;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFC000000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[2].d[0] = c.r[2].d[0] | 32767ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[30].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[3].d[0] = c.r[2].d[0] << 32;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[2].d[0] = c.r[30].d[0] << 16;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(14ll);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[21].d[0] | c.r[3].d[0];
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[0]);
    c.r[9].d[0] = c.r[18].d[0] | 32767ull;
    c.r[6].d[0] = ld64((c.r[4].w[0] + 32u));
    set32(c.r[22], 0u - 16u);
    c.r[17].d[0] = c.r[19].d[0] << 4;
    c.r[16].d[0] = c.r[19].d[0] << 8;
    c.r[25].d[0] = c.r[19].d[0] << 12;
    c.r[15].d[0] = c.r[19].d[0] << 16;
    c.r[13].d[0] = c.r[19].d[0] << 20;
    c.r[24].d[0] = c.r[18].d[0] | 4095ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[10].d[0] = c.r[2].d[0] << 15;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 32;
    st64((c.r[4].w[0] + 32u), c.r[2].d[0]);
    set32(c.r[3], 0u - 16385u);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = c.r[21].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[2].d[0] << 46;
    c.r[3].d[0] = 0ull & 3ull;
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(6ll);
    c.r[6].d[0] = c.r[21].d[0] | c.r[6].d[0];
    c.r[8].d[0] = c.r[2].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] << 58;
    set32(c.r[2], 0u - 1u);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0] + 32u), c.r[9].d[0]);
    c.r[10].d[0] = ld64((c.r[4].w[0] + 32u));
    mmi::pcpyld(c.r[9], c.r[2], c.r[6]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xF3FF0000u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = c.r[21].d[0] | c.r[6].d[0];
    c.r[5].d[0] = c.r[10].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st64((c.r[4].w[0] + 32u), c.r[5].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[14].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[12].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[7], ld32((c.r[5].w[0] - 28936u)));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0] + 32u), c.r[9].d[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0xC0FF0000u);
    c.r[20].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[9].d[0] = 0ull << 32;
    c.r[9].d[0] = c.r[9].d[0] >> 32;
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFC00000u);
    c.r[11].d[0] = c.r[7].d[0] & 511ull;
    c.r[10].d[0] = c.r[5].d[0] | 65535ull;
    c.r[7].d[0] = c.r[9].d[0] << 32;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[7]);
    c.r[5].d[0] = ld16((c.r[5].w[0] - 28952u));
    mmi::pcpyld(c.r[7], c.r[2], c.r[21]);
    c.r[20].d[0] = c.r[20].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.r[20].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 32u), c.r[3].d[0]);
    c.r[20].d[0] = ld64((c.r[4].w[0] + 40u));
    c.r[3].d[0] = 0ull & 2047ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] & 63ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[9].d[0] = c.r[5].d[0] << 24;
    set32(c.r[3], 0u - 2048u);
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = c.r[21].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[21].d[0] | c.r[3].d[0];
    c.r[20].d[0] = c.r[20].d[0] & c.r[22].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0xF8000000u);
    c.r[19].d[0] = c.r[20].d[0] | c.r[19].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[20].d[0] = c.r[30].d[0] << 32;
    c.r[3].d[0] = c.r[5].d[0] << 32;
    st64((c.r[4].w[0] + 40u), c.r[19].d[0]);
    c.r[3].d[0] = c.r[21].d[0] | c.r[3].d[0];
    c.r[19].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[19].d[0] = c.r[19].d[0] | 65535ull;
    c.r[21].d[0] = ld64((c.r[4].w[0] + 40u));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[20].d[0] >> 32;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[22].d[0] = c.r[18].d[0] | 255ull;
    c.r[19].d[0] = c.r[19].d[0] | 65535ull;
    c.r[20].d[0] = c.r[20].d[0] << 32;
    c.r[23].d[0] = c.r[19].d[0] | c.r[2].d[0];
    set32(c.r[19], 0u - 241u);
    c.r[2].d[0] = c.r[30].d[0] | c.r[2].d[0];
    c.r[19].d[0] = c.r[21].d[0] & c.r[19].d[0];
    set32(c.r[30], c.r[4].w[0] + 16u);
    c.r[17].d[0] = c.r[19].d[0] | c.r[17].d[0];
    st64((c.r[4].w[0] + 40u), c.r[17].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[21].d[0] = ld64((c.r[4].w[0] + 40u));
    set32(c.r[17], 0u - 3841u);
    c.r[19].d[0] = c.r[19].d[0] | 7ull;
    c.r[17].d[0] = c.r[21].d[0] & c.r[17].d[0];
    c.r[16].d[0] = c.r[17].d[0] | c.r[16].d[0];
    st64((c.r[4].w[0] + 40u), c.r[16].d[0]);
    c.r[16].d[0] = ld64((c.r[4].w[0] + 40u));
    c.r[16].d[0] = c.r[16].d[0] & c.r[24].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[25].d[0];
    st64((c.r[4].w[0] + 40u), c.r[16].d[0]);
    c.r[16].d[0] = ld64((c.r[4].w[0] + 40u));
    c.r[14].d[0] = c.r[16].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st64((c.r[4].w[0] + 40u), c.r[14].d[0]);
    c.r[14].d[0] = ld64((c.r[4].w[0] + 40u));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st64((c.r[4].w[0] + 40u), c.r[12].d[0]);
    c.r[13].d[0] = ld64((c.r[4].w[0] + 32u));
    set32(c.r[12], 0u - 32768u);
    c.r[13].d[0] = c.r[13].d[0] & c.r[12].d[0];
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[12].d[0] = c.r[13].d[0] | c.r[12].d[0];
    st64((c.r[4].w[0] + 32u), c.r[12].d[0]);
    c.r[13].d[0] = ld64((c.r[4].w[0] + 48u));
    set32(c.r[12], 0u - 512u);
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    c.r[11].d[0] = c.r[12].d[0] | c.r[11].d[0];
    st64((c.r[4].w[0] + 48u), c.r[11].d[0]);
    c.r[11].d[0] = ld16((c.r[28].w[0] - 32632u));
    c.r[13].d[0] = ld64((c.r[4].w[0] + 48u));
    set32(c.r[14], c.r[11].w[0] >> 6);
    set32(c.r[12], c.r[11].w[0] >> 1);
    c.r[13].d[0] = c.r[13].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[14].d[0] << 32;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[14].d[0] = c.r[10].d[0] & 63ull;
    set32(c.r[10], 0u + 2048u);
    set32(c.r[10], c.r[10].w[0] - c.r[12].w[0]);
    c.r[12].d[0] = c.r[14].d[0] << 16;
    set32(c.r[10], c.r[10].w[0] << 4);
    c.r[13].d[0] = c.r[13].d[0] | c.r[12].d[0];
    c.r[12].d[0] = c.r[10].d[0] & 65535ull;
    st64((c.r[4].w[0] + 48u), c.r[13].d[0]);
    set32(c.r[10], c.r[11].w[0] - 1u);
    c.r[13].d[0] = c.r[10].d[0] << 32;
    set32(c.r[11], c.r[11].w[0] << 3);
    c.r[10].d[0] = 0ull | 33088ull;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    c.r[11].d[0] = c.r[13].d[0] & 2047ull;
    c.r[10].d[0] = c.r[10].d[0] & 65535ull;
    c.r[13].d[0] = ld64((c.r[4].w[0] + 48u));
    c.r[11].d[0] = c.r[11].d[0] << 16;
    c.r[8].d[0] = c.r[13].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st64((c.r[4].w[0] + 48u), c.r[8].d[0]);
    c.r[8].d[0] = ld64((c.r[4].w[0] + 48u));
    c.r[9].d[0] = c.r[8].d[0] & c.r[7].d[0];
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[8]);
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0] + 48u), c.r[8].d[0]);
    set32(c.r[8], 0u + 76u);
    st64((c.r[4].w[0] + 56u), c.r[8].d[0]);
    c.r[9].d[0] = ld16((c.r[28].w[0] - 30524u));
    c.r[8].d[0] = ld64((c.r[4].w[0] + 64u));
    set32(c.r[9], c.r[9].w[0] + c.r[12].w[0]);
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[8].d[0] = c.r[8].d[0] & c.r[18].d[0];
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st64((c.r[4].w[0] + 64u), c.r[8].d[0]);
    c.r[9].d[0] = ld16((c.r[28].w[0] - 32624u));
    set32(c.r[8], 0u + 2048u);
    c.r[13].d[0] = ld64((c.r[4].w[0] + 64u));
    c.r[14].d[0] = ld16((c.r[28].w[0] - 30520u));
    set32(c.r[15], c.r[9].w[0] >> 1);
    set32(c.r[12], c.r[9].w[0] - 1u);
    set32(c.r[15], c.r[8].w[0] - c.r[15].w[0]);
    c.r[8].d[0] = c.r[12].d[0] << 32;
    c.r[12].d[0] = c.r[13].d[0] & c.r[6].d[0];
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    set32(c.r[6], c.r[15].w[0] << 4);
    c.r[13].d[0] = c.r[6].d[0] & 65535ull;
    c.r[6].d[0] = c.r[8].d[0] & 2047ull;
    set32(c.r[13], c.r[14].w[0] + c.r[13].w[0]);
    c.r[8].d[0] = c.r[6].d[0] << 48;
    c.r[13].d[0] = c.r[13].d[0] << 32;
    set32(c.r[6], c.r[9].w[0] << 3);
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);
    c.r[9].d[0] = c.r[13].d[0] & 65535ull;
    set32(c.r[6], c.r[6].w[0] + 32416u);
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.r[9].d[0] = c.r[12].d[0] | c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 16;
    st64((c.r[4].w[0] + 64u), c.r[9].d[0]);
    set32(c.r[9], 0u + 24u);
    st64((c.r[4].w[0] + 72u), c.r[9].d[0]);
    c.r[12].d[0] = ld64((c.r[4].w[0] + 80u));
    set32(c.r[9], 0u - 2048u);
    c.r[12].d[0] = c.r[12].d[0] & c.r[9].d[0];
    c.r[9].d[0] = 0ull & 2047ull;
    c.r[9].d[0] = c.r[12].d[0] | c.r[9].d[0];
    st64((c.r[4].w[0] + 80u), c.r[9].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 80u));
    c.r[5].d[0] = c.r[9].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[11].d[0];
    st64((c.r[4].w[0] + 80u), c.r[5].d[0]);
    c.r[9].d[0] = ld64((c.r[4].w[0] + 80u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[5]);
    c.r[9].d[0] = c.r[9].d[0] & c.r[5].d[0];
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[9].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 80u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 80u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st64((c.r[4].w[0] + 80u), c.r[3].d[0]);
    set32(c.r[3], 0u + 64u);
    st64((c.r[4].w[0] + 88u), c.r[3].d[0]);
    set32(c.r[3], 0u + 1u);
    st64((c.r[4].w[0] + 104u), c.r[3].d[0]);
    set32(c.r[3], 0u + 5u);
    st64((c.r[4].w[0] + 120u), c.r[3].d[0]);
    st64((c.r[4].w[0] + 136u), c.r[3].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], 0u - 256u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(125ll);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.r[5].d[0] = c.r[3].d[0] & c.r[22].d[0];
    c.r[3].d[0] = 0ull | 44800ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 96u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00E10000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.r[5].d[0] = c.r[3].d[0] & c.r[23].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x14000000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[18].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0] + 112u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0] + 112u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[20].d[0];
    st64((c.r[4].w[0] + 112u), c.r[3].d[0]);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 112u));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 128u));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[3].d[0] & c.r[18].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 128u), c.r[3].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 112u));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 128u));
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[5].d[0] >> 48;
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(160ll);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 128u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[4].w[0] + 128u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[20].d[0];
    st64((c.r[4].w[0] + 128u), c.r[2].d[0]);
    st32((c.r[4].w[0] + 4u), c.r[30].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), c.r[19].w[0]);
    c.budget -= 317;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024A814u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0024A814u) [[unlikely]] return; }
L_0024A814:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0024A850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[5].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[6].d[0] = c.r[5].d[0] << 46;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[9].d[0] = c.r[3].d[0] << 15;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(3ll);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[0]);
    c.r[8].d[0] = c.r[7].d[0] | 32767ull;
    c.r[10].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[12].d[0] = c.r[7].d[0] | 4095ull;
    set32(c.r[5], 0u - 16385u);
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[7].d[0] = c.r[5].d[0] << 32;
    set32(c.r[16], 0u - 16u);
    c.r[5].d[0] = 0ull | 65535ull;
    set32(c.r[24], 0u - 241u);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    set32(c.r[14], 0u - 3841u);
    c.r[11].d[0] = c.r[5].d[0] | 65535ull;
    c.r[15].d[0] = c.r[17].d[0] << 8;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[10].d[0] = c.r[11].d[0] | c.r[7].d[0];
    st64((c.r[4].w[0] + 32u), c.r[8].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0xF3FF0000u);
    c.r[13].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[18].d[0] = c.r[11].d[0] | c.r[7].d[0];
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.r[8].d[0] = c.r[8].d[0] << 32;
    set32(c.r[9], 0u - 1u);
    c.r[8].d[0] = c.r[11].d[0] | c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 60;
    mmi::pcpyld(c.r[19], c.r[9], c.r[8]);
    c.r[7].d[0] = c.r[13].d[0] & c.r[10].d[0];
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(96ll);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    set32(c.r[10], 0u - 32768u);
    st64((c.r[4].w[0] + 32u), c.r[6].d[0]);
    set32(c.r[9], c.r[4].w[0] + 16u);
    c.r[20].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(5ll);
    c.r[25].d[0] = c.r[6].d[0] << 4;
    c.r[13].d[0] = c.r[6].d[0] << 12;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x6CC10000u);
    set32(c.r[8], 0u + 194u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[19].d[0] = c.r[20].d[0] & c.r[19].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[5].d[0];
    c.r[5].d[0] = c.r[6].d[0] | 102ull;
    st64((c.r[4].w[0] + 32u), c.r[19].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[18].d[0];
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 32u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[17].d[0];
    st64((c.r[4].w[0] + 40u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[25].d[0];
    st64((c.r[4].w[0] + 40u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[14].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[15].d[0];
    st64((c.r[4].w[0] + 40u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[12].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[13].d[0];
    st64((c.r[4].w[0] + 40u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    st64((c.r[4].w[0] + 32u), c.r[3].d[0]);
    st32((c.r[4].w[0] + 4u), c.r[9].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 97;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0024A9E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024AA04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 110u, depth + 1u); else { c.pc = 0x0024A850u; return; } if (c.pc != 0x0024AA04u) [[unlikely]] return; }
L_0024AA04:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 2u);
    set32(c.r[14], 0u + 4u);
    set32(c.r[13], 0u + 12u);
    set32(c.r[12], 0u + 8u);
    set32(c.r[11], 0u + 24u);
    c.budget -= 9;
L_0024AA28:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; c.r[8].d[0] = c.r[7].d[0] & 3ull;  if (t) { goto L_0024AA3C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0024AA3C; } }
    set32(c.r[8], c.r[8].w[0] - 4u);
    c.budget -= 1;
L_0024AA3C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0024AAE0; } }
    set32(c.r[8], c.r[6].w[0] << 5);
    set32(c.r[9], c.r[5].w[0] << 4);
    set32(c.r[25], c.r[16].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[9].w[0] + 40u);
    set32(c.r[8], c.r[3].w[0] << 4);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[8].w[0] + 40u);
    c.r[17].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[8], c.r[7].w[0] + 2u);
    c.r[24].d[0] = 0ull + 0ull;
    c.r[15].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] << 4);
    c.budget -= 13;
L_0024AA78:
    set32(c.r[19], c.r[17].w[0] << 4);
    set32(c.r[20], c.r[19].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] + 8u);
    st16((c.r[25].w[0] + 48u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[19], c.r[15].w[0] << 4);
    st16((c.r[25].w[0] + 50u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[20], c.r[19].w[0] + 8u);
    st16((c.r[25].w[0] + 56u), static_cast<std::uint16_t>(c.r[24].w[0]));
    set32(c.r[19], c.r[18].w[0] << 4);
    st16((c.r[25].w[0] + 58u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[25].w[0] + 60u), 0u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    st16((c.r[25].w[0] + 64u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[24], c.r[24].w[0] + 128u);
    st16((c.r[25].w[0] + 66u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[15], c.r[15].w[0] + 16u);
    st16((c.r[25].w[0] + 72u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[25].w[0] + 74u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[19].d[0] = c.r[18].sd[0] < 64ll ? 1ull : 0ull;
    st32((c.r[25].w[0] + 76u), 0u);
    c.budget -= 23;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[25], c.r[25].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024AA78u | kUnwind; return; } goto L_0024AA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024AB70; } }
    c.budget -= 1;
L_0024AAE0:
    set32(c.r[8], c.r[6].w[0] << 5);
    set32(c.r[25], c.r[16].w[0] + c.r[8].w[0]);
    c.r[15].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[5].w[0] << 4);
    c.r[18].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[10], c.r[8].w[0] + 40u);
    c.r[24].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[3].w[0] << 4);
    c.r[17].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[9], c.r[8].w[0] + 40u);
    set32(c.r[8], c.r[7].w[0] + 2u);
    set32(c.r[8], c.r[8].w[0] << 4);
    c.budget -= 12;
L_0024AB10:
    set32(c.r[19], c.r[18].w[0] << 4);
    set32(c.r[20], c.r[19].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 16u);
    st16((c.r[25].w[0] + 48u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[19], c.r[17].w[0] << 4);
    st16((c.r[25].w[0] + 50u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[20], c.r[19].w[0] + 8u);
    st16((c.r[25].w[0] + 56u), static_cast<std::uint16_t>(c.r[24].w[0]));
    set32(c.r[19], c.r[15].w[0] << 4);
    st16((c.r[25].w[0] + 58u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[25].w[0] + 60u), 0u);
    set32(c.r[18], c.r[18].w[0] + 32u);
    st16((c.r[25].w[0] + 64u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[24], c.r[24].w[0] + 256u);
    st16((c.r[25].w[0] + 66u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[17], c.r[17].w[0] + 32u);
    st16((c.r[25].w[0] + 72u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[25].w[0] + 74u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[19].d[0] = c.r[15].sd[0] < 64ll ? 1ull : 0ull;
    st32((c.r[25].w[0] + 76u), 0u);
    c.budget -= 23;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[25], c.r[25].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024AB10u | kUnwind; return; } goto L_0024AB10; } }
    c.budget -= 1;
L_0024AB70:
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.r[8].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024AA28u | kUnwind; return; } goto L_0024AA28; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0024ABB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024ABD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 110u, depth + 1u); else { c.pc = 0x0024A850u; return; } if (c.pc != 0x0024ABD4u) [[unlikely]] return; }
L_0024ABD4:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 2u);
    set32(c.r[14], 0u + 8u);
    set32(c.r[13], 0u + 24u);
    set32(c.r[12], 0u + 4u);
    set32(c.r[11], 0u + 12u);
    c.budget -= 9;
L_0024ABF8:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0; c.r[8].d[0] = c.r[7].d[0] & 3ull;  if (t) { goto L_0024AC0C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0024AC0C; } }
    set32(c.r[8], c.r[8].w[0] - 4u);
    c.budget -= 1;
L_0024AC0C:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_0024ACB0; } }
    set32(c.r[8], c.r[6].w[0] << 5);
    set32(c.r[9], c.r[5].w[0] << 4);
    set32(c.r[25], c.r[16].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[9].w[0] + 8u);
    set32(c.r[8], c.r[3].w[0] << 4);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[8].w[0] + 8u);
    c.r[17].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[8], c.r[7].w[0] + 2u);
    c.r[24].d[0] = 0ull + 0ull;
    c.r[15].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] << 4);
    c.budget -= 13;
L_0024AC48:
    set32(c.r[19], c.r[17].w[0] << 4);
    set32(c.r[20], c.r[19].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    st16((c.r[25].w[0] + 48u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[19], c.r[15].w[0] << 4);
    st16((c.r[25].w[0] + 50u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[20], c.r[19].w[0] + 8u);
    st16((c.r[25].w[0] + 56u), static_cast<std::uint16_t>(c.r[24].w[0]));
    set32(c.r[19], c.r[18].w[0] << 4);
    st16((c.r[25].w[0] + 58u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[25].w[0] + 60u), 0u);
    set32(c.r[17], c.r[17].w[0] + 32u);
    st16((c.r[25].w[0] + 64u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[24], c.r[24].w[0] + 256u);
    st16((c.r[25].w[0] + 66u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[15], c.r[15].w[0] + 32u);
    st16((c.r[25].w[0] + 72u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[25].w[0] + 74u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[19].d[0] = c.r[18].sd[0] < 64ll ? 1ull : 0ull;
    st32((c.r[25].w[0] + 76u), 0u);
    c.budget -= 23;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[25], c.r[25].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024AC48u | kUnwind; return; } goto L_0024AC48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0024AD40; } }
    c.budget -= 1;
L_0024ACB0:
    set32(c.r[8], c.r[6].w[0] << 5);
    set32(c.r[25], c.r[16].w[0] + c.r[8].w[0]);
    c.r[15].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[5].w[0] << 4);
    c.r[18].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[10], c.r[8].w[0] + 8u);
    c.r[24].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[3].w[0] << 4);
    c.r[17].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[9], c.r[8].w[0] + 8u);
    set32(c.r[8], c.r[7].w[0] + 2u);
    set32(c.r[8], c.r[8].w[0] << 4);
    c.budget -= 12;
L_0024ACE0:
    set32(c.r[19], c.r[18].w[0] << 4);
    set32(c.r[20], c.r[19].w[0] + 8u);
    set32(c.r[15], c.r[15].w[0] + 8u);
    st16((c.r[25].w[0] + 48u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[19], c.r[17].w[0] << 4);
    st16((c.r[25].w[0] + 50u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[20], c.r[19].w[0] + 8u);
    st16((c.r[25].w[0] + 56u), static_cast<std::uint16_t>(c.r[24].w[0]));
    set32(c.r[19], c.r[15].w[0] << 4);
    st16((c.r[25].w[0] + 58u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[25].w[0] + 60u), 0u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    st16((c.r[25].w[0] + 64u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[24], c.r[24].w[0] + 128u);
    st16((c.r[25].w[0] + 66u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[17], c.r[17].w[0] + 16u);
    st16((c.r[25].w[0] + 72u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[25].w[0] + 74u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[19].d[0] = c.r[15].sd[0] < 64ll ? 1ull : 0ull;
    st32((c.r[25].w[0] + 76u), 0u);
    c.budget -= 23;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[25], c.r[25].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024ACE0u | kUnwind; return; } goto L_0024ACE0; } }
    c.budget -= 1;
L_0024AD40:
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.r[8].d[0] = c.r[7].sd[0] < 32ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024ABF8u | kUnwind; return; } goto L_0024ABF8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0024AD80:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[7].d[0] = c.r[8].d[0] & 7ull;
    c.r[3].d[0] = c.r[3].d[0] & 16383ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[3].d[0] = c.r[3].d[0] << 37;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[3]);
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[7].d[0] << 61;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[8].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 6));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[12].d[0] = c.r[23].d[0] << 15;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = 0ull & 2047ull;
    st128((c.r[4].w[0]) & ~15u, c.r[0]);
    c.r[10].d[0] = c.r[3].d[0] << 47;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFC000000u);
    c.r[11].d[0] = ld64((c.r[4].w[0]));
    c.r[6].d[0] = c.r[3].d[0] | 32767ull;
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(14ll);
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[9].d[0] = c.r[6].d[0] << 32;
    c.r[7].d[0] = c.r[3].d[0] << 16;
    c.r[22].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    c.r[6].d[0] = c.r[7].d[0] | 65535ull;
    c.r[24].d[0] = c.r[23].d[0] << 34;
    c.r[3].d[0] = c.r[6].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[9].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0]), c.r[9].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[13].d[0] = ld64((c.r[4].w[0]));
    c.r[11].d[0] = c.r[3].d[0] | 32767ull;
    set32(c.r[9], 0u - 16385u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[15].d[0] = c.r[3].d[0] << 46;
    c.r[10].d[0] = c.r[6].d[0] | c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 55;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[3]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[14].d[0] = c.r[3].d[0] << 60;
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 14;
    st64((c.r[4].w[0]), c.r[11].d[0]);
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[17].d[0] = ld64((c.r[4].w[0]));
    c.r[11].d[0] = 0ull & 3ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    c.r[12].d[0] = c.r[11].d[0] << 58;
    set32(c.r[3], 0u - 1u);
    c.r[9].d[0] = c.r[6].d[0] | c.r[9].d[0];
    mmi::pcpyld(c.r[13], c.r[3], c.r[9]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0xF3FF0000u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(6ll);
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.r[17].d[0] = c.r[17].d[0] & c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[15].d[0] = c.r[17].d[0] | c.r[15].d[0];
    c.r[10].d[0] = c.r[16].d[0] << 4;
    st64((c.r[4].w[0]), c.r[15].d[0]);
    set32(c.r[16], c.r[5].w[0] << 5);
    c.r[15].d[0] = ld64((c.r[4].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[16].d[0] = c.r[16].d[0] & 16383ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[5].d[0] & 511ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[5]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(19ll);
    c.r[21].d[0] = c.r[16].d[0] | 16383ull;
    c.r[20].d[0] = c.r[5].d[0] << 20;
    c.r[16].sd[0] = static_cast<std::int32_t>(0xFC0F0000u);
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(10ll);
    c.r[19].d[0] = c.r[16].d[0] | 65535ull;
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st64((c.r[4].w[0]), c.r[13].d[0]);
    c.r[18].d[0] = c.r[5].d[0] << 26;
    c.r[16].d[0] = c.r[5].d[0] << 30;
    c.r[13].sd[0] = static_cast<std::int32_t>(0xC3FF0000u);
    c.r[17].d[0] = c.r[13].d[0] | 65535ull;
    c.r[5].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[13], 0u - 4u);
    c.r[9].d[0] = c.r[6].d[0] | c.r[9].d[0];
    c.r[14].d[0] = c.r[13].d[0] << 32;
    c.r[13].sd[0] = static_cast<std::int32_t>(0x3FFF0000u);
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    c.r[25].d[0] = c.r[13].d[0] | c.r[14].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[9].d[0];
    set32(c.r[13], 0u - 5u);
    c.r[9].d[0] = c.r[5].d[0] | c.r[12].d[0];
    c.r[13].d[0] = c.r[13].d[0] << 32;
    set32(c.r[5], 0u - 25u);
    c.r[15].d[0] = c.r[6].d[0] | c.r[13].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    st64((c.r[4].w[0]), c.r[9].d[0]);
    c.r[13].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[9].d[0] = 0ull & 15ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFF80000u);
    c.r[9].d[0] = c.r[9].d[0] << 51;
    c.r[5].d[0] = c.r[5].d[0] | 31ull;
    c.r[12].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] << 32;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[9]);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0xFF870000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[5]);
    c.r[14].d[0] = c.r[23].d[0] << 35;
    c.r[5].d[0] = c.r[9].d[0] | 65535ull;
    c.r[9].d[0] = c.r[5].d[0] << 32;
    set32(c.r[5], 0u - 16u);
    c.r[9].d[0] = c.r[6].d[0] | c.r[9].d[0];
    c.r[5].d[0] = c.r[12].d[0] & c.r[5].d[0];
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[9]);
    c.r[9].d[0] = c.r[5].d[0] | c.r[11].d[0];
    st64((c.r[4].w[0] + 8u), c.r[9].d[0]);
    c.r[5].d[0] = c.r[22].d[0] | 65535ull;
    c.r[9].d[0] = 0ull & 31ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] << 56;
    c.r[11].sd[0] = static_cast<std::int32_t>(0xE0FF0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[9]);
    c.r[12].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[9].d[0] = c.r[11].d[0] | 65535ull;
    c.r[5].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x1FFF0000u);
    c.r[9].d[0] = c.r[6].d[0] | c.r[9].d[0];
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[9]);
    c.r[9].d[0] = c.r[11].d[0] | 65535ull;
    c.r[11].d[0] = c.r[9].d[0] << 32;
    set32(c.r[9], 0u - 241u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[9].d[0];
    c.r[10].d[0] = c.r[5].d[0] | c.r[10].d[0];
    c.r[9].d[0] = c.r[6].d[0] | c.r[11].d[0];
    st64((c.r[4].w[0] + 8u), c.r[10].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFC00000u);
    c.r[10].d[0] = c.r[5].d[0] | 65535ull;
    c.r[22].d[0] = ld64((c.r[4].w[0]));
    c.r[5].d[0] = 0ull & 63ull;
    c.r[30].d[0] = c.r[5].d[0] << 24;
    mmi::pcpyld(c.r[11], c.r[3], c.r[9]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC0FF0000u);
    c.r[9].d[0] = c.r[5].d[0] | 65535ull;
    set32(c.r[5], 0u - 32768u);
    c.r[5].d[0] = c.r[22].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[23].d[0];
    st64((c.r[4].w[0]), c.r[5].d[0]);
    c.r[22].d[0] = ld64((c.r[4].w[0] + 16u));
    set32(c.r[5], 0u - 16384u);
    c.r[22].d[0] = c.r[22].d[0] & c.r[5].d[0];
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[22].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 16u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[21].d[0] = c.r[5].d[0] & c.r[21].d[0];
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[21].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 16u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[19].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[20].d[0];
    st64((c.r[4].w[0] + 16u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[17].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[18].d[0];
    st64((c.r[4].w[0] + 16u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[25].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[16].d[0];
    st64((c.r[4].w[0] + 16u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[15].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[24].d[0];
    st64((c.r[4].w[0] + 16u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[13].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[14].d[0];
    st64((c.r[4].w[0] + 16u), c.r[5].d[0]);
    c.r[13].d[0] = ld64((c.r[4].w[0] + 16u));
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[5]);
    c.r[13].d[0] = c.r[13].d[0] & c.r[5].d[0];
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[13].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 16u), c.r[5].d[0]);
    c.r[13].d[0] = ld64((c.r[4].w[0] + 16u));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[5]);
    c.r[13].d[0] = c.r[13].d[0] & c.r[5].d[0];
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[13].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 16u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[12].d[0] = c.r[5].d[0] & c.r[12].d[0];
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[12].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 16u), c.r[5].d[0]);
    c.r[12].d[0] = ld64((c.r[4].w[0] + 16u));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[5]);
    c.r[12].d[0] = c.r[12].d[0] & c.r[5].d[0];
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[12].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 16u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[11].d[0] = c.r[5].d[0] & c.r[11].d[0];
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[11].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 16u), c.r[5].d[0]);
    set32(c.r[5], 0u + 6u);
    st64((c.r[4].w[0] + 24u), c.r[5].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 32u));
    set32(c.r[5], 0u - 512u);
    c.r[11].d[0] = c.r[11].d[0] & c.r[5].d[0];
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[11].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 32u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[10].d[0] = c.r[5].d[0] & c.r[10].d[0];
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[10].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 32u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[9].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[30].d[0];
    c.budget -= 244;
    { const bool t = c.r[8].d[0] == 0ull; st64((c.r[4].w[0] + 32u), c.r[5].d[0]);  if (t) { goto L_0024B1BC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_0024B184; } }
    mmi::pcpyld(c.r[3], c.r[3], c.r[6]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[5].d[0] = c.r[7].d[0] | 255ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 32u), c.r[3].d[0]);  if (t) { goto L_0024B1B0; } }
L_0024B184:
    mmi::pcpyld(c.r[3], c.r[3], c.r[6]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[5].d[0] = 0ull | 65280ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 32u), c.r[3].d[0]);
    c.budget -= 11;
L_0024B1B0:
    set32(c.r[3], 0u + 76u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 40u), c.r[3].d[0]);  if (t) { goto L_0024B1E4; } }
L_0024B1BC:
    mmi::pcpyld(c.r[3], c.r[3], c.r[6]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 32u));
    c.r[5].d[0] = c.r[7].d[0] | 65280ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 32u), c.r[3].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B1B0u | kUnwind; return; } goto L_0024B1B0; } }
L_0024B1E4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0024B210:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(342ll);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.r[6].d[0] = c.r[3].d[0] << 47;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[3].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[3].d[0] = c.r[3].d[0] << 16;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[3].d[0] | 65535ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] & 255ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFC000000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[5].d[0] | 32767ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    st128((c.r[4].w[0]) & ~15u, c.r[0]);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[7].d[0] = ld64((c.r[4].w[0]));
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[20].d[0] = 0ull & 3ull;
    c.r[5].d[0] = c.r[22].d[0] | c.r[5].d[0];
    c.r[12].d[0] = c.r[3].d[0] << 15;
    c.r[30].d[0] = c.r[20].d[0] << 4;
    c.r[20].d[0] = c.r[18].d[0] << 6;
    c.r[11].d[0] = c.r[19].d[0] | 32767ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[20]);
    c.r[9].d[0] = c.r[18].d[0] << 46;
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[10], 0u - 1u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[20].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    st64((c.r[4].w[0]), c.r[3].d[0]);
    set32(c.r[20], 0u - 256u);
    c.r[13].d[0] = ld64((c.r[4].w[0]));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(7ll);
    c.r[6].d[0] = c.r[3].d[0] << 60;
    set32(c.r[23], 0u - 16u);
    set32(c.r[3], 0u - 16385u);
    c.r[15].d[0] = c.r[19].d[0] | 4095ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = c.r[22].d[0] | c.r[3].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[7].d[0] = c.r[3].d[0] | 65535ull;
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    c.r[3].d[0] = 0ull & 3ull;
    st64((c.r[4].w[0]), c.r[11].d[0]);
    c.r[5].d[0] = c.r[3].d[0] << 58;
    c.r[11].d[0] = ld64((c.r[4].w[0]));
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[3].d[0] = c.r[22].d[0] | c.r[3].d[0];
    mmi::pcpyld(c.r[7], c.r[10], c.r[3]);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(14ll);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xF3FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[16].d[0] = c.r[10].d[0] << 4;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[25].d[0] = c.r[10].d[0] << 8;
    c.r[8].d[0] = c.r[11].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[22].d[0] | c.r[3].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.r[24].d[0] = c.r[10].d[0] << 12;
    st64((c.r[4].w[0]), c.r[8].d[0]);
    c.r[14].d[0] = c.r[10].d[0] << 16;
    c.r[17].d[0] = ld64((c.r[4].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    c.r[13].d[0] = c.r[8].d[0] | 65535ull;
    c.r[12].d[0] = c.r[10].d[0] << 20;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFF0F0000u);
    c.r[11].d[0] = c.r[8].d[0] | 65535ull;
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[10].d[0] = c.r[8].d[0] << 24;
    c.r[17].d[0] = c.r[17].d[0] & c.r[7].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0xF0FF0000u);
    c.r[6].d[0] = c.r[17].d[0] | c.r[6].d[0];
    set32(c.r[7], 0u + 1u);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    set32(c.r[17], 0u + 513u);
    st64((c.r[4].w[0]), c.r[6].d[0]);
    c.r[7].d[0] = c.r[17].d[0] | c.r[7].d[0];
    c.r[17].d[0] = ld64((c.r[4].w[0]));
    c.r[9].d[0] = c.r[8].d[0] | 65535ull;
    set32(c.r[8], 0u + 128u);
    c.r[6].d[0] = c.r[18].d[0] << 2;
    c.r[17].d[0] = c.r[17].d[0] & c.r[3].d[0];
    c.r[17].d[0] = c.r[17].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[5].d[0] = c.r[22].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0]), c.r[17].d[0]);
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[17].d[0] = ld64((c.r[4].w[0] + 8u));
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[3].d[0] << 14;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    set32(c.r[3], 0u - 2u);
    c.r[20].d[0] = c.r[3].d[0] << 32;
    c.r[17].d[0] = c.r[17].d[0] & c.r[23].d[0];
    c.r[3].d[0] = c.r[18].d[0] << 16;
    c.r[17].d[0] = c.r[17].d[0] | c.r[18].d[0];
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[22].d[0] | c.r[20].d[0];
    st64((c.r[4].w[0] + 8u), c.r[17].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[17].d[0] = 0ull & 65535ull;
    c.r[20].d[0] = c.r[20].d[0] | 65535ull;
    c.r[23].d[0] = c.r[17].d[0] << 32;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[18].d[0] << 17;
    c.r[17].d[0] = ld64((c.r[4].w[0] + 8u));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0xFFF90000u);
    c.r[20].d[0] = c.r[20].d[0] | 65535ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[19].d[0] << 32;
    c.r[22].d[0] = c.r[22].d[0] | c.r[20].d[0];
    set32(c.r[20], 0u - 241u);
    c.r[17].d[0] = c.r[17].d[0] & c.r[20].d[0];
    c.r[16].d[0] = c.r[17].d[0] | c.r[16].d[0];
    st64((c.r[4].w[0] + 8u), c.r[16].d[0]);
    c.r[17].d[0] = ld64((c.r[4].w[0] + 8u));
    set32(c.r[16], 0u - 3841u);
    c.r[16].d[0] = c.r[17].d[0] & c.r[16].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[25].d[0];
    st64((c.r[4].w[0] + 8u), c.r[16].d[0]);
    c.r[16].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[15].d[0] = c.r[16].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st64((c.r[4].w[0] + 8u), c.r[15].d[0]);
    c.r[15].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st64((c.r[4].w[0] + 8u), c.r[13].d[0]);
    c.r[13].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st64((c.r[4].w[0] + 8u), c.r[11].d[0]);
    c.r[11].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st64((c.r[4].w[0] + 8u), c.r[9].d[0]);
    c.r[10].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[9], 0u - 32768u);
    c.r[9].d[0] = c.r[10].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[18].d[0];
    st64((c.r[4].w[0]), c.r[9].d[0]);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[8].w[0]);
    set32(c.r[8], 0u + 20u);
    st64((c.r[4].w[0] + 40u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 32u), c.r[7].d[0]);
    set32(c.r[7], 0u + 66u);
    st64((c.r[4].w[0] + 56u), c.r[7].d[0]);
    c.r[8].d[0] = ld64((c.r[4].w[0] + 48u));
    set32(c.r[7], 0u - 4u);
    c.r[8].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[7].d[0] = 0ull & 3ull;
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    st64((c.r[4].w[0] + 48u), c.r[7].d[0]);
    c.r[8].d[0] = ld64((c.r[4].w[0] + 48u));
    set32(c.r[7], 0u - 13u);
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0] + 48u), c.r[6].d[0]);
    c.r[7].d[0] = ld64((c.r[4].w[0] + 48u));
    set32(c.r[6], 0u - 49u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[30].d[0];
    st64((c.r[4].w[0] + 48u), c.r[6].d[0]);
    c.r[7].d[0] = ld64((c.r[4].w[0] + 48u));
    set32(c.r[6], 0u - 193u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[6].d[0];
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[6]);
    c.r[6].d[0] = c.r[7].d[0] | c.r[6].d[0];
    st64((c.r[4].w[0] + 48u), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[4].w[0] + 48u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[5]);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st64((c.r[4].w[0] + 48u), c.r[5].d[0]);
    set32(c.r[5], 0u + 78u);
    st64((c.r[4].w[0] + 72u), c.r[5].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 64u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 64u), c.r[3].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 80u));
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 80u), c.r[3].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 80u));
    set32(c.r[3], 0u - 16385u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 80u), c.r[3].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 80u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 80u), c.r[3].d[0]);
    c.r[5].d[0] = ld64((c.r[4].w[0] + 80u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[3]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 80u), c.r[3].d[0]);
    set32(c.r[3], 0u + 71u);
    st64((c.r[4].w[0] + 88u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 96u));
    c.r[5].d[0] = c.r[3].d[0] & c.r[19].d[0];
    c.r[3].d[0] = 0ull & 65535ull;
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[4].w[0] + 96u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 96u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[22].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[23].d[0];
    st64((c.r[4].w[0] + 96u), c.r[3].d[0]);
    set32(c.r[3], 0u + 24u);
    c.budget -= 234;
    { const bool t = c.r[21].d[0] == 0ull; st64((c.r[4].w[0] + 104u), c.r[3].d[0]);  if (t) { goto L_0024B5E4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[3].d[0];  if (t) { goto L_0024B5D0; } }
    set32(c.r[3], 0u + 3955u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 112u), c.r[3].d[0]);  if (t) { goto L_0024B5DC; } }
L_0024B5D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[3].d[0] | 3955ull;
    st64((c.r[4].w[0] + 112u), c.r[3].d[0]);
    c.budget -= 3;
L_0024B5DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);  if (t) { goto L_0024B5F0; } }
L_0024B5E4:
    set32(c.r[3], 0u + 3955u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 112u), c.r[3].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B5DCu | kUnwind; return; } goto L_0024B5DC; } }
L_0024B5F0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0024B620:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[22].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], 0u + 106u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6C680000u);
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 296ull;
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B68Cu); set32(c.r[4], c.r[22].w[0] + 32u);  if (depth < kMaxDepth) unit_0012(c, 123u, depth + 1u); else { c.pc = 0x0024B210u; return; } if (c.pc != 0x0024B68Cu) [[unlikely]] return; }
L_0024B68C:
    set32(c.r[18], ld32((c.r[21].w[0])));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
L_0024B69C:
    set32(c.r[6], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B6B4u); c.r[9].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 121u, depth + 1u); else { c.pc = 0x0024AD80u; return; } if (c.pc != 0x0024B6B4u) [[unlikely]] return; }
L_0024B6B4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024B69Cu | kUnwind; return; } goto L_0024B69C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x11000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00000000u);
    st32((c.r[22].w[0] + 1696u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 12704u);
    set32(c.r[4], c.r[3].w[0] >> 3);
    st32((c.r[22].w[0] + 1700u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x15000000u);
    st32((c.r[22].w[0] + 1704u), 0u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[22].w[0] + 1708u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0024B720:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 11584u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + 11376u);  [[clang::musttail]] return unit_0017(c, 40u, depth); }
L_0024B730:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 11584u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + 11376u);  [[clang::musttail]] return unit_0017(c, 45u, depth); }
L_0024B740:
    c.r[11].d[0] = ld8((c.r[28].w[0] - 32687u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[10].d[0] = ld8((c.r[28].w[0] - 32686u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[9].d[0] = ld8((c.r[28].w[0] - 32685u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[8].d[0] = ld8((c.r[28].w[0] - 32688u));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], 0u + 1u);
    st32((c.r[6].w[0] - 8000u), c.r[8].w[0]);
    st32((c.r[5].w[0] - 7996u), c.r[11].w[0]);
    st32((c.r[3].w[0] - 7992u), c.r[10].w[0]);
    st32((c.r[2].w[0] - 7988u), c.r[9].w[0]);
    st8((c.r[4].w[0] + 17712u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 20;
    { set32(c.r[4], c.r[4].w[0] + 17504u);  [[clang::musttail]] return unit_0017(c, 38u, depth); }
L_0024B790:
    c.r[11].d[0] = ld8((c.r[28].w[0] - 32691u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[10].d[0] = ld8((c.r[28].w[0] - 32690u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[9].d[0] = ld8((c.r[28].w[0] - 32689u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[8].d[0] = ld8((c.r[28].w[0] - 32692u));
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], 0u + 1u);
    st32((c.r[6].w[0] - 8000u), c.r[8].w[0]);
    st32((c.r[5].w[0] - 7996u), c.r[11].w[0]);
    st32((c.r[3].w[0] - 7992u), c.r[10].w[0]);
    st32((c.r[2].w[0] - 7988u), c.r[9].w[0]);
    st8((c.r[4].w[0] + 17712u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 20;
    { set32(c.r[4], c.r[4].w[0] + 17504u);  [[clang::musttail]] return unit_0017(c, 47u, depth); }
L_0024B7E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u + 66u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st64((c.r[3].w[0] - 7928u), c.r[5].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[12].d[0] = ld64((c.r[2].w[0] - 7936u));
    set32(c.r[6], 0u - 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull & 3ull;
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[10], 0u - 13u);
    set32(c.r[15], c.r[4].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[4].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[4].w[0] + c.r[13].w[0]);
    c.r[6].d[0] = c.r[12].d[0] & c.r[6].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[5].w[0] - 7936u), c.r[6].d[0]);
    c.r[11].d[0] = c.r[2].d[0] << 2;
    c.r[24].d[0] = ld64((c.r[3].w[0] - 7936u));
    c.r[8].d[0] = c.r[2].d[0] << 4;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[7], 0u - 49u);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[12], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[10].d[0] = c.r[24].d[0] & c.r[10].d[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[11].d[0] = c.r[10].d[0] | c.r[11].d[0];
    c.r[5].d[0] = c.r[3].d[0] << 6;
    st64((c.r[2].w[0] - 7936u), c.r[11].d[0]);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[25].d[0] = ld64((c.r[9].w[0] - 7936u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[3], 0u - 193u);
    c.r[2].d[0] = c.r[10].d[0] << 32;
    set32(c.r[11], c.r[4].w[0] + c.r[11].w[0]);
    c.r[7].d[0] = c.r[25].d[0] & c.r[7].d[0];
    set32(c.r[9], 0u - 256u);
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.r[10].d[0] = c.r[9].d[0] << 32;
    st64((c.r[15].w[0] - 7936u), c.r[7].d[0]);
    c.r[9].d[0] = 0ull | 65535ull;
    c.r[14].d[0] = ld64((c.r[14].w[0] - 7936u));
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[24].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[10], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = c.r[14].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[13].w[0] - 7936u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[12].w[0] - 7936u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[11].w[0] - 7936u), c.r[2].d[0]);
    c.r[11].d[0] = ld8((c.r[28].w[0] - 32691u));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32690u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32689u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 32692u));
    st32((c.r[10].w[0] - 8000u), c.r[2].w[0]);
    st32((c.r[9].w[0] - 7996u), c.r[11].w[0]);
    st32((c.r[8].w[0] - 7992u), c.r[5].w[0]);
    st32((c.r[7].w[0] - 7988u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 17712u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 82;
    { set32(c.r[4], c.r[4].w[0] + 17504u);  [[clang::musttail]] return unit_0017(c, 47u, depth); }
L_0024B930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 17712u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024B964u); set32(c.r[4], c.r[17].w[0] + 17504u);  if (depth < kMaxDepth) unit_0017(c, 38u, depth + 1u); else { c.pc = 0x0025D1A0u; return; } if (c.pc != 0x0024B964u) [[unlikely]] return; }
L_0024B964:
    c.r[10].d[0] = ld8((c.r[16].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[6], c.r[17].w[0] + c.r[6].w[0]);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] - 8000u), c.r[10].w[0]);
    set32(c.r[14], 0u - 49u);
    st32((c.r[4].w[0] - 7996u), c.r[9].w[0]);
    set32(c.r[6], 0u + 66u);
    st32((c.r[5].w[0] - 7992u), c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[3].w[0] - 7988u), c.r[7].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[4].w[0] - 7928u), c.r[6].d[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[8].d[0] = ld64((c.r[3].w[0] - 7936u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], 0u - 4u);
    c.r[7].d[0] = 0ull & 3ull;
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[10], 0u - 13u);
    set32(c.r[9], c.r[17].w[0] + c.r[9].w[0]);
    set32(c.r[12], 0u - 193u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[15].d[0] = c.r[3].d[0] << 2;
    c.r[13].d[0] = c.r[3].d[0] << 6;
    c.r[3].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[4].w[0] - 7936u), c.r[6].d[0]);
    c.r[3].d[0] = c.r[7].d[0] << 4;
    c.r[11].d[0] = ld64((c.r[5].w[0] - 7936u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[17].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[17].w[0] + c.r[7].w[0]);
    c.r[11].d[0] = c.r[11].d[0] & c.r[10].d[0];
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[15].d[0] = c.r[11].d[0] | c.r[15].d[0];
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    st64((c.r[9].w[0] - 7936u), c.r[15].d[0]);
    c.r[11].d[0] = c.r[10].d[0] << 32;
    set32(c.r[9], 0u - 256u);
    c.r[15].d[0] = ld64((c.r[4].w[0] - 7936u));
    c.r[10].d[0] = c.r[9].d[0] << 32;
    set32(c.r[6], c.r[17].w[0] + c.r[6].w[0]);
    c.r[9].d[0] = 0ull | 65535ull;
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    c.r[9].d[0] = c.r[9].d[0] << 16;
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.r[10].d[0] = c.r[15].d[0] & c.r[14].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[10].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    st64((c.r[8].w[0] - 7936u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[7].w[0] - 7936u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[12].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[13].d[0];
    st64((c.r[6].w[0] - 7936u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[5].w[0] - 7936u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[9].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    st64((c.r[4].w[0] - 7936u), c.r[3].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 82;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0024BAB0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = ld16((c.r[2].w[0] - 28944u));
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 288u)));
    c.r[5].d[0] = c.r[10].d[0] << 48;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[11].d[0] << 48;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.r[9].d[0] = c.r[20].d[0] << 48;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BB20u); c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);  if (depth < kMaxDepth) unit_000B(c, 104u, depth + 1u); else { c.pc = 0x0022E2B8u; return; } if (c.pc != 0x0024BB20u) [[unlikely]] return; }
L_0024BB20:
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    set32(c.r[30], 0u + 1u);
    c.r[4].d[0] = c.r[3].d[0] & 15ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], c.r[17].w[0] >> 6);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[9].d[0] = c.r[4].d[0] << 24;
    c.r[5].d[0] = c.r[3].d[0] << 14;
    set32(c.r[4], c.r[19].w[0] << 5);
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 20;
    c.r[11].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[12].d[0] = ld64((c.r[16].w[0] + 48u));
    c.r[8].d[0] = ld32((c.r[3].w[0] - 28920u));
    set32(c.r[5], 0u - 512u);
    c.r[2].d[0] = c.r[21].d[0] & 511ull;
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(262ll);
    c.r[10].d[0] = c.r[30].d[0] << 32;
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[21].d[0] = c.r[14].d[0] << 47;
    set32(c.r[15], 0u - 1u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(6ll);
    c.r[13].d[0] = c.r[7].d[0] | 4095ull;
    c.r[14].d[0] = c.r[4].d[0] << 8;
    c.r[19].d[0] = c.r[6].d[0] << 46;
    c.r[3].d[0] = c.r[12].d[0] & c.r[5].d[0];
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(5ll);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[5].d[0] = c.r[6].d[0] << 15;
    st64((c.r[16].w[0] + 48u), c.r[2].d[0]);
    c.r[3].d[0] = c.r[7].d[0] | 32767ull;
    c.r[2].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st64((c.r[16].w[0] + 144u), 0ull);
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(14ll);
    st64((c.r[16].w[0] + 64u), c.r[2].d[0]);
    c.r[8].d[0] = c.r[6].d[0] << 60;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    st128((c.r[16].w[0] + 32u) & ~15u, c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[17].d[0] = ld64((c.r[16].w[0] + 32u));
    c.r[12].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[9].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[9].d[0] | c.r[12].d[0];
    set32(c.r[12], 0u - 32768u);
    c.r[12].d[0] = c.r[17].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[4].d[0];
    c.r[17].d[0] = c.r[23].d[0] << 60;
    mmi::pcpyld(c.r[2], c.r[15], c.r[2]);
    st64((c.r[16].w[0] + 32u), c.r[12].d[0]);
    c.r[15].d[0] = 0ull & 1ull;
    c.r[12].d[0] = ld64((c.r[16].w[0] + 32u));
    c.r[20].d[0] = c.r[15].d[0] << 15;
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFC000000u);
    c.r[15].d[0] = c.r[15].d[0] << 46;
    c.r[4].d[0] = c.r[4].d[0] | 32767ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[15]);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    set32(c.r[15], 0u - 16385u);
    c.r[4].d[0] = c.r[9].d[0] | c.r[4].d[0];
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[18].d[0] = c.r[9].d[0] | c.r[15].d[0];
    c.r[12].d[0] = c.r[12].d[0] & c.r[3].d[0];
    c.r[15].d[0] = 0ull & 3ull;
    c.r[12].d[0] = c.r[12].d[0] | c.r[5].d[0];
    c.r[25].d[0] = c.r[15].d[0] << 58;
    st64((c.r[16].w[0] + 32u), c.r[12].d[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0xF3FF0000u);
    c.r[12].d[0] = ld64((c.r[16].w[0] + 32u));
    c.r[22].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[24].d[0] << 4;
    c.r[22].d[0] = c.r[22].d[0] << 32;
    c.r[24].d[0] = c.r[9].d[0] | c.r[22].d[0];
    c.r[22].d[0] = c.r[7].d[0] << 12;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    c.r[22].d[0] = c.r[7].d[0] << 16;
    c.r[12].d[0] = c.r[12].d[0] & c.r[2].d[0];
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[22]);
    c.r[8].d[0] = c.r[12].d[0] | c.r[8].d[0];
    c.r[22].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    st64((c.r[16].w[0] + 32u), c.r[8].d[0]);
    c.r[12].d[0] = c.r[22].d[0] | 65535ull;
    c.r[8].d[0] = ld64((c.r[16].w[0] + 40u));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x44000000u);
    c.r[11].d[0] = c.r[11].d[0] | c.r[22].d[0];
    set32(c.r[22], 0u + 609u);
    c.r[10].d[0] = c.r[22].d[0] | c.r[10].d[0];
    c.r[22].d[0] = c.r[6].d[0] << 2;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    c.r[22].d[0] = 0ull & 3ull;
    c.r[22].d[0] = c.r[22].d[0] << 4;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[22]);
    set32(c.r[22], 0u - 16u);
    c.r[22].d[0] = c.r[8].d[0] & c.r[22].d[0];
    c.r[7].d[0] = c.r[22].d[0] | c.r[7].d[0];
    c.r[8].d[0] = c.r[6].d[0] << 6;
    st64((c.r[16].w[0] + 40u), c.r[7].d[0]);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[30].w[0]));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    st128((c.r[16].w[0] + 176u) & ~15u, c.r[0]);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[22].d[0] = ld64((c.r[16].w[0] + 176u));
    c.r[30].d[0] = c.r[6].d[0] << 58;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[7]);
    set32(c.r[7], 0u - 256u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[8]);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] | c.r[7].d[0];
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = c.r[22].d[0] & c.r[4].d[0];
    c.r[8].d[0] = c.r[7].d[0] << 60;
    c.r[4].d[0] = c.r[4].d[0] | c.r[21].d[0];
    c.r[7].d[0] = c.r[23].d[0] << 4;
    st64((c.r[16].w[0] + 176u), c.r[4].d[0]);
    c.r[23].d[0] = c.r[23].d[0] << 12;
    c.r[22].d[0] = ld64((c.r[16].w[0] + 176u));
    set32(c.r[21], c.r[16].w[0] + 16u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[7]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(3ll);
    c.r[7].d[0] = c.r[7].d[0] << 8;
    c.r[22].d[0] = c.r[22].d[0] & c.r[3].d[0];
    c.r[20].d[0] = c.r[22].d[0] | c.r[20].d[0];
    st64((c.r[16].w[0] + 176u), c.r[20].d[0]);
    c.r[20].d[0] = ld64((c.r[16].w[0] + 176u));
    c.r[20].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[19].d[0] = c.r[20].d[0] | c.r[19].d[0];
    st64((c.r[16].w[0] + 176u), c.r[19].d[0]);
    c.r[19].d[0] = ld64((c.r[16].w[0] + 176u));
    c.r[19].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[17].d[0] = c.r[19].d[0] | c.r[17].d[0];
    st64((c.r[16].w[0] + 176u), c.r[17].d[0]);
    c.r[17].d[0] = ld64((c.r[16].w[0] + 176u));
    c.r[17].d[0] = c.r[17].d[0] & c.r[24].d[0];
    c.r[17].d[0] = c.r[17].d[0] | c.r[25].d[0];
    st64((c.r[16].w[0] + 176u), c.r[17].d[0]);
    c.r[19].d[0] = ld64((c.r[16].w[0] + 184u));
    set32(c.r[17], 0u - 16u);
    c.r[17].d[0] = c.r[19].d[0] & c.r[17].d[0];
    c.r[17].d[0] = c.r[17].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0] + 184u), c.r[17].d[0]);
    c.r[19].d[0] = ld64((c.r[16].w[0] + 184u));
    set32(c.r[17], 0u - 241u);
    c.r[17].d[0] = c.r[19].d[0] & c.r[17].d[0];
    c.r[15].d[0] = c.r[17].d[0] | c.r[15].d[0];
    st64((c.r[16].w[0] + 184u), c.r[15].d[0]);
    c.r[17].d[0] = ld64((c.r[16].w[0] + 184u));
    set32(c.r[15], 0u - 3841u);
    c.r[15].d[0] = c.r[17].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[15].d[0] | c.r[14].d[0];
    st64((c.r[16].w[0] + 184u), c.r[14].d[0]);
    c.r[14].d[0] = ld64((c.r[16].w[0] + 184u));
    c.r[15].d[0] = c.r[14].d[0] & c.r[13].d[0];
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[14]);
    c.r[14].d[0] = c.r[15].d[0] | c.r[14].d[0];
    st64((c.r[16].w[0] + 184u), c.r[14].d[0]);
    c.r[14].d[0] = ld64((c.r[16].w[0] + 184u));
    c.r[14].d[0] = c.r[14].d[0] & c.r[12].d[0];
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[12]);
    c.r[12].d[0] = c.r[14].d[0] | c.r[12].d[0];
    st64((c.r[16].w[0] + 184u), c.r[12].d[0]);
    c.r[14].d[0] = ld64((c.r[16].w[0] + 176u));
    set32(c.r[12], 0u - 32768u);
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[6].d[0] = c.r[12].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0] + 176u), c.r[6].d[0]);
    set32(c.r[6], 0u + 255u);
    st32((c.r[16].w[0] + 192u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 196u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 200u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 204u), c.r[6].w[0]);
    st64((c.r[16].w[0] + 208u), c.r[11].d[0]);
    set32(c.r[6], 0u + 20u);
    st64((c.r[16].w[0] + 248u), c.r[6].d[0]);
    st64((c.r[16].w[0] + 240u), c.r[10].d[0]);
    set32(c.r[6], 0u + 5u);
    st64((c.r[16].w[0] + 224u), c.r[6].d[0]);
    set32(c.r[6], 0u + 66u);
    st64((c.r[16].w[0] + 264u), c.r[6].d[0]);
    c.r[10].d[0] = ld64((c.r[16].w[0] + 256u));
    set32(c.r[6], 0u - 4u);
    c.r[10].d[0] = c.r[10].d[0] & c.r[6].d[0];
    c.r[6].d[0] = 0ull & 3ull;
    c.r[6].d[0] = c.r[10].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0] + 256u), c.r[6].d[0]);
    c.r[10].d[0] = ld64((c.r[16].w[0] + 256u));
    set32(c.r[6], 0u - 13u);
    c.r[10].d[0] = c.r[10].d[0] & c.r[6].d[0];
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[6]);
    c.r[6].d[0] = c.r[10].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0] + 256u), c.r[6].d[0]);
    c.r[10].d[0] = ld64((c.r[16].w[0] + 256u));
    set32(c.r[6], 0u - 49u);
    c.r[10].d[0] = c.r[10].d[0] & c.r[6].d[0];
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[6]);
    c.r[6].d[0] = c.r[10].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0] + 256u), c.r[6].d[0]);
    c.r[10].d[0] = ld64((c.r[16].w[0] + 256u));
    set32(c.r[6], 0u - 193u);
    c.r[10].d[0] = c.r[10].d[0] & c.r[6].d[0];
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[6]);
    c.r[6].d[0] = c.r[10].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0] + 256u), c.r[6].d[0]);
    c.r[6].d[0] = ld64((c.r[16].w[0] + 256u));
    c.r[9].d[0] = c.r[6].d[0] & c.r[9].d[0];
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[6]);
    c.r[6].d[0] = c.r[9].d[0] | c.r[6].d[0];
    st64((c.r[16].w[0] + 256u), c.r[6].d[0]);
    st128((c.r[16].w[0] + 272u) & ~15u, c.r[0]);
    c.r[6].d[0] = ld64((c.r[16].w[0] + 272u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[16].w[0] + 272u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 272u));
    c.r[5].d[0] = c.r[3].d[0] & c.r[18].d[0];
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st64((c.r[16].w[0] + 272u), c.r[3].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 272u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st64((c.r[16].w[0] + 272u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 272u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[24].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[30].d[0];
    st64((c.r[16].w[0] + 272u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 280u));
    set32(c.r[2], 0u - 16u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(3ll);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[16].w[0] + 280u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 280u));
    set32(c.r[2], 0u - 241u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st64((c.r[16].w[0] + 280u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[16].w[0] + 280u));
    set32(c.r[2], 0u - 3841u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st64((c.r[16].w[0] + 280u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 280u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[13].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[23].d[0];
    st64((c.r[16].w[0] + 280u), c.r[2].d[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    c.r[5].d[0] = ld64((c.r[16].w[0] + 272u));
    c.r[3].d[0] = c.r[2].d[0] & 32767ull;
    set32(c.r[2], 0u - 32768u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[16].w[0] + 272u), c.r[2].d[0]);
    c.r[2].d[0] = 0ull | 32768ull;
    st16((c.r[16].w[0] + 296u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 29888u);
    st16((c.r[16].w[0] + 298u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1000u);
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull | 32896ull;
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 30016u);
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1000u);
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 288u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x11000000u);
    st16((c.r[16].w[0] + 290u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 304u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 306u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x50000000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 17u);
    c.budget -= 297;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024BFC4u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0024BFC4u) [[unlikely]] return; }
L_0024BFC4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
}

}

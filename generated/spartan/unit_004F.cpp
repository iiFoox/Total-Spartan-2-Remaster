#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 101, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0,
    118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0,
    126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0033C000;
    case 2u: goto L_0033C030;
    case 3u: goto L_0033C06C;
    case 4u: goto L_0033C080;
    case 5u: goto L_0033C0FC;
    case 6u: goto L_0033C110;
    case 7u: goto L_0033C18C;
    case 8u: goto L_0033C1A0;
    case 9u: goto L_0033C21C;
    case 10u: goto L_0033C230;
    case 11u: goto L_0033C240;
    case 12u: goto L_0033C250;
    case 13u: goto L_0033C260;
    case 14u: goto L_0033C268;
    case 15u: goto L_0033C32C;
    case 16u: goto L_0033C390;
    case 17u: goto L_0033C41C;
    case 18u: goto L_0033C458;
    case 19u: goto L_0033C468;
    case 20u: goto L_0033C490;
    case 21u: goto L_0033C4D8;
    case 22u: goto L_0033C4F4;
    case 23u: goto L_0033C4FC;
    case 24u: goto L_0033C534;
    case 25u: goto L_0033C590;
    case 26u: goto L_0033C5A0;
    case 27u: goto L_0033C5AC;
    case 28u: goto L_0033C640;
    case 29u: goto L_0033C694;
    case 30u: goto L_0033C770;
    case 31u: goto L_0033C804;
    case 32u: goto L_0033C898;
    case 33u: goto L_0033C934;
    case 34u: goto L_0033C9BC;
    case 35u: goto L_0033C9CC;
    case 36u: goto L_0033C9E8;
    case 37u: goto L_0033CA34;
    case 38u: goto L_0033CA50;
    case 39u: goto L_0033CA60;
    case 40u: goto L_0033CA7C;
    case 41u: goto L_0033CAF0;
    case 42u: goto L_0033CB0C;
    case 43u: goto L_0033CB30;
    case 44u: goto L_0033CB4C;
    case 45u: goto L_0033CB64;
    case 46u: goto L_0033CB80;
    case 47u: goto L_0033CCA4;
    case 48u: goto L_0033CDA0;
    case 49u: goto L_0033CDAC;
    case 50u: goto L_0033CDF8;
    case 51u: goto L_0033CE38;
    case 52u: goto L_0033CEA0;
    case 53u: goto L_0033CEB0;
    case 54u: goto L_0033CEC0;
    case 55u: goto L_0033CED0;
    case 56u: goto L_0033CEE0;
    case 57u: goto L_0033CF5C;
    case 58u: goto L_0033CF68;
    case 59u: goto L_0033CFE0;
    case 60u: goto L_0033D100;
    case 61u: goto L_0033D130;
    case 62u: goto L_0033D2A8;
    case 63u: goto L_0033D2C4;
    case 64u: goto L_0033D300;
    case 65u: goto L_0033D41C;
    case 66u: goto L_0033D450;
    case 67u: goto L_0033D5C4;
    case 68u: goto L_0033D5E0;
    case 69u: goto L_0033D610;
    case 70u: goto L_0033D660;
    case 71u: goto L_0033D6A0;
    case 72u: goto L_0033D6D0;
    case 73u: goto L_0033D6F0;
    case 74u: goto L_0033D74C;
    case 75u: goto L_0033D790;
    case 76u: goto L_0033D7A0;
    case 77u: goto L_0033D7DC;
    case 78u: goto L_0033D7E4;
    case 79u: goto L_0033D7FC;
    case 80u: goto L_0033D890;
    case 81u: goto L_0033D93C;
    case 82u: goto L_0033D940;
    case 83u: goto L_0033D994;
    case 84u: goto L_0033DA28;
    case 85u: goto L_0033DA88;
    case 86u: goto L_0033DAE8;
    case 87u: goto L_0033DC50;
    case 88u: goto L_0033DCFC;
    case 89u: goto L_0033DD00;
    case 90u: goto L_0033DD48;
    case 91u: goto L_0033DDE0;
    case 92u: goto L_0033DE40;
    case 93u: goto L_0033DFD0;
    case 94u: goto L_0033E07C;
    case 95u: goto L_0033E080;
    case 96u: goto L_0033E0B0;
    case 97u: goto L_0033E0E0;
    case 98u: goto L_0033E178;
    case 99u: goto L_0033E1D8;
    case 100u: goto L_0033E370;
    case 101u: goto L_0033E41C;
    case 102u: goto L_0033E420;
    case 103u: goto L_0033E454;
    case 104u: goto L_0033E48C;
    case 105u: goto L_0033E520;
    case 106u: goto L_0033E568;
    case 107u: goto L_0033E5C8;
    case 108u: goto L_0033E740;
    case 109u: goto L_0033E7EC;
    case 110u: goto L_0033E7F0;
    case 111u: goto L_0033E820;
    case 112u: goto L_0033E850;
    case 113u: goto L_0033E8E8;
    case 114u: goto L_0033E930;
    case 115u: goto L_0033EAD0;
    case 116u: goto L_0033EAE0;
    case 117u: goto L_0033EAF0;
    case 118u: goto L_0033EB00;
    case 119u: goto L_0033EB10;
    case 120u: goto L_0033EB20;
    case 121u: goto L_0033EB30;
    case 122u: goto L_0033EB40;
    case 123u: goto L_0033EB50;
    case 124u: goto L_0033EB60;
    case 125u: goto L_0033EB70;
    case 126u: goto L_0033EB80;
    case 127u: goto L_0033EB90;
    case 128u: goto L_0033EF40;
    case 129u: goto L_0033EF74;
    case 130u: goto L_0033F02C;
    case 131u: goto L_0033F058;
    case 132u: goto L_0033F0A0;
    case 133u: goto L_0033F0C0;
    case 134u: goto L_0033F0E8;
    case 135u: goto L_0033F110;
    case 136u: goto L_0033F140;
    case 137u: goto L_0033F160;
    case 138u: goto L_0033F198;
    case 139u: goto L_0033F1AC;
    case 140u: goto L_0033F1C0;
    case 141u: goto L_0033F20C;
    case 142u: goto L_0033F238;
    case 143u: goto L_0033F270;
    case 144u: goto L_0033F34C;
    case 145u: goto L_0033F424;
    case 146u: goto L_0033F470;
    case 147u: goto L_0033F548;
    case 148u: goto L_0033F624;
    case 149u: goto L_0033F670;
    case 150u: goto L_0033F748;
    case 151u: goto L_0033F824;
    case 152u: goto L_0033F870;
    case 153u: goto L_0033F948;
    case 154u: goto L_0033FA24;
    case 155u: goto L_0033FA70;
    case 156u: goto L_0033FB48;
    case 157u: goto L_0033FC24;
    case 158u: goto L_0033FC70;
    case 159u: goto L_0033FC98;
    case 160u: goto L_0033FCA4;
    case 161u: goto L_0033FCB0;
    case 162u: goto L_0033FCEC;
    case 163u: goto L_0033FD1C;
    case 164u: goto L_0033FD50;
    case 165u: goto L_0033FDA4;
    case 166u: goto L_0033FE50;
    case 167u: goto L_0033FF2C;
    case 168u: goto L_0033FF98;
    default: bad_entry(c, 0x0033C000u); return;
    }
L_0033C000:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033C024; } }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033C01C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0033C03C; } }
L_0033C01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033C038; } }
L_0033C024:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033C038; } }
L_0033C030:
    set32(c.r[3], 0u + 128u);
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0033C038:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0033C03C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 380u));
    set32(c.r[3], c.r[3].w[0] - 145u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033C228; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 1104u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_004F[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033C06C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033C238; } }
    set32(c.r[3], 0u + 151u);
    c.budget -= 1;
L_0033C080:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_0033C230; } }
L_0033C0FC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033C248; } }
    set32(c.r[3], 0u + 152u);
    c.budget -= 1;
L_0033C110:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_0033C230; } }
L_0033C18C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033C258; } }
    set32(c.r[3], 0u + 153u);
    c.budget -= 1;
L_0033C1A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_0033C230; } }
L_0033C21C:
    st32((c.r[16].w[0] + 360u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { goto L_0033C230; } }
L_0033C228:
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 356u), 0u);
    c.budget -= 2;
L_0033C230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033C47C; } }
L_0033C238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C240u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0033C240u) [[unlikely]] return; }
L_0033C240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 151u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C080u | kUnwind; return; } goto L_0033C080; } }
L_0033C248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C250u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0033C250u) [[unlikely]] return; }
L_0033C250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 152u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C110u | kUnwind; return; } goto L_0033C110; } }
L_0033C258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C260u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0033C260u) [[unlikely]] return; }
L_0033C260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 153u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C1A0u | kUnwind; return; } goto L_0033C1A0; } }
L_0033C268:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], 0u + 26u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033C470; } }
    set32(c.r[2], 0u + 144u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0033C37C; } }
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[4].d[0] = 0ull | 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = 0u;
    set32(c.r[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 32;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033C310; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 404u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0033C310:
    st32((c.r[16].w[0] + 104u), c.f[1]);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C450; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 1;
L_0033C32C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[3].d[0] = 0ull & 1ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0033C408; } }
L_0033C37C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C460; } }
    set32(c.r[2], 0u + 26u);
    c.budget -= 1;
L_0033C390:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[2].w[0];
    set32(c.r[2], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.budget -= 30;
L_0033C408:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 1520u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C41Cu); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 124u, depth + 1u); else { c.pc = 0x00395F40u; return; } if (c.pc != 0x0033C41Cu) [[unlikely]] return; }
L_0033C41C:
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C230u | kUnwind; return; } goto L_0033C230; } }
L_0033C450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C458u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0033C458u) [[unlikely]] return; }
L_0033C458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C32Cu | kUnwind; return; } goto L_0033C32C; } }
L_0033C460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C468u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0033C468u) [[unlikely]] return; }
L_0033C468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C390u | kUnwind; return; } goto L_0033C390; } }
L_0033C470:
    st32((c.r[16].w[0] + 360u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 356u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C230u | kUnwind; return; } goto L_0033C230; } }
L_0033C47C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033C490:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.f[21] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033C53C; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033C53C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_0033C53C; } }
    c.r[5].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 1;
L_0033C4D8:
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0033C4FC; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C4F4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 60u, depth + 1u); else { c.pc = 0x002D8C00u; return; } if (c.pc != 0x0033C4F4u) [[unlikely]] return; }
L_0033C4F4:
    set32(c.r[3], 0u + 15u);
    st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0033C4FC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033C550; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033C61C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C534u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 104u, depth + 1u); else { c.pc = 0x00395950u; return; } if (c.pc != 0x0033C534u) [[unlikely]] return; }
L_0033C534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0033C620; } }
L_0033C53C:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C4FCu | kUnwind; return; } goto L_0033C4FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 42u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C4D8u | kUnwind; return; } goto L_0033C4D8; } }
L_0033C550:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[22] = 0u;
    c.f[2] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[22], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 36u), c.f[0]);  if (t) { goto L_0033C5D8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C614; } }
    c.f[23] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 1;
L_0033C590:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[20] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C5A0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0033C5A0u) [[unlikely]] return; }
L_0033C5A0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C5ACu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0033C5ACu) [[unlikely]] return; }
L_0033C5AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[20]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);
    st32((c.r[3].w[0] + 48u), c.f[1]);
    st32((c.r[3].w[0] + 52u), c.f[22]);
    st32((c.r[3].w[0] + 56u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 60u), c.f[21]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C534u | kUnwind; return; } goto L_0033C534; } }
L_0033C5D8:
    c.r[7].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 3u);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] << 7);
    set32(c.r[3], 0u - 129u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 523u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C534u | kUnwind; return; } goto L_0033C534; } }
L_0033C614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[23] = c.f[0] ^ fp::kSign;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C590u | kUnwind; return; } goto L_0033C590; } }
L_0033C61C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0033C620:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033C640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 801u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 97u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0033C6D8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 811u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C6D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C694u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C694u) [[unlikely]] return; }
L_0033C694:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C6D8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033C6D8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 32u));
    set32(c.r[5], 0u - 9u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[2], 0u + 48u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 811u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033C750; } }
L_0033C6D8:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 811u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[5].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0033C728; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29488u));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[2].w[0] + 148u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 29488u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29488u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033C750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29488u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033C750; } }
L_0033C728:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29484u));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[2].w[0] + 145u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 29484u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29484u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033C750; } }
    st8((c.r[28].w[0] - 29484u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0033C750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0033C770:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 14u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[6], 0u - 9u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 140u));
    c.r[6].d[0] = c.r[11].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 28;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.f[20] = ld32((c.r[29].w[0] + 156u));  if (t) { goto L_0033CE00; } }
    set32(c.r[3], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033CE00; } }
    set32(c.r[3], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033CE00; } }
    set32(c.r[3], 0u + 55u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033CE00; } }
L_0033C804:
    c.r[8].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[6], 0u - 3u);
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[4].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[24] = c.r[4].w[0];
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[4].d[0] = c.r[3].d[0] & 15ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 192ull;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 42u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 17;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[16].w[0] + 48u), c.r[20].w[0]);  if (t) { goto L_0033C850; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 2;
L_0033C850:
    st32((c.r[16].w[0] + 56u), c.r[10].w[0]);
    set32(c.r[3], 0u - 33u);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[8], 0u + 1u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033CE20; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C898u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x0033C898u) [[unlikely]] return; }
L_0033C898:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.r[7].d[0] = 0ull | 0ull;
    c.f[4] = c.r[3].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[4].d[0] = c.r[3].d[0] | 4059ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[5] = ld32((c.r[5].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.f[22] = c.f[0];
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[2] = 0u;
    c.f[1] = c.r[3].w[0];
    c.f[3] = c.r[4].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[2] = c.r[6].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 36;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033C930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0033C934; } }
L_0033C930:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C934:
    c.r[9].d[0] = ld8((c.r[16].w[0] + 32u));
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[4], 0u - 9u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 40u));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0033CB54; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033CB14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0033CA84; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033C9F0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0033C9AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));  if (t) { goto L_0033CB84; } }
L_0033C9AC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C9BCu); c.r[5].d[0] = c.r[2].d[0] & 1ull;  if (depth < kMaxDepth) unit_004F(c, 28u, depth + 1u); else { c.pc = 0x0033C640u; return; } if (c.pc != 0x0033C9BCu) [[unlikely]] return; }
L_0033C9BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0033CE30; } }
L_0033C9CC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0033CB80; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033CB80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C9E8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 54u, depth + 1u); else { c.pc = 0x002850B0u; return; } if (c.pc != 0x0033C9E8u) [[unlikely]] return; }
L_0033C9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CB80; } }
L_0033C9F0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033CE40; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[7].w[0] + 752u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 800u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 92u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] + 752u);  if (t) { goto L_0033CE68; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 49u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 97u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033CE68; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033CA34:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033CE70; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 344u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 588u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033CE70; } }
    set32(c.r[18], 0u + 144u);
    c.budget -= 1;
L_0033CA50:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033CE98; } }
L_0033CA60:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0033CB80; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033CB80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CA7Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x0033CA7Cu) [[unlikely]] return; }
L_0033CA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CB80; } }
L_0033CA84:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0033CABC; } }
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29504u));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[4].w[0] + 128u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[28].w[0] - 29504u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29504u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_0033CAE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29504u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033CAE0; } }
L_0033CABC:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29500u));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[4].w[0] + 132u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[28].w[0] - 29500u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29500u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_0033CAE0; } }
    st8((c.r[28].w[0] - 29500u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0033CAE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033CEA8; } }
L_0033CAF0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0033CB80; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033CB80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CB0Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x0033CB0Cu) [[unlikely]] return; }
L_0033CB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CB80; } }
L_0033CB14:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[24] = c.r[3].w[0];
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], 0u + 127u);  if (t) { goto L_0033CEB8; } }
L_0033CB30:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0033CB80; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033CB80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CB4Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x0033CB4Cu) [[unlikely]] return; }
L_0033CB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CB80; } }
L_0033CB54:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], 0u + 173u);  if (t) { goto L_0033CEC8; } }
L_0033CB64:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0033CB80; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033CB80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CB80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x0033CB80u) [[unlikely]] return; }
L_0033CB80:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.budget -= 1;
L_0033CB84:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033CBF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[5].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[0] = c.r[3].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    set32(c.r[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[22]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; c.f[23] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);  if (t) { goto L_0033CC64; } }
L_0033CBF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[4].d[0] = c.r[4].d[0] | 4059ull;
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.f[1] = c.r[4].w[0];
    c.r[5].d[0] = 0ull | 0ull;
    c.f[0] = c.r[3].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[22]);
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    set32(c.r[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[23] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.budget -= 28;
L_0033CC64:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0033CC8C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[23]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033CC88; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 404u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0033CC88:
    st32((c.r[4].w[0] + 104u), c.f[23]);
    c.budget -= 1;
L_0033CC8C:
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033CED8; } }
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 1;
L_0033CCA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[17].w[0] + 364u), c.f[24]);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[22] = 0u;
    set32(c.r[3], 0u - 2u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[17].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 34;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033CEE8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0033CEFC; } }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 32u));
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[4], 0u - 3u);
    c.r[3].d[0] = 0ull & 1ull;
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[2], 0u - 5u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CD8C; } }
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[23] = c.f[0] ^ fp::kSign;  if (t) { goto L_0033CD90; } }
L_0033CD8C:
    c.f[23] = ld32((c.r[16].w[0] + 36u));
    c.budget -= 1;
L_0033CD90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[20] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CDA0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0033CDA0u) [[unlikely]] return; }
L_0033CDA0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CDACu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0033CDACu) [[unlikely]] return; }
L_0033CDAC:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[20]);
    set32(c.r[3], 0u - 129u);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[0]);
    st32((c.r[5].w[0] + 48u), c.f[1]);
    st32((c.r[5].w[0] + 52u), c.f[22]);
    st32((c.r[5].w[0] + 56u), c.f[0]);
    st32((c.r[5].w[0] + 60u), c.f[21]);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 523u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
L_0033CDF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0033CFAC; } }
L_0033CE00:
    c.r[6].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C804u | kUnwind; return; } goto L_0033C804; } }
L_0033CE20:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[22] = ld32((c.r[3].w[0] + 104u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[8].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C934u | kUnwind; return; } goto L_0033C934; } }
L_0033CE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CE38u);  if (depth < kMaxDepth) unit_0021(c, 54u, depth + 1u); else { c.pc = 0x002850B0u; return; } if (c.pc != 0x0033CE38u) [[unlikely]] return; }
L_0033CE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C9CCu | kUnwind; return; } goto L_0033C9CC; } }
L_0033CE40:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29496u));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], c.r[4].w[0] + 136u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[28].w[0] - 29496u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29496u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[5].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CA50u | kUnwind; return; } goto L_0033CA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29496u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CA50u | kUnwind; return; } goto L_0033CA50; } }
L_0033CE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CA34u | kUnwind; return; } goto L_0033CA34; } }
L_0033CE70:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29492u));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[4].w[0] + 140u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[28].w[0] - 29492u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29492u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[18].d[0] = c.r[5].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CA50u | kUnwind; return; } goto L_0033CA50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29492u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CA50u | kUnwind; return; } goto L_0033CA50; } }
L_0033CE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CEA0u);  if (depth < kMaxDepth) unit_0021(c, 54u, depth + 1u); else { c.pc = 0x002850B0u; return; } if (c.pc != 0x0033CEA0u) [[unlikely]] return; }
L_0033CEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CA60u | kUnwind; return; } goto L_0033CA60; } }
L_0033CEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CEB0u);  if (depth < kMaxDepth) unit_0021(c, 54u, depth + 1u); else { c.pc = 0x002850B0u; return; } if (c.pc != 0x0033CEB0u) [[unlikely]] return; }
L_0033CEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CAF0u | kUnwind; return; } goto L_0033CAF0; } }
L_0033CEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CEC0u);  if (depth < kMaxDepth) unit_0021(c, 54u, depth + 1u); else { c.pc = 0x002850B0u; return; } if (c.pc != 0x0033CEC0u) [[unlikely]] return; }
L_0033CEC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CB30u | kUnwind; return; } goto L_0033CB30; } }
L_0033CEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CED0u);  if (depth < kMaxDepth) unit_0021(c, 54u, depth + 1u); else { c.pc = 0x002850B0u; return; } if (c.pc != 0x0033CED0u) [[unlikely]] return; }
L_0033CED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CB64u | kUnwind; return; } goto L_0033CB64; } }
L_0033CED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CEE0u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0033CEE0u) [[unlikely]] return; }
L_0033CEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[18].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CCA4u | kUnwind; return; } goto L_0033CCA4; } }
L_0033CEE8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] & 65343ull;
    st16((c.r[16].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CDF8u | kUnwind; return; } goto L_0033CDF8; } }
L_0033CEFC:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 32u));
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 32u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 344u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 380u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.f[25] = ld32((c.r[2].w[0] + 20u));
    c.f[24] = ld32((c.r[2].w[0] + 24u));
    c.f[22] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CF5Cu); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0033CF5Cu) [[unlikely]] return; }
L_0033CF5C:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CF68u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0033CF68u) [[unlikely]] return; }
L_0033CF68:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[21]);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[25], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[25], c.f[21]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    c.f[2] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[24]);
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[16].w[0] + 20u), c.f[4]);
    st32((c.r[16].w[0] + 24u), c.f[2]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CDF8u | kUnwind; return; } goto L_0033CDF8; } }
L_0033CFAC:
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0033CFE0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[24], 0u - 17u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[14], 0u - 33u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], 0u - 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[12], 0u - 2049u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[11], 0u + 61u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u - 9u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[23], 0u - 2u);
    st32((c.r[29].w[0] + 156u), c.f[12]);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[22], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] << 3);
    set32(c.r[15], c.r[2].w[0] << 5);
    set32(c.r[13], c.r[2].w[0] << 11);
    set32(c.r[8], c.r[29].w[0] + 156u);
    set32(c.r[9], 0u + 15u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[22].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 10944u);
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 10496u);
    c.r[18].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[18].d[0] = c.r[18].d[0] & c.r[24].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[18].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[23].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[17].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[22].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 72;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D100u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 30u, depth + 1u); else { c.pc = 0x0033C770u; return; } if (c.pc != 0x0033D100u) [[unlikely]] return; }
L_0033D100:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
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
L_0033D130:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[11].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[9], c.r[11].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[21], c.r[11].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[11].w[0] << 5);
    st32((c.r[29].w[0] + 140u), c.f[12]);
    set32(c.r[24], c.r[11].w[0] << 11);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[20], 0u - 9u);
    c.r[12].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[18], 0u - 17u);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[25], 0u - 33u);
    set32(c.r[15], 0u - 2049u);
    set32(c.r[14], 0u + 61u);
    set32(c.r[13], c.r[13].w[0] - 10944u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[12].d[0] & c.r[3].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[9].d[0];
    set32(c.r[12], 0u - 2u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[22].d[0] = ld16((c.r[4].w[0]));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[11], c.r[11].w[0] - 10496u);
    c.r[20].d[0] = c.r[22].d[0] & c.r[20].d[0];
    c.r[20].d[0] = c.r[20].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    c.r[18].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[25].d[0] = c.r[18].d[0] & c.r[25].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[17].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[13].w[0]);
    c.r[13].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    c.r[2].d[0] = c.r[12].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[11].w[0]);
    c.budget -= 67;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[4].w[0] + 48u), 0u);  if (t) { goto L_0033D2B0; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1497u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D274; } }
    c.f[0] = ld32((c.r[6].w[0] + 1504u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 1508u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 1512u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 1516u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.f[0]);  if (t) { goto L_0033D294; } }
L_0033D274:
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 36u));
    st32((c.r[29].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 40u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 44u));
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.budget -= 8;
L_0033D294:
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D2A8u); set32(c.r[8], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_004F(c, 30u, depth + 1u); else { c.pc = 0x0033C770u; return; } if (c.pc != 0x0033D2A8u) [[unlikely]] return; }
L_0033D2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033D2CC; } }
L_0033D2B0:
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D2C4u); set32(c.r[8], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_004F(c, 30u, depth + 1u); else { c.pc = 0x0033C770u; return; } if (c.pc != 0x0033D2C4u) [[unlikely]] return; }
L_0033D2C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D2A8u | kUnwind; return; } goto L_0033D2A8; } }
L_0033D2CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0033D300:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[3], c.r[3].w[0] - 27648u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[15], c.r[2].w[0] << 5);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[2].w[0] << 2);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[21], 0u - 5u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[13], c.r[2].w[0] << 11);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[2].w[0] << 3);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], 0u - 9u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[24], 0u - 17u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[14], 0u - 33u);
    set32(c.r[12], 0u - 2049u);
    set32(c.r[11], 0u + 61u);
    set32(c.r[23], 0u - 2u);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 15u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[22].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 10944u);
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 10496u);
    c.r[18].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[18].d[0] = c.r[18].d[0] & c.r[24].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[18].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[23].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[17].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[21].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[22].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 71;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D41Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 30u, depth + 1u); else { c.pc = 0x0033C770u; return; } if (c.pc != 0x0033D41Cu) [[unlikely]] return; }
L_0033D41C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0033D450:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[11].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[9], c.r[11].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[21], c.r[11].w[0] << 3);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[11].w[0] << 5);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[24], c.r[11].w[0] << 11);
    c.r[12].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[20], 0u - 9u);
    set32(c.r[18], 0u - 17u);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[25], 0u - 33u);
    set32(c.r[15], 0u - 2049u);
    set32(c.r[14], 0u + 61u);
    set32(c.r[13], c.r[13].w[0] - 10944u);
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[12].d[0] & c.r[3].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[9].d[0];
    set32(c.r[12], 0u - 2u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[22].d[0] = ld16((c.r[4].w[0]));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[11], c.r[11].w[0] - 10496u);
    c.r[20].d[0] = c.r[22].d[0] & c.r[20].d[0];
    c.r[20].d[0] = c.r[20].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    c.r[18].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[25].d[0] = c.r[18].d[0] & c.r[25].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[17].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[13].w[0]);
    c.r[13].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[12].d[0] = c.r[13].d[0] & c.r[12].d[0];
    c.r[2].d[0] = c.r[12].d[0] | c.r[2].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 724u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[11].w[0]);
    c.budget -= 66;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[4].w[0] + 48u), 0u);  if (t) { goto L_0033D5CC; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1497u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D590; } }
    c.f[0] = ld32((c.r[6].w[0] + 1504u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 1508u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 1512u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 1516u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 140u), c.f[0]);  if (t) { goto L_0033D5B0; } }
L_0033D590:
    c.f[0] = ld32((c.r[6].w[0] + 32u));
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 36u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 40u));
    st32((c.r[29].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 44u));
    st32((c.r[29].w[0] + 140u), c.f[0]);
    c.budget -= 8;
L_0033D5B0:
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D5C4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 30u, depth + 1u); else { c.pc = 0x0033C770u; return; } if (c.pc != 0x0033D5C4u) [[unlikely]] return; }
L_0033D5C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0033D5E8; } }
L_0033D5CC:
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D5E0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004F(c, 30u, depth + 1u); else { c.pc = 0x0033C770u; return; } if (c.pc != 0x0033D5E0u) [[unlikely]] return; }
L_0033D5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D5C4u | kUnwind; return; } goto L_0033D5C4; } }
L_0033D5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0033D610:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[5].w[0] + 14596u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 14598u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[5].w[0] + 14600u), 0u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0] + 14606u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st16((c.r[5].w[0] + 14604u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 14616u));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033D67C; } }
L_0033D660:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[5].w[0] + 14612u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 14616u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033D690; } }
L_0033D67C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 14614u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D660u | kUnwind; return; } goto L_0033D660; } }
L_0033D690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033D6A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 168u)));
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0033D6BC; } }
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 168u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 3;
L_0033D6BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033D6D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 8;
L_0033D6F0:
    c.r[6].d[0] = c.r[17].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[16], c.r[4].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033D75C; } }
    set32(c.r[3], 0u + 5612u);
    set32(c.r[2], c.r[6].w[0] << 4);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].d[0] = 0ull | 56132ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] - c.r[6].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[6], 0u + 300u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 12u);
    set32(c.r[5], c.r[2].w[0] + c.r[1].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D74Cu); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_004F(c, 75u, depth + 1u); else { c.pc = 0x0033D790u; return; } if (c.pc != 0x0033D74Cu) [[unlikely]] return; }
L_0033D74C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 168u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_0033D774; } }
L_0033D75C:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[3].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D6F0u | kUnwind; return; } goto L_0033D6F0; } }
L_0033D774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0033D790:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[6].w[0]);  c.pc = t; return; }
L_0033D7A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D7DCu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0001(c, 10u, depth + 1u); else { c.pc = 0x00204590u; return; } if (c.pc != 0x0033D7DCu) [[unlikely]] return; }
L_0033D7DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033D804; } }
L_0033D7E4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D7FCu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 10u, depth + 1u); else { c.pc = 0x00204590u; return; } if (c.pc != 0x0033D7FCu) [[unlikely]] return; }
L_0033D7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0033D870; } }
L_0033D804:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[4] = ld32((c.r[19].w[0]));
    c.f[6] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[5] = ld32((c.r[2].w[0]));
    c.f[7] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[4]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[6]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[7], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D7E4u | kUnwind; return; } goto L_0033D7E4; } }
L_0033D870:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0033D890:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DB00; } }
    c.f[0] = 0u;
    set32(c.r[3], c.r[4].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[4].w[0] + 32u);  if (t) { goto L_0033DB08; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DBA4; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DBAC; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DBB4; } }
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DBBC; } }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DBC4; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033D93C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033D940; } }
L_0033D93C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033D940:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DBCC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[8], ld32((c.r[4].w[0] + 64u)));
    c.r[9].d[0] = ld16((c.r[2].w[0]));
    c.r[7].d[0] = ld16((c.r[2].w[0] + 8u));
    c.r[1].d[0] = c.r[9].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[10], 0u - 1u);  if (t) { goto L_0033DAF8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], c.r[9].w[0] << 1);
    c.f[8] = ld32((c.r[5].w[0] + 4u));
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[7] = ld32((c.r[5].w[0]));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = 0u;
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC61C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    c.f[5] = c.r[3].w[0];
    c.budget -= 11;
L_0033D994:
    c.r[13].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[5], c.r[13].w[0] << 4);
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DBD4; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DBE0; } }
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DBE8; } }
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DBF0; } }
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DBF8; } }
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_0033DA28; } }
L_0033DA20:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033DA28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033DAE8; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[11], ld32((c.r[3].w[0] + 12u)));
    c.r[5].d[0] = c.r[11].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033DAE8; } }
    c.r[5].d[0] = c.r[11].d[0] & 32768ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0033DAE8; } }
    set32(c.r[5], c.r[9].w[0] + 1u);
    set32(c.r[15], c.r[13].w[0] + 2u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[14].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[11].d[0] = ld16((c.r[5].w[0]));
    c.r[1].d[0] = c.r[15].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.f[9] = c.f[5];  if (t) { goto L_0033DC08; } }
    set32(c.r[5], c.r[15].w[0] << 4);
    set32(c.r[13], c.r[8].w[0] + c.r[5].w[0]);
    c.budget -= 2;
L_0033DA88:
    c.f[0] = ld32((c.r[13].w[0] + 12u));
    c.f[1] = ld32((c.r[13].w[0] + 4u));
    c.f[3] = ld32((c.r[13].w[0]));
    c.f[4] = ld32((c.r[13].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[8]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[7]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[6]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DC00; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DAD0; } }
    c.f[9] = c.f[0];
    c.r[10].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 3;
L_0033DAD0:
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.r[5].d[0] = c.r[15].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DA88u | kUnwind; return; } goto L_0033DA88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DC08; } }
L_0033DAE8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D994u | kUnwind; return; } goto L_0033D994; } }
L_0033DAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033DC3C; } }
L_0033DB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033DC3C; } }
L_0033DB08:
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DB84; } }
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DB8C; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DB4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D940u | kUnwind; return; } goto L_0033D940; } }
L_0033DB4C:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DB94; } }
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DB9C; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D93Cu | kUnwind; return; } goto L_0033D93C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D940u | kUnwind; return; } goto L_0033D940; } }
L_0033DB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D940u | kUnwind; return; } goto L_0033D940; } }
L_0033DB8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D940u | kUnwind; return; } goto L_0033D940; } }
L_0033DB94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D940u | kUnwind; return; } goto L_0033D940; } }
L_0033DB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D940u | kUnwind; return; } goto L_0033D940; } }
L_0033DBA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D940u | kUnwind; return; } goto L_0033D940; } }
L_0033DBAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D940u | kUnwind; return; } goto L_0033D940; } }
L_0033DBB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D940u | kUnwind; return; } goto L_0033D940; } }
L_0033DBBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D940u | kUnwind; return; } goto L_0033D940; } }
L_0033DBC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D940u | kUnwind; return; } goto L_0033D940; } }
L_0033DBCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033DC3C; } }
L_0033DBD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DA28u | kUnwind; return; } goto L_0033DA28; } }
    c.budget -= 1;
L_0033DBE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DA28u | kUnwind; return; } goto L_0033DA28; } }
L_0033DBE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DA28u | kUnwind; return; } goto L_0033DA28; } }
L_0033DBF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DA28u | kUnwind; return; } goto L_0033DA28; } }
L_0033DBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DA28u | kUnwind; return; } goto L_0033DA28; } }
L_0033DC00:
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033DC08:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DAE8u | kUnwind; return; } goto L_0033DAE8; } }
    set32(c.r[4], c.r[10].w[0] << 4);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    st16((c.r[6].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] >> 16);
    st8((c.r[6].w[0] + 28u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st16((c.r[6].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
L_0033DC3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033DC50:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DEC0; } }
    c.f[0] = 0u;
    set32(c.r[3], c.r[4].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[4].w[0] + 32u);  if (t) { goto L_0033DEC8; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DF64; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DF6C; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DF74; } }
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DF7C; } }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DF84; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DCFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033DD00; } }
L_0033DCFC:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033DD00:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DF8C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[7].d[0] = ld16((c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 8u));
    c.r[1].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_0033DEB8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.f[7] = ld32((c.r[5].w[0] + 4u));
    c.f[6] = ld32((c.r[5].w[0]));
    set32(c.r[8], 0u + 1u);
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = 0u;
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
L_0033DD48:
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[5], c.r[6].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DF94; } }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DFA0; } }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DFA8; } }
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DFB0; } }
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DFB8; } }
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DDD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0033DDE0; } }
    c.budget -= 1;
L_0033DDD8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033DDE0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0033DEA8; } }
    set32(c.r[5], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = c.r[9].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033DEA8; } }
    c.r[5].d[0] = c.r[9].d[0] & 32768ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0033DEA8; } }
    set32(c.r[5], c.r[7].w[0] + 1u);
    set32(c.r[13], c.r[11].w[0] + 2u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[9].d[0] = ld16((c.r[5].w[0]));
    c.r[1].d[0] = c.r[13].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0033DE98; } }
    set32(c.r[5], c.r[13].w[0] << 4);
    set32(c.r[11], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_0033DE40:
    c.f[0] = ld32((c.r[11].w[0] + 12u));
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.f[3] = ld32((c.r[11].w[0]));
    c.f[4] = ld32((c.r[11].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0033DE74; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033DE74:
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0033DE88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0033DE98; } }
L_0033DE88:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[5].d[0] = c.r[13].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DE40u | kUnwind; return; } goto L_0033DE40; } }
L_0033DE98:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_0033DEA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033DFC0; } }
L_0033DEA8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD48u | kUnwind; return; } goto L_0033DD48; } }
L_0033DEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033DFC0; } }
L_0033DEC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033DFC0; } }
L_0033DEC8:
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DF44; } }
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033DF4C; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DF0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD00u | kUnwind; return; } goto L_0033DD00; } }
L_0033DF0C:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DF54; } }
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033DF5C; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DCFCu | kUnwind; return; } goto L_0033DCFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD00u | kUnwind; return; } goto L_0033DD00; } }
L_0033DF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD00u | kUnwind; return; } goto L_0033DD00; } }
L_0033DF4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD00u | kUnwind; return; } goto L_0033DD00; } }
L_0033DF54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD00u | kUnwind; return; } goto L_0033DD00; } }
L_0033DF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD00u | kUnwind; return; } goto L_0033DD00; } }
L_0033DF64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD00u | kUnwind; return; } goto L_0033DD00; } }
L_0033DF6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD00u | kUnwind; return; } goto L_0033DD00; } }
L_0033DF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD00u | kUnwind; return; } goto L_0033DD00; } }
L_0033DF7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD00u | kUnwind; return; } goto L_0033DD00; } }
L_0033DF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD00u | kUnwind; return; } goto L_0033DD00; } }
L_0033DF8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033DFC0; } }
L_0033DF94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DDE0u | kUnwind; return; } goto L_0033DDE0; } }
    c.budget -= 1;
L_0033DFA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DDE0u | kUnwind; return; } goto L_0033DDE0; } }
L_0033DFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DDE0u | kUnwind; return; } goto L_0033DDE0; } }
L_0033DFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DDE0u | kUnwind; return; } goto L_0033DDE0; } }
L_0033DFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DDE0u | kUnwind; return; } goto L_0033DDE0; } }
L_0033DFC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033DFD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E258; } }
    c.f[0] = 0u;
    set32(c.r[3], c.r[4].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[4].w[0] + 32u);  if (t) { goto L_0033E260; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E2FC; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E304; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E30C; } }
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E314; } }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E31C; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E07C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033E080; } }
L_0033E07C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033E080:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E324; } }
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[3], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_0033E32C; } }
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 8u));
    c.r[7].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
L_0033E0B0:
    c.r[1].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033E250; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.f[7] = ld32((c.r[5].w[0] + 4u));
    c.f[6] = ld32((c.r[5].w[0]));
    set32(c.r[8], 0u + 1u);
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = 0u;
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
L_0033E0E0:
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E33C; } }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E348; } }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E350; } }
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E358; } }
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E360; } }
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0033E178; } }
    c.budget -= 1;
L_0033E170:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033E178:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0033E240; } }
    set32(c.r[5], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = c.r[9].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033E240; } }
    c.r[5].d[0] = c.r[9].d[0] & 8192ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0033E240; } }
    set32(c.r[5], c.r[7].w[0] + 1u);
    set32(c.r[13], c.r[11].w[0] + 2u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[9].d[0] = ld16((c.r[5].w[0]));
    c.r[1].d[0] = c.r[13].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0033E230; } }
    set32(c.r[5], c.r[13].w[0] << 4);
    set32(c.r[11], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_0033E1D8:
    c.f[0] = ld32((c.r[11].w[0] + 12u));
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.f[3] = ld32((c.r[11].w[0]));
    c.f[4] = ld32((c.r[11].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0033E20C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033E20C:
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0033E220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0033E230; } }
L_0033E220:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[5].d[0] = c.r[13].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E1D8u | kUnwind; return; } goto L_0033E1D8; } }
L_0033E230:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_0033E240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033E368; } }
L_0033E240:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E0E0u | kUnwind; return; } goto L_0033E0E0; } }
L_0033E250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033E368; } }
L_0033E258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033E368; } }
L_0033E260:
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E2DC; } }
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E2E4; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E2A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E080u | kUnwind; return; } goto L_0033E080; } }
L_0033E2A4:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E2EC; } }
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E2F4; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E07Cu | kUnwind; return; } goto L_0033E07C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E080u | kUnwind; return; } goto L_0033E080; } }
L_0033E2DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E080u | kUnwind; return; } goto L_0033E080; } }
L_0033E2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E080u | kUnwind; return; } goto L_0033E080; } }
L_0033E2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E080u | kUnwind; return; } goto L_0033E080; } }
L_0033E2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E080u | kUnwind; return; } goto L_0033E080; } }
L_0033E2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E080u | kUnwind; return; } goto L_0033E080; } }
L_0033E304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E080u | kUnwind; return; } goto L_0033E080; } }
L_0033E30C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E080u | kUnwind; return; } goto L_0033E080; } }
L_0033E314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E080u | kUnwind; return; } goto L_0033E080; } }
L_0033E31C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E080u | kUnwind; return; } goto L_0033E080; } }
L_0033E324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033E368; } }
L_0033E32C:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 10u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E0B0u | kUnwind; return; } goto L_0033E0B0; } }
L_0033E33C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E178u | kUnwind; return; } goto L_0033E178; } }
    c.budget -= 1;
L_0033E348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E178u | kUnwind; return; } goto L_0033E178; } }
L_0033E350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E178u | kUnwind; return; } goto L_0033E178; } }
L_0033E358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E178u | kUnwind; return; } goto L_0033E178; } }
L_0033E360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E178u | kUnwind; return; } goto L_0033E178; } }
L_0033E368:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033E370:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E5E0; } }
    c.f[0] = 0u;
    set32(c.r[3], c.r[4].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[4].w[0] + 32u);  if (t) { goto L_0033E5E8; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E684; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E68C; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E694; } }
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E69C; } }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E6A4; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E41C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033E420; } }
L_0033E41C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033E420:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E6AC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; set32(c.r[9], 0u - 1u);  if (t) { goto L_0033E6B4; } }
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[7], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld16((c.r[7].w[0] + 8u));
    c.r[8].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
L_0033E454:
    c.r[1].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033E5D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[10].sd[0] = static_cast<std::int32_t>(0xC61C0000u);
    c.r[10].d[0] = c.r[10].d[0] | 16384ull;
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[8] = ld32((c.r[5].w[0] + 4u));
    c.f[7] = ld32((c.r[5].w[0]));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = 0u;
    set32(c.r[4], c.r[8].w[0] << 1);
    c.f[5] = c.r[10].w[0];
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
L_0033E48C:
    c.r[13].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[10], c.r[13].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[10].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[8]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E6C4; } }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[8]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E6D0; } }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E6D8; } }
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E6E0; } }
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E6E8; } }
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_0033E520; } }
L_0033E518:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033E520:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0033E5C8; } }
    set32(c.r[11], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[5], ld32((c.r[11].w[0] + 12u)));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033E5C8; } }
    set32(c.r[5], c.r[8].w[0] + 1u);
    set32(c.r[15], c.r[13].w[0] + 2u);
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[14].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[10].d[0] = ld16((c.r[5].w[0]));
    c.r[1].d[0] = c.r[15].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.f[9] = c.f[5];  if (t) { goto L_0033E6F8; } }
    set32(c.r[5], c.r[15].w[0] << 4);
    set32(c.r[13], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 2;
L_0033E568:
    c.f[0] = ld32((c.r[13].w[0] + 12u));
    c.f[1] = ld32((c.r[13].w[0] + 4u));
    c.f[3] = ld32((c.r[13].w[0]));
    c.f[4] = ld32((c.r[13].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[8]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[7]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[6]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E6F0; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[9]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E5B0; } }
    c.f[9] = c.f[0];
    c.r[9].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 3;
L_0033E5B0:
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.r[5].d[0] = c.r[15].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E568u | kUnwind; return; } goto L_0033E568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E6F8; } }
L_0033E5C8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E48Cu | kUnwind; return; } goto L_0033E48C; } }
L_0033E5D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033E72C; } }
L_0033E5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033E72C; } }
L_0033E5E8:
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E664; } }
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E66C; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E62C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E420u | kUnwind; return; } goto L_0033E420; } }
L_0033E62C:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E674; } }
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E67C; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E41Cu | kUnwind; return; } goto L_0033E41C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E420u | kUnwind; return; } goto L_0033E420; } }
L_0033E664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E420u | kUnwind; return; } goto L_0033E420; } }
L_0033E66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E420u | kUnwind; return; } goto L_0033E420; } }
L_0033E674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E420u | kUnwind; return; } goto L_0033E420; } }
L_0033E67C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E420u | kUnwind; return; } goto L_0033E420; } }
L_0033E684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E420u | kUnwind; return; } goto L_0033E420; } }
L_0033E68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E420u | kUnwind; return; } goto L_0033E420; } }
L_0033E694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E420u | kUnwind; return; } goto L_0033E420; } }
L_0033E69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E420u | kUnwind; return; } goto L_0033E420; } }
L_0033E6A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E420u | kUnwind; return; } goto L_0033E420; } }
L_0033E6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033E72C; } }
L_0033E6B4:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[7].d[0] = ld16((c.r[2].w[0] + 10u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E454u | kUnwind; return; } goto L_0033E454; } }
L_0033E6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E520u | kUnwind; return; } goto L_0033E520; } }
    c.budget -= 1;
L_0033E6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E520u | kUnwind; return; } goto L_0033E520; } }
L_0033E6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E520u | kUnwind; return; } goto L_0033E520; } }
L_0033E6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E520u | kUnwind; return; } goto L_0033E520; } }
L_0033E6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[12].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E520u | kUnwind; return; } goto L_0033E520; } }
L_0033E6F0:
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033E6F8:
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E5C8u | kUnwind; return; } goto L_0033E5C8; } }
    set32(c.r[4], c.r[9].w[0] << 4);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[11].w[0] + 8u)));
    st16((c.r[6].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] >> 16);
    st8((c.r[6].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[11].w[0] + 12u)));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    st16((c.r[6].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
L_0033E72C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033E740:
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E9B0; } }
    c.f[0] = 0u;
    set32(c.r[3], c.r[4].w[0] + 16u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[4].w[0] + 32u);  if (t) { goto L_0033E9B8; } }
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033EA54; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033EA5C; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033EA64; } }
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033EA6C; } }
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033EA74; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E7EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033E7F0; } }
L_0033E7EC:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0033E7F0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EA7C; } }
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; set32(c.r[3], ld32((c.r[4].w[0] + 64u)));  if (t) { goto L_0033EA84; } }
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[6], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 8u));
    c.r[7].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
L_0033E820:
    c.r[1].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033E9A8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.f[7] = ld32((c.r[5].w[0] + 4u));
    c.f[6] = ld32((c.r[5].w[0]));
    set32(c.r[8], 0u + 1u);
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = 0u;
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
L_0033E850:
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[9], c.r[11].w[0] << 4);
    set32(c.r[5], c.r[3].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033EA94; } }
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033EAA0; } }
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033EAA8; } }
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033EAB0; } }
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[12]);
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033EAB8; } }
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0033E8E8; } }
    c.budget -= 1;
L_0033E8E0:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033E8E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0033E998; } }
    set32(c.r[5], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033E998; } }
    set32(c.r[5], c.r[7].w[0] + 1u);
    set32(c.r[13], c.r[11].w[0] + 2u);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.r[9].d[0] = ld16((c.r[5].w[0]));
    c.r[1].d[0] = c.r[13].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0033E988; } }
    set32(c.r[5], c.r[13].w[0] << 4);
    set32(c.r[11], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 3;
L_0033E930:
    c.f[0] = ld32((c.r[11].w[0] + 12u));
    c.f[1] = ld32((c.r[11].w[0] + 4u));
    c.f[3] = ld32((c.r[11].w[0]));
    c.f[4] = ld32((c.r[11].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0033E964; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033E964:
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0033E978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0033E988; } }
L_0033E978:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[5].d[0] = c.r[13].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E930u | kUnwind; return; } goto L_0033E930; } }
L_0033E988:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_0033E998; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033EAC0; } }
L_0033E998:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E850u | kUnwind; return; } goto L_0033E850; } }
L_0033E9A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033EAC0; } }
L_0033E9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033EAC0; } }
L_0033E9B8:
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033EA34; } }
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033EA3C; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E9FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E7F0u | kUnwind; return; } goto L_0033E7F0; } }
L_0033E9FC:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033EA44; } }
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033EA4C; } }
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E7ECu | kUnwind; return; } goto L_0033E7EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E7F0u | kUnwind; return; } goto L_0033E7F0; } }
L_0033EA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E7F0u | kUnwind; return; } goto L_0033E7F0; } }
L_0033EA3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E7F0u | kUnwind; return; } goto L_0033E7F0; } }
L_0033EA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E7F0u | kUnwind; return; } goto L_0033E7F0; } }
L_0033EA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E7F0u | kUnwind; return; } goto L_0033E7F0; } }
L_0033EA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E7F0u | kUnwind; return; } goto L_0033E7F0; } }
L_0033EA5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E7F0u | kUnwind; return; } goto L_0033E7F0; } }
L_0033EA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E7F0u | kUnwind; return; } goto L_0033E7F0; } }
L_0033EA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E7F0u | kUnwind; return; } goto L_0033E7F0; } }
L_0033EA74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E7F0u | kUnwind; return; } goto L_0033E7F0; } }
L_0033EA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0033EAC0; } }
L_0033EA84:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 10u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E820u | kUnwind; return; } goto L_0033E820; } }
L_0033EA94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E8E8u | kUnwind; return; } goto L_0033E8E8; } }
    c.budget -= 1;
L_0033EAA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E8E8u | kUnwind; return; } goto L_0033E8E8; } }
L_0033EAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E8E8u | kUnwind; return; } goto L_0033E8E8; } }
L_0033EAB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E8E8u | kUnwind; return; } goto L_0033E8E8; } }
L_0033EAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E8E8u | kUnwind; return; } goto L_0033E8E8; } }
L_0033EAC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EAD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0033EAE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EAF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EB00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EB10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EB20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EB30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EB40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0033EB50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EB60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EB70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EB90:
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[12]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[12]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 21;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_0033EF18; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 25u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033EF20; } }
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 25u));
    c.budget -= 17;
    { const bool t = c.r[6].sd[0] < 0; c.r[7].d[0] = ld8((c.r[4].w[0] + 26u));  if (t) { goto L_0033EC4C; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0033EC68; } }
L_0033EC4C:
    set32(c.r[5], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0033EC68:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_0033EC7C; } }
    c.f[0] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0033EC98; } }
L_0033EC7C:
    set32(c.r[5], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0033EC98:
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[5].w[0] - c.r[2].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 27u));
    c.r[9].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 6u));
    c.r[1].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);  if (t) { goto L_0033EDC8; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0033ECF0; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0033ED0C; } }
L_0033ECF0:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0033ED0C:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_0033ED20; } }
    c.f[0] = c.r[8].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0033ED3C; } }
L_0033ED20:
    set32(c.r[6], c.r[8].w[0] >> 1);
    c.r[5].d[0] = c.r[8].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0033ED3C:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { goto L_0033ED64; } }
    c.f[0] = c.r[9].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0033ED80; } }
L_0033ED64:
    set32(c.r[6], c.r[9].w[0] >> 1);
    c.r[5].d[0] = c.r[9].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0033ED80:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[6].d[0] = 0ull | 0ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    set32(c.r[7], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0033EEA0; } }
L_0033EDC8:
    set32(c.r[5], c.r[5].w[0] - c.r[8].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; c.r[7].d[0] = ld8((c.r[4].w[0] + 24u));  if (t) { goto L_0033EDE4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0033EE00; } }
L_0033EDE4:
    set32(c.r[6], c.r[5].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0033EE00:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_0033EE14; } }
    c.f[0] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0033EE30; } }
L_0033EE14:
    set32(c.r[6], c.r[7].w[0] >> 1);
    c.r[5].d[0] = c.r[7].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0033EE30:
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[5], c.r[9].w[0] - c.r[8].w[0]);
    c.r[8].d[0] = 0ull | 0ull;
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] | 32768ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[8].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 28;
L_0033EEA0:
    c.r[5].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[7].d[0] = 0ull | 0ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[4].d[0] = ld16((c.r[4].w[0] + 30u));
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 16);
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 30;
L_0033EF18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0033EF2C; } }
L_0033EF20:
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 3;
L_0033EF2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EF40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF74u); set32(c.r[4], c.r[8].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x0033EF74u) [[unlikely]] return; }
L_0033EF74:
    c.f[1] = ld32((c.r[19].w[0] + 16u));
    c.r[9].d[0] = ld16((c.r[19].w[0] + 2u));
    c.f[0] = ld32((c.r[28].w[0] - 29668u));
    c.r[10].d[0] = ld8((c.r[19].w[0] + 15u));
    c.r[8].d[0] = ld16((c.r[19].w[0] + 4u));
    c.f[6] = ld32((c.r[19].w[0] + 8u));
    c.r[7].d[0] = ld8((c.r[19].w[0]));
    c.f[5] = ld32((c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 20u));
    c.f[4] = ld32((c.r[17].w[0] + 4u));
    c.f[3] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], c.r[9].w[0] << 16);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[2].d[0] = c.r[9].d[0] | c.r[2].d[0];
    set32(c.r[6], 0u + 255u);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[2] = ld32((c.r[18].w[0]));
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    st16((c.r[16].w[0] + 30u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[16].w[0] + 12u), c.f[6]);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 26u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 27u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0]), c.f[5]);
    st32((c.r[16].w[0] + 4u), c.f[4]);
    st32((c.r[16].w[0] + 8u), c.f[3]);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[10].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[9], ld32((c.r[3].w[0])));
    set32(c.r[7], c.r[10].w[0] << 4);
    set32(c.r[8], c.r[9].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[10].w[0] << 2);
    st32((c.r[8].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[7], c.r[9].w[0] + 396u);
    st32((c.r[8].w[0]), c.f[2]);
    set32(c.r[2], c.r[9].w[0] + 328u);
    st32((c.r[8].w[0] + 4u), c.f[1]);
    set32(c.r[18], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F02Cu); st32((c.r[8].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x0033F02Cu) [[unlikely]] return; }
L_0033F02C:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].d[0] = ld8((c.r[19].w[0] + 12u));
    c.r[6].d[0] = ld8((c.r[19].w[0] + 13u));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 14u));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 15u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 27u));
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 93u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 94u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0033F07C; } }
L_0033F058:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 92u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 93u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 94u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 95u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033F084; } }
L_0033F07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F058u | kUnwind; return; } goto L_0033F058; } }
L_0033F084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0033F0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033F0C8; } }
L_0033F0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0033F0F8; } }
L_0033F0C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[8], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F0E8u); set32(c.r[7], c.r[7].w[0] - 576u);  if (depth < kMaxDepth) unit_004F(c, 128u, depth + 1u); else { c.pc = 0x0033EF40u; return; } if (c.pc != 0x0033F0E8u) [[unlikely]] return; }
L_0033F0E8:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F0C0u | kUnwind; return; } goto L_0033F0C0; } }
L_0033F0F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033F140; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033F140; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F140u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0033F140u) [[unlikely]] return; }
L_0033F140:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033F160:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 50u);
    set32(c.r[6], 0u + 150u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F198u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x0033F198u) [[unlikely]] return; }
L_0033F198:
    c.r[20].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F1ACu); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x0033F1ACu) [[unlikely]] return; }
L_0033F1AC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F1C0u); set32(c.r[6], 0u + 96u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x0033F1C0u) [[unlikely]] return; }
L_0033F1C0:
    set32(c.r[3], 0u + 30u);
    st16((c.r[29].w[0] + 100u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 10u);
    st32((c.r[29].w[0] + 112u), 0u);
    st16((c.r[29].w[0] + 98u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    st8((c.r[29].w[0] + 116u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[3].d[0] | 28836ull;
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    st8((c.r[29].w[0] + 109u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[29].w[0] + 110u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld16((c.r[19].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 4u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F214; } }
L_0033F20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0033F248; } }
L_0033F214:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F238u); set32(c.r[8], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_004F(c, 128u, depth + 1u); else { c.pc = 0x0033EF40u; return; } if (c.pc != 0x0033F238u) [[unlikely]] return; }
L_0033F238:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F20Cu | kUnwind; return; } goto L_0033F20C; } }
L_0033F248:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0033F270:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 188u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 220u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 216u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 180u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 184u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[3].w[0] - 736u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[9].d[0] = ld16((c.r[3].w[0] - 734u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 194u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] - 732u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.f[1] = ld32((c.r[3].w[0] - 728u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = ld8((c.r[3].w[0] - 724u));
    st32((c.r[29].w[0] + 200u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] - 723u));
    st8((c.r[29].w[0] + 205u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[28].w[0] - 29296u);
    st32((c.r[22].w[0]), c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0] - 720u));
    c.r[6].d[0] = ld8((c.r[5].w[0] - 722u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[28].w[0] - 29304u);
    st8((c.r[29].w[0] + 206u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[23].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] - 721u));
    c.r[4].d[0] = ld8((c.r[3].w[0] - 716u));
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    st8((c.r[29].w[0] + 212u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.budget -= 55;
L_0033F34C:
    c.r[3].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F440; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033F440; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 176u), c.f[3]);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[30].w[0]), c.f[0]);  if (t) { goto L_0033F3D0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[19].w[0]), c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 14;
L_0033F3D0:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F424u); set32(c.r[8], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_004F(c, 128u, depth + 1u); else { c.pc = 0x0033EF40u; return; } if (c.pc != 0x0033F424u) [[unlikely]] return; }
L_0033F424:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[20], c.r[20].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F34Cu | kUnwind; return; } goto L_0033F34C; } }
    c.budget -= 1;
L_0033F440:
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
L_0033F470:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 188u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 220u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 216u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 180u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 184u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[3].w[0] - 672u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[22].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[9].d[0] = ld16((c.r[3].w[0] - 670u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 194u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] - 668u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.f[1] = ld32((c.r[3].w[0] - 664u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = ld8((c.r[3].w[0] - 660u));
    st32((c.r[29].w[0] + 200u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] - 659u));
    st8((c.r[29].w[0] + 205u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = ld8((c.r[5].w[0] - 658u));
    c.f[0] = ld32((c.r[3].w[0] - 656u));
    set32(c.r[5], c.r[28].w[0] - 29312u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[23].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] - 657u));
    st8((c.r[29].w[0] + 206u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] - 652u));
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    st8((c.r[29].w[0] + 212u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.budget -= 54;
L_0033F548:
    c.r[3].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F640; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033F640; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 176u), c.f[3]);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[30].w[0]), c.f[0]);  if (t) { goto L_0033F5D0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[19].w[0]), c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 15;
L_0033F5D0:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F624u); set32(c.r[8], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_004F(c, 128u, depth + 1u); else { c.pc = 0x0033EF40u; return; } if (c.pc != 0x0033F624u) [[unlikely]] return; }
L_0033F624:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[20], c.r[20].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F548u | kUnwind; return; } goto L_0033F548; } }
    c.budget -= 1;
L_0033F640:
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
L_0033F670:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 188u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 220u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 216u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 180u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 184u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[3].w[0] - 704u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[22].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[9].d[0] = ld16((c.r[3].w[0] - 702u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 194u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] - 700u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.f[1] = ld32((c.r[3].w[0] - 696u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = ld8((c.r[3].w[0] - 692u));
    st32((c.r[29].w[0] + 200u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] - 691u));
    st8((c.r[29].w[0] + 205u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = ld8((c.r[5].w[0] - 690u));
    c.f[0] = ld32((c.r[3].w[0] - 688u));
    set32(c.r[5], c.r[28].w[0] - 29320u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[23].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] - 689u));
    st8((c.r[29].w[0] + 206u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] - 684u));
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    st8((c.r[29].w[0] + 212u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.budget -= 54;
L_0033F748:
    c.r[3].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033F840; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033F840; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 176u), c.f[3]);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[30].w[0]), c.f[0]);  if (t) { goto L_0033F7D0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[19].w[0]), c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 15;
L_0033F7D0:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F824u); set32(c.r[8], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_004F(c, 128u, depth + 1u); else { c.pc = 0x0033EF40u; return; } if (c.pc != 0x0033F824u) [[unlikely]] return; }
L_0033F824:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[20], c.r[20].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F748u | kUnwind; return; } goto L_0033F748; } }
    c.budget -= 1;
L_0033F840:
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
L_0033F870:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 188u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 220u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 216u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 180u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 184u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[3].w[0] - 640u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[22].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[9].d[0] = ld16((c.r[3].w[0] - 638u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 194u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] - 636u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.f[1] = ld32((c.r[3].w[0] - 632u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = ld8((c.r[3].w[0] - 628u));
    st32((c.r[29].w[0] + 200u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] - 627u));
    st8((c.r[29].w[0] + 205u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = ld8((c.r[5].w[0] - 626u));
    c.f[0] = ld32((c.r[3].w[0] - 624u));
    set32(c.r[5], c.r[28].w[0] - 29440u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[23].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] - 625u));
    st8((c.r[29].w[0] + 206u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] - 620u));
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    st8((c.r[29].w[0] + 212u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.budget -= 54;
L_0033F948:
    c.r[3].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033FA40; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033FA40; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 176u), c.f[3]);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[30].w[0]), c.f[0]);  if (t) { goto L_0033F9D0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[19].w[0]), c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 15;
L_0033F9D0:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FA24u); set32(c.r[8], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_004F(c, 128u, depth + 1u); else { c.pc = 0x0033EF40u; return; } if (c.pc != 0x0033FA24u) [[unlikely]] return; }
L_0033FA24:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[20], c.r[20].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F948u | kUnwind; return; } goto L_0033F948; } }
    c.budget -= 1;
L_0033FA40:
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
L_0033FA70:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 188u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 220u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 216u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 180u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 184u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[3].w[0] - 608u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[22].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[9].d[0] = ld16((c.r[3].w[0] - 606u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 194u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] - 604u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 196u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.f[1] = ld32((c.r[3].w[0] - 600u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = ld8((c.r[3].w[0] - 596u));
    st32((c.r[29].w[0] + 200u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] - 595u));
    st8((c.r[29].w[0] + 205u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = ld8((c.r[5].w[0] - 594u));
    c.f[0] = ld32((c.r[3].w[0] - 592u));
    set32(c.r[5], c.r[28].w[0] - 29448u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[23].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] - 593u));
    st8((c.r[29].w[0] + 206u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] - 588u));
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    st8((c.r[29].w[0] + 212u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.budget -= 54;
L_0033FB48:
    c.r[3].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033FC40; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033FC40; } }
    c.f[3] = ld32((c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 176u), c.f[3]);
    st32((c.r[19].w[0]), c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[30].w[0]), c.f[0]);  if (t) { goto L_0033FBD0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[19].w[0]), c.f[1]);
    st32((c.r[18].w[0]), c.f[0]);
    c.budget -= 15;
L_0033FBD0:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FC24u); set32(c.r[8], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_004F(c, 128u, depth + 1u); else { c.pc = 0x0033EF40u; return; } if (c.pc != 0x0033FC24u) [[unlikely]] return; }
L_0033FC24:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[20], c.r[20].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033FB48u | kUnwind; return; } goto L_0033FB48; } }
    c.budget -= 1;
L_0033FC40:
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
L_0033FC70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FC98u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0033FC98u) [[unlikely]] return; }
L_0033FC98:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FCA4u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0033FCA4u) [[unlikely]] return; }
L_0033FCA4:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FCB0u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0033FCB0u) [[unlikely]] return; }
L_0033FCB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033FCF4; } }
L_0033FCEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0033FD2C; } }
L_0033FCF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[7].w[0] - 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FD1Cu); set32(c.r[8], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_004F(c, 128u, depth + 1u); else { c.pc = 0x0033EF40u; return; } if (c.pc != 0x0033FD1Cu) [[unlikely]] return; }
L_0033FD1C:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033FCECu | kUnwind; return; } goto L_0033FCEC; } }
L_0033FD2C:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0033FD50:
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[15], ld32((c.r[5].w[0] + 344u)));
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.f[10] = ld32((c.r[29].w[0] + 300u));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[15].w[0] + 4u)));
    st32((c.r[28].w[0] - 29328u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 29336u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[15].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0033FF48; } }
L_0033FDA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[19], c.r[5].w[0] + 32u);
    c.r[4].d[0] = ld8((c.r[3].w[0] - 32u));
    set32(c.r[23], c.r[29].w[0] + 280u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[22], c.r[29].w[0] + 284u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[29].w[0] + 196u);
    set32(c.r[17], c.r[29].w[0] + 200u);
    set32(c.r[30], c.r[29].w[0] + 204u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[9].d[0] = ld16((c.r[3].w[0] - 30u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 258u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld16((c.r[3].w[0] - 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 260u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.f[1] = ld32((c.r[3].w[0] - 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[7].d[0] = ld8((c.r[3].w[0] - 20u));
    st32((c.r[29].w[0] + 264u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[29].w[0] + 268u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld8((c.r[3].w[0] - 19u));
    st8((c.r[29].w[0] + 269u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[6], c.r[28].w[0] - 29336u);
    st32((c.r[23].w[0]), c.r[6].w[0]);
    c.f[0] = ld32((c.r[3].w[0] - 16u));
    c.r[6].d[0] = ld8((c.r[5].w[0] - 18u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[28].w[0] - 29328u);
    st8((c.r[29].w[0] + 270u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[22].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] - 17u));
    c.r[4].d[0] = ld8((c.r[3].w[0] - 12u));
    st8((c.r[29].w[0] + 271u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 284u)));
    st8((c.r[29].w[0] + 276u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[21], ld32((c.r[3].w[0])));
    c.budget -= 43;
L_0033FE50:
    c.r[3].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0050(c, 2u, depth); } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0050(c, 2u, depth); } }
    c.f[3] = ld32((c.r[19].w[0]));
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[29].w[0] + 192u), c.f[3]);
    st32((c.r[18].w[0]), c.f[2]);
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[30].w[0]), c.f[0]);  if (t) { goto L_0033FED8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    c.f[0] = ld32((c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 192u), c.f[2]);
    st32((c.r[18].w[0]), c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 15;
L_0033FED8:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[7], c.r[29].w[0] + 256u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 184u);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FF2Cu); set32(c.r[8], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_004F(c, 128u, depth + 1u); else { c.pc = 0x0033EF40u; return; } if (c.pc != 0x0033FF2Cu) [[unlikely]] return; }
L_0033FF2C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[21], c.r[21].w[0] - 1u);
    set32(c.r[20], c.r[20].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033FE50u | kUnwind; return; } goto L_0033FE50; } }
    c.budget -= 1;
L_0033FF48:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[14], c.r[29].w[0] + 244u);
    set32(c.r[13], c.r[29].w[0] + 248u);
    set32(c.r[12], c.r[29].w[0] + 164u);
    set32(c.r[11], c.r[29].w[0] + 168u);
    set32(c.r[10], c.r[29].w[0] + 172u);
    set32(c.r[9], c.r[29].w[0] + 212u);
    set32(c.r[8], c.r[29].w[0] + 216u);
    set32(c.r[7], c.r[29].w[0] + 220u);
    set32(c.r[6], c.r[29].w[0] + 228u);
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 348u)));
    c.f[4] = c.r[20].w[0];
    c.f[9] = ld32((c.r[5].w[0] + 32u));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[7] = ld32((c.r[5].w[0] + 36u));
    c.f[6] = ld32((c.r[5].w[0] + 40u));
    c.f[2] = c.r[20].w[0];
    c.budget -= 20;
L_0033FF98:
    set32(c.r[21], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[20], ld32((c.r[28].w[0] - 29332u)));
    c.f[1] = ld32((c.r[21].w[0] + 52u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[0] = ld32((c.r[21].w[0] + 48u));
    set32(c.r[18], c.r[18].w[0] + 64u);
    c.f[3] = ld32((c.r[21].w[0] + 56u));
    st32((c.r[10].w[0]), c.f[10]);
    st32((c.r[7].w[0]), c.f[10]);
    set32(c.r[20], c.r[20].w[0] + c.r[17].w[0]);
    st32((c.r[14].w[0]), c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[7]);
    c.f[8] = fp::ee::sub(c.fcr31, c.f[0], c.f[9]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[3], c.f[6]);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    st32((c.r[13].w[0]), c.f[3]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[8], c.f[3]);
    st32((c.r[20].w[0]), c.f[8]);
    st32((c.r[20].w[0] + 4u), c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    c.budget -= 26;
    [[clang::musttail]] return unit_0050(c, 1u, depth);
}

}

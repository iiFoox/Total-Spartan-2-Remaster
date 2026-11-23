#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AE[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    56, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0,
    75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0,
    0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004B8000;
    case 2u: goto L_004B8010;
    case 3u: goto L_004B8038;
    case 4u: goto L_004B8090;
    case 5u: goto L_004B80B4;
    case 6u: goto L_004B80BC;
    case 7u: goto L_004B80C4;
    case 8u: goto L_004B80CC;
    case 9u: goto L_004B80D4;
    case 10u: goto L_004B8100;
    case 11u: goto L_004B8154;
    case 12u: goto L_004B83E8;
    case 13u: goto L_004B840C;
    case 14u: goto L_004B842C;
    case 15u: goto L_004B8438;
    case 16u: goto L_004B84BC;
    case 17u: goto L_004B8528;
    case 18u: goto L_004B8540;
    case 19u: goto L_004B8548;
    case 20u: goto L_004B85D8;
    case 21u: goto L_004B8648;
    case 22u: goto L_004B8660;
    case 23u: goto L_004B8668;
    case 24u: goto L_004B8704;
    case 25u: goto L_004B8758;
    case 26u: goto L_004B8798;
    case 27u: goto L_004B8830;
    case 28u: goto L_004B893C;
    case 29u: goto L_004B896C;
    case 30u: goto L_004B8A68;
    case 31u: goto L_004B8AA0;
    case 32u: goto L_004B8B60;
    case 33u: goto L_004B8B78;
    case 34u: goto L_004B8BCC;
    case 35u: goto L_004B8BE4;
    case 36u: goto L_004B8BF0;
    case 37u: goto L_004B8C4C;
    case 38u: goto L_004B8DC4;
    case 39u: goto L_004B8DD0;
    case 40u: goto L_004B8DDC;
    case 41u: goto L_004B8E10;
    case 42u: goto L_004B8E6C;
    case 43u: goto L_004B8EE8;
    case 44u: goto L_004B8FD0;
    case 45u: goto L_004B9044;
    case 46u: goto L_004B9070;
    case 47u: goto L_004B9148;
    case 48u: goto L_004B9150;
    case 49u: goto L_004B9158;
    case 50u: goto L_004B9230;
    case 51u: goto L_004B9240;
    case 52u: goto L_004B9298;
    case 53u: goto L_004B92F0;
    case 54u: goto L_004B9348;
    case 55u: goto L_004B9378;
    case 56u: goto L_004B9380;
    case 57u: goto L_004B9390;
    case 58u: goto L_004B9398;
    case 59u: goto L_004B93B0;
    case 60u: goto L_004B93B8;
    case 61u: goto L_004B9470;
    case 62u: goto L_004B947C;
    case 63u: goto L_004B9490;
    case 64u: goto L_004B94E8;
    case 65u: goto L_004B9540;
    case 66u: goto L_004B9598;
    case 67u: goto L_004B95A0;
    case 68u: goto L_004B95B0;
    case 69u: goto L_004B95FC;
    case 70u: goto L_004B96D8;
    case 71u: goto L_004B96F8;
    case 72u: goto L_004B98D0;
    case 73u: goto L_004B98E0;
    case 74u: goto L_004B98F0;
    case 75u: goto L_004B9900;
    case 76u: goto L_004B9910;
    case 77u: goto L_004B9A64;
    case 78u: goto L_004B9AB0;
    case 79u: goto L_004B9B90;
    case 80u: goto L_004B9BB0;
    case 81u: goto L_004B9D88;
    case 82u: goto L_004B9D98;
    case 83u: goto L_004B9DA8;
    case 84u: goto L_004B9DB8;
    case 85u: goto L_004B9DC8;
    case 86u: goto L_004B9E98;
    case 87u: goto L_004B9EE8;
    case 88u: goto L_004B9F38;
    case 89u: goto L_004B9F78;
    case 90u: goto L_004B9FD0;
    case 91u: goto L_004BA020;
    case 92u: goto L_004BA040;
    case 93u: goto L_004BA07C;
    case 94u: goto L_004BA0CC;
    case 95u: goto L_004BA1A0;
    case 96u: goto L_004BA1B0;
    case 97u: goto L_004BA1C0;
    case 98u: goto L_004BA1D4;
    case 99u: goto L_004BA1F0;
    case 100u: goto L_004BA224;
    case 101u: goto L_004BA2A0;
    case 102u: goto L_004BA340;
    case 103u: goto L_004BA378;
    case 104u: goto L_004BA380;
    case 105u: goto L_004BA39C;
    case 106u: goto L_004BA3A8;
    case 107u: goto L_004BA3E4;
    case 108u: goto L_004BA420;
    case 109u: goto L_004BA46C;
    case 110u: goto L_004BA478;
    case 111u: goto L_004BA48C;
    case 112u: goto L_004BA498;
    case 113u: goto L_004BA4B0;
    case 114u: goto L_004BA4D8;
    case 115u: goto L_004BA4E8;
    case 116u: goto L_004BA504;
    case 117u: goto L_004BA584;
    case 118u: goto L_004BA5A4;
    case 119u: goto L_004BA5B4;
    case 120u: goto L_004BA5E0;
    case 121u: goto L_004BA60C;
    case 122u: goto L_004BA620;
    case 123u: goto L_004BA658;
    case 124u: goto L_004BA670;
    case 125u: goto L_004BA690;
    case 126u: goto L_004BA6BC;
    case 127u: goto L_004BA6F0;
    case 128u: goto L_004BA728;
    case 129u: goto L_004BA740;
    case 130u: goto L_004BA760;
    case 131u: goto L_004BA930;
    case 132u: goto L_004BA97C;
    case 133u: goto L_004BAAF0;
    case 134u: goto L_004BABD0;
    case 135u: goto L_004BACCC;
    case 136u: goto L_004BAE2C;
    case 137u: goto L_004BAE68;
    case 138u: goto L_004BAFC0;
    case 139u: goto L_004BB0D0;
    case 140u: goto L_004BB188;
    case 141u: goto L_004BB2E4;
    case 142u: goto L_004BB320;
    case 143u: goto L_004BB478;
    case 144u: goto L_004BB580;
    case 145u: goto L_004BB5D4;
    case 146u: goto L_004BB70C;
    case 147u: goto L_004BB8E0;
    case 148u: goto L_004BB924;
    case 149u: goto L_004BB964;
    case 150u: goto L_004BBCC8;
    case 151u: goto L_004BBE10;
    case 152u: goto L_004BBE9C;
    case 153u: goto L_004BBEB8;
    case 154u: goto L_004BBEC0;
    case 155u: goto L_004BBED4;
    case 156u: goto L_004BBF88;
    case 157u: goto L_004BBF94;
    case 158u: goto L_004BBF9C;
    default: bad_entry(c, 0x004B8000u); return;
    }
L_004B8000:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B80DC; } }
L_004B8010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 26552u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B802C; } }
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 1;
L_004B802C:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_004B80B4; } }
L_004B8038:
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.r[3].d[0] = c.r[11].d[0] & 1ull;
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_004B8060; } }
    c.f[1] = ld32((c.r[10].w[0] + 8u));
    c.f[0] = ld32((c.r[10].w[0] + 24u));
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_004B8070; } }
L_004B8060:
    c.f[1] = ld32((c.r[10].w[0] + 24u));
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.budget -= 4;
L_004B8070:
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 26528u));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B80E4; } }
L_004B8090:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 26544u));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B80AC; } }
    st32((c.r[5].w[0]), c.f[1]);
    c.budget -= 1;
L_004B80AC:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 2;
L_004B80B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B80EC; } }
L_004B80BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7DB8u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 332u, depth); } }
L_004B80C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7E54u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 333u, depth); } }
L_004B80CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7EECu | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 334u, depth); } }
L_004B80D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7F84u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 335u, depth); } }
L_004B80DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8010u | kUnwind; return; } goto L_004B8010; } }
L_004B80E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8090u | kUnwind; return; } goto L_004B8090; } }
L_004B80EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B8100:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.f[21] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.f[20] = ld32((c.r[29].w[0] + 108u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8154u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x004B8154u) [[unlikely]] return; }
L_004B8154:
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.r[7].d[0] = 0ull | 0ull;
    c.f[3] = c.r[3].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FCD0000u);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] | 5451ull;
    c.r[4].d[0] = c.r[4].d[0] | 4059ull;
    c.f[4] = ld32((c.r[5].w[0] + 104u));
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[1] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[5] = 0u;
    c.f[2] = c.r[4].w[0];
    c.f[4] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    set32(c.r[3], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[3] = c.r[6].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 34;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B8208; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 312u));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004B81F8; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004B8200; } }
L_004B81F8:
    set32(c.r[3], 0u + 9u);
    st8((c.r[18].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004B8200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004B8810; } }
L_004B8208:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42F20000u);
    c.f[2] = ld32((c.r[3].w[0] + 26624u));
    c.f[4] = ld32((c.r[5].w[0] + 32u));
    c.f[3] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 26632u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    c.f[22] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B880C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 26648u));
    c.f[2] = ld32((c.r[4].w[0] + 26640u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42440000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B82AC; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 312u));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004B829C; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004B82A4; } }
L_004B829C:
    set32(c.r[3], 0u + 9u);
    st8((c.r[18].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004B82A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B880C; } }
L_004B82AC:
    c.f[0] = ld32((c.r[28].w[0] - 31048u));
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[7].d[0] = 0ull | 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[4] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = ld32((c.r[28].w[0] - 31048u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[8], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[5] = c.r[6].w[0];
    c.f[5] = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    set32(c.r[4], c.f[1]);
    c.f[5] = fp::cvt_w_s(c.f[5]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[29].w[0] + 164u), c.f[0]);
    c.f[4] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[5]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 172u), c.f[20]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 314u));
    c.r[7].d[0] = c.r[4].d[0] & 12ull;
    c.budget -= 45;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_004B838C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[5].d[0] = c.r[3].d[0] | 45928ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 26632u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[17].w[0]));  if (t) { goto L_004B83BC; } }
L_004B838C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = c.r[3].d[0] | 45928ull;
    c.f[1] = c.r[6].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[5].w[0] + 26624u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[3].w[0] + 26632u));
    c.f[4] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 12;
L_004B83BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[3].w[0] + 32u);  if (t) { goto L_004B86E4; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B83E8; } }
    c.r[3].d[0] = c.r[16].d[0] | 8ull;
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_004B83E8:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B86F0; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B840C; } }
    c.r[3].d[0] = c.r[16].d[0] | 2ull;
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_004B840C:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B841C; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.budget -= 1;
L_004B841C:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[5].d[0] = c.r[3].d[0] & 28ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004B86FC; } }
L_004B842C:
    c.r[5].d[0] = c.r[3].d[0] & 19ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004B870C; } }
L_004B8438:
    c.r[4].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B8560; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[4].w[0] + 26528u));
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004B846C; } }
    c.r[4].d[0] = c.r[5].d[0] | 4ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004B8488; } }
L_004B846C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[4].w[0] + 26544u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B8488; } }
    c.r[4].d[0] = c.r[5].d[0] | 8ull;
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 2;
L_004B8488:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = ld32((c.r[4].w[0] + 26536u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B8720; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[4].w[0] + 26552u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B84BC; } }
    c.r[4].d[0] = c.r[5].d[0] | 2ull;
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 2;
L_004B84BC:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B84CC; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.budget -= 1;
L_004B84CC:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 19ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B873C; } }
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 148u), c.f[0]);  if (t) { goto L_004B8504; } }
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0] + 136u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 152u), c.f[0]);  if (t) { goto L_004B8514; } }
L_004B8504:
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[29].w[0] + 136u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 4;
L_004B8514:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[3].w[0] + 26528u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 128u), c.f[2]);  if (t) { goto L_004B872C; } }
L_004B8528:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[3].w[0] + 26544u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B8734; } }
L_004B8540:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.budget -= 2;
L_004B8548:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[5] = ld32((c.r[3].w[0] + 26628u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[6] = ld32((c.r[3].w[0] + 26632u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[4] = ld32((c.r[29].w[0] + 128u));  if (t) { goto L_004B867C; } }
L_004B8560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[4].w[0] + 26528u));
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004B8588; } }
    c.r[4].d[0] = c.r[5].d[0] | 4ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004B85A4; } }
L_004B8588:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[4].w[0] + 26544u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B85A4; } }
    c.r[4].d[0] = c.r[5].d[0] | 8ull;
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 2;
L_004B85A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    c.f[0] = ld32((c.r[4].w[0] + 26536u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B8760; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[4].w[0] + 26552u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B85D8; } }
    c.r[4].d[0] = c.r[5].d[0] | 2ull;
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 2;
L_004B85D8:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B85E8; } }
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.budget -= 1;
L_004B85E8:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 28ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B877C; } }
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 148u), c.f[0]);  if (t) { goto L_004B8620; } }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[29].w[0] + 128u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 144u), c.f[0]);  if (t) { goto L_004B8630; } }
L_004B8620:
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[29].w[0] + 128u), c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.budget -= 4;
L_004B8630:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.f[0] = ld32((c.r[3].w[0] + 26536u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[2]);  if (t) { goto L_004B876C; } }
L_004B8648:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 26552u));
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B8774; } }
L_004B8660:
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 2;
L_004B8668:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[4] = ld32((c.r[4].w[0] + 26624u));
    c.f[6] = ld32((c.r[29].w[0] + 136u));
    c.f[5] = ld32((c.r[3].w[0] + 26628u));
    c.budget -= 5;
L_004B867C:
    c.f[0] = ld32((c.r[28].w[0] - 31048u));
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] + 32u);  if (t) { goto L_004B880C; } }
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B880C; } }
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[6]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 88u), c.f[3]);
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 84u), c.f[2]);  if (t) { goto L_004B87A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B880C; } }
L_004B86E4:
    c.r[3].d[0] = c.r[16].d[0] | 4ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B83E8u | kUnwind; return; } goto L_004B83E8; } }
L_004B86F0:
    c.r[3].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B840Cu | kUnwind; return; } goto L_004B840C; } }
L_004B86FC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B842Cu | kUnwind; return; } goto L_004B842C; } }
L_004B8704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B880C; } }
L_004B870C:
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8438u | kUnwind; return; } goto L_004B8438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8704u | kUnwind; return; } goto L_004B8704; } }
L_004B8720:
    c.r[4].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B84BCu | kUnwind; return; } goto L_004B84BC; } }
L_004B872C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8528u | kUnwind; return; } goto L_004B8528; } }
L_004B8734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8540u | kUnwind; return; } goto L_004B8540; } }
L_004B873C:
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8758u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 298u, depth + 1u); else { c.pc = 0x004B6FE0u; return; } if (c.pc != 0x004B8758u) [[unlikely]] return; }
L_004B8758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8548u | kUnwind; return; } goto L_004B8548; } }
L_004B8760:
    c.r[4].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B85D8u | kUnwind; return; } goto L_004B85D8; } }
L_004B876C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8648u | kUnwind; return; } goto L_004B8648; } }
L_004B8774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8660u | kUnwind; return; } goto L_004B8660; } }
L_004B877C:
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8798u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 302u, depth + 1u); else { c.pc = 0x004B70E0u; return; } if (c.pc != 0x004B8798u) [[unlikely]] return; }
L_004B8798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8668u | kUnwind; return; } goto L_004B8668; } }
L_004B87A0:
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 26656u), c.f[4]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 26660u), c.f[5]);
    set32(c.r[7], 0u - 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 26664u), c.f[6]);
    st32((c.r[3].w[0] + 26668u), c.f[21]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[6].w[0] + 26672u), c.f[3]);
    st32((c.r[5].w[0] + 26676u), c.f[2]);
    st32((c.r[4].w[0] + 26680u), c.f[1]);
    st32((c.r[3].w[0] + 26684u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 316u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[18].w[0] + 316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 315u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 27;
L_004B880C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004B8810:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004B8830:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[7].d[0] = 0ull | 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[20].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[28].w[0] - 31048u));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.f[6] = ld32((c.r[2].w[0] + 26528u));
    c.f[4] = ld32((c.r[29].w[0] + 204u));
    c.f[7] = fp::ee::div(c.fcr31, c.f[0], c.f[3]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 26528u));
    c.f[21] = ld32((c.r[3].w[0] + 36u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    set32(c.r[2], c.f[2]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[5] = c.r[6].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    set32(c.r[2], c.f[1]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[2] = c.r[4].w[0];
    c.f[5] = fp::cvt_w_s(c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::cvt_s_w(c.f[5]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.budget -= 60;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[22] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);  if (t) { goto L_004B8EA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[2].w[0] + 26544u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B893C; } }
    c.r[2].d[0] = c.r[20].d[0] | 8ull;
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_004B893C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[5] = ld32((c.r[2].w[0] + 26536u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[5]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B8EB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[2].w[0] + 26552u));
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B896C; } }
    c.r[2].d[0] = c.r[20].d[0] | 2ull;
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_004B896C:
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B897C; } }
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.budget -= 1;
L_004B897C:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[6].d[0] = 0ull | 0ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 32768ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[6].d[0] << 16;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 32u));
    c.f[3] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    c.f[2] = ld32((c.r[28].w[0] - 31048u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    st32((c.r[29].w[0] + 244u), c.f[0]);
    set32(c.r[7], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[7]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st32((c.r[29].w[0] + 252u), c.f[4]);
    c.f[4] = c.r[5].w[0];
    set32(c.r[2], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[4] = fp::cvt_w_s(c.f[4]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::cvt_s_w(c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[0] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[6]));
    st32((c.r[29].w[0] + 240u), c.f[1]);
    c.budget -= 38;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 248u), c.f[0]);  if (t) { goto L_004B8A20; } }
    c.r[2].d[0] = c.r[16].d[0] | 4ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004B8A3C; } }
L_004B8A20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[2].w[0] + 26544u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B8A3C; } }
    c.r[2].d[0] = c.r[16].d[0] | 8ull;
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_004B8A3C:
    c.f[1] = ld32((c.r[29].w[0] + 248u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B8EBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[2].w[0] + 26552u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B8A68; } }
    c.r[2].d[0] = c.r[16].d[0] | 2ull;
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_004B8A68:
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B8A78; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.budget -= 1;
L_004B8A78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 304u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B8A94; } }
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004B8A94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8AA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x004B8AA0u) [[unlikely]] return; }
L_004B8AA0:
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B8AB4; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31036u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004B8AB4:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004B8AFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004B8AF0; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B8AF0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B8AF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B8AFC; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B8AFC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_004B8EC8; } }
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B8B84; } }
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    st32((c.r[29].w[0] + 228u), c.f[21]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 212u), c.f[21]);  if (t) { goto L_004B8B38; } }
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[29].w[0] + 224u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.f[0]);  if (t) { goto L_004B8B48; } }
L_004B8B38:
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[29].w[0] + 224u), c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.budget -= 4;
L_004B8B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[29].w[0] + 232u);
    c.f[0] = ld32((c.r[2].w[0] + 26536u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[22]);  if (t) { goto L_004B8EF0; } }
L_004B8B60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[2].w[0] + 26552u));
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B8EF8; } }
L_004B8B78:
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 216u), c.f[0]);  if (t) { goto L_004B8BEC; } }
L_004B8B84:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    st32((c.r[29].w[0] + 228u), c.f[21]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 212u), c.f[21]);  if (t) { goto L_004B8BA8; } }
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[29].w[0] + 232u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 216u), c.f[0]);  if (t) { goto L_004B8BB8; } }
L_004B8BA8:
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[29].w[0] + 232u), c.f[1]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.budget -= 4;
L_004B8BB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[2].w[0] + 26528u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 224u), c.f[20]);  if (t) { goto L_004B8F00; } }
L_004B8BCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = ld32((c.r[2].w[0] + 26544u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B8F08; } }
L_004B8BE4:
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.budget -= 2;
L_004B8BEC:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_004B8BF0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] + 32u);  if (t) { goto L_004B8E1C; } }
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] & 28ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B8F10; } }
    c.r[4].d[0] = c.r[2].d[0] & 19ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B8C48; } }
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_004B8C40; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B8C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_004B8C4C; } }
L_004B8C48:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B8C4C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B8E1C; } }
    c.r[7].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[5], 0u - 3u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[20].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[20].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[19].d[0];
    set32(c.r[20], c.r[29].w[0] + 184u);
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[19].d[0] = c.r[2].d[0] & 4ull;
    c.r[22].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[21], c.r[4].w[0] << 2);
    set32(c.r[4], 0u - 2049u);
    c.r[22].d[0] = c.r[22].d[0] & c.r[4].d[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[4].d[0] = c.r[22].d[0] | c.r[4].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[29].w[0] + 212u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 208u));
    c.f[7] = ld32((c.r[29].w[0] + 224u));
    c.f[6] = ld32((c.r[29].w[0] + 228u));
    c.f[5] = ld32((c.r[29].w[0] + 232u));
    c.f[4] = ld32((c.r[29].w[0] + 236u));
    set32(c.r[3], c.r[29].w[0] + 216u);
    c.f[1] = ld32((c.r[3].w[0]));
    st32((c.r[18].w[0] + 26624u), c.f[7]);
    st32((c.r[25].w[0] + 26628u), c.f[6]);
    st32((c.r[24].w[0] + 26632u), c.f[5]);
    st32((c.r[15].w[0] + 26636u), c.f[4]);
    st32((c.r[14].w[0] + 26656u), c.f[3]);
    set32(c.r[3], c.r[29].w[0] + 220u);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[13].w[0] + 26660u), c.f[2]);
    st32((c.r[12].w[0] + 26664u), c.f[1]);
    st32((c.r[10].w[0] + 26672u), c.f[3]);
    st32((c.r[6].w[0] + 26640u), c.f[3]);
    st32((c.r[9].w[0] + 26676u), c.f[2]);
    st32((c.r[11].w[0] + 26668u), c.f[0]);
    set32(c.r[3], 0u - 5u);
    st32((c.r[5].w[0] + 26644u), c.f[2]);
    st32((c.r[8].w[0] + 26680u), c.f[1]);
    st32((c.r[23].w[0] + 26648u), c.f[1]);
    st32((c.r[7].w[0] + 26684u), c.f[0]);
    st32((c.r[30].w[0] + 26652u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 316u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[21].d[0];
    st8((c.r[17].w[0] + 316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 288u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 315u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], 0u - 2u);
    st8((c.r[17].w[0] + 314u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 316u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 212u);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[3], c.r[29].w[0] + 216u);
    c.f[1] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 180u), c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[3]);
    set32(c.r[3], c.r[29].w[0] + 220u);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[20].w[0]), c.f[1]);
    c.budget -= 92;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0] + 188u), c.f[0]);  if (t) { goto L_004B8F44; } }
L_004B8DC4:
    c.r[3].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B8F5C; } }
L_004B8DD0:
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B8F78; } }
L_004B8DDC:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B8E00; } }
    c.f[1] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0]), c.f[0]);
    c.budget -= 6;
L_004B8E00:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8E10u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 17u, depth + 1u); else { c.pc = 0x0028C3D0u; return; } if (c.pc != 0x004B8E10u) [[unlikely]] return; }
L_004B8E10:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004B8E9C; } }
L_004B8E1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B8E50; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004B8E58; } }
L_004B8E50:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_004B8E58:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8E6Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x004B8E6Cu) [[unlikely]] return; }
L_004B8E6C:
    c.f[3] = ld32((c.r[29].w[0] + 224u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[2] = ld32((c.r[29].w[0] + 228u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[6].w[0] + 26608u), c.f[3]);
    st32((c.r[5].w[0] + 26612u), c.f[2]);
    st32((c.r[4].w[0] + 26616u), c.f[1]);
    st32((c.r[3].w[0] + 26620u), c.f[0]);
    c.budget -= 12;
L_004B8E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_004B8F94; } }
L_004B8EA4:
    c.r[2].d[0] = c.r[20].d[0] | 4ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B893Cu | kUnwind; return; } goto L_004B893C; } }
L_004B8EB0:
    c.r[2].d[0] = c.r[20].d[0] | 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B896Cu | kUnwind; return; } goto L_004B896C; } }
L_004B8EBC:
    c.r[2].d[0] = c.r[16].d[0] | 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8A68u | kUnwind; return; } goto L_004B8A68; } }
L_004B8EC8:
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[7], c.r[29].w[0] + 240u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B8EE8u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 331u, depth + 1u); else { c.pc = 0x004B7D40u; return; } if (c.pc != 0x004B8EE8u) [[unlikely]] return; }
L_004B8EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8BF0u | kUnwind; return; } goto L_004B8BF0; } }
L_004B8EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8B60u | kUnwind; return; } goto L_004B8B60; } }
L_004B8EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8B78u | kUnwind; return; } goto L_004B8B78; } }
L_004B8F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8BCCu | kUnwind; return; } goto L_004B8BCC; } }
L_004B8F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 224u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8BE4u | kUnwind; return; } goto L_004B8BE4; } }
L_004B8F10:
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], 0u + 1u);  if (t) { goto L_004B8F3C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B8F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8C4Cu | kUnwind; return; } goto L_004B8C4C; } }
L_004B8F44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8DC4u | kUnwind; return; } goto L_004B8DC4; } }
L_004B8F5C:
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8DD0u | kUnwind; return; } goto L_004B8DD0; } }
L_004B8F78:
    c.f[1] = ld32((c.r[20].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8DDCu | kUnwind; return; } goto L_004B8DDC; } }
L_004B8F94:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_004B8FD0:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.f[22] = ld32((c.r[29].w[0] + 476u));
    c.f[23] = ld32((c.r[29].w[0] + 508u));
    c.f[24] = ld32((c.r[29].w[0] + 492u));
    c.f[25] = ld32((c.r[29].w[0] + 540u));
    c.f[26] = ld32((c.r[29].w[0] + 524u));
    c.budget -= 26;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B9F80; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 291u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B95B8; } }
L_004B9044:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 312u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[29].w[0] + 416u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004B95A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 23760u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x004B8000u < 16384u) { entry = entries_00AE[(t - 0x004B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004B9070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[7] = ld32((c.r[2].w[0] + 26496u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[5] = 0u;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[6] = ld32((c.r[28].w[0] - 31048u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 624u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[4] = ld32((c.r[2].w[0] + 26500u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[3] = ld32((c.r[2].w[0] + 26504u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[9].w[0] + 26580u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[2] = ld32((c.r[2].w[0] + 26512u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[2].w[0] + 26516u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[2].w[0] + 26520u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    st32((c.r[6].w[0] + 26596u), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 636u);
    st32((c.r[2].w[0]), c.f[25]);
    set32(c.r[2], c.r[29].w[0] + 652u);
    st32((c.r[2].w[0]), c.f[26]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 26588u), c.f[25]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 26604u), c.f[26]);
    set32(c.r[2], c.r[29].w[0] + 628u);
    st32((c.r[2].w[0]), c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 644u);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[7], c.f[6]);
    set32(c.r[2], c.r[29].w[0] + 632u);
    st32((c.r[10].w[0] + 26576u), c.f[1]);
    st32((c.r[29].w[0] + 624u), c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[8].w[0] + 26584u), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 640u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[6]);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 648u);
    st32((c.r[7].w[0] + 26592u), c.f[1]);
    st32((c.r[3].w[0] + 26600u), c.f[0]);
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9148u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 27u, depth + 1u); else { c.pc = 0x004B8830u; return; } if (c.pc != 0x004B9148u) [[unlikely]] return; }
L_004B9148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9150u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 79u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x004B9150u) [[unlikely]] return; }
L_004B9150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B95A0; } }
L_004B9158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[7] = ld32((c.r[2].w[0] + 26496u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[5] = 0u;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[6] = ld32((c.r[28].w[0] - 31048u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 592u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[4] = ld32((c.r[2].w[0] + 26500u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[3] = ld32((c.r[2].w[0] + 26504u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[9].w[0] + 26580u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[2] = ld32((c.r[2].w[0] + 26512u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[2].w[0] + 26516u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[2].w[0] + 26520u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    st32((c.r[6].w[0] + 26596u), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 604u);
    st32((c.r[2].w[0]), c.f[23]);
    set32(c.r[2], c.r[29].w[0] + 620u);
    st32((c.r[2].w[0]), c.f[24]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 26588u), c.f[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 26604u), c.f[24]);
    set32(c.r[2], c.r[29].w[0] + 596u);
    st32((c.r[2].w[0]), c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 612u);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[7], c.f[6]);
    set32(c.r[2], c.r[29].w[0] + 600u);
    st32((c.r[10].w[0] + 26576u), c.f[1]);
    st32((c.r[29].w[0] + 592u), c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[6]);
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[8].w[0] + 26584u), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 608u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[6]);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 616u);
    st32((c.r[7].w[0] + 26592u), c.f[1]);
    st32((c.r[3].w[0] + 26600u), c.f[0]);
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9230u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00AE(c, 10u, depth + 1u); else { c.pc = 0x004B8100u; return; } if (c.pc != 0x004B9230u) [[unlikely]] return; }
L_004B9230:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 316u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B95CC; } }
L_004B9240:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 26u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004B99C8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004B9288; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B9288; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004B9288:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004B95A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B99C8; } }
L_004B9298:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 26u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004B99F8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004B92E0; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B92E0; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004B92E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004B95A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B99F8; } }
L_004B92F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 26u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004B9A28; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004B9338; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B9338; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004B9338:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004B95A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B9A28; } }
L_004B9348:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 316u));
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 9u);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 313u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004B9A58; } }
    c.budget -= 1;
L_004B9378:
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004B9380:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 416u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004B95A0; } }
    c.budget -= 1;
L_004B9390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9398u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 308u, depth + 1u); else { c.pc = 0x004B74A0u; return; } if (c.pc != 0x004B9398u) [[unlikely]] return; }
L_004B9398:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 312u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004B95A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B93B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 79u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x004B93B0u) [[unlikely]] return; }
L_004B93B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B95A0; } }
L_004B93B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.f[2] = ld32((c.r[28].w[0] - 31048u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.r[10].d[0] = 0ull | 0ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[10].d[0] = c.r[10].d[0] << 16;
    set32(c.r[2], c.r[29].w[0] + 548u);
    c.r[10].d[0] = c.r[10].d[0] | 32768ull;
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 560u);
    set32(c.r[6], c.r[29].w[0] + 544u);
    c.f[5] = ld32((c.r[3].w[0] + 32u));
    c.f[4] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[28].w[0] - 31048u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[3], c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 556u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.r[10].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    c.f[4] = c.r[9].w[0];
    st32((c.r[2].w[0]), c.f[22]);
    set32(c.r[2], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.r[8].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    set32(c.r[2], c.r[29].w[0] + 552u);
    c.f[3] = c.r[7].w[0];
    c.f[4] = fp::cvt_w_s(c.f[4]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::cvt_s_w(c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    st32((c.r[29].w[0] + 544u), c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9470u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00AD(c, 306u, depth + 1u); else { c.pc = 0x004B71E0u; return; } if (c.pc != 0x004B9470u) [[unlikely]] return; }
L_004B9470:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B947Cu); set32(c.r[5], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_00AE(c, 10u, depth + 1u); else { c.pc = 0x004B8100u; return; } if (c.pc != 0x004B947Cu) [[unlikely]] return; }
L_004B947C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 316u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B9A80; } }
    c.budget -= 1;
L_004B9490:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 26u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004B9E80; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004B94D8; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B94D8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004B94D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004B95A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B9E80; } }
L_004B94E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 26u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004B9ED0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004B9530; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B9530; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004B9530:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004B95A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B9ED0; } }
L_004B9540:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 26u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004B9F20; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004B9588; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B9588; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004B9588:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004B95A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B9F20; } }
L_004B9598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B95A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 79u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x004B95A0u) [[unlikely]] return; }
L_004B95A0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 416u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9044u | kUnwind; return; } goto L_004B9044; } }
    c.budget -= 1;
L_004B95B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  if (t) { goto L_004B9F84; } }
L_004B95B8:
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004B9F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9044u | kUnwind; return; } goto L_004B9044; } }
L_004B95CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.f[3] = ld32((c.r[2].w[0] + 26656u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[2].w[0] + 26664u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[12] = c.f[20];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B95FCu); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x004B95FCu) [[unlikely]] return; }
L_004B95FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[4].d[0] = c.r[4].d[0] | 63875ull;
    c.r[7].d[0] = 0ull | 0ull;
    c.f[4] = c.r[4].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[5].d[0] = c.r[4].d[0] | 4059ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[5] = ld32((c.r[3].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[4].w[0];
    c.f[2] = 0u;
    c.f[3] = c.r[5].w[0];
    c.f[5] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    set32(c.r[4], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[4] = c.r[6].w[0];
    c.f[4] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[4]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 33;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9240u | kUnwind; return; } goto L_004B9240; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[21]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9240u | kUnwind; return; } goto L_004B9240; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B9910; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 315u));
    c.r[4].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B9940; } }
    c.r[4].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B96D8; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.budget -= 1;
L_004B96D8:
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B9948; } }
    c.r[4].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B96F8; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_004B96F8:
    c.r[4].d[0] = c.r[5].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B9710; } }
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
L_004B9710:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[4], 0u - 3u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[20], 0u - 17u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[18].d[0] = c.r[4].d[0] & c.r[20].d[0];
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[4]);
    c.r[4].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = 0ull & 1ull;
    c.r[21].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[20], c.r[4].w[0] << 2);
    c.r[18].d[0] = c.r[19].d[0] & 4ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[4]);
    set32(c.r[4], 0u - 2049u);
    c.r[21].d[0] = c.r[21].d[0] & c.r[4].d[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[4].d[0] = c.r[21].d[0] | c.r[4].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[4] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = ld32((c.r[12].w[0] + 26676u));
    c.f[1] = ld32((c.r[10].w[0] + 26680u));
    c.f[3] = ld32((c.r[14].w[0] + 26672u));
    c.f[0] = ld32((c.r[8].w[0] + 26684u));
    st32((c.r[17].w[0] + 26624u), c.f[4]);
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[25].w[0] + 26628u), c.f[4]);
    c.f[4] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[24].w[0] + 26632u), c.f[4]);
    c.f[4] = ld32((c.r[3].w[0] + 44u));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    st32((c.r[15].w[0] + 26636u), c.f[4]);
    st32((c.r[13].w[0] + 26656u), c.f[3]);
    st32((c.r[11].w[0] + 26660u), c.f[2]);
    st32((c.r[9].w[0] + 26664u), c.f[1]);
    st32((c.r[7].w[0] + 26668u), c.f[0]);
    st32((c.r[6].w[0] + 26672u), c.f[3]);
    st32((c.r[3].w[0] + 26644u), c.f[2]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[3]);
    st32((c.r[30].w[0] + 26640u), c.f[3]);
    st32((c.r[5].w[0] + 26676u), c.f[2]);
    st32((c.r[22].w[0] + 26680u), c.f[1]);
    st32((c.r[23].w[0] + 26684u), c.f[0]);
    st32((c.r[3].w[0] + 26648u), c.f[1]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[3]);
    st32((c.r[3].w[0] + 26652u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 316u));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[20].d[0];
    st8((c.r[16].w[0] + 316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 288u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 315u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 314u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 316u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[16].w[0] + 316u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[2].w[0] + 26672u));
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 448u), c.f[3]);
    c.f[2] = ld32((c.r[2].w[0] + 26676u));
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[2].w[0] + 26680u));
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[2].w[0] + 26684u));
    set32(c.r[2], c.r[29].w[0] + 452u);
    st32((c.r[2].w[0]), c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 456u);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 460u);
    c.budget -= 111;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_004B9950; } }
    c.budget -= 1;
L_004B98D0:
    c.r[2].d[0] = c.r[19].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B9968; } }
    c.budget -= 1;
L_004B98E0:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B9988; } }
    c.budget -= 1;
L_004B98F0:
    c.r[2].d[0] = c.r[19].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B99A8; } }
    c.budget -= 1;
L_004B9900:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], c.r[29].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9910u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 17u, depth + 1u); else { c.pc = 0x0028C3D0u; return; } if (c.pc != 0x004B9910u) [[unlikely]] return; }
L_004B9910:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 312u));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004B9930; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9240u | kUnwind; return; } goto L_004B9240; } }
    c.budget -= 1;
L_004B9930:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9240u | kUnwind; return; } goto L_004B9240; } }
    c.budget -= 1;
L_004B9940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(8ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B96D8u | kUnwind; return; } goto L_004B96D8; } }
L_004B9948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B96F8u | kUnwind; return; } goto L_004B96F8; } }
L_004B9950:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 448u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B98D0u | kUnwind; return; } goto L_004B98D0; } }
L_004B9968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[1] = ld32((c.r[29].w[0] + 448u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 448u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B98E0u | kUnwind; return; } goto L_004B98E0; } }
    c.budget -= 1;
L_004B9988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[29].w[0] + 456u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B98F0u | kUnwind; return; } goto L_004B98F0; } }
    c.budget -= 1;
L_004B99A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[29].w[0] + 456u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9900u | kUnwind; return; } goto L_004B9900; } }
    c.budget -= 1;
L_004B99C8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 313u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 313u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = ld32((c.r[28].w[0] - 31044u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 304u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B95A0u | kUnwind; return; } goto L_004B95A0; } }
    c.budget -= 1;
L_004B99F8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 313u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 313u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = ld32((c.r[28].w[0] - 31044u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 304u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B95A0u | kUnwind; return; } goto L_004B95A0; } }
    c.budget -= 1;
L_004B9A28:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 313u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 313u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = ld32((c.r[28].w[0] - 31044u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 304u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B95A0u | kUnwind; return; } goto L_004B95A0; } }
    c.budget -= 1;
L_004B9A58:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9A64u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x004B9A64u) [[unlikely]] return; }
L_004B9A64:
    c.r[1].d[0] = c.r[2].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9378u | kUnwind; return; } goto L_004B9378; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9380u | kUnwind; return; } goto L_004B9380; } }
    c.budget -= 1;
L_004B9A80:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[3] = ld32((c.r[3].w[0] + 26656u));
    c.f[0] = ld32((c.r[2].w[0] + 26664u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[12] = c.f[20];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9AB0u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x004B9AB0u) [[unlikely]] return; }
L_004B9AB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[4].d[0] = c.r[4].d[0] | 63875ull;
    c.r[7].d[0] = 0ull | 0ull;
    c.f[4] = c.r[4].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[5].d[0] = c.r[4].d[0] | 4059ull;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[5] = ld32((c.r[3].w[0] + 104u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[4].w[0];
    c.f[2] = 0u;
    c.f[3] = c.r[5].w[0];
    c.f[5] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    set32(c.r[4], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[4] = c.r[6].w[0];
    c.f[4] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[4]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 33;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9490u | kUnwind; return; } goto L_004B9490; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[21]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9490u | kUnwind; return; } goto L_004B9490; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B9DC8; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 315u));
    c.r[4].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B9DF8; } }
    c.r[4].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B9B90; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.budget -= 2;
L_004B9B90:
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B9E00; } }
    c.r[4].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B9BB0; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_004B9BB0:
    c.r[4].d[0] = c.r[5].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B9BC8; } }
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
L_004B9BC8:
    c.r[6].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[4], 0u - 3u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[20]);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[22], 0u - 17u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[20]);
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[20].d[0] = c.r[4].d[0] & c.r[22].d[0];
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[4]);
    c.r[4].d[0] = c.r[20].d[0] | c.r[21].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = 0ull & 1ull;
    c.r[24].d[0] = ld16((c.r[3].w[0] + 544u));
    set32(c.r[22], c.r[4].w[0] << 2);
    c.r[20].d[0] = c.r[21].d[0] & 4ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[4]);
    set32(c.r[4], 0u - 2049u);
    c.r[24].d[0] = c.r[24].d[0] & c.r[4].d[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[4].d[0] = c.r[24].d[0] | c.r[4].d[0];
    st16((c.r[3].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[4] = ld32((c.r[3].w[0] + 32u));
    c.f[2] = ld32((c.r[12].w[0] + 26676u));
    c.f[1] = ld32((c.r[10].w[0] + 26680u));
    c.f[3] = ld32((c.r[14].w[0] + 26672u));
    c.f[0] = ld32((c.r[8].w[0] + 26684u));
    st32((c.r[19].w[0] + 26624u), c.f[4]);
    c.f[4] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[18].w[0] + 26628u), c.f[4]);
    c.f[4] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[17].w[0] + 26632u), c.f[4]);
    c.f[4] = ld32((c.r[3].w[0] + 44u));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    st32((c.r[15].w[0] + 26636u), c.f[4]);
    st32((c.r[13].w[0] + 26656u), c.f[3]);
    st32((c.r[11].w[0] + 26660u), c.f[2]);
    st32((c.r[9].w[0] + 26664u), c.f[1]);
    st32((c.r[7].w[0] + 26668u), c.f[0]);
    st32((c.r[6].w[0] + 26672u), c.f[3]);
    st32((c.r[3].w[0] + 26644u), c.f[2]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[3]);
    st32((c.r[30].w[0] + 26640u), c.f[3]);
    st32((c.r[5].w[0] + 26676u), c.f[2]);
    st32((c.r[25].w[0] + 26680u), c.f[1]);
    st32((c.r[23].w[0] + 26684u), c.f[0]);
    st32((c.r[3].w[0] + 26648u), c.f[1]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[3]);
    st32((c.r[3].w[0] + 26652u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 316u));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[22].d[0];
    st8((c.r[16].w[0] + 316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 288u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 315u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 314u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 316u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[16].w[0] + 316u), static_cast<std::uint8_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[2].w[0] + 26672u));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 432u), c.f[3]);
    c.f[2] = ld32((c.r[2].w[0] + 26676u));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.f[1] = ld32((c.r[2].w[0] + 26680u));
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[2].w[0] + 26684u));
    set32(c.r[2], c.r[29].w[0] + 436u);
    st32((c.r[2].w[0]), c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 440u);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 444u);
    c.budget -= 111;
    { const bool t = c.r[20].d[0] != 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_004B9E08; } }
    c.budget -= 1;
L_004B9D88:
    c.r[2].d[0] = c.r[21].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B9E20; } }
    c.budget -= 1;
L_004B9D98:
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B9E40; } }
    c.budget -= 1;
L_004B9DA8:
    c.r[2].d[0] = c.r[21].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B9E60; } }
    c.budget -= 1;
L_004B9DB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9DC8u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 17u, depth + 1u); else { c.pc = 0x0028C3D0u; return; } if (c.pc != 0x004B9DC8u) [[unlikely]] return; }
L_004B9DC8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 312u));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004B9DE8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9490u | kUnwind; return; } goto L_004B9490; } }
    c.budget -= 1;
L_004B9DE8:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9490u | kUnwind; return; } goto L_004B9490; } }
    c.budget -= 1;
L_004B9DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(8ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9B90u | kUnwind; return; } goto L_004B9B90; } }
L_004B9E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9BB0u | kUnwind; return; } goto L_004B9BB0; } }
L_004B9E08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 432u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9D88u | kUnwind; return; } goto L_004B9D88; } }
L_004B9E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[1] = ld32((c.r[29].w[0] + 432u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 432u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9D98u | kUnwind; return; } goto L_004B9D98; } }
    c.budget -= 1;
L_004B9E40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[29].w[0] + 440u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9DA8u | kUnwind; return; } goto L_004B9DA8; } }
    c.budget -= 1;
L_004B9E60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[29].w[0] + 440u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B9DB8u | kUnwind; return; } goto L_004B9DB8; } }
    c.budget -= 1;
L_004B9E80:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 313u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9E98u); st8((c.r[16].w[0] + 313u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x004B9E98u) [[unlikely]] return; }
L_004B9E98:
    set32(c.r[4], c.r[2].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], 0u + 5u);
    st32((c.r[16].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = ld32((c.r[28].w[0] - 31040u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 304u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B95A0u | kUnwind; return; } goto L_004B95A0; } }
    c.budget -= 1;
L_004B9ED0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 313u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9EE8u); st8((c.r[16].w[0] + 313u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x004B9EE8u) [[unlikely]] return; }
L_004B9EE8:
    set32(c.r[4], c.r[2].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], 0u + 5u);
    st32((c.r[16].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = ld32((c.r[28].w[0] - 31040u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 304u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B95A0u | kUnwind; return; } goto L_004B95A0; } }
    c.budget -= 1;
L_004B9F20:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 313u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9F38u); st8((c.r[16].w[0] + 313u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x004B9F38u) [[unlikely]] return; }
L_004B9F38:
    set32(c.r[4], c.r[2].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], 0u + 5u);
    st32((c.r[16].w[0] + 308u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = ld32((c.r[28].w[0] - 31040u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 304u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B95A0u | kUnwind; return; } goto L_004B95A0; } }
    c.budget -= 1;
L_004B9F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B9F78u);  if (depth < kMaxDepth) unit_006E(c, 79u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x004B9F78u) [[unlikely]] return; }
L_004B9F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B95B0u | kUnwind; return; } goto L_004B95B0; } }
L_004B9F80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_004B9F84:
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
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
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_004B9FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004BA020; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 28080u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[28].w[0] - 28284u), static_cast<std::uint8_t>(0u));
    st16((c.r[2].w[0] + 23518u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 5u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[2].w[0] + 23520u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA020u); st16((c.r[2].w[0] + 23522u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_006E(c, 196u, depth + 1u); else { c.pc = 0x003BB3B0u; return; } if (c.pc != 0x004BA020u) [[unlikely]] return; }
L_004BA020:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004BA040:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 24160u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0] + 8u), 0ull);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[9], 0u + 23u);
    set32(c.r[10], c.r[10].w[0] - 24128u);
    set32(c.r[11], c.r[11].w[0] - 24144u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA07Cu); st64((c.r[29].w[0] + 16u), 0ull);  if (depth < kMaxDepth) unit_006E(c, 177u, depth + 1u); else { c.pc = 0x003BB040u; return; } if (c.pc != 0x004BA07Cu) [[unlikely]] return; }
L_004BA07C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[2], c.r[2].w[0] - 28080u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[16].w[0] + 304u), 0u);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] << 3);
    st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 9u);
    st8((c.r[16].w[0] + 313u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 316u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA0CCu); st8((c.r[28].w[0] - 28284u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x004BA0CCu) [[unlikely]] return; }
L_004BA0CC:
    set32(c.r[12], ld32((c.r[16].w[0] + 48u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[12].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[5] = ld32((c.r[2].w[0] + 26496u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[4] = ld32((c.r[9].w[0] + 26512u));
    st32((c.r[3].w[0] + 26572u), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 26516u));
    set32(c.r[3], 0u + 100u);
    c.f[6] = ld32((c.r[10].w[0] + 26504u));
    c.f[1] = ld32((c.r[5].w[0] + 26520u));
    c.f[7] = ld32((c.r[11].w[0] + 26500u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    set32(c.r[7], 0u + 300u);
    set32(c.r[10], 0u + 30u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    st16((c.r[2].w[0] + 23518u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st16((c.r[2].w[0] + 23522u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[2].w[0] + 23520u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[8].w[0] + 26560u), c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[7]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[7]);
    st32((c.r[6].w[0] + 26564u), c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[6]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[6]);
    st32((c.r[4].w[0] + 26568u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[3].w[0] + 792u), c.r[5].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 51;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004BA1A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6990u | kUnwind; return; } [[clang::musttail]] return unit_00AD(c, 273u, depth); }
L_004BA1B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B8FD0u | kUnwind; return; } goto L_004B8FD0; }
L_004BA1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA1D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 108u, depth + 1u); else { c.pc = 0x003B9C00u; return; } if (c.pc != 0x004BA1D4u) [[unlikely]] return; }
L_004BA1D4:
    st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004BA1F0:
    set32(c.r[8], ld32((c.r[5].w[0])));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], c.r[8].w[0] << 4);
    set32(c.r[8], c.r[7].w[0] - c.r[8].w[0]);
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] << 4);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);  if (t) { goto L_004BA288; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004BA224:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_004BA278; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[9].d[0] == c.r[3].d[0];  if (t) { goto L_004BA288; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[7], ld32((c.r[8].w[0])));
    st32((c.r[8].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[7].w[0]);  if (t) { goto L_004BA288; } }
L_004BA278:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BA224u | kUnwind; return; } goto L_004BA224; } }
L_004BA288:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004BA2A0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BA2BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004BA330; } }
L_004BA2BC:
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0] + 1132u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 1132u)));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[6].w[0] + 1152u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[6].w[0] + 1156u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[6].w[0] + 1160u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[6].w[0] + 1164u), c.f[0]);
    st32((c.r[6].w[0] + 1168u), 0u);
    c.f[0] = ld32((c.r[2].w[0] - 23568u));
    st32((c.r[6].w[0] + 1172u), c.f[0]);
    st32((c.r[6].w[0] + 1180u), 0u);
    st8((c.r[6].w[0] + 1184u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 1128u)));
    c.budget -= 29;
L_004BA330:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004BA340:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004BA380; } }
L_004BA378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BA400; } }
L_004BA380:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[16], c.r[17].w[0] << 2);
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA39Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 151u, depth + 1u); else { c.pc = 0x004BBE10u; return; } if (c.pc != 0x004BA39Cu) [[unlikely]] return; }
L_004BA39C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004BA3C4; } }
    c.budget -= 1;
L_004BA3A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BA380u | kUnwind; return; } goto L_004BA380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BA378u | kUnwind; return; } goto L_004BA378; } }
L_004BA3C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 108u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 1128u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA3E4u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 99u, depth + 1u); else { c.pc = 0x004BA1F0u; return; } if (c.pc != 0x004BA3E4u) [[unlikely]] return; }
L_004BA3E4:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BA3A8u | kUnwind; return; } goto L_004BA3A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BA3A8u | kUnwind; return; } goto L_004BA3A8; } }
    c.budget -= 1;
L_004BA400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004BA420:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004BA470; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA46Cu); set32(c.r[5], c.r[5].w[0] - 22800u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004BA46Cu) [[unlikely]] return; }
L_004BA46C:
    st32((c.r[21].w[0] + 8u), 0u);
    c.budget -= 1;
L_004BA470:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004BA568; } }
L_004BA478:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0])));  if (t) { goto L_004BA490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA48Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004BA48Cu) [[unlikely]] return; }
L_004BA48C:
    st32((c.r[21].w[0] + 12u), 0u);
    c.budget -= 1;
L_004BA490:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004BA5AC; } }
L_004BA498:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004BA560; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004BA4B0:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 1u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[4].w[0] + c.r[18].w[0]);
    st32((c.r[16].w[0] + 1128u), c.r[20].w[0]);
    st8((c.r[16].w[0] + 1184u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1140u), 0u);
    st32((c.r[16].w[0] + 1136u), 0u);
    st8((c.r[16].w[0] + 1144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_004BA4D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 9992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA4E8u); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004BA4E8u) [[unlikely]] return; }
L_004BA4E8:
    set32(c.r[3], c.r[19].w[0] << 3);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[17], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA504u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x004BA504u) [[unlikely]] return; }
L_004BA504:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 20ll ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st8((c.r[17].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = ld8((c.r[17].w[0] + 10u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BA4D8u | kUnwind; return; } goto L_004BA4D8; } }
    st32((c.r[16].w[0] + 1120u), 0u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1200u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BA4B0u | kUnwind; return; } goto L_004BA4B0; } }
L_004BA560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_004BA5BC; } }
L_004BA568:
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA584u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004BA584u) [[unlikely]] return; }
L_004BA584:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23072u);
    set32(c.r[6], c.r[6].w[0] - 22800u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA5A4u); set32(c.r[7], 0u + 1200u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004BA5A4u) [[unlikely]] return; }
L_004BA5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BA478u | kUnwind; return; } goto L_004BA478; } }
L_004BA5AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA5B4u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004BA5B4u) [[unlikely]] return; }
L_004BA5B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BA498u | kUnwind; return; } goto L_004BA498; } }
L_004BA5BC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004BA5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 22896u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 23008u);
    set32(c.r[7], 0u + 56u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA60Cu); set32(c.r[8], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x004BA60Cu) [[unlikely]] return; }
L_004BA60C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004BA620:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004BA670; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004BA658; } }
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_004BA658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA658u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x004BA658u) [[unlikely]] return; }
L_004BA658:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004BA670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA670u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004BA670u) [[unlikely]] return; }
L_004BA670:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004BA690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA6BCu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x004BA6BCu) [[unlikely]] return; }
L_004BA6BC:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 19ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004BA6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004BA740; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004BA728; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], 0u + 56u);
    set32(c.r[5], c.r[5].w[0] - 23008u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA728u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x004BA728u) [[unlikely]] return; }
L_004BA728:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004BA740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA740u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004BA740u) [[unlikely]] return; }
L_004BA740:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004BA760:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0] + 140u), c.r[6].w[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 142u));
    c.f[7] = ld32((c.r[3].w[0] - 23600u));
    set32(c.r[6], c.r[29].w[0] + 271u);
    c.f[3] = ld32((c.r[2].w[0] - 23596u));
    c.f[20] = c.f[12];
    c.f[4] = ld32((c.r[4].w[0] + 1120u));
    c.f[0] = c.r[16].w[0];
    st8((c.r[29].w[0] + 270u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[20], c.f[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = ld8((c.r[29].w[0] + 140u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[7]);
    c.f[22] = fp::ee::div(c.fcr31, c.f[5], c.f[3]);
    st8((c.r[29].w[0] + 268u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[6] = ld32((c.r[3].w[0] - 23544u));
    c.f[3] = 0u;
    c.f[5] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.f[2] = ld32((c.r[2].w[0] - 23616u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[5]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[21], c.f[2]);
    c.r[2].d[0] = c.r[3].d[0] | 4059ull;
    c.r[3].d[0] = ld8((c.r[29].w[0] + 143u));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[2].w[0] - 23536u));
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 49;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);  if (t) { goto L_004BA880; } }
    c.f[1] = fp::ee::div(c.fcr31, c.f[21], c.f[6]);
    set32(c.r[2], c.r[29].w[0] + 143u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004BA850; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004BA86C; } }
L_004BA850:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004BA86C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004BA8FC; } }
L_004BA880:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[2].w[0] - 23540u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004BA8FC; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 143u);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[6]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004BA8C0; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004BA8DC; } }
L_004BA8C0:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004BA8DC:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_004BA8FC:
    vu::sub4<1>(c.vu0, 15u, 1u, 1u, 1u);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[29].w[0] + 192u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    st8((c.r[29].w[0] + 269u), static_cast<std::uint8_t>(c.r[3].w[0]));
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA930u); st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[3]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004BA930u) [[unlikely]] return; }
L_004BA930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.f[3] = ld32((c.r[2].w[0] - 23544u));
    c.r[5].d[0] = c.r[4].d[0] | 4059ull;
    c.f[2] = ld32((c.r[17].w[0] + 1120u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] & 1ull;
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[3]);
    c.f[4] = ld32((c.r[3].w[0] - 23600u));
    c.f[0] = c.r[4].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BA97Cu); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004BA97Cu) [[unlikely]] return; }
L_004BA97C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[19], c.r[29].w[0] + 196u);
    c.f[7] = ld32((c.r[3].w[0] - 23592u));
    set32(c.r[18], c.r[29].w[0] + 180u);
    c.f[1] = 0u;
    set32(c.r[14], c.r[29].w[0] + 212u);
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[12], c.r[29].w[0] + 224u);
    set32(c.r[25], c.r[29].w[0] + 200u);
    set32(c.r[24], c.r[29].w[0] + 184u);
    set32(c.r[8], c.r[29].w[0] + 244u);
    set32(c.r[13], c.r[29].w[0] + 216u);
    st32((c.r[29].w[0] + 152u), 0u);
    set32(c.r[6], c.r[29].w[0] + 152u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[10], c.r[29].w[0] + 232u);
    c.f[6] = ld32((c.r[3].w[0] - 23588u));
    set32(c.r[15], c.r[29].w[0] + 208u);
    set32(c.r[7], c.r[29].w[0] + 248u);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.f[8] = ld32((c.r[19].w[0]));
    set32(c.r[11], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 148u), c.f[21]);
    set32(c.r[9], c.r[29].w[0] + 240u);
    set32(c.r[4], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 144u), 0u);
    set32(c.r[20], c.r[29].w[0] + 192u);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[5] = ld32((c.r[3].w[0] - 23584u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[4] = ld32((c.r[3].w[0] - 23600u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[22]);
    set32(c.r[3], c.r[29].w[0] + 168u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[5], c.f[0]);
    c.f[11] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[7], c.f[3]);
    st32((c.r[29].w[0] + 180u), c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[11]);
    c.f[10] = ld32((c.r[18].w[0]));
    c.f[5] = ld32((c.r[14].w[0]));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0]));
    st32((c.r[29].w[0] + 184u), c.f[11]);
    c.f[9] = ld32((c.r[24].w[0]));
    c.f[7] = ld32((c.r[25].w[0]));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[10]);
    st32((c.r[14].w[0]), c.f[5]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[11]);
    c.f[5] = ld32((c.r[8].w[0]));
    c.f[4] = ld32((c.r[13].w[0]));
    c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[9]);
    st32((c.r[12].w[0]), c.f[0]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[10]);
    st32((c.r[25].w[0]), c.f[7]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[9]);
    c.f[6] = ld32((c.r[15].w[0]));
    st32((c.r[13].w[0]), c.f[4]);
    c.f[8] = fp::ee::mul(c.fcr31, c.f[8], c.f[10]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[11]);
    st32((c.r[19].w[0]), c.f[8]);
    st32((c.r[15].w[0]), c.f[6]);
    c.f[8] = ld32((c.r[11].w[0]));
    c.f[6] = ld32((c.r[9].w[0]));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 1160u));
    st32((c.r[8].w[0]), c.f[5]);
    c.f[7] = ld32((c.r[10].w[0]));
    c.f[8] = fp::ee::mul(c.fcr31, c.f[8], c.f[10]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[7], c.f[9]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[11]);
    c.f[4] = ld32((c.r[7].w[0]));
    st32((c.r[10].w[0]), c.f[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 1156u));
    st32((c.r[29].w[0] + 176u), c.f[11]);
    st32((c.r[11].w[0]), c.f[8]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[9]);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[17].w[0] + 1152u));
    st32((c.r[9].w[0]), c.f[6]);
    st32((c.r[3].w[0]), c.f[5]);
    st32((c.r[4].w[0]), c.f[4]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 160u), c.f[3]);
    c.budget -= 93;
L_004BAAF0:
    c.f[0] = ld32((c.r[20].w[0]));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.f[2] = ld32((c.r[20].w[0] + 12u));
    c.r[3].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[2] = ld32((c.r[20].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[2]);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[2] = ld32((c.r[20].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[2]);
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BAAF0u | kUnwind; return; } goto L_004BAAF0; } }
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 268u));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 269u));
    set32(c.r[9], c.r[17].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 270u));
    set32(c.r[8], ld32((c.r[9].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 271u));
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[30]);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[8].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[8].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[9].w[0] + 24u)));
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004BABD0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[5] = ld32((c.r[2].w[0] - 23600u));
    c.f[3] = ld32((c.r[3].w[0] - 23596u));
    c.f[27] = c.f[12];
    c.f[0] = ld32((c.r[4].w[0] + 1120u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[27], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[5]);
    c.f[26] = fp::ee::div(c.fcr31, c.f[4], c.f[3]);
    c.f[2] = ld32((c.r[2].w[0] - 23552u));
    c.f[1] = ld32((c.r[3].w[0] - 23548u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[26], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 1120u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] - 23544u));
    c.f[0] = ld32((c.r[4].w[0] + 1120u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 44;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 204u), c.r[5].w[0]);  if (t) { goto L_004BAC88; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 1120u), c.f[0]);
    c.budget -= 2;
L_004BAC88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    set32(c.r[22], c.r[29].w[0] + 206u);
    c.f[23] = c.r[2].w[0];
    set32(c.r[19], c.r[29].w[0] + 334u);
    c.f[20] = 0u;
    set32(c.r[18], c.r[29].w[0] + 207u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    set32(c.r[17], c.r[29].w[0] + 335u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    set32(c.r[16], c.r[29].w[0] + 333u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[23], c.r[29].w[0] + 244u);
    c.f[22] = c.r[3].w[0];
    set32(c.r[30], c.r[29].w[0] + 248u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 17;
L_004BACCC:
    c.f[0] = c.r[20].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[3] = ld32((c.r[21].w[0] + 1120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[5] = ld32((c.r[3].w[0] - 23544u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 204u));
    c.f[1] = ld32((c.r[2].w[0] - 23616u));
    c.r[4].d[0] = ld8((c.r[22].w[0]));
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[29].w[0] + 332u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[2] = 0u;
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[2].w[0] - 23536u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[25] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[4]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[25], c.f[1]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);  if (t) { goto L_004BAD80; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004BAD40; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004BAD5C; } }
L_004BAD40:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004BAD5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[2].w[0] - 23544u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[25], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004BADF8; } }
    c.budget -= 1;
L_004BAD80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[2].w[0] - 23540u));
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004BADF8; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[25], c.f[0]);
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[5]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004BADBC; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004BADD8; } }
L_004BADBC:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004BADD8:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_004BADF8:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    set32(c.r[2], c.r[29].w[0] + 256u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAE2Cu); st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[3]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004BAE2Cu) [[unlikely]] return; }
L_004BAE2C:
    c.r[4].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[27], c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] - 23544u));
    c.f[1] = ld32((c.r[21].w[0] + 1120u));
    c.f[3] = ld32((c.r[3].w[0] - 23600u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[24] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BAE68u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004BAE68u) [[unlikely]] return; }
L_004BAE68:
    set32(c.r[3], c.r[29].w[0] + 212u);
    set32(c.r[15], c.r[29].w[0] + 260u);
    st32((c.r[3].w[0]), c.f[25]);
    set32(c.r[12], c.r[29].w[0] + 276u);
    set32(c.r[3], c.r[29].w[0] + 216u);
    set32(c.r[14], c.r[29].w[0] + 264u);
    st32((c.r[3].w[0]), c.f[20]);
    set32(c.r[13], c.r[29].w[0] + 272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], c.r[29].w[0] + 308u);
    c.f[6] = ld32((c.r[3].w[0] - 23600u));
    set32(c.r[11], c.r[29].w[0] + 280u);
    c.f[2] = 0u;
    set32(c.r[8], c.r[29].w[0] + 296u);
    c.f[3] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[10], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    c.f[7] = ld32((c.r[15].w[0]));
    set32(c.r[9], c.r[29].w[0] + 292u);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[3].w[0] - 23584u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[26]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[5] = ld32((c.r[3].w[0] - 23592u));
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[4] = ld32((c.r[3].w[0] - 23588u));
    c.f[6] = ld32((c.r[14].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 240u), c.f[1]);
    st32((c.r[30].w[0]), c.f[1]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[4]);
    c.f[4] = ld32((c.r[12].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[8]);
    st32((c.r[12].w[0]), c.f[4]);
    c.f[5] = ld32((c.r[13].w[0]));
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.f[4] = ld32((c.r[6].w[0]));
    c.f[3] = ld32((c.r[11].w[0]));
    st32((c.r[14].w[0]), c.f[6]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[8]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[13].w[0]), c.f[5]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[11].w[0]), c.f[3]);
    st32((c.r[10].w[0]), c.f[0]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[8]);
    st32((c.r[15].w[0]), c.f[7]);
    c.f[7] = ld32((c.r[9].w[0]));
    c.f[6] = ld32((c.r[8].w[0]));
    st32((c.r[6].w[0]), c.f[4]);
    c.f[5] = ld32((c.r[7].w[0]));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[21].w[0] + 1152u));
    c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[8]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    st32((c.r[8].w[0]), c.f[4]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[5].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[21].w[0] + 1160u));
    set32(c.r[5], c.r[29].w[0] + 228u);
    c.f[1] = ld32((c.r[21].w[0] + 1156u));
    st32((c.r[7].w[0]), c.f[4]);
    st32((c.r[23].w[0]), c.f[8]);
    st32((c.r[9].w[0]), c.f[7]);
    st32((c.r[29].w[0] + 224u), c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[25]);
    st32((c.r[5].w[0]), c.f[4]);
    set32(c.r[5], c.r[29].w[0] + 232u);
    st32((c.r[5].w[0]), c.f[3]);
    c.budget -= 86;
L_004BAFC0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BAFC0u | kUnwind; return; } goto L_004BAFC0; } }
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    c.r[8].d[0] = ld8((c.r[29].w[0] + 332u));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[7].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[10], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[9], ld32((c.r[10].w[0] + 28u)));
    c.r[3].d[0] = c.r[20].sd[0] < 20ll ? 1ull : 0ull;
    c.r[6].d[0] = ld8((c.r[19].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[30]);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[10].w[0] + 24u)));
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[30]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BACCCu | kUnwind; return; } goto L_004BACCC; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
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
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_004BB0D0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 248u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 244u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 206u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 334u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 207u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 335u);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 204u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    set32(c.r[16], c.r[29].w[0] + 333u);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[2].w[0] - 23580u));
    c.f[1] = ld32((c.r[3].w[0] - 23600u));
    c.f[27] = c.f[12];
    c.f[20] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[27], c.f[1]);
    c.f[26] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[23] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[3].w[0];
    c.f[21] = c.r[2].w[0];
    c.budget -= 46;
L_004BB188:
    c.f[0] = c.r[20].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[3] = ld32((c.r[21].w[0] + 1120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[5] = ld32((c.r[3].w[0] - 23544u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 204u));
    c.f[1] = ld32((c.r[2].w[0] - 23616u));
    c.r[4].d[0] = ld8((c.r[22].w[0]));
    c.f[4] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[29].w[0] + 332u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[2] = 0u;
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[2].w[0] - 23536u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[25] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[4]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[25], c.f[1]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[12] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);  if (t) { goto L_004BB238; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004BB1FC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004BB218; } }
L_004BB1FC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004BB218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[2].w[0] - 23544u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[25], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004BB2B0; } }
L_004BB238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[2].w[0] - 23540u));
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004BB2B0; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[25], c.f[0]);
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[5]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004BB274; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004BB290; } }
L_004BB274:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004BB290:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_004BB2B0:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    set32(c.r[2], c.r[29].w[0] + 256u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB2E4u); st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[3]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004BB2E4u) [[unlikely]] return; }
L_004BB2E4:
    c.r[4].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = c.r[4].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[27], c.f[0]);
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] - 23544u));
    c.f[1] = ld32((c.r[21].w[0] + 1120u));
    c.f[3] = ld32((c.r[3].w[0] - 23600u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[24] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB320u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[2]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004BB320u) [[unlikely]] return; }
L_004BB320:
    set32(c.r[3], c.r[29].w[0] + 212u);
    set32(c.r[15], c.r[29].w[0] + 260u);
    st32((c.r[3].w[0]), c.f[25]);
    set32(c.r[12], c.r[29].w[0] + 276u);
    set32(c.r[3], c.r[29].w[0] + 216u);
    set32(c.r[14], c.r[29].w[0] + 264u);
    st32((c.r[3].w[0]), c.f[20]);
    set32(c.r[13], c.r[29].w[0] + 272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], c.r[29].w[0] + 308u);
    c.f[6] = ld32((c.r[3].w[0] - 23600u));
    set32(c.r[11], c.r[29].w[0] + 280u);
    c.f[2] = 0u;
    set32(c.r[8], c.r[29].w[0] + 296u);
    c.f[3] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[10], c.r[29].w[0] + 288u);
    set32(c.r[7], c.r[29].w[0] + 304u);
    set32(c.r[5], c.r[29].w[0] + 312u);
    c.f[7] = ld32((c.r[15].w[0]));
    set32(c.r[9], c.r[29].w[0] + 292u);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[3].w[0] - 23584u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[24], c.f[26]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[5] = ld32((c.r[3].w[0] - 23592u));
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[4] = ld32((c.r[3].w[0] - 23588u));
    c.f[6] = ld32((c.r[14].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    st32((c.r[29].w[0] + 240u), c.f[1]);
    st32((c.r[30].w[0]), c.f[1]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    set32(c.r[3], c.r[29].w[0] + 256u);
    c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[4]);
    c.f[4] = ld32((c.r[12].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[8]);
    st32((c.r[12].w[0]), c.f[4]);
    c.f[5] = ld32((c.r[13].w[0]));
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.f[4] = ld32((c.r[6].w[0]));
    c.f[3] = ld32((c.r[11].w[0]));
    st32((c.r[14].w[0]), c.f[6]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[8]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[13].w[0]), c.f[5]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[11].w[0]), c.f[3]);
    st32((c.r[10].w[0]), c.f[0]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[8]);
    st32((c.r[15].w[0]), c.f[7]);
    c.f[7] = ld32((c.r[9].w[0]));
    c.f[6] = ld32((c.r[8].w[0]));
    st32((c.r[6].w[0]), c.f[4]);
    c.f[5] = ld32((c.r[7].w[0]));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[21].w[0] + 1152u));
    c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[8]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    st32((c.r[8].w[0]), c.f[4]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[5].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[21].w[0] + 1160u));
    set32(c.r[5], c.r[29].w[0] + 228u);
    c.f[1] = ld32((c.r[21].w[0] + 1156u));
    st32((c.r[7].w[0]), c.f[4]);
    st32((c.r[23].w[0]), c.f[8]);
    st32((c.r[9].w[0]), c.f[7]);
    st32((c.r[29].w[0] + 224u), c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[25]);
    st32((c.r[5].w[0]), c.f[4]);
    set32(c.r[5], c.r[29].w[0] + 232u);
    st32((c.r[5].w[0]), c.f[3]);
    c.budget -= 86;
L_004BB478:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB478u | kUnwind; return; } goto L_004BB478; } }
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    c.r[8].d[0] = ld8((c.r[29].w[0] + 332u));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[7].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[10], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[9], ld32((c.r[10].w[0] + 28u)));
    c.r[3].d[0] = c.r[20].sd[0] < 20ll ? 1ull : 0ull;
    c.r[6].d[0] = ld8((c.r[19].w[0]));
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[30]);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[9].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[9].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[9].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[10].w[0] + 24u)));
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 26;
    { const bool t = c.r[3].d[0] != 0ull; st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[30]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB188u | kUnwind; return; } goto L_004BB188; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
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
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_004BB580:
    set32(c.r[29], c.r[29].w[0] - 336u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    set32(c.r[3], c.r[29].w[0] + 332u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_004BB5F0; } }
L_004BB5D4:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB5D4u | kUnwind; return; } goto L_004BB5D4; } }
L_004BB5F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[19], c.r[29].w[0] + 333u);
    c.r[5].d[0] = ld8((c.r[2].w[0] - 23648u));
    set32(c.r[22], c.r[29].w[0] + 334u);
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[29].w[0] + 332u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0] - 23647u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] - 23646u));
    set32(c.r[2], ld32((c.r[21].w[0] + 1180u)));
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004BB6D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[2].w[0] - 20412u));
    c.f[1] = ld32((c.r[21].w[0] + 1168u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[21].w[0] + 1168u), c.f[1]);  if (t) { goto L_004BB6D8; } }
    set32(c.r[7], ld32((c.r[21].w[0] + 1180u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[21].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0] + 36u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] - 23556u));
    set32(c.r[5], ld32((c.r[21].w[0] + 1180u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 40u), c.f[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 1180u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 52u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 1180u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[21].w[0] + 1180u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[21].w[0] + 1172u));
    c.f[0] = ld32((c.r[21].w[0] + 1168u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 1168u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] - 23564u));
    c.f[0] = ld32((c.r[21].w[0] + 1172u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 1172u), c.f[0]);
    c.budget -= 34;
L_004BB6D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[4].d[0] = c.r[3].d[0] | 4059ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    set32(c.r[17], c.r[29].w[0] + 335u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[23], c.r[29].w[0] + 244u);
    c.f[24] = c.r[4].w[0];
    set32(c.r[30], c.r[29].w[0] + 248u);
    c.f[23] = c.r[3].w[0];
    c.f[22] = c.r[2].w[0];
    c.f[21] = 0u;
    c.budget -= 13;
L_004BB70C:
    set32(c.r[2], ld32((c.r[21].w[0] + 1180u)));
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004BBD78; } }
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[18], c.r[21].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 52u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[18].w[0] + 52u);  if (t) { goto L_004BB8E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[3].w[0] - 23600u));
    c.r[4].d[0] = ld8((c.r[2].w[0] - 23604u));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004BB828; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] - 23603u));
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[2], c.r[18].w[0] + 48u);  if (t) { goto L_004BB778; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004BB794; } }
L_004BB778:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[5] = fp::cvt_s_w(c.f[0]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_004BB794:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] - 23612u)));
    c.f[0] = 0u;
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[2] = ld32((c.r[3].w[0] - 23600u));
    c.f[3] = c.r[4].w[0];
    c.f[4] = fp::cvt_s_w(c.f[3]);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[3].w[0] - 23596u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[5], c.f[4]);
    set32(c.r[3], c.r[6].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[4]);
    c.f[2] = c.r[6].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], c.f[2]);
    c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 31;
    { const bool t = c.r[3].sd[0] >= 0; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004BB8D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0] - 23608u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004BB8D0; } }
L_004BB828:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004BB8D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[2].w[0] - 23603u));
    c.f[0] = 0u;
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 23608u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[2].w[0] - 23596u));
    set32(c.r[2], c.r[3].w[0] - c.r[6].w[0]);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[4] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], c.r[4].w[0] - 1u);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[1]);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[3]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 34;
    { const bool t = c.r[2].sd[0] >= 0; c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);  if (t) { goto L_004BB8D0; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0]; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_004BB8D0; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004BB8D0:
    set32(c.r[6], ld32((c.r[29].w[0] + 332u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB8E0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 130u, depth + 1u); else { c.pc = 0x004BA760u; return; } if (c.pc != 0x004BB8E0u) [[unlikely]] return; }
L_004BB8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004BBDB0; } }
L_004BB8E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[4] = ld32((c.r[2].w[0] - 23544u));
    c.f[1] = c.r[20].w[0];
    c.f[2] = ld32((c.r[21].w[0] + 1120u));
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[2].w[0] - 23616u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[25] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[3]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[25], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB924u); c.f[12] = fp::ee::mul(c.fcr31, c.f[24], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004BB924u) [[unlikely]] return; }
L_004BB924:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.f[3] = ld32((c.r[2].w[0] - 23600u));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[20] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = ld32((c.r[2].w[0] - 23544u));
    c.f[0] = ld32((c.r[21].w[0] + 1120u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BB964u); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[2]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004BB964u) [[unlikely]] return; }
L_004BB964:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[5] = ld32((c.r[3].w[0] - 23592u));
    set32(c.r[6], c.r[18].w[0] + 36u);
    c.f[2] = ld32((c.r[2].w[0] - 23588u));
    set32(c.r[5], c.r[18].w[0] + 40u);
    c.f[6] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[3].w[0] - 23600u));
    c.f[4] = ld32((c.r[2].w[0] - 23584u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] - c.r[20].w[0]);
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[2]);
    set32(c.r[4], c.r[2].w[0] << 3);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[22]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] - 23632u));
    c.f[2] = ld32((c.r[3].w[0] - 23628u));
    c.f[4] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[2].w[0] - 23624u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[7]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[7]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[4]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    st32((c.r[29].w[0] + 240u), c.f[3]);
    st32((c.r[23].w[0]), c.f[2]);
    st32((c.r[30].w[0]), c.f[1]);
    c.budget -= 46;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 36u), c.f[0]);  if (t) { goto L_004BBA38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[21].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0]), c.f[21]);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] - 23612u)));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_004BBA38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[2].w[0] - 23560u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] - 23604u));
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004BBA68; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004BBA84; } }
L_004BBA68:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004BBA84:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[2].w[0] - 23536u));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[0]));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004BBB10; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004BBAD0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004BBAEC; } }
L_004BBAD0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004BBAEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[2].w[0] - 23544u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[25], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004BBB90; } }
    c.budget -= 1;
L_004BBB10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[2].w[0] - 23540u));
    fpu_compare(c, fp::key(c.f[25]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004BBB90; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[25], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.f[0] = ld32((c.r[2].w[0] - 23544u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004BBB54; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004BBB70; } }
L_004BBB54:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004BBB70:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_004BBB90:
    set32(c.r[2], c.r[29].w[0] + 256u);
    c.f[0] = ld32((c.r[21].w[0] + 1156u));
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    set32(c.r[5], c.r[29].w[0] + 304u);
    set32(c.r[4], c.r[29].w[0] + 308u);
    set32(c.r[3], c.r[29].w[0] + 212u);
    set32(c.r[8], c.r[29].w[0] + 288u);
    st32((c.r[3].w[0]), c.f[25]);
    set32(c.r[10], c.r[29].w[0] + 276u);
    c.f[10] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[3], c.r[29].w[0] + 216u);
    c.f[6] = ld32((c.r[5].w[0]));
    set32(c.r[9], c.r[29].w[0] + 280u);
    c.f[4] = fp::ee::add(c.fcr31, c.f[0], c.f[25]);
    set32(c.r[11], c.r[29].w[0] + 272u);
    vu::sub4<1>(c.vu0, 15u, 1u, 1u, 1u);
    set32(c.r[13], c.r[29].w[0] + 260u);
    set32(c.r[12], c.r[29].w[0] + 264u);
    set32(c.r[7], c.r[29].w[0] + 292u);
    set32(c.r[6], c.r[29].w[0] + 296u);
    c.r[14].d[0] = 0ull + 0ull;
    c.f[9] = ld32((c.r[23].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[6], c.f[10]);
    vu::addbc4<1>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    st32((c.r[3].w[0]), c.f[21]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], c.r[29].w[0] + 312u);
    c.f[1] = ld32((c.r[21].w[0] + 1152u));
    c.f[3] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    c.f[7] = ld32((c.r[30].w[0]));
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[5] = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    vu::sub4<0>(c.vu0, 15u, 2u, 2u, 2u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[9]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st32((c.r[4].w[0]), c.f[0]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[7]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[3], c.r[29].w[0] + 228u);
    c.f[0] = ld32((c.r[8].w[0]));
    c.f[2] = ld32((c.r[10].w[0]));
    c.f[3] = ld32((c.r[11].w[0]));
    c.f[8] = ld32((c.r[13].w[0]));
    c.f[6] = ld32((c.r[12].w[0]));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[10]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[10]);
    st32((c.r[29].w[0] + 256u), c.f[1]);
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[9]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[10]);
    c.f[8] = fp::ee::mul(c.fcr31, c.f[8], c.f[9]);
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[7]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[9]);
    st32((c.r[3].w[0]), c.f[4]);
    c.f[1] = ld32((c.r[9].w[0]));
    set32(c.r[3], c.r[29].w[0] + 232u);
    st32((c.r[10].w[0]), c.f[0]);
    st32((c.r[11].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 208u), c.f[21]);
    st32((c.r[29].w[0] + 224u), c.f[5]);
    st32((c.r[13].w[0]), c.f[8]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[21].w[0] + 1160u));
    st32((c.r[12].w[0]), c.f[6]);
    st32((c.r[7].w[0]), c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[21]);
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[3].w[0]), c.f[3]);
    c.f[2] = 0u;
    c.budget -= 78;
L_004BBCC8:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[3].d[0] = c.r[14].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BBCC8u | kUnwind; return; } goto L_004BBCC8; } }
    set32(c.r[2], c.r[20].w[0] << 3);
    set32(c.r[3], c.r[29].w[0] + 256u);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    c.r[6].d[0] = ld8((c.r[29].w[0] + 332u));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[5].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[8], c.r[21].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[7], ld32((c.r[8].w[0] + 28u)));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[30]);  if (t) { goto L_004BBDB0; } }
    c.budget -= 1;
L_004BBD78:
    set32(c.r[2], c.r[20].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    c.r[5].d[0] = ld8((c.r[29].w[0] + 332u));
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[4].d[0] = ld8((c.r[19].w[0]));
    set32(c.r[6], c.r[21].w[0] + c.r[2].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[6].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[22].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_004BBDB0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004BB70Cu | kUnwind; return; } goto L_004BB70C; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 192u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
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
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_004BBE10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00AF(c, 11u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].d[0] = ld8((c.r[2].w[0] - 23648u));
    c.r[5].d[0] = ld8((c.r[3].w[0] - 23647u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] - 23646u));
    st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 1132u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[17].w[0] + 1152u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[17].w[0] + 1156u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[17].w[0] + 1160u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    st32((c.r[17].w[0] + 1164u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1184u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[29].w[0] + 62u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00AF(c, 11u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 23520u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x004B8000u < 16384u) { entry = entries_00AE[(t - 0x004B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004BBE9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 23604u));
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBEB8u); c.f[12] = ld32((c.r[3].w[0] - 23600u));  if (depth < kMaxDepth) unit_00AE(c, 134u, depth + 1u); else { c.pc = 0x004BABD0u; return; } if (c.pc != 0x004BBEB8u) [[unlikely]] return; }
L_004BBEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00AF(c, 12u, depth); } }
L_004BBEC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[2].w[0] - 23612u)));
    st32((c.r[17].w[0] + 1124u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 1184u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_004BBED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = ld8((c.r[2].w[0] - 23603u));
    set32(c.r[4], ld32((c.r[17].w[0] + 1124u)));
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] < 0; set32(c.r[6], ld32((c.r[3].w[0] - 23612u)));  if (t) { goto L_004BBEF8; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[5] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004BBF14; } }
L_004BBEF8:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[5] = fp::cvt_s_w(c.f[0]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[5]);
    c.budget -= 7;
L_004BBF14:
    c.f[2] = c.r[6].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[3] = ld32((c.r[2].w[0] - 23600u));
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.f[4] = fp::cvt_s_w(c.f[2]);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[2] = fp::ee::div(c.fcr31, c.f[5], c.f[4]);
    c.f[0] = ld32((c.r[2].w[0] - 23596u));
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1124u)));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 1124u), c.r[2].w[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[4]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    c.f[0] = 0u;
    c.f[1] = c.r[3].w[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.budget -= 29;
    { const bool t = c.r[2].sd[0] < 0; c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);  if (t) { [[clang::musttail]] return unit_00AF(c, 13u, depth); } }
L_004BBF88:
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004BBF94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 134u, depth + 1u); else { c.pc = 0x004BABD0u; return; } if (c.pc != 0x004BBF94u) [[unlikely]] return; }
L_004BBF94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00AF(c, 11u, depth); } }
L_004BBF9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 23608u)));
    c.f[0] = 0u;
    c.r[6].d[0] = ld8((c.r[3].w[0] - 23604u));
    set32(c.r[4], ld32((c.r[17].w[0] + 1124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[2] = ld32((c.r[2].w[0] - 23596u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 23603u));
    c.f[3] = c.r[5].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = ld32((c.r[2].w[0] - 23600u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[2], c.r[3].w[0] - c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    c.f[4] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[3]);
    set32(c.r[2], c.r[4].w[0] - 1u);
    st32((c.r[17].w[0] + 1124u), c.r[2].w[0]);
    c.f[2] = fp::cvt_s_w(c.f[4]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = c.r[4].w[0];
    c.budget -= 25;
    [[clang::musttail]] return unit_00AF(c, 1u, depth);
}

}

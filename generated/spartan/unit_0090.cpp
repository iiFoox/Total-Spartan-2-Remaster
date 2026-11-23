#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0090[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 17, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0,
    0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 72,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 76, 0, 77, 78, 0, 79, 80, 0, 0, 81, 82, 0,
    83, 84, 0, 85, 86, 0, 0, 0, 87, 88, 0, 89, 90, 0, 91, 92, 0, 93, 94, 0, 0, 95, 96, 0, 97, 98, 0, 99, 100, 0, 101, 102,
    0, 0, 103, 104, 0, 105, 106, 0, 107, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 123, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0090(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00440000;
    case 2u: goto L_00440018;
    case 3u: goto L_00440020;
    case 4u: goto L_00440030;
    case 5u: goto L_0044003C;
    case 6u: goto L_0044004C;
    case 7u: goto L_00440054;
    case 8u: goto L_00440084;
    case 9u: goto L_00440098;
    case 10u: goto L_004400AC;
    case 11u: goto L_004400BC;
    case 12u: goto L_00440124;
    case 13u: goto L_00440158;
    case 14u: goto L_0044019C;
    case 15u: goto L_004401CC;
    case 16u: goto L_004401D8;
    case 17u: goto L_004401DC;
    case 18u: goto L_004401F0;
    case 19u: goto L_00440208;
    case 20u: goto L_00440210;
    case 21u: goto L_00440250;
    case 22u: goto L_00440258;
    case 23u: goto L_00440268;
    case 24u: goto L_0044027C;
    case 25u: goto L_004402E0;
    case 26u: goto L_004402F4;
    case 27u: goto L_004403B0;
    case 28u: goto L_004403D0;
    case 29u: goto L_004403E4;
    case 30u: goto L_004403F0;
    case 31u: goto L_004403FC;
    case 32u: goto L_00440450;
    case 33u: goto L_00440470;
    case 34u: goto L_0044048C;
    case 35u: goto L_004404C4;
    case 36u: goto L_004404D4;
    case 37u: goto L_004404E4;
    case 38u: goto L_004404F4;
    case 39u: goto L_00440504;
    case 40u: goto L_00440514;
    case 41u: goto L_00440580;
    case 42u: goto L_004405A8;
    case 43u: goto L_004405B0;
    case 44u: goto L_004405E4;
    case 45u: goto L_0044073C;
    case 46u: goto L_00440744;
    case 47u: goto L_00440770;
    case 48u: goto L_004408C4;
    case 49u: goto L_004408CC;
    case 50u: goto L_004408F8;
    case 51u: goto L_00440A4C;
    case 52u: goto L_00440A54;
    case 53u: goto L_00440A7C;
    case 54u: goto L_00440A84;
    case 55u: goto L_00440AAC;
    case 56u: goto L_00440AB4;
    case 57u: goto L_00440ADC;
    case 58u: goto L_00440AE4;
    case 59u: goto L_00440B0C;
    case 60u: goto L_00440B14;
    case 61u: goto L_00440B3C;
    case 62u: goto L_00440B44;
    case 63u: goto L_00440B70;
    case 64u: goto L_00440CC0;
    case 65u: goto L_00440CE0;
    case 66u: goto L_00440D00;
    case 67u: goto L_00440D20;
    case 68u: goto L_00440D40;
    case 69u: goto L_00440D50;
    case 70u: goto L_00440D5C;
    case 71u: goto L_00440D70;
    case 72u: goto L_00440D7C;
    case 73u: goto L_00440D94;
    case 74u: goto L_00440DB0;
    case 75u: goto L_00440DCC;
    case 76u: goto L_00440DD0;
    case 77u: goto L_00440DD8;
    case 78u: goto L_00440DDC;
    case 79u: goto L_00440DE4;
    case 80u: goto L_00440DE8;
    case 81u: goto L_00440DF4;
    case 82u: goto L_00440DF8;
    case 83u: goto L_00440E00;
    case 84u: goto L_00440E04;
    case 85u: goto L_00440E0C;
    case 86u: goto L_00440E10;
    case 87u: goto L_00440E20;
    case 88u: goto L_00440E24;
    case 89u: goto L_00440E2C;
    case 90u: goto L_00440E30;
    case 91u: goto L_00440E38;
    case 92u: goto L_00440E3C;
    case 93u: goto L_00440E44;
    case 94u: goto L_00440E48;
    case 95u: goto L_00440E54;
    case 96u: goto L_00440E58;
    case 97u: goto L_00440E60;
    case 98u: goto L_00440E64;
    case 99u: goto L_00440E6C;
    case 100u: goto L_00440E70;
    case 101u: goto L_00440E78;
    case 102u: goto L_00440E7C;
    case 103u: goto L_00440E88;
    case 104u: goto L_00440E8C;
    case 105u: goto L_00440E94;
    case 106u: goto L_00440E98;
    case 107u: goto L_00440EA0;
    case 108u: goto L_00440EA4;
    case 109u: goto L_00440EAC;
    case 110u: goto L_00440EC4;
    case 111u: goto L_00440F0C;
    case 112u: goto L_00441018;
    case 113u: goto L_00441024;
    case 114u: goto L_00441154;
    case 115u: goto L_004411BC;
    case 116u: goto L_00441204;
    case 117u: goto L_0044144C;
    case 118u: goto L_004414B4;
    case 119u: goto L_004414FC;
    case 120u: goto L_00441744;
    case 121u: goto L_004417AC;
    case 122u: goto L_004417F4;
    case 123u: goto L_00441814;
    case 124u: goto L_00441818;
    case 125u: goto L_00441A3C;
    case 126u: goto L_00441AA4;
    case 127u: goto L_00441AEC;
    case 128u: goto L_00441D34;
    case 129u: goto L_00441D9C;
    case 130u: goto L_00441DE4;
    case 131u: goto L_00442014;
    case 132u: goto L_00442024;
    case 133u: goto L_0044202C;
    case 134u: goto L_00442094;
    case 135u: goto L_004420DC;
    case 136u: goto L_00442324;
    case 137u: goto L_0044238C;
    case 138u: goto L_004423D4;
    case 139u: goto L_0044261C;
    case 140u: goto L_00442684;
    case 141u: goto L_004426CC;
    case 142u: goto L_00442914;
    case 143u: goto L_0044297C;
    case 144u: goto L_004429C4;
    case 145u: goto L_00442C0C;
    case 146u: goto L_00442C74;
    case 147u: goto L_00442CBC;
    case 148u: goto L_00442F04;
    case 149u: goto L_00442F6C;
    case 150u: goto L_00442FB4;
    case 151u: goto L_00443024;
    case 152u: goto L_004431FC;
    case 153u: goto L_00443264;
    case 154u: goto L_004432AC;
    case 155u: goto L_004434F4;
    case 156u: goto L_0044355C;
    case 157u: goto L_004435A4;
    case 158u: goto L_004437EC;
    case 159u: goto L_00443854;
    case 160u: goto L_0044389C;
    case 161u: goto L_00443AE4;
    case 162u: goto L_00443B4C;
    case 163u: goto L_00443B94;
    case 164u: goto L_00443DDC;
    case 165u: goto L_00443E44;
    case 166u: goto L_00443E8C;
    default: bad_entry(c, 0x00440000u); return;
    }
L_00440000:
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FEB0u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 299u, depth); } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 66u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FEB0u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 299u, depth); } }
L_00440018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 65u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FEB0u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 299u, depth); } }
L_00440020:
    set32(c.r[3], ld32((c.r[28].w[0] - 29112u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29112u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FEF8u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 300u, depth); } }
L_00440030:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044003Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0044003Cu) [[unlikely]] return; }
L_0044003C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044004Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044004Cu) [[unlikely]] return; }
L_0044004C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FF30u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 301u, depth); } }
L_00440054:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[17].w[0] + 72u));
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 72u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FF38u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 302u, depth); } }
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440084u); st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00440084u) [[unlikely]] return; }
L_00440084:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 211u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
L_00440098:
    st32((c.r[17].w[0] + 76u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    st8((c.r[4].w[0] + 680u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 681u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FF38u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 302u, depth); } }
L_004400AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004400BCu); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_008F(c, 248u, depth + 1u); else { c.pc = 0x0043F250u; return; } if (c.pc != 0x004400BCu) [[unlikely]] return; }
L_004400BC:
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1280u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FF84u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 303u, depth); } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 681u));
    set32(c.r[4], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004401B0; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00440160; } }
    st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 54u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[4].w[0] + 544u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00440118; } }
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FF84u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 303u, depth); } }
L_00440118:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440124u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x00440124u) [[unlikely]] return; }
L_00440124:
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], c.r[2].w[0] + 245u);
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[4], ld32((c.r[5].w[0] + 344u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004401A4; } }
    set32(c.r[4], c.r[5].w[0] + 544u);
    set32(c.r[5], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440158u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0023(c, 153u, depth + 1u); else { c.pc = 0x0028D860u; return; } if (c.pc != 0x00440158u) [[unlikely]] return; }
L_00440158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 76u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FF88u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 304u, depth); } }
L_00440160:
    set32(c.r[3], 0u + 3u);
    st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FF84u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 303u, depth); } }
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FF84u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 303u, depth); } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 101u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044019Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0023(c, 186u, depth + 1u); else { c.pc = 0x0028DD40u; return; } if (c.pc != 0x0044019Cu) [[unlikely]] return; }
L_0044019C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FF84u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 303u, depth); } }
L_004401A4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FF84u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 303u, depth); } }
L_004401B0:
    c.f[12] = ld32((c.r[6].w[0] + 1312u));
    set32(c.r[4], c.r[6].w[0] + 680u);
    c.f[13] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[5], c.r[6].w[0] + 1296u);
    c.f[14] = ld32((c.r[17].w[0] + 84u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004401CCu); set32(c.r[6], 0u + 26u);  if (depth < kMaxDepth) unit_0054(c, 61u, depth + 1u); else { c.pc = 0x00351050u; return; } if (c.pc != 0x004401CCu) [[unlikely]] return; }
L_004401CC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FF84u | kUnwind; return; } [[clang::musttail]] return unit_008F(c, 303u, depth); } }
L_004401D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004401DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004401F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440208u); set32(c.r[4], ld32((c.r[4].w[0] + 96u)));  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x00440208u) [[unlikely]] return; }
L_00440208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440210u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00440210u) [[unlikely]] return; }
L_00440210:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 1u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    st32((c.r[16].w[0] + 76u), 0u);
    st8((c.r[16].w[0] + 100u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 88u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440250u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440250u) [[unlikely]] return; }
L_00440250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00440390; } }
L_00440258:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440268u); set32(c.r[4], c.r[2].w[0] + 60u);  if (depth < kMaxDepth) unit_0095(c, 347u, depth + 1u); else { c.pc = 0x004577A0u; return; } if (c.pc != 0x00440268u) [[unlikely]] return; }
L_00440268:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044027Cu); set32(c.r[4], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_008F(c, 279u, depth + 1u); else { c.pc = 0x0043FAF0u; return; } if (c.pc != 0x0044027Cu) [[unlikely]] return; }
L_0044027C:
    set32(c.r[8], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = 0ull & 1ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u - 3u);
    set32(c.r[7], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    set32(c.r[2], 0u + 211u);
    set32(c.r[4], c.r[4].w[0] + 8912u);
    set32(c.r[8], ld32((c.r[8].w[0] + 1360u)));
    set32(c.r[9], ld32((c.r[8].w[0] + 260u)));
    c.r[8].d[0] = ld8((c.r[9].w[0] + 112u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 112u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[9].w[0] + 112u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[9].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    st8((c.r[3].w[0] + 680u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 681u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004402E0u); set32(c.r[5], c.r[16].w[0] + 1072u);  if (depth < kMaxDepth) unit_004F(c, 71u, depth + 1u); else { c.pc = 0x0033D6A0u; return; } if (c.pc != 0x004402E0u) [[unlikely]] return; }
L_004402E0:
    st8((c.r[16].w[0] + 1267u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 1072u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004402F4u); st8((c.r[16].w[0] + 1266u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0040(c, 70u, depth + 1u); else { c.pc = 0x00301C10u; return; } if (c.pc != 0x004402F4u) [[unlikely]] return; }
L_004402F4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 9u);
    set32(c.r[13], c.r[4].w[0] << 3);
    set32(c.r[11], 0u - 65u);
    set32(c.r[12], c.r[4].w[0] << 6);
    set32(c.r[8], c.r[4].w[0] << 8);
    set32(c.r[9], 0u - 33u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[7], 0u - 257u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[4].w[0] << 9);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[13].d[0] = c.r[3].d[0] | c.r[13].d[0];
    set32(c.r[5], 0u - 129u);
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[3], 0u - 513u);
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
    c.r[5].d[0] = ld16((c.r[16].w[0] + 1202u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0] + 1202u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 39;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1236u), 0u);  if (t) { goto L_00440398; } }
L_00440390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440258u | kUnwind; return; } goto L_00440258; } }
L_00440398:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004403B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004403D0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004403D0u) [[unlikely]] return; }
L_004403D0:
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], 0u + 11u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 101u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00440404; } }
L_004403E4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 67u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00440418; } }
L_004403F0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 69u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00440428; } }
L_004403FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00440438; } }
L_00440404:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 132u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 25u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 101u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004403E4u | kUnwind; return; } goto L_004403E4; } }
L_00440418:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 124u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004403F0u | kUnwind; return; } goto L_004403F0; } }
L_00440428:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 125u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004403FCu | kUnwind; return; } goto L_004403FC; } }
L_00440438:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00440450:
    st32((c.r[4].w[0] + 92u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 67u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 66u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 69u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 101u), static_cast<std::uint8_t>(c.r[10].w[0]));  c.pc = t; return; }
L_00440470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 27u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044048Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x002B9620u; return; } if (c.pc != 0x0044048Cu) [[unlikely]] return; }
L_0044048C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[3], c.r[3].w[0] + 11984u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[3].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 40u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0044051C; } }
L_004404C4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 41u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00440528; } }
L_004404D4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 42u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00440534; } }
L_004404E4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 43u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00440540; } }
L_004404F4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 44u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0044054C; } }
L_00440504:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 45u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00440558; } }
L_00440514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00440564; } }
L_0044051C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004404C4u | kUnwind; return; } goto L_004404C4; } }
L_00440528:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004404D4u | kUnwind; return; } goto L_004404D4; } }
L_00440534:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004404E4u | kUnwind; return; } goto L_004404E4; } }
L_00440540:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004404F4u | kUnwind; return; } goto L_004404F4; } }
L_0044054C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440504u | kUnwind; return; } goto L_00440504; } }
L_00440558:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440514u | kUnwind; return; } goto L_00440514; } }
L_00440564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00440580:
    set32(c.r[29], c.r[29].w[0] - 544u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004405B8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004405A8u); set32(c.r[4], c.r[16].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004405A8u) [[unlikely]] return; }
L_004405A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004405B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0091(c, 261u, depth + 1u); else { c.pc = 0x00447F60u; return; } if (c.pc != 0x004405B0u) [[unlikely]] return; }
L_004405B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 120u)));  if (t) { goto L_004405C8; } }
L_004405B8:
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
L_004405C8:
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00440720; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[8], c.r[8].w[0] - 12256u);
    set32(c.r[3], c.r[29].w[0] + 480u);
    c.budget -= 4;
L_004405E4:
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 784u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_004406D0; } }
    set32(c.r[6], c.r[5].w[0] << 6);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    ld128((c.r[6].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 160u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[6].w[0] + 176u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[6].w[0] + 192u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[8]);
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
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[7], c.r[7].w[0] << 3);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[11]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[10]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[11]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[9]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[7]);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[10]);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[9]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[7]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 53;
    { const bool t = 0ull == 0ull; st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);  if (t) { goto L_00440708; } }
    c.budget -= 1;
L_004406D0:
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[5].w[0]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 14;
L_00440708:
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[6].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004405E4u | kUnwind; return; } goto L_004405E4; } }
    c.budget -= 1;
L_00440720:
    set32(c.r[3], ld32((c.r[16].w[0] + 904u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0044074C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 924u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044073Cu); set32(c.r[4], c.r[16].w[0] + 880u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044073Cu) [[unlikely]] return; }
L_0044073C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440744u); set32(c.r[4], c.r[16].w[0] + 864u);  if (depth < kMaxDepth) unit_0091(c, 244u, depth + 1u); else { c.pc = 0x00447B10u; return; } if (c.pc != 0x00440744u) [[unlikely]] return; }
L_00440744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 968u)));  if (t) { goto L_00440754; } }
L_0044074C:
    st32((c.r[16].w[0] + 888u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 968u)));
    c.budget -= 2;
L_00440754:
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004408A8; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[8], c.r[8].w[0] - 12256u);
    set32(c.r[3], c.r[29].w[0] + 416u);
    c.budget -= 4;
L_00440770:
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 1632u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00440858; } }
    set32(c.r[6], c.r[5].w[0] << 6);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    ld128((c.r[6].w[0] + 992u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 1008u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[6].w[0] + 1024u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[6].w[0] + 1040u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[8]);
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
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 972u)));
    set32(c.r[7], c.r[7].w[0] << 3);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[11]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[10]);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[11]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[9]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[7]);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[10]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[9]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[7]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 53;
    { const bool t = 0ull == 0ull; st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);  if (t) { goto L_00440890; } }
L_00440858:
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[5].w[0]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], ld32((c.r[16].w[0] + 972u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 14;
L_00440890:
    set32(c.r[6], ld32((c.r[16].w[0] + 968u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[6].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440770u | kUnwind; return; } goto L_00440770; } }
    c.budget -= 1;
L_004408A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 1752u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004408D4; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 1772u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004408C4u); set32(c.r[4], c.r[16].w[0] + 1728u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004408C4u) [[unlikely]] return; }
L_004408C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004408CCu); set32(c.r[4], c.r[16].w[0] + 1712u);  if (depth < kMaxDepth) unit_0091(c, 227u, depth + 1u); else { c.pc = 0x004476D0u; return; } if (c.pc != 0x004408CCu) [[unlikely]] return; }
L_004408CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 1816u)));  if (t) { goto L_004408DC; } }
L_004408D4:
    st32((c.r[16].w[0] + 1736u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 1816u)));
    c.budget -= 2;
L_004408DC:
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00440A30; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[8], c.r[8].w[0] - 12256u);
    set32(c.r[3], c.r[29].w[0] + 352u);
    c.budget -= 4;
L_004408F8:
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 2480u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_004409E0; } }
    set32(c.r[6], c.r[5].w[0] << 6);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    ld128((c.r[6].w[0] + 1840u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 1856u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[6].w[0] + 1872u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[6].w[0] + 1888u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[8]);
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
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 1820u)));
    set32(c.r[7], c.r[7].w[0] << 3);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[11]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[10]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[11]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[9]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[7]);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[10]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[9]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[7]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 53;
    { const bool t = 0ull == 0ull; st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);  if (t) { goto L_00440A18; } }
L_004409E0:
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[5].w[0]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], ld32((c.r[16].w[0] + 1820u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 14;
L_00440A18:
    set32(c.r[6], ld32((c.r[16].w[0] + 1816u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[6].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004408F8u | kUnwind; return; } goto L_004408F8; } }
    c.budget -= 1;
L_00440A30:
    set32(c.r[3], ld32((c.r[16].w[0] + 2600u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00440A5C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 2620u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A4Cu); set32(c.r[4], c.r[16].w[0] + 2576u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440A4Cu) [[unlikely]] return; }
L_00440A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A54u); set32(c.r[4], c.r[16].w[0] + 2560u);  if (depth < kMaxDepth) unit_0091(c, 207u, depth + 1u); else { c.pc = 0x004472E0u; return; } if (c.pc != 0x00440A54u) [[unlikely]] return; }
L_00440A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 3672u)));  if (t) { goto L_00440A64; } }
L_00440A5C:
    st32((c.r[16].w[0] + 2584u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 3672u)));
    c.budget -= 2;
L_00440A64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00440A8C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 3692u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A7Cu); set32(c.r[4], c.r[16].w[0] + 3648u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440A7Cu) [[unlikely]] return; }
L_00440A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A84u); set32(c.r[4], c.r[16].w[0] + 3632u);  if (depth < kMaxDepth) unit_0091(c, 217u, depth + 1u); else { c.pc = 0x004474F0u; return; } if (c.pc != 0x00440A84u) [[unlikely]] return; }
L_00440A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 2648u)));  if (t) { goto L_00440A94; } }
L_00440A8C:
    st32((c.r[16].w[0] + 3656u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2648u)));
    c.budget -= 2;
L_00440A94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00440ABC; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 2668u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440AACu); set32(c.r[4], c.r[16].w[0] + 2624u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440AACu) [[unlikely]] return; }
L_00440AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440AB4u); set32(c.r[4], c.r[16].w[0] + 2624u);  if (depth < kMaxDepth) unit_0091(c, 196u, depth + 1u); else { c.pc = 0x004470B0u; return; } if (c.pc != 0x00440AB4u) [[unlikely]] return; }
L_00440AB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 2720u)));  if (t) { goto L_00440AC4; } }
L_00440ABC:
    st32((c.r[16].w[0] + 2632u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2720u)));
    c.budget -= 2;
L_00440AC4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00440AEC; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 2740u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440ADCu); set32(c.r[4], c.r[16].w[0] + 2696u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440ADCu) [[unlikely]] return; }
L_00440ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440AE4u); set32(c.r[4], c.r[16].w[0] + 2696u);  if (depth < kMaxDepth) unit_0091(c, 188u, depth + 1u); else { c.pc = 0x00446F80u; return; } if (c.pc != 0x00440AE4u) [[unlikely]] return; }
L_00440AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 2768u)));  if (t) { goto L_00440AF4; } }
L_00440AEC:
    st32((c.r[16].w[0] + 2704u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2768u)));
    c.budget -= 2;
L_00440AF4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00440B1C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 2788u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B0Cu); set32(c.r[4], c.r[16].w[0] + 2744u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440B0Cu) [[unlikely]] return; }
L_00440B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B14u); set32(c.r[4], c.r[16].w[0] + 2744u);  if (depth < kMaxDepth) unit_0091(c, 179u, depth + 1u); else { c.pc = 0x00446D90u; return; } if (c.pc != 0x00440B14u) [[unlikely]] return; }
L_00440B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 2856u)));  if (t) { goto L_00440B24; } }
L_00440B1C:
    st32((c.r[16].w[0] + 2752u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2856u)));
    c.budget -= 2;
L_00440B24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00440B4C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 2876u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B3Cu); set32(c.r[4], c.r[16].w[0] + 2832u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440B3Cu) [[unlikely]] return; }
L_00440B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B44u); set32(c.r[4], c.r[16].w[0] + 2816u);  if (depth < kMaxDepth) unit_0091(c, 171u, depth + 1u); else { c.pc = 0x00446BC0u; return; } if (c.pc != 0x00440B44u) [[unlikely]] return; }
L_00440B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 2888u)));  if (t) { goto L_00440B54; } }
L_00440B4C:
    st32((c.r[16].w[0] + 2840u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2888u)));
    c.budget -= 2;
L_00440B54:
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00440CA8; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[8], c.r[8].w[0] - 12256u);
    set32(c.r[3], c.r[29].w[0] + 288u);
    c.budget -= 4;
L_00440B70:
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 3552u)));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00440C58; } }
    set32(c.r[6], c.r[5].w[0] << 6);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    ld128((c.r[6].w[0] + 2912u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[6].w[0] + 2928u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[6].w[0] + 2944u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[6].w[0] + 2960u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[8]);
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
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 2892u)));
    set32(c.r[7], c.r[7].w[0] << 3);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[9]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[11]);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[10]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[11]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[9]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[7]);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[10]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[9]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[7]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 53;
    { const bool t = 0ull == 0ull; st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);  if (t) { goto L_00440C90; } }
L_00440C58:
    set32(c.r[6], c.r[5].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[5].w[0]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[6], ld32((c.r[16].w[0] + 2892u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 16u)));
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 14;
L_00440C90:
    set32(c.r[6], ld32((c.r[16].w[0] + 2888u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[6].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440B70u | kUnwind; return; } goto L_00440B70; } }
    c.budget -= 1;
L_00440CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 544u);  c.pc = t; return; }
L_00440CC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440CE0u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0093(c, 31u, depth + 1u); else { c.pc = 0x0044C870u; return; } if (c.pc != 0x00440CE0u) [[unlikely]] return; }
L_00440CE0:
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[4], c.r[16].w[0] + 880u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 128u), 0u);
    st32((c.r[16].w[0] + 120u), 0u);
    st32((c.r[28].w[0] - 28452u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D00u); st32((c.r[16].w[0] + 872u), 0u);  if (depth < kMaxDepth) unit_0093(c, 31u, depth + 1u); else { c.pc = 0x0044C870u; return; } if (c.pc != 0x00440D00u) [[unlikely]] return; }
L_00440D00:
    st32((c.r[16].w[0] + 948u), 0u);
    set32(c.r[4], c.r[16].w[0] + 1728u);
    st32((c.r[16].w[0] + 940u), 0u);
    st32((c.r[16].w[0] + 976u), 0u);
    st32((c.r[16].w[0] + 968u), 0u);
    st32((c.r[28].w[0] - 28452u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D20u); st32((c.r[16].w[0] + 1720u), 0u);  if (depth < kMaxDepth) unit_0093(c, 31u, depth + 1u); else { c.pc = 0x0044C870u; return; } if (c.pc != 0x00440D20u) [[unlikely]] return; }
L_00440D20:
    st32((c.r[16].w[0] + 1796u), 0u);
    set32(c.r[4], c.r[16].w[0] + 2576u);
    st32((c.r[16].w[0] + 1788u), 0u);
    st32((c.r[16].w[0] + 1824u), 0u);
    st32((c.r[16].w[0] + 1816u), 0u);
    st32((c.r[28].w[0] - 28452u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D40u); st32((c.r[16].w[0] + 2568u), 0u);  if (depth < kMaxDepth) unit_0093(c, 31u, depth + 1u); else { c.pc = 0x0044C870u; return; } if (c.pc != 0x00440D40u) [[unlikely]] return; }
L_00440D40:
    st32((c.r[28].w[0] - 28452u), 0u);
    set32(c.r[4], c.r[16].w[0] + 3648u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D50u); st32((c.r[16].w[0] + 3640u), 0u);  if (depth < kMaxDepth) unit_0093(c, 31u, depth + 1u); else { c.pc = 0x0044C870u; return; } if (c.pc != 0x00440D50u) [[unlikely]] return; }
L_00440D50:
    set32(c.r[4], c.r[16].w[0] + 2624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D5Cu); st32((c.r[28].w[0] - 28452u), 0u);  if (depth < kMaxDepth) unit_0093(c, 31u, depth + 1u); else { c.pc = 0x0044C870u; return; } if (c.pc != 0x00440D5Cu) [[unlikely]] return; }
L_00440D5C:
    st32((c.r[16].w[0] + 2692u), 0u);
    set32(c.r[4], c.r[16].w[0] + 2696u);
    st32((c.r[16].w[0] + 2684u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D70u); st32((c.r[28].w[0] - 28452u), 0u);  if (depth < kMaxDepth) unit_0093(c, 31u, depth + 1u); else { c.pc = 0x0044C870u; return; } if (c.pc != 0x00440D70u) [[unlikely]] return; }
L_00440D70:
    set32(c.r[4], c.r[16].w[0] + 2744u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D7Cu); st32((c.r[28].w[0] - 28452u), 0u);  if (depth < kMaxDepth) unit_0093(c, 31u, depth + 1u); else { c.pc = 0x0044C870u; return; } if (c.pc != 0x00440D7Cu) [[unlikely]] return; }
L_00440D7C:
    st32((c.r[16].w[0] + 2808u), 0u);
    set32(c.r[4], c.r[16].w[0] + 2832u);
    st32((c.r[16].w[0] + 2800u), 0u);
    st32((c.r[28].w[0] - 28452u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D94u); st32((c.r[16].w[0] + 2824u), 0u);  if (depth < kMaxDepth) unit_0093(c, 31u, depth + 1u); else { c.pc = 0x0044C870u; return; } if (c.pc != 0x00440D94u) [[unlikely]] return; }
L_00440D94:
    st32((c.r[16].w[0] + 2896u), 0u);
    st32((c.r[16].w[0] + 2888u), 0u);
    st32((c.r[28].w[0] - 28452u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00440DB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00440EB4; } }
L_00440DCC:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_00440DD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004411AC; } }
L_00440DD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_00440DDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004414A4; } }
L_00440DE4:
    set32(c.r[17], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_00440DE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0044179C; } }
L_00440DF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_00440DF8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00441A94; } }
L_00440E00:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 1;
L_00440E04:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00441D8C; } }
L_00440E0C:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_00440E10:
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 872u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00442084; } }
L_00440E20:
    set32(c.r[3], ld32((c.r[16].w[0] + 888u)));
    c.budget -= 1;
L_00440E24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0044237C; } }
L_00440E2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 940u)));
    c.budget -= 1;
L_00440E30:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00442674; } }
L_00440E38:
    set32(c.r[3], ld32((c.r[16].w[0] + 968u)));
    c.budget -= 1;
L_00440E3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0044296C; } }
L_00440E44:
    st32((c.r[16].w[0] + 872u), 0u);
    c.budget -= 1;
L_00440E48:
    set32(c.r[3], ld32((c.r[16].w[0] + 1720u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00442C64; } }
L_00440E54:
    set32(c.r[3], ld32((c.r[16].w[0] + 1736u)));
    c.budget -= 1;
L_00440E58:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00442F5C; } }
L_00440E60:
    set32(c.r[3], ld32((c.r[16].w[0] + 1788u)));
    c.budget -= 1;
L_00440E64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00443254; } }
L_00440E6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 1816u)));
    c.budget -= 1;
L_00440E70:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0044354C; } }
L_00440E78:
    st32((c.r[16].w[0] + 1720u), 0u);
    c.budget -= 1;
L_00440E7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 2632u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00443844; } }
L_00440E88:
    set32(c.r[3], ld32((c.r[16].w[0] + 2684u)));
    c.budget -= 1;
L_00440E8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00443B3C; } }
L_00440E94:
    set32(c.r[3], ld32((c.r[16].w[0] + 2752u)));
    c.budget -= 1;
L_00440E98:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00443E34; } }
L_00440EA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 2800u)));
    c.budget -= 1;
L_00440EA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0091(c, 4u, depth); } }
L_00440EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { [[clang::musttail]] return unit_0091(c, 8u, depth); } }
L_00440EB4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440EC4u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x00440EC4u) [[unlikely]] return; }
L_00440EC4:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440DCCu | kUnwind; return; } goto L_00440DCC; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00441138; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00440F0C:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    c.budget -= 67;
L_00441018:
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.budget -= 3;
L_00441024:
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 69;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440F0Cu | kUnwind; return; } goto L_00440F0C; } }
L_00441138:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440DCCu | kUnwind; return; } goto L_00440DCC; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00441154:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00441154u | kUnwind; return; } goto L_00441154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440DD0u | kUnwind; return; } goto L_00440DD0; } }
L_004411AC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004411BCu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004411BCu) [[unlikely]] return; }
L_004411BC:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440DD8u | kUnwind; return; } goto L_00440DD8; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00441430; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00441204:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00441204u | kUnwind; return; } goto L_00441204; } }
L_00441430:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440DD8u | kUnwind; return; } goto L_00440DD8; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0044144C:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044144Cu | kUnwind; return; } goto L_0044144C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440DDCu | kUnwind; return; } goto L_00440DDC; } }
L_004414A4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004414B4u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004414B4u) [[unlikely]] return; }
L_004414B4:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440DE4u | kUnwind; return; } goto L_00440DE4; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00441728; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_004414FC:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004414FCu | kUnwind; return; } goto L_004414FC; } }
L_00441728:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440DE4u | kUnwind; return; } goto L_00440DE4; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00441744:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00441744u | kUnwind; return; } goto L_00441744; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440DE8u | kUnwind; return; } goto L_00440DE8; } }
L_0044179C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004417ACu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004417ACu) [[unlikely]] return; }
L_004417AC:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440DF4u | kUnwind; return; } goto L_00440DF4; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00441A20; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_004417F4:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    c.budget -= 8;
L_00441814:
    set32(c.r[13], c.r[7].w[0] + 144u);
    c.budget -= 1;
L_00441818:
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 130;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004417F4u | kUnwind; return; } goto L_004417F4; } }
L_00441A20:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440DF4u | kUnwind; return; } goto L_00440DF4; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00441A3C:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00441A3Cu | kUnwind; return; } goto L_00441A3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 96u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440DF8u | kUnwind; return; } goto L_00440DF8; } }
L_00441A94:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 92u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441AA4u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x00441AA4u) [[unlikely]] return; }
L_00441AA4:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E00u | kUnwind; return; } goto L_00440E00; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00441D18; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00441AEC:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00441AECu | kUnwind; return; } goto L_00441AEC; } }
L_00441D18:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E00u | kUnwind; return; } goto L_00440E00; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00441D34:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00441D34u | kUnwind; return; } goto L_00441D34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 120u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E04u | kUnwind; return; } goto L_00440E04; } }
L_00441D8C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441D9Cu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x00441D9Cu) [[unlikely]] return; }
L_00441D9C:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E0Cu | kUnwind; return; } goto L_00440E0C; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00442010; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00441DE4:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00441DE4u | kUnwind; return; } goto L_00441DE4; } }
L_00442010:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00442014:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E0Cu | kUnwind; return; } goto L_00440E0C; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    c.budget -= 2;
L_00442024:
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0044202C:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044202Cu | kUnwind; return; } goto L_0044202C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E10u | kUnwind; return; } goto L_00440E10; } }
L_00442084:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 868u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442094u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x00442094u) [[unlikely]] return; }
L_00442094:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 872u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 876u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E20u | kUnwind; return; } goto L_00440E20; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00442308; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_004420DC:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004420DCu | kUnwind; return; } goto L_004420DC; } }
L_00442308:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E20u | kUnwind; return; } goto L_00440E20; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00442324:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00442324u | kUnwind; return; } goto L_00442324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 888u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E24u | kUnwind; return; } goto L_00440E24; } }
L_0044237C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 884u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044238Cu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x0044238Cu) [[unlikely]] return; }
L_0044238C:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 888u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 892u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E2Cu | kUnwind; return; } goto L_00440E2C; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00442600; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_004423D4:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004423D4u | kUnwind; return; } goto L_004423D4; } }
L_00442600:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E2Cu | kUnwind; return; } goto L_00440E2C; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0044261C:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044261Cu | kUnwind; return; } goto L_0044261C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 940u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E30u | kUnwind; return; } goto L_00440E30; } }
L_00442674:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 936u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442684u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x00442684u) [[unlikely]] return; }
L_00442684:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 940u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 944u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E38u | kUnwind; return; } goto L_00440E38; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_004428F8; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_004426CC:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004426CCu | kUnwind; return; } goto L_004426CC; } }
L_004428F8:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E38u | kUnwind; return; } goto L_00440E38; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00442914:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00442914u | kUnwind; return; } goto L_00442914; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 968u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E3Cu | kUnwind; return; } goto L_00440E3C; } }
L_0044296C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 964u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044297Cu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x0044297Cu) [[unlikely]] return; }
L_0044297C:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 968u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 972u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E44u | kUnwind; return; } goto L_00440E44; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00442BF0; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_004429C4:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004429C4u | kUnwind; return; } goto L_004429C4; } }
L_00442BF0:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E44u | kUnwind; return; } goto L_00440E44; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00442C0C:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00442C0Cu | kUnwind; return; } goto L_00442C0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 872u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E48u | kUnwind; return; } goto L_00440E48; } }
L_00442C64:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1716u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442C74u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x00442C74u) [[unlikely]] return; }
L_00442C74:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 1720u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1724u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E54u | kUnwind; return; } goto L_00440E54; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00442EE8; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00442CBC:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00442CBCu | kUnwind; return; } goto L_00442CBC; } }
L_00442EE8:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E54u | kUnwind; return; } goto L_00440E54; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00442F04:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00442F04u | kUnwind; return; } goto L_00442F04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 1736u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E58u | kUnwind; return; } goto L_00440E58; } }
L_00442F5C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1732u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442F6Cu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x00442F6Cu) [[unlikely]] return; }
L_00442F6C:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 1736u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1740u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E60u | kUnwind; return; } goto L_00440E60; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_004431E0; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00442FB4:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    c.budget -= 28;
L_00443024:
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 111;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00442FB4u | kUnwind; return; } goto L_00442FB4; } }
L_004431E0:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E60u | kUnwind; return; } goto L_00440E60; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004431FC:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004431FCu | kUnwind; return; } goto L_004431FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 1788u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E64u | kUnwind; return; } goto L_00440E64; } }
L_00443254:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1784u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443264u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x00443264u) [[unlikely]] return; }
L_00443264:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 1788u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1792u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E6Cu | kUnwind; return; } goto L_00440E6C; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_004434D8; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_004432AC:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004432ACu | kUnwind; return; } goto L_004432AC; } }
L_004434D8:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E6Cu | kUnwind; return; } goto L_00440E6C; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004434F4:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004434F4u | kUnwind; return; } goto L_004434F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 1816u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E70u | kUnwind; return; } goto L_00440E70; } }
L_0044354C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1812u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044355Cu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x0044355Cu) [[unlikely]] return; }
L_0044355C:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 1816u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 1820u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E78u | kUnwind; return; } goto L_00440E78; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_004437D0; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_004435A4:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004435A4u | kUnwind; return; } goto L_004435A4; } }
L_004437D0:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E78u | kUnwind; return; } goto L_00440E78; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004437EC:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004437ECu | kUnwind; return; } goto L_004437EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1720u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E7Cu | kUnwind; return; } goto L_00440E7C; } }
L_00443844:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2628u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443854u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x00443854u) [[unlikely]] return; }
L_00443854:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2632u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 2636u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E88u | kUnwind; return; } goto L_00440E88; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00443AC8; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0044389C:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044389Cu | kUnwind; return; } goto L_0044389C; } }
L_00443AC8:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E88u | kUnwind; return; } goto L_00440E88; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00443AE4:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00443AE4u | kUnwind; return; } goto L_00443AE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 2684u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E8Cu | kUnwind; return; } goto L_00440E8C; } }
L_00443B3C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2680u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443B4Cu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x00443B4Cu) [[unlikely]] return; }
L_00443B4C:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2684u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 2688u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E94u | kUnwind; return; } goto L_00440E94; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { goto L_00443DC0; } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00443B94:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[25], c.r[7].w[0] + 24u);
    set32(c.r[24], c.r[7].w[0] + 48u);
    set32(c.r[17], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[14].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[13].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 139;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00443B94u | kUnwind; return; } goto L_00443B94; } }
L_00443DC0:
    c.r[1].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E94u | kUnwind; return; } goto L_00440E94; } }
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00443DDC:
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[9], c.r[9].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 1064u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00443DDCu | kUnwind; return; } goto L_00443DDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 2752u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440E98u | kUnwind; return; } goto L_00440E98; } }
L_00443E34:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2748u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443E44u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x00443E44u) [[unlikely]] return; }
L_00443E44:
    set32(c.r[7], ld32((c.r[2].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 2752u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[5], ld32((c.r[16].w[0] + 2756u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[7].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00440EA0u | kUnwind; return; } goto L_00440EA0; } }
    c.r[1].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] - 8u);  if (t) { [[clang::musttail]] return unit_0091(c, 2u, depth); } }
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00443E8C:
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[17], c.r[7].w[0] + 24u);
    set32(c.r[25], c.r[7].w[0] + 48u);
    set32(c.r[24], c.r[7].w[0] + 72u);
    set32(c.r[15], c.r[7].w[0] + 96u);
    set32(c.r[14], c.r[7].w[0] + 120u);
    set32(c.r[13], c.r[7].w[0] + 144u);
    set32(c.r[12], c.r[7].w[0] + 168u);
    c.r[9].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[7], c.r[7].w[0] + 192u);
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[17].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[25].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[24].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[15].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[10], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[4].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[4].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    c.budget -= 93;
    [[clang::musttail]] return unit_0091(c, 1u, depth);
}

}

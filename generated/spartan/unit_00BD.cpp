#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BD[4096] = {
    1, 2, 0, 0, 3, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 13, 0, 14, 15, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45,
    46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 120, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 140, 0, 0, 0, 0, 141, 142, 143, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 173, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 205, 0, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 220, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BD(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004F4000;
    case 2u: goto L_004F4004;
    case 3u: goto L_004F4010;
    case 4u: goto L_004F4018;
    case 5u: goto L_004F401C;
    case 6u: goto L_004F4040;
    case 7u: goto L_004F406C;
    case 8u: goto L_004F4108;
    case 9u: goto L_004F41AC;
    case 10u: goto L_004F41EC;
    case 11u: goto L_004F424C;
    case 12u: goto L_004F425C;
    case 13u: goto L_004F4260;
    case 14u: goto L_004F4268;
    case 15u: goto L_004F426C;
    case 16u: goto L_004F4284;
    case 17u: goto L_004F42FC;
    case 18u: goto L_004F4360;
    case 19u: goto L_004F43B4;
    case 20u: goto L_004F43E8;
    case 21u: goto L_004F43F8;
    case 22u: goto L_004F441C;
    case 23u: goto L_004F4450;
    case 24u: goto L_004F44B8;
    case 25u: goto L_004F44D0;
    case 26u: goto L_004F4514;
    case 27u: goto L_004F45CC;
    case 28u: goto L_004F45F0;
    case 29u: goto L_004F4664;
    case 30u: goto L_004F4690;
    case 31u: goto L_004F47D0;
    case 32u: goto L_004F4874;
    case 33u: goto L_004F4888;
    case 34u: goto L_004F48B0;
    case 35u: goto L_004F4900;
    case 36u: goto L_004F490C;
    case 37u: goto L_004F4938;
    case 38u: goto L_004F4950;
    case 39u: goto L_004F4994;
    case 40u: goto L_004F4A4C;
    case 41u: goto L_004F4A70;
    case 42u: goto L_004F4B8C;
    case 43u: goto L_004F4B98;
    case 44u: goto L_004F4B9C;
    case 45u: goto L_004F4BFC;
    case 46u: goto L_004F4C00;
    case 47u: goto L_004F4C0C;
    case 48u: goto L_004F4C30;
    case 49u: goto L_004F4C40;
    case 50u: goto L_004F4C64;
    case 51u: goto L_004F4CE0;
    case 52u: goto L_004F4D3C;
    case 53u: goto L_004F4E2C;
    case 54u: goto L_004F4E58;
    case 55u: goto L_004F4E8C;
    case 56u: goto L_004F4EF0;
    case 57u: goto L_004F4EFC;
    case 58u: goto L_004F4F98;
    case 59u: goto L_004F4FC8;
    case 60u: goto L_004F4FF0;
    case 61u: goto L_004F5004;
    case 62u: goto L_004F5040;
    case 63u: goto L_004F5180;
    case 64u: goto L_004F5224;
    case 65u: goto L_004F5238;
    case 66u: goto L_004F5270;
    case 67u: goto L_004F52C0;
    case 68u: goto L_004F5310;
    case 69u: goto L_004F531C;
    case 70u: goto L_004F5330;
    case 71u: goto L_004F5374;
    case 72u: goto L_004F542C;
    case 73u: goto L_004F5450;
    case 74u: goto L_004F54FC;
    case 75u: goto L_004F5514;
    case 76u: goto L_004F5550;
    case 77u: goto L_004F5618;
    case 78u: goto L_004F562C;
    case 79u: goto L_004F5694;
    case 80u: goto L_004F5778;
    case 81u: goto L_004F57CC;
    case 82u: goto L_004F585C;
    case 83u: goto L_004F5880;
    case 84u: goto L_004F58C0;
    case 85u: goto L_004F5A0C;
    case 86u: goto L_004F5AB0;
    case 87u: goto L_004F5AE0;
    case 88u: goto L_004F5AF8;
    case 89u: goto L_004F5BB0;
    case 90u: goto L_004F5BD4;
    case 91u: goto L_004F5BE0;
    case 92u: goto L_004F5C14;
    case 93u: goto L_004F5C40;
    case 94u: goto L_004F5C48;
    case 95u: goto L_004F5D10;
    case 96u: goto L_004F5D14;
    case 97u: goto L_004F5D50;
    case 98u: goto L_004F5D60;
    case 99u: goto L_004F5D68;
    case 100u: goto L_004F5DC0;
    case 101u: goto L_004F5DD8;
    case 102u: goto L_004F5DE8;
    case 103u: goto L_004F5DF4;
    case 104u: goto L_004F5E70;
    case 105u: goto L_004F5F7C;
    case 106u: goto L_004F5F90;
    case 107u: goto L_004F6058;
    case 108u: goto L_004F6170;
    case 109u: goto L_004F62E0;
    case 110u: goto L_004F6300;
    case 111u: goto L_004F630C;
    case 112u: goto L_004F6330;
    case 113u: goto L_004F6380;
    case 114u: goto L_004F638C;
    case 115u: goto L_004F63A0;
    case 116u: goto L_004F63E4;
    case 117u: goto L_004F649C;
    case 118u: goto L_004F64C0;
    case 119u: goto L_004F6578;
    case 120u: goto L_004F6584;
    case 121u: goto L_004F6588;
    case 122u: goto L_004F65A4;
    case 123u: goto L_004F65E8;
    case 124u: goto L_004F65F8;
    case 125u: goto L_004F6730;
    case 126u: goto L_004F6750;
    case 127u: goto L_004F6768;
    case 128u: goto L_004F6780;
    case 129u: goto L_004F6798;
    case 130u: goto L_004F67B0;
    case 131u: goto L_004F67C8;
    case 132u: goto L_004F6834;
    case 133u: goto L_004F6840;
    case 134u: goto L_004F6920;
    case 135u: goto L_004F69A0;
    case 136u: goto L_004F69C0;
    case 137u: goto L_004F6A30;
    case 138u: goto L_004F6A94;
    case 139u: goto L_004F6AF4;
    case 140u: goto L_004F6B08;
    case 141u: goto L_004F6B1C;
    case 142u: goto L_004F6B20;
    case 143u: goto L_004F6B24;
    case 144u: goto L_004F6B28;
    case 145u: goto L_004F6B70;
    case 146u: goto L_004F6B90;
    case 147u: goto L_004F6BD0;
    case 148u: goto L_004F6CF0;
    case 149u: goto L_004F6D04;
    case 150u: goto L_004F6D1C;
    case 151u: goto L_004F6DD0;
    case 152u: goto L_004F6E00;
    case 153u: goto L_004F6E64;
    case 154u: goto L_004F6E84;
    case 155u: goto L_004F6EA0;
    case 156u: goto L_004F6EC0;
    case 157u: goto L_004F6ED4;
    case 158u: goto L_004F6EF0;
    case 159u: goto L_004F6F20;
    case 160u: goto L_004F6F48;
    case 161u: goto L_004F6F68;
    case 162u: goto L_004F6F70;
    case 163u: goto L_004F6F90;
    case 164u: goto L_004F6FE0;
    case 165u: goto L_004F7024;
    case 166u: goto L_004F70F4;
    case 167u: goto L_004F7110;
    case 168u: goto L_004F7174;
    case 169u: goto L_004F7194;
    case 170u: goto L_004F71B0;
    case 171u: goto L_004F725C;
    case 172u: goto L_004F7268;
    case 173u: goto L_004F726C;
    case 174u: goto L_004F7288;
    case 175u: goto L_004F72A0;
    case 176u: goto L_004F72CC;
    case 177u: goto L_004F7374;
    case 178u: goto L_004F7394;
    case 179u: goto L_004F73C4;
    case 180u: goto L_004F73D0;
    case 181u: goto L_004F740C;
    case 182u: goto L_004F7484;
    case 183u: goto L_004F74E8;
    case 184u: goto L_004F758C;
    case 185u: goto L_004F7598;
    case 186u: goto L_004F75D0;
    case 187u: goto L_004F7650;
    case 188u: goto L_004F76A4;
    case 189u: goto L_004F7788;
    case 190u: goto L_004F7798;
    case 191u: goto L_004F7824;
    case 192u: goto L_004F78F0;
    case 193u: goto L_004F7900;
    case 194u: goto L_004F7920;
    case 195u: goto L_004F7A1C;
    case 196u: goto L_004F7A28;
    case 197u: goto L_004F7A2C;
    case 198u: goto L_004F7A6C;
    case 199u: goto L_004F7AAC;
    case 200u: goto L_004F7AF4;
    case 201u: goto L_004F7B08;
    case 202u: goto L_004F7B2C;
    case 203u: goto L_004F7BD4;
    case 204u: goto L_004F7BE0;
    case 205u: goto L_004F7BE4;
    case 206u: goto L_004F7BF8;
    case 207u: goto L_004F7C8C;
    case 208u: goto L_004F7D1C;
    case 209u: goto L_004F7D34;
    case 210u: goto L_004F7D60;
    case 211u: goto L_004F7D78;
    case 212u: goto L_004F7DDC;
    case 213u: goto L_004F7DE8;
    case 214u: goto L_004F7E98;
    case 215u: goto L_004F7F24;
    case 216u: goto L_004F7F30;
    case 217u: goto L_004F7F70;
    case 218u: goto L_004F7FA8;
    case 219u: goto L_004F7FB0;
    case 220u: goto L_004F7FC0;
    case 221u: goto L_004F7FC4;
    default: bad_entry(c, 0x004F4000u); return;
    }
L_004F4000:
    c.budget -= 1;
L_004F4004:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4010u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x004F4010u) [[unlikely]] return; }
L_004F4010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F35BCu | kUnwind; return; } [[clang::musttail]] return unit_00BC(c, 235u, depth); } }
L_004F4018:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004F401C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004F4040:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], 0u + 40u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F406Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0027(c, 157u, depth + 1u); else { c.pc = 0x0029F0B0u; return; } if (c.pc != 0x004F406Cu) [[unlikely]] return; }
L_004F406C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[10], 0u - 3u);
    set32(c.r[2], c.r[2].w[0] - 20208u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[7], 0u - 9u);
    c.r[9].d[0] = ld8((c.r[17].w[0] + 736u));
    c.r[2].d[0] = 0ull & 1ull;
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[4], 0u - 33u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[9].d[0] = c.r[9].d[0] & c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    st8((c.r[17].w[0] + 736u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[17].w[0] + 1496u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 1496u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 526u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & c.r[10].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 37;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F4108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4108u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F4108u) [[unlikely]] return; }
L_004F4108:
    set32(c.r[2], 0u + 102u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u - 2u);
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], 0u + 117u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.r[2].d[0] = 0ull & 15ull;
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], 0u - 961u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    st32((c.r[17].w[0] + 356u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    st32((c.r[17].w[0] + 368u), c.f[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 356u)));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st32((c.r[17].w[0] + 376u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = ld32((c.r[17].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 372u), c.f[0]);
    c.r[6].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F41ACu); st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x004F41ACu) [[unlikely]] return; }
L_004F41AC:
    set32(c.r[2], 0u + 128u);
    st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 69u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F43AC; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F43AC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F43BC; } }
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
L_004F41EC:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F4234; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_004F4234; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004F43BC; } }
L_004F4234:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F41ECu | kUnwind; return; } goto L_004F41EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 260u)));  if (t) { goto L_004F43C0; } }
L_004F424C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004F43DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004F4260; } }
L_004F425C:
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 1;
L_004F4260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F4400; } }
L_004F4268:
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 1;
L_004F426C:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 8u);  if (t) { goto L_004F42E0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
L_004F4284:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F42CC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004F42CC; } }
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F42E0; } }
L_004F42CC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4284u | kUnwind; return; } goto L_004F4284; } }
    c.budget -= 1;
L_004F42E0:
    set32(c.r[3], ld32((c.r[2].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.r[3].d[0] = c.r[7].d[0] << 56;
    set32(c.r[5], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 7;
L_004F42FC:
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[8], c.r[2].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[8].w[0] + 8u));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F4368; } }
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 8u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[6].w[0] + 1u);
    st32((c.r[8].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[8].w[0] + 12u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 213u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F4424; } }
L_004F4360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.r[17].w[0]);  if (t) { goto L_004F439C; } }
L_004F4368:
    set32(c.r[4], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[4].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_004F4380; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F4380:
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F42FCu | kUnwind; return; } goto L_004F42FC; } }
    breakpoint(c, 0x004F4390u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[8].w[0]), c.r[17].w[0]);
    c.budget -= 3;
L_004F439C:
    set32(c.r[2], 0u + 2u);
    st8((c.r[8].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[8].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_004F43AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F43B4u); set32(c.r[4], ld32((c.r[17].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 70u, depth + 1u); else { c.pc = 0x00450F80u; return; } if (c.pc != 0x004F43B4u) [[unlikely]] return; }
L_004F43B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004F442C; } }
L_004F43BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 1;
L_004F43C0:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F425Cu | kUnwind; return; } goto L_004F425C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 148u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F424Cu | kUnwind; return; } goto L_004F424C; } }
L_004F43DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F43E8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004F43E8u) [[unlikely]] return; }
L_004F43E8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F43F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F43F8u) [[unlikely]] return; }
L_004F43F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4260u | kUnwind; return; } goto L_004F4260; } }
L_004F4400:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4268u | kUnwind; return; } goto L_004F4268; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F441Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0065(c, 198u, depth + 1u); else { c.pc = 0x00397460u; return; } if (c.pc != 0x004F441Cu) [[unlikely]] return; }
L_004F441C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 208u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F426Cu | kUnwind; return; } goto L_004F426C; } }
L_004F4424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4360u | kUnwind; return; } goto L_004F4360; } }
L_004F442C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004F4450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F44B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 20176u);
    set32(c.r[6], 0u - 9u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] << 3);
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = ld8((c.r[9].w[0] + 1496u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 1496u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F44B8u); st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x004F44B8u) [[unlikely]] return; }
L_004F44B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F44D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 103u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F4500; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F45BC; } }
L_004F4500:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F45C4; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_004F4514:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 3u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 42;
L_004F45BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004F45D4; } }
L_004F45C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F45CCu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F45CCu) [[unlikely]] return; }
L_004F45CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4514u | kUnwind; return; } goto L_004F4514; } }
L_004F45D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F45F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[7].w[0] + 380u));
    set32(c.r[6], ld32((c.r[7].w[0] + 344u)));
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 54;
    c.r[4].d[0] = c.r[4].d[0] >> 60;
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], ld32((c.r[5].w[0] + 12u)));  if (t) { goto L_004F467C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F467C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F4648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004F4680; } }
L_004F4648:
    c.f[0] = ld32((c.r[5].w[0] + 56u));
    c.f[1] = ld32((c.r[7].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F467C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4664u); set32(c.r[4], ld32((c.r[7].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 36u, depth + 1u); else { c.pc = 0x004506C0u; return; } if (c.pc != 0x004F4664u) [[unlikely]] return; }
L_004F4664:
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[3], 0u - 961u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_004F467C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004F4680:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F4690:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[8].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], 0u - 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[8].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u - 9u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[21], c.r[8].w[0] << 3);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[25], 0u - 17u);
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 33u);
    set32(c.r[18], c.r[8].w[0] << 5);
    set32(c.r[24], c.r[8].w[0] << 11);
    set32(c.r[15], 0u - 2049u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[14], 0u + 208u);
    set32(c.r[11], c.r[11].w[0] - 20176u);
    set32(c.r[12], 0u - 3u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[9].d[0] = c.r[9].d[0] & c.r[6].d[0];
    set32(c.r[8], c.r[8].w[0] << 1);
    c.r[9].d[0] = c.r[9].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.r[20].d[0] = c.r[20].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    c.r[25].d[0] = c.r[20].d[0] & c.r[25].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    c.r[25].d[0] = c.r[25].d[0] & c.r[2].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[18].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[11].d[0] = c.r[11].d[0] & c.r[12].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[13].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[3].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[12].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 78;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F47D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F47D0u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F47D0u) [[unlikely]] return; }
L_004F47D0:
    set32(c.r[2], 0u + 103u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], 0u + 122u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[2].d[0] = 0ull & 15ull;
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], 0u - 961u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4874u); st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x004F4874u) [[unlikely]] return; }
L_004F4874:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4888u); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x004F4888u) [[unlikely]] return; }
L_004F4888:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004F48B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F4938; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 20144u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4900u); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 69u, depth + 1u); else { c.pc = 0x00450F70u; return; } if (c.pc != 0x004F4900u) [[unlikely]] return; }
L_004F4900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F490Cu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x004F490Cu) [[unlikely]] return; }
L_004F490C:
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u - 33u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4938u); st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x004F4938u) [[unlikely]] return; }
L_004F4938:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F4950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 103u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F4980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F4A3C; } }
L_004F4980:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F4A44; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_004F4994:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 3u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 42;
L_004F4A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004F4A54; } }
L_004F4A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4A4Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F4A4Cu) [[unlikely]] return; }
L_004F4A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4994u | kUnwind; return; } goto L_004F4994; } }
L_004F4A54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F4A70:
    set32(c.r[29], c.r[29].w[0] - 496u);
    set32(c.r[5], 0u + 2u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[6].d[0] = ld16((c.r[8].w[0] + 380u));
    c.r[4].d[0] = c.r[3].d[0] << 54;
    set32(c.r[3], ld32((c.r[8].w[0] + 344u)));
    c.r[4].d[0] = c.r[4].d[0] >> 60;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 24;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[6], ld32((c.r[7].w[0] + 12u)));  if (t) { goto L_004F500C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_004F4E60; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F4AEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F4E8C; } }
L_004F4AEC:
    c.f[0] = ld32((c.r[6].w[0] + 56u));
    c.f[1] = ld32((c.r[8].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F500C; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004F4B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[4].w[0] + 60u));  if (t) { goto L_004F4B24; } }
L_004F4B20:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_004F4B24:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004F4E94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 14976u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_004F4F10; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004F4B64; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 2;
L_004F4B64:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F4B7C; } }
    c.r[6].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004F4B7C:
    set32(c.r[2], ld32((c.r[8].w[0] + 348u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004F4B8C:
    set32(c.r[4], c.r[8].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4B98u); set32(c.r[6], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x004F4B98u) [[unlikely]] return; }
L_004F4B98:
    c.f[0] = ld32((c.r[29].w[0] + 448u));
    c.budget -= 1;
L_004F4B9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 460u));
    set32(c.r[18], c.r[29].w[0] + 420u);
    c.f[5] = ld32((c.r[29].w[0] + 452u));
    set32(c.r[17], c.r[29].w[0] + 424u);
    c.f[4] = ld32((c.r[29].w[0] + 456u));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[3] = 0u;
    set32(c.r[19], ld32((c.r[28].w[0] - 28492u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 416u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 428u), c.f[2]);
    st32((c.r[18].w[0]), c.f[5]);
    c.f[2] = ld32((c.r[29].w[0] + 420u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    st32((c.r[17].w[0]), c.f[4]);
    c.f[0] = ld32((c.r[29].w[0] + 424u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4BFCu); st32((c.r[29].w[0] + 168u), c.f[0]);  if (depth < kMaxDepth) unit_007D(c, 31u, depth + 1u); else { c.pc = 0x003F42A0u; return; } if (c.pc != 0x004F4BFCu) [[unlikely]] return; }
L_004F4BFC:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F4C00:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C0Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_007C(c, 209u, depth + 1u); else { c.pc = 0x003F38C0u; return; } if (c.pc != 0x004F4C0Cu) [[unlikely]] return; }
L_004F4C0C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4C00u | kUnwind; return; } goto L_004F4C00; } }
    set32(c.r[4], c.r[19].w[0] + 388u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C30u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00BC(c, 85u, depth + 1u); else { c.pc = 0x004F12A0u; return; } if (c.pc != 0x004F4C30u) [[unlikely]] return; }
L_004F4C30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C40u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 56u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x004F4C40u) [[unlikely]] return; }
L_004F4C40:
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 416u);
    set32(c.r[6], c.r[29].w[0] + 208u);
    set32(c.r[7], c.r[16].w[0] + 16u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4C64u); set32(c.r[8], 0u + 50u);  if (depth < kMaxDepth) unit_0029(c, 157u, depth + 1u); else { c.pc = 0x002A5AD0u; return; } if (c.pc != 0x004F4C64u) [[unlikely]] return; }
L_004F4C64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F4F1C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1536u)));
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F4CA0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F4CA0:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 154u));
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F4CBC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F4CBC:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 76u));
    c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
L_004F4CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[6], c.r[29].w[0] + 196u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.f[0] = c.r[2].w[0];
    c.f[4] = 0u;
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    c.f[3] = c.r[5].w[0];
    st32((c.r[29].w[0] + 192u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[2] = c.r[3].w[0];
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004F4FB0; } }
    set32(c.r[19], c.r[29].w[0] + 208u);
    set32(c.r[22], c.r[29].w[0] + 180u);
    set32(c.r[23], c.r[29].w[0] + 184u);
    c.budget -= 3;
L_004F4D3C:
    set32(c.r[21], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_004F4F98; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F4F98; } }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F4F98; } }
    c.f[4] = ld32((c.r[21].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[21].w[0] + 40u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[6] = ld32((c.r[21].w[0] + 32u));
    c.f[5] = ld32((c.r[29].w[0] + 416u));
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = c.f[3] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);  if (t) { goto L_004F4F98; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 522u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + 8704u);
    c.r[5].d[0] = ld8((c.r[21].w[0] + 522u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F4F2C; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 808u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F4DF8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F4DF8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F4DF8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F4F2C; } }
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[21] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E2Cu);  if (depth < kMaxDepth) unit_0021(c, 35u, depth + 1u); else { c.pc = 0x00284D10u; return; } if (c.pc != 0x004F4E2Cu) [[unlikely]] return; }
L_004F4E2C:
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[13] = c.f[21];
    set32(c.r[5], c.r[29].w[0] + 416u);
    c.f[14] = c.f[20];
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E58u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0035(c, 94u, depth + 1u); else { c.pc = 0x002D52E0u; return; } if (c.pc != 0x004F4E58u) [[unlikely]] return; }
L_004F4E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F4F98; } }
L_004F4E60:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 17u));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 17u));
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004F4FF8; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 17u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4E8Cu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 22u, depth + 1u); else { c.pc = 0x0034C2D0u; return; } if (c.pc != 0x004F4E8Cu) [[unlikely]] return; }
L_004F4E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_004F5010; } }
L_004F4E94:
    c.r[4].d[0] = ld8((c.r[8].w[0] + 1536u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + 14976u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_004F4F04; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004F4EC8; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 2;
L_004F4EC8:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F4EE0; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004F4EE0:
    set32(c.r[2], ld32((c.r[8].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004F4EF0:
    set32(c.r[4], c.r[8].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4EFCu); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x004F4EFCu) [[unlikely]] return; }
L_004F4EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 448u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4B9Cu | kUnwind; return; } goto L_004F4B9C; } }
L_004F4F04:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4EF0u | kUnwind; return; } goto L_004F4EF0; } }
L_004F4F10:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4B8Cu | kUnwind; return; } goto L_004F4B8C; } }
L_004F4F1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x420C0000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4CE0u | kUnwind; return; } goto L_004F4CE0; } }
L_004F4F2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    set32(c.r[10], 0u - 3u);
    st32((c.r[23].w[0]), 0u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[12].d[0] = ld16((c.r[21].w[0] + 544u));
    set32(c.r[8], 0u - 17u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[21].w[0] + 544u);
    set32(c.r[5], c.r[29].w[0] + 416u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st16((c.r[21].w[0] + 544u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[21].w[0] + 544u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[21].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[21].w[0] + 544u));
    c.r[2].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4F98u); st16((c.r[21].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 363u, depth + 1u); else { c.pc = 0x0028B7C0u; return; } if (c.pc != 0x004F4F98u) [[unlikely]] return; }
L_004F4F98:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4D3Cu | kUnwind; return; } goto L_004F4D3C; } }
    c.budget -= 1;
L_004F4FB0:
    set32(c.r[2], 0u + 16u);
    st8((c.r[16].w[0] + 17u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 118u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4FC8u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x004F4FC8u) [[unlikely]] return; }
L_004F4FC8:
    c.r[4].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], 0u - 961u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F4FF0u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x004F4FF0u) [[unlikely]] return; }
L_004F4FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4E8Cu | kUnwind; return; } goto L_004F4E8C; } }
L_004F4FF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5004u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 21u, depth + 1u); else { c.pc = 0x0034C2A0u; return; } if (c.pc != 0x004F5004u) [[unlikely]] return; }
L_004F5004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F4E8Cu | kUnwind; return; } goto L_004F4E8C; } }
L_004F500C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_004F5010:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_004F5040:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[8].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], 0u - 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[7], c.r[8].w[0] << 2);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u - 9u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[21], c.r[8].w[0] << 3);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[25], 0u - 17u);
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 33u);
    set32(c.r[18], c.r[8].w[0] << 5);
    set32(c.r[24], c.r[8].w[0] << 11);
    set32(c.r[15], 0u - 2049u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[14], 0u + 208u);
    set32(c.r[11], c.r[11].w[0] - 20144u);
    set32(c.r[12], 0u - 3u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[9].d[0] = c.r[9].d[0] & c.r[6].d[0];
    set32(c.r[8], c.r[8].w[0] << 1);
    c.r[9].d[0] = c.r[9].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[20].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.r[20].d[0] = c.r[20].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    c.r[25].d[0] = c.r[20].d[0] & c.r[25].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    c.r[25].d[0] = c.r[25].d[0] & c.r[2].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[18].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[11].d[0] = c.r[11].d[0] & c.r[12].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[13].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[3].d[0] = c.r[11].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[12].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 78;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F5180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5180u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F5180u) [[unlikely]] return; }
L_004F5180:
    set32(c.r[2], 0u + 103u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], 0u + 117u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[2].d[0] = 0ull & 15ull;
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[2], 0u - 961u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[6].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5224u); st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x004F5224u) [[unlikely]] return; }
L_004F5224:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5238u); set32(c.r[5], 0u + 29u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x004F5238u) [[unlikely]] return; }
L_004F5238:
    set32(c.r[3], 0u + 128u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004F5270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F531C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 20112u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F52C0u); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 69u, depth + 1u); else { c.pc = 0x00450F70u; return; } if (c.pc != 0x004F52C0u) [[unlikely]] return; }
L_004F52C0:
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[2].w[0] << 5);
    set32(c.r[5], 0u - 33u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], 0u - 1u);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 526u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 526u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[3].w[0] + 30800u), 0u);
    st8((c.r[2].w[0] + 30804u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 24u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_004F5310; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5310u); set32(c.r[4], c.r[4].w[0] + 24608u);  if (depth < kMaxDepth) unit_0052(c, 134u, depth + 1u); else { c.pc = 0x0034AD50u; return; } if (c.pc != 0x004F5310u) [[unlikely]] return; }
L_004F5310:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F531Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x004F531Cu) [[unlikely]] return; }
L_004F531C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F5330:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 103u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F5360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F541C; } }
L_004F5360:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F5424; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_004F5374:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 3u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 42;
L_004F541C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004F5434; } }
L_004F5424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F542Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F542Cu) [[unlikely]] return; }
L_004F542C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F5374u | kUnwind; return; } goto L_004F5374; } }
L_004F5434:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F5450:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 30836u));
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.r[6].d[0] = ld8((c.r[28].w[0] - 30835u));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 30834u));
    st8((c.r[29].w[0] + 156u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 157u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 158u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[7].w[0] + 380u));
    set32(c.r[6], ld32((c.r[7].w[0] + 344u)));
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[5].w[0] + 12u)));
    c.r[4].d[0] = c.r[4].d[0] << 54;
    c.r[4].d[0] = c.r[4].d[0] >> 60;
    c.budget -= 25;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.f[11] = ld32((c.r[29].w[0] + 76u));  if (t) { goto L_004F58A0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F58A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F5648; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F54DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F5880; } }
L_004F54DC:
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[7].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F58A0; } }
    set32(c.r[5], c.r[7].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F54FCu); set32(c.r[4], 0u + 120u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x004F54FCu) [[unlikely]] return; }
L_004F54FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    set32(c.r[5], 0u + 29u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5514u); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x004F5514u) [[unlikely]] return; }
L_004F5514:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F5888; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1584u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F5540; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004F5540:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[9], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004F5550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BE50000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = c.r[2].d[0] | 24642ull;
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CDD0000u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[2].d[0] = c.r[2].d[0] | 12059ull;
    set32(c.r[6], c.r[29].w[0] + 156u);
    c.f[8] = c.r[2].w[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[6] = ld32((c.r[9].w[0] + 20u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E280000u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[7] = c.r[2].w[0];
    c.f[9] = ld32((c.r[9].w[0] + 4u));
    c.f[10] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[6]);
    c.f[11] = ld32((c.r[9].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[5] = ld32((c.r[9].w[0] + 52u));
    c.f[2] = ld32((c.r[9].w[0] + 24u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[9]);
    c.f[3] = ld32((c.r[9].w[0] + 8u));
    c.f[4] = ld32((c.r[9].w[0] + 40u));
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[11]);
    c.f[0] = ld32((c.r[9].w[0] + 56u));
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[2]);
    c.f[6] = fp::ee::add(c.fcr31, c.f[5], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[4]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[2] = ld32((c.r[9].w[0] + 16u));
    c.f[3] = ld32((c.r[9].w[0]));
    c.f[4] = ld32((c.r[9].w[0] + 32u));
    c.f[0] = ld32((c.r[9].w[0] + 48u));
    c.f[1] = c.r[2].w[0];
    c.f[12] = c.r[3].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 132u), c.f[6]);
    st32((c.r[29].w[0] + 136u), c.f[5]);
    st32((c.r[29].w[0] + 140u), c.f[20]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5618u); c.f[13] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0052(c, 150u, depth + 1u); else { c.pc = 0x0034B3D0u; return; } if (c.pc != 0x004F5618u) [[unlikely]] return; }
L_004F5618:
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F562Cu); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x004F562Cu) [[unlikely]] return; }
L_004F562C:
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], 0u - 961u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004F5880; } }
L_004F5648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F5894; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1584u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F5684; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004F5684:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004F5694:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BE50000u);
    c.r[3].d[0] = c.r[2].d[0] | 24642ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CDD0000u);
    c.r[2].d[0] = c.r[2].d[0] | 12059ull;
    c.f[7] = c.r[2].w[0];
    c.f[5] = ld32((c.r[4].w[0] + 20u));
    c.f[9] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E280000u);
    c.f[8] = ld32((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[2].d[0] | 62915ull;
    c.f[6] = c.r[3].w[0];
    set32(c.r[2], 0u - 1u);
    c.f[10] = ld32((c.r[4].w[0] + 36u));
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[5]);
    c.f[4] = ld32((c.r[4].w[0] + 52u));
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[8]);
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[10]);
    c.f[3] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.f[5] = fp::ee::add(c.fcr31, c.f[4], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[3]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[5]);
    st32((c.r[29].w[0] + 120u), c.f[4]);
    st32((c.r[29].w[0] + 124u), c.f[11]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 24u)));
    c.budget -= 41;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F5778; } }
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 24u)));
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[4].w[0] + 24608u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[6], c.r[29].w[0] + 156u);
    c.f[13] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5778u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0052(c, 114u, depth + 1u); else { c.pc = 0x0034A160u; return; } if (c.pc != 0x004F5778u) [[unlikely]] return; }
L_004F5778:
    c.f[5] = ld32((c.r[29].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[3] = ld32((c.r[29].w[0] + 120u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[2] = ld32((c.r[29].w[0] + 124u));
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.f[4] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[4], c.r[4].w[0] + 30768u);
    c.f[0] = 0u;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.f[5]);
    st32((c.r[29].w[0] + 104u), c.f[3]);
    st32((c.r[29].w[0] + 108u), c.f[2]);
    st32((c.r[3].w[0]), c.f[4]);
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F57CCu); st32((c.r[3].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00BD(c, 108u, depth + 1u); else { c.pc = 0x004F6170u; return; } if (c.pc != 0x004F57CCu) [[unlikely]] return; }
L_004F57CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 51u));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = ld32((c.r[4].w[0] + 360u));  if (t) { goto L_004F57E8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004F5804; } }
L_004F57E8:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004F5804:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F58A0; } }
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], 0u - 961u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(192ll);
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 24u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004F5864; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F585Cu); set32(c.r[4], c.r[4].w[0] + 24608u);  if (depth < kMaxDepth) unit_0052(c, 134u, depth + 1u); else { c.pc = 0x0034AD50u; return; } if (c.pc != 0x004F585Cu) [[unlikely]] return; }
L_004F585C:
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004F5864:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 30800u), 0u);
    st8((c.r[2].w[0] + 30804u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5880u); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 67u, depth + 1u); else { c.pc = 0x00450EC0u; return; } if (c.pc != 0x004F5880u) [[unlikely]] return; }
L_004F5880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004F58A4; } }
L_004F5888:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F5550u | kUnwind; return; } goto L_004F5550; } }
L_004F5894:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F5694u | kUnwind; return; } goto L_004F5694; } }
L_004F58A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004F58A4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004F58C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[8].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[7], c.r[8].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], 0u - 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[22], c.r[8].w[0] << 3);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[19], c.r[8].w[0] << 5);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], c.r[8].w[0] << 11);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[9], c.r[8].w[0] << 1);
    c.r[10].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], 0u - 9u);
    set32(c.r[18], 0u - 17u);
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 33u);
    set32(c.r[24], 0u - 2049u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[15], 0u + 207u);
    set32(c.r[12], c.r[12].w[0] - 20112u);
    set32(c.r[13], 0u - 3u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[8].d[0] = c.r[10].d[0] & c.r[6].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[21].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[8], 0u - 1u);
    c.r[21].d[0] = c.r[21].d[0] & c.r[3].d[0];
    c.r[21].d[0] = c.r[21].d[0] | c.r[22].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.r[21].d[0] = ld16((c.r[4].w[0]));
    c.r[18].d[0] = c.r[21].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[20].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[18].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[18].d[0] = ld16((c.r[4].w[0]));
    c.r[24].d[0] = c.r[18].d[0] & c.r[24].d[0];
    c.r[24].d[0] = c.r[24].d[0] | c.r[25].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[24].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[3].d[0] = c.r[12].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 526u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[10].d[0];
    st8((c.r[5].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[13].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 82;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F5AA8; } }
    set32(c.r[2], 0u + 103u);
    c.budget -= 1;
L_004F5A0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], 0u - 961u);
    c.r[2].d[0] = 0ull & 15ull;
    set32(c.r[4], c.r[2].w[0] << 6);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[5], c.r[5].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[5].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 39;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004F5AB8; } }
L_004F5AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5AB0u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F5AB0u) [[unlikely]] return; }
L_004F5AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 103u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F5A0Cu | kUnwind; return; } goto L_004F5A0C; } }
L_004F5AB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004F5AE0:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F5BA0; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + 3376u);
    c.budget -= 3;
L_004F5AF8:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004F5B88; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004F5B88; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 42u));
    set32(c.r[7], c.r[4].w[0] + 40u);
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.r[6].d[0] = c.r[6].d[0] | 16ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[10], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[10].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[8], c.r[9].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[8].w[0] + 1056u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[10].w[0]);
    set32(c.r[5], ld32((c.r[8].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[8].w[0] + 1064u), c.r[5].w[0]);
    c.budget -= 30;
L_004F5B88:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[5].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F5AF8u | kUnwind; return; } goto L_004F5AF8; } }
L_004F5BA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004F5BB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
L_004F5BD4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F5C00; } }
L_004F5BE0:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[2].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F5BD4u | kUnwind; return; } goto L_004F5BD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_004F5C20; } }
L_004F5C00:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5C14u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_00BD(c, 104u, depth + 1u); else { c.pc = 0x004F5E70u; return; } if (c.pc != 0x004F5C14u) [[unlikely]] return; }
L_004F5C14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F5BE0u | kUnwind; return; } goto L_004F5BE0; } }
    c.budget -= 1;
L_004F5C20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004F5C40:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_004F5C48:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 68u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F5CE8; } }
    c.r[3].d[0] = c.r[7].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[7], c.r[3].w[0] << 6);
    set32(c.r[6], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[6].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_004F5C7C; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    st32((c.r[6].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 2;
L_004F5C7C:
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[11], c.r[7].w[0] + c.r[4].w[0]);
    c.r[9].d[0] = 0ull & 1ull;
    set32(c.r[8], 0u - 2u);
    set32(c.r[6], 0u - 3u);
    set32(c.r[7], c.r[9].w[0] << 1);
    set32(c.r[4], 0u - 5u);
    set32(c.r[3], 0u + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[5], c.r[9].w[0] << 2);
    st32((c.r[11].w[0] + 24u), c.f[0]);
    c.r[10].d[0] = ld8((c.r[11].w[0] + 8u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[11].w[0] + 8u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st8((c.r[11].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F5D00; } }
L_004F5CE8:
    set32(c.r[3], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[3].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F5C48u | kUnwind; return; } goto L_004F5C48; } }
L_004F5D00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004F5D10:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F5D14:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F5D28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004F5D44; } }
L_004F5D28:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F5D14u | kUnwind; return; } goto L_004F5D14; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F5D44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004F5D50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  c.pc = t; return; }
L_004F5D60:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_004F5D68:
    st32((c.r[5].w[0] + 64u), 0u);
    set32(c.r[3], c.r[6].w[0] + 5u);
    st8((c.r[5].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = c.r[3].d[0] << 56;
    st32((c.r[5].w[0] + 128u), 0u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st8((c.r[5].w[0] + 132u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[6].sd[0] < 10ll ? 1ull : 0ull;
    st32((c.r[5].w[0] + 192u), 0u);
    st8((c.r[5].w[0] + 196u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 256u), 0u);
    st8((c.r[5].w[0] + 260u), static_cast<std::uint8_t>(0u));
    st32((c.r[5].w[0] + 320u), 0u);
    st8((c.r[5].w[0] + 324u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F5D68u | kUnwind; return; } goto L_004F5D68; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_004F5DC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_004F5DD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 74u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5DE8u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004F5DE8u) [[unlikely]] return; }
L_004F5DE8:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5DF4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x004F5DF4u) [[unlikely]] return; }
L_004F5DF4:
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[7].d[0] = 0ull & 1ull;
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[6], 0u - 2u);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u - 3u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[5], c.r[7].w[0] << 1);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[3].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F5DD8u | kUnwind; return; } goto L_004F5DD8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F5E70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004F5EA4; } }
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_004F5EA4; } }
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_004F5EA4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F614C; } }
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F5FD4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F5EFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[3] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = 0u;
    c.f[2] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.f[0]);  if (t) { goto L_004F5F20; } }
L_004F5EFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[3] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = 0u;
    c.f[2] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.budget -= 9;
L_004F5F20:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[3].w[0] + 32u);  if (t) { goto L_004F6020; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F5F7C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F5F7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5F7Cu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0052(c, 164u, depth + 1u); else { c.pc = 0x0034B760u; return; } if (c.pc != 0x004F5F7Cu) [[unlikely]] return; }
L_004F5F7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], 0u + 71u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F5F90u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004F5F90u) [[unlikely]] return; }
L_004F5F90:
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F5FC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_004F6020; } }
L_004F5FC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_004F6020; } }
L_004F5FD4:
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F6020; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = 0u;
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 12u), c.f[1]);  if (t) { goto L_004F6020; } }
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_004F6020:
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F6064; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F6064; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6058u); c.r[6].d[0] = c.r[2].d[0] >> 63;  if (depth < kMaxDepth) unit_0034(c, 281u, depth + 1u); else { c.pc = 0x002D3E90u; return; } if (c.pc != 0x004F6058u) [[unlikely]] return; }
L_004F6058:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004F6150; } }
L_004F6064:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[12], ld32((c.r[17].w[0] + 4u)));
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[9].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[10], c.r[29].w[0] + 48u);
    set32(c.r[3], c.r[29].w[0] + 116u);
    set32(c.r[11], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 100u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    vu::addbc4<1>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 104u);
    c.f[3] = ld32((c.r[12].w[0] + 32u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[2] = ld32((c.r[12].w[0] + 40u));
    st128((c.r[10].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[1] = ld32((c.r[12].w[0] + 44u));
    c.f[0] = ld32((c.r[3].w[0]));
    st128((c.r[10].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    st32((c.r[29].w[0] + 112u), c.f[3]);
    st32((c.r[29].w[0] + 120u), c.f[2]);
    st32((c.r[29].w[0] + 124u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0]));
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[6].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 48u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 60u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 52u), 0u);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.r[8].w[0]);
    st128((c.r[10].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[10].w[0]) & ~15u, c.vu0.vf[30]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 64u), 0u);
    st128((c.r[10].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[10].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st32((c.r[29].w[0] + 88u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 92u), 0u);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    ld128((c.r[10].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[10].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 58;
    { const bool t = 0ull == 0ull; st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);  if (t) { goto L_004F6150; } }
L_004F614C:
    st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004F6150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004F6170:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[7], c.r[29].w[0] + 68u);
    c.f[2] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[3], c.r[29].w[0] + 72u);
    c.f[5] = ld32((c.r[2].w[0] - 20412u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[4] = c.r[2].w[0];
    st32((c.r[29].w[0] + 72u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.f[6] = fp::ee::mul(c.fcr31, c.f[4], c.f[5]);
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[4] = ld32((c.r[6].w[0]));
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[6]));
    c.budget -= 34;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004F6204; } }
    st32((c.r[4].w[0] + 32u), c.f[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004F620C; } }
L_004F6204:
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 2;
L_004F620C:
    vu::sub4<1>(c.vu0, 15u, 1u, 1u, 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C030000u);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.r[3].d[0] = c.r[3].d[0] | 4719ull;
    c.f[1] = c.r[3].w[0];
    set32(c.r[11], c.r[29].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[9], c.r[29].w[0] + 56u);
    vu::addbc4<1>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[8], c.r[29].w[0] + 52u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[11].w[0]) & ~15u, c.vu0.vf[1]);
    st128((c.r[11].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    st32((c.r[29].w[0]), c.f[3]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[9].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 60u), c.r[10].w[0]);
    st32((c.r[8].w[0]), c.f[1]);
    ld128((c.r[11].w[0]) & ~15u, c.vu0.vf[30]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st32((c.r[7].w[0]), c.f[0]);
    st128((c.r[11].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    st128((c.r[11].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    st32((c.r[29].w[0] + 40u), c.f[3]);
    ld128((c.r[11].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st32((c.r[29].w[0] + 32u), 0u);
    ld128((c.r[11].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[11].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 52;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004F62E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 74u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6300u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004F6300u) [[unlikely]] return; }
L_004F6300:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F630Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x004F630Cu) [[unlikely]] return; }
L_004F630C:
    st32((c.r[16].w[0] + 32u), 0u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F6330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F638C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 20080u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6380u); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 69u, depth + 1u); else { c.pc = 0x00450F70u; return; } if (c.pc != 0x004F6380u) [[unlikely]] return; }
L_004F6380:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F638Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x004F638Cu) [[unlikely]] return; }
L_004F638C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F63A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 103u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F63D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F648C; } }
L_004F63D0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F6494; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_004F63E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[5], 0u - 5u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 3u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 42;
L_004F648C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004F64A4; } }
L_004F6494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F649Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F649Cu) [[unlikely]] return; }
L_004F649C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F63E4u | kUnwind; return; } goto L_004F63E4; } }
L_004F64A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F64C0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 57;
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_004F650C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0] + 60u));  if (t) { goto L_004F6510; } }
L_004F650C:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_004F6510:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_004F67D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004F6854; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F6550; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004F6550:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F6568; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004F6568:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F6578:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6584u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x004F6584u) [[unlikely]] return; }
L_004F6584:
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.budget -= 1;
L_004F6588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], 0u + 9u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F65A4u); set32(c.r[8], c.r[29].w[0] + 175u);  if (depth < kMaxDepth) unit_0029(c, 172u, depth + 1u); else { c.pc = 0x002A5F60u; return; } if (c.pc != 0x004F65A4u) [[unlikely]] return; }
L_004F65A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 175u));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 522u));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004F6708; } }
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[10], c.r[10].w[0] + 29552u);
    set32(c.r[3], c.r[3].w[0] + 8704u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43100000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], 0u + 1u);
    c.budget -= 11;
L_004F65E8:
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[7], ld32((c.r[7].w[0] + 264u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_004F66F0; } }
L_004F65F8:
    c.r[9].d[0] = ld8((c.r[7].w[0] + 522u));
    set32(c.r[8], ld32((c.r[4].w[0])));
    set32(c.r[9], c.r[3].w[0] << (c.r[9].w[0] & 31u));
    c.r[8].d[0] = c.r[9].d[0] & c.r[8].d[0];
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_004F6618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[7].w[0] + 1572u)));  if (t) { goto L_004F66E8; } }
L_004F6618:
    c.r[9].d[0] = ld8((c.r[7].w[0] + 523u));
    c.r[8].d[0] = c.r[9].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_004F6638; } }
    c.r[8].d[0] = c.r[9].d[0] << 60;
    c.r[8].d[0] = c.r[8].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_004F6640; } }
L_004F6638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[7].w[0] + 1572u)));  if (t) { goto L_004F66E8; } }
L_004F6640:
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.f[4] = ld32((c.r[7].w[0] + 36u));
    c.f[6] = ld32((c.r[7].w[0] + 32u));
    c.f[2] = ld32((c.r[7].w[0] + 40u));
    c.f[3] = ld32((c.r[8].w[0] + 36u));
    c.f[5] = ld32((c.r[8].w[0] + 32u));
    c.f[1] = ld32((c.r[8].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004F66E0; } }
    c.r[9].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[1].d[0] = c.r[9].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004F66F0; } }
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[10].w[0] + c.r[8].w[0]);
    st32((c.r[8].w[0]), c.r[7].w[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[10].w[0] + c.r[8].w[0]);
    st32((c.r[8].w[0] + 4u), c.f[1]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[10].w[0] + c.r[8].w[0]);
    st8((c.r[8].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 20;
L_004F66E0:
    set32(c.r[7], ld32((c.r[7].w[0] + 1572u)));
    c.budget -= 2;
L_004F66E8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F65F8u | kUnwind; return; } goto L_004F65F8; } }
L_004F66F0:
    c.r[7].d[0] = ld8((c.r[29].w[0] + 175u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[7].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F65E8u | kUnwind; return; } goto L_004F65E8; } }
    c.budget -= 1;
L_004F6708:
    set32(c.r[6], c.r[29].w[0] + 164u);
    set32(c.r[5], c.r[29].w[0] + 168u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[3], c.r[29].w[0] + 152u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[14], c.r[14].w[0] + 29552u);
    set32(c.r[12], c.r[12].w[0] + 29564u);
    set32(c.r[13], 0u + 1u);
    c.budget -= 10;
L_004F6730:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[24], c.r[8].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[24].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004F68B0; } }
    set32(c.r[8], c.r[24].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[24].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[15], c.r[14].w[0] + c.r[8].w[0]);
    c.budget -= 4;
L_004F6750:
    c.f[1] = ld32((c.r[15].w[0] + 4u));
    c.f[0] = ld32((c.r[15].w[0] - 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F6860; } }
    c.budget -= 1;
L_004F6768:
    set32(c.r[24], c.r[24].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[24].sd[0] > 0; set32(c.r[15], c.r[15].w[0] - 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6750u | kUnwind; return; } goto L_004F6750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F68B0; } }
    c.budget -= 1;
L_004F6780:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[1].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[15].d[0] = c.r[13].d[0] + 0ull;  if (t) { goto L_004F67C8; } }
    c.r[24].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 1;
L_004F6798:
    c.f[1] = ld32((c.r[24].w[0] + 4u));
    c.f[0] = ld32((c.r[24].w[0] - 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F68C0; } }
    c.budget -= 1;
L_004F67B0:
    c.r[8].d[0] = ld8((c.r[16].w[0] + 16u));
    set32(c.r[15], c.r[15].w[0] + 1u);
    c.r[8].d[0] = c.r[15].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[24], c.r[24].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6798u | kUnwind; return; } goto L_004F6798; } }
    c.budget -= 1;
L_004F67C8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6730u | kUnwind; return; } goto L_004F6730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F6910; } }
L_004F67D8:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004F6848; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F680C; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004F680C:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F6824; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004F6824:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F6834:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6840u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x004F6840u) [[unlikely]] return; }
L_004F6840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6588u | kUnwind; return; } goto L_004F6588; } }
L_004F6848:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6834u | kUnwind; return; } goto L_004F6834; } }
L_004F6854:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6578u | kUnwind; return; } goto L_004F6578; } }
L_004F6860:
    c.f[2] = ld32((c.r[15].w[0]));
    set32(c.r[8], ld32((c.r[15].w[0] - 12u)));
    c.f[1] = ld32((c.r[15].w[0] + 4u));
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.f[0] = ld32((c.r[15].w[0] + 8u));
    st32((c.r[29].w[0] + 160u), c.f[2]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    set32(c.r[9], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[15].w[0]), c.r[8].w[0]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.f[1] = ld32((c.r[15].w[0] - 8u));
    c.r[8].d[0] = ld8((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[15].w[0] + 4u), c.f[1]);
    c.r[10].d[0] = ld8((c.r[15].w[0] - 4u));
    st8((c.r[15].w[0] + 8u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[15].w[0] - 12u), c.r[9].w[0]);
    st32((c.r[15].w[0] - 8u), c.f[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[15].w[0] - 4u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6768u | kUnwind; return; } goto L_004F6768; } }
L_004F68B0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F67C8u | kUnwind; return; } goto L_004F67C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6780u | kUnwind; return; } goto L_004F6780; } }
L_004F68C0:
    set32(c.r[8], ld32((c.r[24].w[0] - 12u)));
    c.f[2] = ld32((c.r[24].w[0]));
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    c.f[1] = ld32((c.r[24].w[0] + 4u));
    c.f[0] = ld32((c.r[24].w[0] + 8u));
    st32((c.r[29].w[0] + 144u), c.f[2]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    set32(c.r[9], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[24].w[0]), c.r[8].w[0]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[1] = ld32((c.r[24].w[0] - 8u));
    c.r[8].d[0] = ld8((c.r[3].w[0]));
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[24].w[0] + 4u), c.f[1]);
    c.r[10].d[0] = ld8((c.r[24].w[0] - 4u));
    st8((c.r[24].w[0] + 8u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[24].w[0] - 12u), c.r[9].w[0]);
    st32((c.r[24].w[0] - 8u), c.f[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[24].w[0] - 4u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F67B0u | kUnwind; return; } goto L_004F67B0; } }
L_004F6910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004F6920:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[8], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[6].d[0] = ld16((c.r[8].w[0] + 380u));
    set32(c.r[7], ld32((c.r[8].w[0] + 344u)));
    c.r[5].d[0] = c.r[5].d[0] << 54;
    c.r[5].d[0] = c.r[5].d[0] >> 60;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 18;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F6BAC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004F6A38; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004F6984; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F6B28; } }
L_004F6984:
    c.f[1] = ld32((c.r[8].w[0] + 360u));
    c.f[0] = ld32((c.r[6].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F6BAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F69A0u);  if (depth < kMaxDepth) unit_00BD(c, 118u, depth + 1u); else { c.pc = 0x004F64C0u; return; } if (c.pc != 0x004F69A0u) [[unlikely]] return; }
L_004F69A0:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 380u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[20] = ld32((c.r[16].w[0] + 360u));  if (t) { goto L_004F69C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F69C0u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F69C0u) [[unlikely]] return; }
L_004F69C0:
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 360u), c.f[20]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 364u), 0u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    set32(c.r[4], 0u - 2u);
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 961u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6A30u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0094(c, 73u, depth + 1u); else { c.pc = 0x00450FD0u; return; } if (c.pc != 0x004F6A30u) [[unlikely]] return; }
L_004F6A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F6B28; } }
L_004F6A38:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 17u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[4].w[0];
    set32(c.r[3], c.r[5].w[0] - 1u);
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 20u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 20u), c.f[1]);  if (t) { goto L_004F6B78; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 17u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_004F6BAC; } }
    c.r[8].d[0] = ld8((c.r[17].w[0] + 16u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004F6AF0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[6], c.r[6].w[0] + 29552u);
    c.budget -= 2;
L_004F6A94:
    c.r[4].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 8u);  if (t) { goto L_004F6AD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] + 29556u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F6B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004F6AF4; } }
L_004F6AD8:
    set32(c.r[3], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6A94u | kUnwind; return; } goto L_004F6A94; } }
    c.budget -= 1;
L_004F6AF0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F6AF4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F6B40; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 48u, depth + 1u); else { c.pc = 0x002D0A50u; return; } if (c.pc != 0x004F6B08u) [[unlikely]] return; }
L_004F6B08:
    c.f[12] = ld32((c.r[17].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B1Cu); set32(c.r[4], c.r[4].w[0] + 20192u);  if (depth < kMaxDepth) unit_009E(c, 186u, depth + 1u); else { c.pc = 0x0047AF80u; return; } if (c.pc != 0x004F6B1Cu) [[unlikely]] return; }
L_004F6B1C:
    st8((c.r[28].w[0] - 28232u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004F6B20:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_004F6B24:
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_004F6B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004F6BB0; } }
L_004F6B30:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[5].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6AF4u | kUnwind; return; } goto L_004F6AF4; } }
L_004F6B40:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28232u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 28232u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6B20u | kUnwind; return; } goto L_004F6B20; } }
    c.f[12] = ld32((c.r[17].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B70u); set32(c.r[4], c.r[4].w[0] + 20192u);  if (depth < kMaxDepth) unit_009E(c, 186u, depth + 1u); else { c.pc = 0x0047AF80u; return; } if (c.pc != 0x004F6B70u) [[unlikely]] return; }
L_004F6B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6B24u | kUnwind; return; } goto L_004F6B24; } }
L_004F6B78:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[4].w[0] + 20192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6B90u); st32((c.r[2].w[0] + 364u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009E(c, 189u, depth + 1u); else { c.pc = 0x0047AFE0u; return; } if (c.pc != 0x004F6B90u) [[unlikely]] return; }
L_004F6B90:
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], 0u - 961u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6B28u | kUnwind; return; } goto L_004F6B28; } }
L_004F6BAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004F6BB0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004F6BD0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[7].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], 0u - 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[7].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], c.r[7].w[0] << 3);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[25], 0u - 17u);
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 9u);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[15], 0u - 33u);
    set32(c.r[24], c.r[7].w[0] << 5);
    set32(c.r[14], c.r[7].w[0] << 11);
    set32(c.r[13], 0u - 2049u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[12], 0u + 206u);
    set32(c.r[9], c.r[9].w[0] - 20080u);
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[8].d[0] = c.r[8].d[0] & c.r[3].d[0];
    set32(c.r[7], c.r[7].w[0] << 1);
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[19].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[20].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[25].d[0] = c.r[19].d[0] & c.r[25].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[18].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[8].d[0];
    st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 72;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6CF0u); set32(c.r[4], 0u + 125u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x004F6CF0u) [[unlikely]] return; }
L_004F6CF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 29u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D04u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00A0(c, 203u, depth + 1u); else { c.pc = 0x00482CE0u; return; } if (c.pc != 0x004F6D04u) [[unlikely]] return; }
L_004F6D04:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F6D1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6D1Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F6D1Cu) [[unlikely]] return; }
L_004F6D1C:
    set32(c.r[2], 0u + 103u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    set32(c.r[7], 0u - 2u);
    c.f[2] = c.r[2].w[0];
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u - 961u);
    set32(c.r[4], c.r[4].w[0] + 20192u);
    c.r[2].d[0] = 0ull & 15ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] << 6);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[9], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[9].w[0]);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[7], c.r[7].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[7].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 17u), static_cast<std::uint8_t>(0u));
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6DD0u); st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 195u, depth + 1u); else { c.pc = 0x0047B0C0u; return; } if (c.pc != 0x004F6DD0u) [[unlikely]] return; }
L_004F6DD0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004F6E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1536u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F6EC8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F6ED4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F6E90; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F6E58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F6E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004F6ED8; } }
L_004F6E58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6E64u); set32(c.r[4], c.r[4].w[0] + 31536u);  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x004FB340u; return; } if (c.pc != 0x004F6E64u) [[unlikely]] return; }
L_004F6E64:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F6ED4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6E84u); set32(c.r[4], c.r[4].w[0] + 24608u);  if (depth < kMaxDepth) unit_0052(c, 134u, depth + 1u); else { c.pc = 0x0034AD50u; return; } if (c.pc != 0x004F6E84u) [[unlikely]] return; }
L_004F6E84:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F6ED4; } }
L_004F6E90:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6EA0u); set32(c.r[4], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_00BA(c, 7u, depth + 1u); else { c.pc = 0x004E8090u; return; } if (c.pc != 0x004F6EA0u) [[unlikely]] return; }
L_004F6EA0:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F6ED4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6EC0u); set32(c.r[4], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_00BA(c, 7u, depth + 1u); else { c.pc = 0x004E8090u; return; } if (c.pc != 0x004F6EC0u) [[unlikely]] return; }
L_004F6EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F6ED4; } }
L_004F6EC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6ED4u); set32(c.r[4], c.r[4].w[0] + 20192u);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0047B7C0u; return; } if (c.pc != 0x004F6ED4u) [[unlikely]] return; }
L_004F6ED4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004F6ED8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F6EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F6F90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 20048u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6F20u); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 69u, depth + 1u); else { c.pc = 0x00450F70u; return; } if (c.pc != 0x004F6F20u) [[unlikely]] return; }
L_004F6F20:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u - 9u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1496u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6F48u); st8((c.r[6].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00BD(c, 152u, depth + 1u); else { c.pc = 0x004F6E00u; return; } if (c.pc != 0x004F6F48u) [[unlikely]] return; }
L_004F6F48:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F6F98; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004F6FA0; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004F6F68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F6FAC; } }
L_004F6F70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004F6F90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 20016u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F6F90u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0027(c, 151u, depth + 1u); else { c.pc = 0x0029EF30u; return; } if (c.pc != 0x004F6F90u) [[unlikely]] return; }
L_004F6F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004F6FD0; } }
L_004F6F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6F68u | kUnwind; return; } goto L_004F6F68; } }
L_004F6FA0:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6F68u | kUnwind; return; } goto L_004F6F68; } }
L_004F6FAC:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1496u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F6F70u | kUnwind; return; } goto L_004F6F70; } }
L_004F6FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F6FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 102u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 380u));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F7010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F70E4; } }
L_004F7010:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F70EC; } }
    set32(c.r[3], 0u + 26u);
    c.budget -= 1;
L_004F7024:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[9], 0u - 2u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = c.r[3].w[0];
    set32(c.r[7], 0u - 5u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[5], 0u - 3u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 961u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(512ll);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[11], c.f[0]);
    st32((c.r[16].w[0] + 356u), c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[9], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[9].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.r[9].d[0] = ld16((c.r[17].w[0]));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[17].w[0]));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 48;
L_004F70E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004F70FC; } }
L_004F70EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F70F4u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F70F4u) [[unlikely]] return; }
L_004F70F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7024u | kUnwind; return; } goto L_004F7024; } }
L_004F70FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F7110:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1536u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F72C0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F7290; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F71A0; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F7168; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F7168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 81u));  if (t) { goto L_004F72D0; } }
L_004F7168:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7174u); set32(c.r[4], c.r[4].w[0] + 31536u);  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x004FB340u; return; } if (c.pc != 0x004F7174u) [[unlikely]] return; }
L_004F7174:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004F72CC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 72u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7194u); set32(c.r[4], c.r[4].w[0] + 24608u);  if (depth < kMaxDepth) unit_0052(c, 134u, depth + 1u); else { c.pc = 0x0034AD50u; return; } if (c.pc != 0x004F7194u) [[unlikely]] return; }
L_004F7194:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F72CC; } }
L_004F71A0:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F71B0u); set32(c.r[4], c.r[2].w[0] + 320u);  if (depth < kMaxDepth) unit_00BA(c, 7u, depth + 1u); else { c.pc = 0x004E8090u; return; } if (c.pc != 0x004F71B0u) [[unlikely]] return; }
L_004F71B0:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 57;
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_004F71F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0] + 60u));  if (t) { goto L_004F71F4; } }
L_004F71F0:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_004F71F4:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_004F7530; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004F75AC; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F7234; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004F7234:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F724C; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004F724C:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F725C:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7268u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x004F7268u) [[unlikely]] return; }
L_004F7268:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 1;
L_004F726C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 7u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7288u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 103u, depth + 1u); else { c.pc = 0x004A53A0u; return; } if (c.pc != 0x004F7288u) [[unlikely]] return; }
L_004F7288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F72CC; } }
L_004F7290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F72A0u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 56u, depth + 1u); else { c.pc = 0x003BD160u; return; } if (c.pc != 0x004F72A0u) [[unlikely]] return; }
L_004F72A0:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 523u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F72CC; } }
L_004F72C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F72CCu); set32(c.r[4], c.r[4].w[0] + 20192u);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0047B7C0u; return; } if (c.pc != 0x004F72CCu) [[unlikely]] return; }
L_004F72CC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 81u));
    c.budget -= 1;
L_004F72D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F75C0; } }
    set32(c.r[11], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[9], c.r[2].w[0] << 3);
    set32(c.r[8], 0u - 9u);
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[10].d[0] = ld8((c.r[11].w[0] + 1496u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[11].w[0] + 1496u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 24u)));
    c.r[8].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1496u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 33;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F737C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + 544u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7374u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 384u, depth + 1u); else { c.pc = 0x0028BB40u; return; } if (c.pc != 0x004F7374u) [[unlikely]] return; }
L_004F7374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_004F7398; } }
L_004F737C:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7394u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 384u, depth + 1u); else { c.pc = 0x0028BB40u; return; } if (c.pc != 0x004F7394u) [[unlikely]] return; }
L_004F7394:
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_004F7398:
    set32(c.r[3], 0u + 52u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004F73D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F73D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 142u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F73C4u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x004F73C4u) [[unlikely]] return; }
L_004F73C4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28268u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F73D0u); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_00B6(c, 26u, depth + 1u); else { c.pc = 0x004D83F0u; return; } if (c.pc != 0x004F73D0u) [[unlikely]] return; }
L_004F73D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 1360u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F75C0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F75C0; } }
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 4096ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F7468; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 4096u);
    c.budget -= 3;
L_004F740C:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F7454; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_004F7454; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_004F7468; } }
L_004F7454:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F740Cu | kUnwind; return; } goto L_004F740C; } }
    c.budget -= 1;
L_004F7468:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 4096ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_004F7484:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004F74F0; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 4096u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004F75B8; } }
L_004F74E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_004F7524; } }
L_004F74F0:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004F7508; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F7508:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7484u | kUnwind; return; } goto L_004F7484; } }
    breakpoint(c, 0x004F7518u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_004F7524:
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004F75C4; } }
L_004F7530:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004F75A0; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F7564; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004F7564:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F757C; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004F757C:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F758C:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7598u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x004F7598u) [[unlikely]] return; }
L_004F7598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F726Cu | kUnwind; return; } goto L_004F726C; } }
L_004F75A0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F758Cu | kUnwind; return; } goto L_004F758C; } }
L_004F75AC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F725Cu | kUnwind; return; } goto L_004F725C; } }
L_004F75B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F74E8u | kUnwind; return; } goto L_004F74E8; } }
L_004F75C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004F75C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004F75D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 1536u));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004F7908; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004F7908; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004F77B8; } }
    set32(c.r[3], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004F762C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004F762C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F7898; } }
L_004F762C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = ld32((c.r[4].w[0] + 76u));
    set32(c.r[3], 0u - 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 76u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004F78A0; } }
L_004F7650:
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F860000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004F7768; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 80u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F7768; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 81u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F7768; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 30832u);
    st32((c.r[3].w[0] + 30836u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 7;
L_004F76A4:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F7744; } }
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + 30832u);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[12], c.r[3].w[0] + 8u);  if (t) { goto L_004F76DC; } }
    c.r[3].d[0] = ld16((c.r[6].w[0] + 6u));
    st32((c.r[12].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 2;
L_004F76DC:
    c.f[1] = ld32((c.r[6].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[3].w[0];
    c.r[10].d[0] = 0ull & 1ull;
    set32(c.r[9], 0u - 2u);
    set32(c.r[8], c.r[10].w[0] << 1);
    set32(c.r[3], 0u - 5u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[7], 0u + 1u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[6], 0u - 3u);
    st32((c.r[12].w[0] + 16u), c.f[0]);
    c.r[11].d[0] = ld8((c.r[12].w[0]));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[12].w[0]));
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[12].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st8((c.r[12].w[0] + 60u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_004F7760; } }
L_004F7744:
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[3].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F76A4u | kUnwind; return; } goto L_004F76A4; } }
    c.budget -= 1;
L_004F7760:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004F7768:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 80u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F7908; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[17].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 30832u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 30832u);
    c.budget -= 5;
L_004F7788:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F78D4; } }
    c.budget -= 1;
L_004F7798:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[3].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7788u | kUnwind; return; } goto L_004F7788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F7898; } }
L_004F77B8:
    c.r[6].d[0] = ld8((c.r[7].w[0] + 523u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 380u));
    c.f[1] = ld32((c.r[16].w[0] + 360u));
    set32(c.r[4], ld32((c.r[16].w[0] + 344u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004F7908; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 380u)));
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.f[0] = c.r[4].w[0];
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_004F78F8; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 1;
L_004F7824:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[16].w[0] + 360u), c.f[20]);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
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
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.budget -= 29;
L_004F7898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004F790C; } }
L_004F78A0:
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 72u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 24708u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7650u | kUnwind; return; } goto L_004F7650; } }
L_004F78D4:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[2].w[0] + 30832u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 30836u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F78F0u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00BD(c, 104u, depth + 1u); else { c.pc = 0x004F5E70u; return; } if (c.pc != 0x004F78F0u) [[unlikely]] return; }
L_004F78F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7798u | kUnwind; return; } goto L_004F7798; } }
L_004F78F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7900u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x004F7900u) [[unlikely]] return; }
L_004F7900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7824u | kUnwind; return; } goto L_004F7824; } }
L_004F7908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004F790C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004F7920:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    set32(c.r[4], 0u + 3u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004F7D68; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004F7C94; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004F7AFC; } }
    set32(c.r[4], 0u + 25u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004F797C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004F797C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F7D78; } }
L_004F797C:
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 57;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_004F79B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0] + 60u));  if (t) { goto L_004F79B4; } }
L_004F79B0:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_004F79B4:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_004F7D80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004F7DFC; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F79F4; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004F79F4:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F7A0C; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004F7A0C:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F7A1C:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7A28u); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x004F7A28u) [[unlikely]] return; }
L_004F7A28:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_004F7A2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[29].w[0] + 180u);
    set32(c.r[4], c.r[4].w[0] + 31536u);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[2].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[29].w[0] + 184u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 188u), c.f[1]);
    c.f[12] = ld32((c.r[16].w[0] + 60u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7A6Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00BE(c, 218u, depth + 1u); else { c.pc = 0x004FB0B0u; return; } if (c.pc != 0x004F7A6Cu) [[unlikely]] return; }
L_004F7A6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.r[9].d[0] = ld8((c.r[28].w[0] - 30840u));
    c.f[12] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30839u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30838u));
    c.f[13] = 0u;
    set32(c.r[4], c.r[4].w[0] + 24576u);
    set32(c.r[6], c.r[29].w[0] + 268u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 268u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[29].w[0] + 269u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7AACu); st8((c.r[29].w[0] + 270u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0052(c, 150u, depth + 1u); else { c.pc = 0x0034B3D0u; return; } if (c.pc != 0x004F7AACu) [[unlikely]] return; }
L_004F7AAC:
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 10496u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st32((c.r[29].w[0] + 172u), c.r[3].w[0]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7AF4u); set32(c.r[7], 0u + 30u);  if (depth < kMaxDepth) unit_0021(c, 345u, depth + 1u); else { c.pc = 0x00287B90u; return; } if (c.pc != 0x004F7AF4u) [[unlikely]] return; }
L_004F7AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F7D78; } }
L_004F7AFC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 28236u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F7E08; } }
L_004F7B08:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 5u);
    set32(c.r[7], c.r[7].w[0] - 13912u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7B2Cu); set32(c.r[4], c.r[3].w[0] + 320u);  if (depth < kMaxDepth) unit_00BA(c, 19u, depth + 1u); else { c.pc = 0x004E83E0u; return; } if (c.pc != 0x004F7B2Cu) [[unlikely]] return; }
L_004F7B2C:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 57;
    c.budget -= 13;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_004F7B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0] + 60u));  if (t) { goto L_004F7B6C; } }
L_004F7B68:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_004F7B6C:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_004F7EC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004F7F44; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F7BAC; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004F7BAC:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F7BC4; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004F7BC4:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F7BD4:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7BE0u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x004F7BE0u) [[unlikely]] return; }
L_004F7BE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_004F7BE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 24576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7BF8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0052(c, 168u, depth + 1u); else { c.pc = 0x0034B8A0u; return; } if (c.pc != 0x004F7BF8u) [[unlikely]] return; }
L_004F7BF8:
    c.f[4] = ld32((c.r[29].w[0] + 96u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[10], c.r[29].w[0] + 68u);
    c.f[3] = ld32((c.r[29].w[0] + 108u));
    set32(c.r[3], c.r[29].w[0] + 72u);
    c.f[6] = ld32((c.r[29].w[0] + 100u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[5] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[6], 0u + 20u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], 0u + 100u);
    st32((c.r[29].w[0] + 80u), c.f[4]);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[9], c.r[29].w[0] + 64u);
    c.f[2] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[29].w[0] + 92u), c.f[3]);
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[4], c.r[2].w[0] + 528u);
    st32((c.r[29].w[0] + 84u), c.f[6]);
    st32((c.r[29].w[0] + 88u), c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[10].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7C8Cu); st32((c.r[3].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004F7C8Cu) [[unlikely]] return; }
L_004F7C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F7D78; } }
L_004F7C94:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[6] = ld32((c.r[3].w[0] + 36u));
    c.f[4] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[5] = ld32((c.r[4].w[0] + 36u));
    c.f[3] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 344u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 60u));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 61u));
    st8((c.r[29].w[0] + 264u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 62u));
    st8((c.r[29].w[0] + 265u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 30;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[29].w[0] + 266u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004F7F50; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1572u));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
L_004F7D1C:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7D34u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x004F7D34u) [[unlikely]] return; }
L_004F7D34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F7F58; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 264u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 100u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7D60u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 195u, depth + 1u); else { c.pc = 0x003F6080u; return; } if (c.pc != 0x004F7D60u) [[unlikely]] return; }
L_004F7D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F7D78; } }
L_004F7D68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7D78u); set32(c.r[4], c.r[4].w[0] + 20192u);  if (depth < kMaxDepth) unit_009E(c, 237u, depth + 1u); else { c.pc = 0x0047B7D0u; return; } if (c.pc != 0x004F7D78u) [[unlikely]] return; }
L_004F7D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004F7F5C; } }
L_004F7D80:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004F7DF0; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F7DB4; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004F7DB4:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F7DCC; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004F7DCC:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F7DDC:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7DE8u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x004F7DE8u) [[unlikely]] return; }
L_004F7DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7A2Cu | kUnwind; return; } goto L_004F7A2C; } }
L_004F7DF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7DDCu | kUnwind; return; } goto L_004F7DDC; } }
L_004F7DFC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7A1Cu | kUnwind; return; } goto L_004F7A1C; } }
L_004F7E08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[11].d[0] = ld8((c.r[2].w[0] - 13920u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[3].w[0] - 13908u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[10].d[0] = ld8((c.r[2].w[0] - 13919u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[6].w[0] - 13907u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[9].d[0] = ld8((c.r[2].w[0] - 13918u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[5].w[0] - 13906u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] - 13917u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[9].d[0] = ld8((c.r[3].w[0] - 13927u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[4].w[0] - 13905u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[10].d[0] = ld8((c.r[2].w[0] - 13928u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = ld8((c.r[4].w[0] - 13925u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[6].w[0] - 13911u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[7].w[0] - 13912u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] - 13926u));
    st8((c.r[3].w[0] - 13909u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 13909u));
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 36;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[5].w[0] - 13910u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_004F7EB8; } }
L_004F7E98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].d[0] = ld8((c.r[3].w[0] - 13909u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 28236u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[4].d[0] | 128ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 13909u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7B08u | kUnwind; return; } goto L_004F7B08; } }
L_004F7EB8:
    set32(c.r[3], 0u + 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] - 13909u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7E98u | kUnwind; return; } goto L_004F7E98; } }
L_004F7EC8:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_004F7F38; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004F7EFC; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_004F7EFC:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004F7F14; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_004F7F14:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_004F7F24:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F7F30u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x004F7F30u) [[unlikely]] return; }
L_004F7F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7BE4u | kUnwind; return; } goto L_004F7BE4; } }
L_004F7F38:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7F24u | kUnwind; return; } goto L_004F7F24; } }
L_004F7F44:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 14016u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7BD4u | kUnwind; return; } goto L_004F7BD4; } }
L_004F7F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F7D1Cu | kUnwind; return; } goto L_004F7D1C; } }
L_004F7F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004F7F5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004F7F70:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00BE(c, 29u, depth); } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00BE(c, 30u, depth); } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004F7FA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BE(c, 31u, depth); } }
L_004F7FB0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 58u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00BE(c, 32u, depth); } }
L_004F7FC0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 58u));
    c.budget -= 1;
L_004F7FC4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BE(c, 34u, depth); } }
    set32(c.r[8], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 524u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00BE(c, 34u, depth); } }
    c.r[4].d[0] = ld8((c.r[8].w[0] + 220u));
    set32(c.r[3], 0u + 63u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00BE(c, 34u, depth); } }
    set32(c.r[3], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00BE(c, 34u, depth); } }
    [[clang::musttail]] return unit_00BE(c, 1u, depth);
}

}

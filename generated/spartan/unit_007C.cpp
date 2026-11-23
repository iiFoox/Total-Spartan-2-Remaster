#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007C[4096] = {
    1, 0, 2, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0,
    0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77,
    78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0,
    0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F0000;
    case 2u: goto L_003F0008;
    case 3u: goto L_003F0014;
    case 4u: goto L_003F0018;
    case 5u: goto L_003F003C;
    case 6u: goto L_003F0050;
    case 7u: goto L_003F006C;
    case 8u: goto L_003F0080;
    case 9u: goto L_003F00AC;
    case 10u: goto L_003F00B8;
    case 11u: goto L_003F00E8;
    case 12u: goto L_003F0110;
    case 13u: goto L_003F0124;
    case 14u: goto L_003F0158;
    case 15u: goto L_003F0188;
    case 16u: goto L_003F019C;
    case 17u: goto L_003F01B4;
    case 18u: goto L_003F01DC;
    case 19u: goto L_003F0230;
    case 20u: goto L_003F0260;
    case 21u: goto L_003F0274;
    case 22u: goto L_003F02A8;
    case 23u: goto L_003F02D8;
    case 24u: goto L_003F02EC;
    case 25u: goto L_003F0320;
    case 26u: goto L_003F0350;
    case 27u: goto L_003F0364;
    case 28u: goto L_003F0398;
    case 29u: goto L_003F03C4;
    case 30u: goto L_003F03DC;
    case 31u: goto L_003F0410;
    case 32u: goto L_003F043C;
    case 33u: goto L_003F0454;
    case 34u: goto L_003F0488;
    case 35u: goto L_003F04B4;
    case 36u: goto L_003F04CC;
    case 37u: goto L_003F0500;
    case 38u: goto L_003F052C;
    case 39u: goto L_003F0544;
    case 40u: goto L_003F0578;
    case 41u: goto L_003F05A8;
    case 42u: goto L_003F05BC;
    case 43u: goto L_003F0620;
    case 44u: goto L_003F0648;
    case 45u: goto L_003F0680;
    case 46u: goto L_003F0688;
    case 47u: goto L_003F0690;
    case 48u: goto L_003F0698;
    case 49u: goto L_003F06AC;
    case 50u: goto L_003F06CC;
    case 51u: goto L_003F06E8;
    case 52u: goto L_003F0704;
    case 53u: goto L_003F0718;
    case 54u: goto L_003F0730;
    case 55u: goto L_003F0780;
    case 56u: goto L_003F07B0;
    case 57u: goto L_003F07F0;
    case 58u: goto L_003F0820;
    case 59u: goto L_003F0840;
    case 60u: goto L_003F0894;
    case 61u: goto L_003F08D0;
    case 62u: goto L_003F08E0;
    case 63u: goto L_003F08EC;
    case 64u: goto L_003F08F8;
    case 65u: goto L_003F0904;
    case 66u: goto L_003F0910;
    case 67u: goto L_003F0918;
    case 68u: goto L_003F0930;
    case 69u: goto L_003F093C;
    case 70u: goto L_003F0950;
    case 71u: goto L_003F0978;
    case 72u: goto L_003F098C;
    case 73u: goto L_003F09A4;
    case 74u: goto L_003F09C0;
    case 75u: goto L_003F09E0;
    case 76u: goto L_003F09F4;
    case 77u: goto L_003F09FC;
    case 78u: goto L_003F0A00;
    case 79u: goto L_003F0A0C;
    case 80u: goto L_003F0A68;
    case 81u: goto L_003F0A7C;
    case 82u: goto L_003F0A9C;
    case 83u: goto L_003F0AA8;
    case 84u: goto L_003F0AC4;
    case 85u: goto L_003F0B68;
    case 86u: goto L_003F0BA8;
    case 87u: goto L_003F0BB4;
    case 88u: goto L_003F0BC4;
    case 89u: goto L_003F0BD8;
    case 90u: goto L_003F0BF8;
    case 91u: goto L_003F0C0C;
    case 92u: goto L_003F0C2C;
    case 93u: goto L_003F0C40;
    case 94u: goto L_003F0C54;
    case 95u: goto L_003F0C80;
    case 96u: goto L_003F0CA0;
    case 97u: goto L_003F0CD8;
    case 98u: goto L_003F0CF4;
    case 99u: goto L_003F0D10;
    case 100u: goto L_003F0D38;
    case 101u: goto L_003F0D50;
    case 102u: goto L_003F0D6C;
    case 103u: goto L_003F0D80;
    case 104u: goto L_003F0DDC;
    case 105u: goto L_003F0DE8;
    case 106u: goto L_003F0E08;
    case 107u: goto L_003F0E68;
    case 108u: goto L_003F0E84;
    case 109u: goto L_003F0EE4;
    case 110u: goto L_003F0EF8;
    case 111u: goto L_003F0F18;
    case 112u: goto L_003F0F70;
    case 113u: goto L_003F0FF8;
    case 114u: goto L_003F1128;
    case 115u: goto L_003F13E0;
    case 116u: goto L_003F17F0;
    case 117u: goto L_003F1C10;
    case 118u: goto L_003F1C20;
    case 119u: goto L_003F2230;
    case 120u: goto L_003F225C;
    case 121u: goto L_003F227C;
    case 122u: goto L_003F2368;
    case 123u: goto L_003F23A0;
    case 124u: goto L_003F23C8;
    case 125u: goto L_003F2470;
    case 126u: goto L_003F2584;
    case 127u: goto L_003F25DC;
    case 128u: goto L_003F25F0;
    case 129u: goto L_003F261C;
    case 130u: goto L_003F2624;
    case 131u: goto L_003F262C;
    case 132u: goto L_003F2674;
    case 133u: goto L_003F267C;
    case 134u: goto L_003F2684;
    case 135u: goto L_003F26AC;
    case 136u: goto L_003F26B4;
    case 137u: goto L_003F26BC;
    case 138u: goto L_003F2700;
    case 139u: goto L_003F2708;
    case 140u: goto L_003F2710;
    case 141u: goto L_003F2734;
    case 142u: goto L_003F2738;
    case 143u: goto L_003F2750;
    case 144u: goto L_003F277C;
    case 145u: goto L_003F27A8;
    case 146u: goto L_003F27D0;
    case 147u: goto L_003F2810;
    case 148u: goto L_003F283C;
    case 149u: goto L_003F2A80;
    case 150u: goto L_003F2AE8;
    case 151u: goto L_003F2B04;
    case 152u: goto L_003F2B1C;
    case 153u: goto L_003F2BB0;
    case 154u: goto L_003F2C20;
    case 155u: goto L_003F2C68;
    case 156u: goto L_003F2CE0;
    case 157u: goto L_003F2CE8;
    case 158u: goto L_003F2CF8;
    case 159u: goto L_003F2D0C;
    case 160u: goto L_003F2D58;
    case 161u: goto L_003F2D68;
    case 162u: goto L_003F2D7C;
    case 163u: goto L_003F2DC8;
    case 164u: goto L_003F2DD8;
    case 165u: goto L_003F2DEC;
    case 166u: goto L_003F2E38;
    case 167u: goto L_003F2E48;
    case 168u: goto L_003F2E5C;
    case 169u: goto L_003F2EA8;
    case 170u: goto L_003F2EB8;
    case 171u: goto L_003F2ECC;
    case 172u: goto L_003F2F20;
    case 173u: goto L_003F2F30;
    case 174u: goto L_003F2F40;
    case 175u: goto L_003F2F54;
    case 176u: goto L_003F2F98;
    case 177u: goto L_003F2FA8;
    case 178u: goto L_003F2FD8;
    case 179u: goto L_003F2FE8;
    case 180u: goto L_003F303C;
    case 181u: goto L_003F3050;
    case 182u: goto L_003F3060;
    case 183u: goto L_003F3074;
    case 184u: goto L_003F30F0;
    case 185u: goto L_003F31E4;
    case 186u: goto L_003F3298;
    case 187u: goto L_003F32D0;
    case 188u: goto L_003F33C0;
    case 189u: goto L_003F34B0;
    case 190u: goto L_003F3550;
    case 191u: goto L_003F3598;
    case 192u: goto L_003F35B4;
    case 193u: goto L_003F35BC;
    case 194u: goto L_003F35F8;
    case 195u: goto L_003F3670;
    case 196u: goto L_003F368C;
    case 197u: goto L_003F36A0;
    case 198u: goto L_003F36BC;
    case 199u: goto L_003F3730;
    case 200u: goto L_003F3740;
    case 201u: goto L_003F3760;
    case 202u: goto L_003F3780;
    case 203u: goto L_003F37E4;
    case 204u: goto L_003F37F4;
    case 205u: goto L_003F3810;
    case 206u: goto L_003F382C;
    case 207u: goto L_003F3890;
    case 208u: goto L_003F38A0;
    case 209u: goto L_003F38C0;
    case 210u: goto L_003F38DC;
    case 211u: goto L_003F393C;
    case 212u: goto L_003F394C;
    case 213u: goto L_003F3970;
    case 214u: goto L_003F398C;
    case 215u: goto L_003F39F0;
    case 216u: goto L_003F3A00;
    case 217u: goto L_003F3A20;
    case 218u: goto L_003F3A64;
    case 219u: goto L_003F3A80;
    case 220u: goto L_003F3A88;
    case 221u: goto L_003F3AC0;
    case 222u: goto L_003F3B30;
    case 223u: goto L_003F3B74;
    case 224u: goto L_003F3B90;
    case 225u: goto L_003F3B98;
    case 226u: goto L_003F3BD0;
    case 227u: goto L_003F3C40;
    case 228u: goto L_003F3C5C;
    case 229u: goto L_003F3C70;
    case 230u: goto L_003F3C8C;
    case 231u: goto L_003F3CF0;
    case 232u: goto L_003F3D00;
    case 233u: goto L_003F3D20;
    case 234u: goto L_003F3D3C;
    case 235u: goto L_003F3D50;
    case 236u: goto L_003F3EB8;
    case 237u: goto L_003F3EC8;
    case 238u: goto L_003F3EE0;
    case 239u: goto L_003F3F00;
    case 240u: goto L_003F3F58;
    case 241u: goto L_003F3F68;
    case 242u: goto L_003F3F80;
    case 243u: goto L_003F3F9C;
    default: bad_entry(c, 0x003F0000u); return;
    }
L_003F0000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0008u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0008u) [[unlikely]] return; }
L_003F0008:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003F0014:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_003F0018:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + 2u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F0074; } }
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 236u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F003Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F003Cu) [[unlikely]] return; }
L_003F003C:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003F008C; } }
L_003F0050:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F006Cu); set32(c.r[5], c.r[2].w[0] + 236u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F006Cu) [[unlikely]] return; }
L_003F006C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[29].w[0] + 236u));  if (t) { goto L_003F0090; } }
L_003F0074:
    set32(c.r[4], c.r[29].w[0] + 236u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0080u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0080u) [[unlikely]] return; }
L_003F0080:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003F008C:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 236u));
    c.budget -= 1;
L_003F0090:
    st16((c.r[20].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld16((c.r[20].w[0] + 4u));  if (t) { goto L_003F00B0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F00ACu); set32(c.r[5], c.r[5].w[0] + 2032u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F00ACu) [[unlikely]] return; }
L_003F00AC:
    st32((c.r[20].w[0] + 20u), 0u);
    c.budget -= 1;
L_003F00B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003F06A0; } }
L_003F00B8:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 4u));
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[18], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_003F0118; } }
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F00E8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F00E8u) [[unlikely]] return; }
L_003F00E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_003F0130; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0110u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0110u) [[unlikely]] return; }
L_003F0110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_003F0134; } }
L_003F0118:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0124u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0124u) [[unlikely]] return; }
L_003F0124:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003F0130:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_003F0134:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + 2u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F0190; } }
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[20].w[0] + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0158u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0158u) [[unlikely]] return; }
L_003F0158:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003F01A8; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[20].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0188u); set32(c.r[5], c.r[2].w[0] + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0188u) [[unlikely]] return; }
L_003F0188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[20].w[0] + 6u));  if (t) { goto L_003F01AC; } }
L_003F0190:
    set32(c.r[4], c.r[20].w[0] + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F019Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F019Cu) [[unlikely]] return; }
L_003F019C:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003F01A8:
    c.r[16].d[0] = ld16((c.r[20].w[0] + 6u));
    c.budget -= 1;
L_003F01AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 168u), 0u);  if (t) { goto L_003F06D4; } }
L_003F01B4:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 6u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003F0608; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[16], c.r[29].w[0] + 180u);
    set32(c.r[22], c.r[29].w[0] + 184u);
    set32(c.r[23], c.r[29].w[0] + 192u);
    set32(c.r[30], c.r[29].w[0] + 196u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
L_003F01DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4B180000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCB180000u);
    c.r[4].d[0] = c.r[3].d[0] | 38528ull;
    c.r[3].d[0] = c.r[2].d[0] | 38528ull;
    st32((c.r[29].w[0] + 176u), c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[22].w[0]), c.r[4].w[0]);
    st32((c.r[23].w[0]), c.r[3].w[0]);
    st32((c.r[30].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + 2u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F0268; } }
    set32(c.r[21], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0230u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0230u) [[unlikely]] return; }
L_003F0230:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003F0280; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[21].w[0]);
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0260u); set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0260u) [[unlikely]] return; }
L_003F0260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0280; } }
L_003F0268:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0274u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0274u) [[unlikely]] return; }
L_003F0274:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003F0280:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + 2u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F02E0; } }
    set32(c.r[21], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 210u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F02A8u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F02A8u) [[unlikely]] return; }
L_003F02A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003F02F8; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[21].w[0]);
    set32(c.r[2], c.r[29].w[0] + 210u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F02D8u); set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F02D8u) [[unlikely]] return; }
L_003F02D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F02F8; } }
L_003F02E0:
    set32(c.r[4], c.r[29].w[0] + 210u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F02ECu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F02ECu) [[unlikely]] return; }
L_003F02EC:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003F02F8:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F0358; } }
    set32(c.r[21], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0320u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0320u) [[unlikely]] return; }
L_003F0320:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003F0370; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[21].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0350u); set32(c.r[5], c.r[2].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0350u) [[unlikely]] return; }
L_003F0350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0370; } }
L_003F0358:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0364u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0364u) [[unlikely]] return; }
L_003F0364:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003F0370:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F03D0; } }
    set32(c.r[21], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0398u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0398u) [[unlikely]] return; }
L_003F0398:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003F03E8; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[21].w[0]);
    set32(c.r[5], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F03C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F03C4u) [[unlikely]] return; }
L_003F03C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F03E8; } }
    c.budget -= 1;
L_003F03D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F03DCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F03DCu) [[unlikely]] return; }
L_003F03DC:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003F03E8:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F0448; } }
    set32(c.r[21], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0410u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0410u) [[unlikely]] return; }
L_003F0410:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003F0460; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[21].w[0]);
    set32(c.r[5], c.r[22].w[0] + c.r[21].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F043Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F043Cu) [[unlikely]] return; }
L_003F043C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0460; } }
    c.budget -= 1;
L_003F0448:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0454u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0454u) [[unlikely]] return; }
L_003F0454:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003F0460:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F04C0; } }
    set32(c.r[21], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0488u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0488u) [[unlikely]] return; }
L_003F0488:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003F04D8; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[21].w[0]);
    set32(c.r[5], c.r[23].w[0] + c.r[21].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F04B4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F04B4u) [[unlikely]] return; }
L_003F04B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F04D8; } }
    c.budget -= 1;
L_003F04C0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F04CCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F04CCu) [[unlikely]] return; }
L_003F04CC:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003F04D8:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F0538; } }
    set32(c.r[21], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0500u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0500u) [[unlikely]] return; }
L_003F0500:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003F0550; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[21].w[0]);
    set32(c.r[5], c.r[30].w[0] + c.r[21].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F052Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F052Cu) [[unlikely]] return; }
L_003F052C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0550; } }
    c.budget -= 1;
L_003F0538:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0544u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0544u) [[unlikely]] return; }
L_003F0544:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003F0550:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F05B0; } }
    set32(c.r[21], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0578u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F0578u) [[unlikely]] return; }
L_003F0578:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003F05C8; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[6], c.r[2].w[0] - c.r[21].w[0]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F05A8u); set32(c.r[5], c.r[2].w[0] + c.r[21].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F05A8u) [[unlikely]] return; }
L_003F05A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F05C8; } }
L_003F05B0:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F05BCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003F05BCu) [[unlikely]] return; }
L_003F05BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_003F05C8:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st128((c.r[17].w[0]) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[29].w[0] + 208u);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[17].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 210u);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    st16((c.r[17].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 6u));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F01DCu | kUnwind; return; } goto L_003F01DC; } }
    c.budget -= 1;
L_003F0608:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 8u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003F0660; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003F0620:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.r[4].d[0] = c.r[21].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 148u)));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003F070C; } }
    c.budget -= 1;
L_003F0648:
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[20].w[0] + 8u));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0620u | kUnwind; return; } goto L_003F0620; } }
L_003F0660:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F0680; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F0680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0680u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003F0680u) [[unlikely]] return; }
L_003F0680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003F0750; } }
L_003F0688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003F0750; } }
L_003F0690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0698u); set32(c.r[4], c.r[16].w[0] << 1);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003F0698u) [[unlikely]] return; }
L_003F0698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EFF9Cu | kUnwind; return; } [[clang::musttail]] return unit_007B(c, 234u, depth); } }
L_003F06A0:
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F06ACu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003F06ACu) [[unlikely]] return; }
L_003F06AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1968u);
    set32(c.r[6], c.r[6].w[0] + 2032u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F06CCu); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003F06CCu) [[unlikely]] return; }
L_003F06CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F00B8u | kUnwind; return; } goto L_003F00B8; } }
L_003F06D4:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F06E8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003F06E8u) [[unlikely]] return; }
L_003F06E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1920u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0704u); set32(c.r[7], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003F0704u) [[unlikely]] return; }
L_003F0704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 168u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F01B4u | kUnwind; return; } goto L_003F01B4; } }
L_003F070C:
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[2].w[0] << 4);
    c.budget -= 3;
L_003F0718:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = ld16((c.r[18].w[0] + 32u));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[18].w[0] + 34u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0730u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_007C(c, 103u, depth + 1u); else { c.pc = 0x003F0D80u; return; } if (c.pc != 0x003F0730u) [[unlikely]] return; }
L_003F0730:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 148u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0718u | kUnwind; return; } goto L_003F0718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0648u | kUnwind; return; } goto L_003F0648; } }
L_003F0750:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003F0780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B180000u);
    c.r[5].d[0] = c.r[2].d[0] | 38528ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCB180000u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[2].d[0] | 38528ull;
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_003F07B0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[3], 0u + 255u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003F07F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F0820; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F0820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0820u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F0820u) [[unlikely]] return; }
L_003F0820:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F0840:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003F08B0; } }
L_003F0894:
    set32(c.r[3], c.r[19].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0894u | kUnwind; return; } goto L_003F0894; } }
L_003F08B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003F0C5C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F08D4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F08D0u); set32(c.r[5], c.r[5].w[0] + 3232u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F08D0u) [[unlikely]] return; }
L_003F08D0:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_003F08D4:
    c.r[18].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003F09AC; } }
L_003F08E0:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F08ECu); st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x003F08ECu) [[unlikely]] return; }
L_003F08EC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F08F8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F08F8u) [[unlikely]] return; }
L_003F08F8:
    set32(c.r[5], ld32((c.r[28].w[0] - 31632u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0904u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x003F0904u) [[unlikely]] return; }
L_003F0904:
    set32(c.r[4], c.r[29].w[0] + 408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0910u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003F0910u) [[unlikely]] return; }
L_003F0910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0918u); set32(c.r[4], c.r[29].w[0] + 408u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x003F0918u) [[unlikely]] return; }
L_003F0918:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0930u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0930u) [[unlikely]] return; }
L_003F0930:
    set32(c.r[4], c.r[29].w[0] + 408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F093Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003F093Cu) [[unlikely]] return; }
L_003F093C:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0950u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003F0950u) [[unlikely]] return; }
L_003F0950:
    c.r[21].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st16((c.r[29].w[0] + 414u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003F0964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[29].w[0] + 414u);  if (t) { goto L_003F0968; } }
L_003F0964:
    set32(c.r[19], c.r[17].w[0] + 2u);
    c.budget -= 1;
L_003F0968:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003F09E8; } }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F0978:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F098Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 184u, depth + 1u); else { c.pc = 0x003F30F0u; return; } if (c.pc != 0x003F098Cu) [[unlikely]] return; }
L_003F098C:
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0978u | kUnwind; return; } goto L_003F0978; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = ld16((c.r[19].w[0]));  if (t) { goto L_003F09EC; } }
L_003F09A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003F0C60; } }
L_003F09AC:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F09C0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003F09C0u) [[unlikely]] return; }
L_003F09C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 3200u);
    set32(c.r[6], c.r[6].w[0] + 3232u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F09E0u); set32(c.r[7], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003F09E0u) [[unlikely]] return; }
L_003F09E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F08E0u | kUnwind; return; } goto L_003F08E0; } }
L_003F09E8:
    c.r[19].d[0] = ld16((c.r[19].w[0]));
    c.budget -= 1;
L_003F09EC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003F0A54; } }
L_003F09F4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003F0A84; } }
L_003F09FC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003F0A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003F0C48; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F0A0C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 150u));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 20u));
    st16((c.r[2].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0A0Cu | kUnwind; return; } goto L_003F0A0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0C48; } }
L_003F0A54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0A68u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 229u, depth + 1u); else { c.pc = 0x003EFEB0u; return; } if (c.pc != 0x003F0A68u) [[unlikely]] return; }
L_003F0A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F0A74; } }
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003F0A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0A7Cu); set32(c.r[4], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x003F0A7Cu) [[unlikely]] return; }
L_003F0A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F09F4u | kUnwind; return; } goto L_003F09F4; } }
L_003F0A84:
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = ld16((c.r[17].w[0] + 2u));  if (t) { goto L_003F0AA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0A9Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003F0A9Cu) [[unlikely]] return; }
L_003F0A9C:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_003F0AA0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003F0BF0; } }
L_003F0AA8:
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003F0B90; } }
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 8u);  if (t) { goto L_003F0B58; } }
L_003F0AC4:
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[14], c.r[5].w[0] + 1u);
    set32(c.r[13], c.r[5].w[0] + 2u);
    set32(c.r[12], c.r[5].w[0] + 3u);
    set32(c.r[11], c.r[5].w[0] + 4u);
    set32(c.r[10], c.r[5].w[0] + 5u);
    set32(c.r[9], c.r[5].w[0] + 6u);
    set32(c.r[8], c.r[5].w[0] + 7u);
    set32(c.r[6], c.r[5].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[6].d[0] & 65535ull;
    c.r[6].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[7].w[0] + 2u), static_cast<std::uint16_t>(c.r[14].w[0]));
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(c.r[12].w[0]));
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[7].w[0] + 8u), static_cast<std::uint16_t>(c.r[11].w[0]));
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[7].w[0] + 10u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 37;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0AC4u | kUnwind; return; } goto L_003F0AC4; } }
L_003F0B58:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F0B90; } }
L_003F0B68:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0B68u | kUnwind; return; } goto L_003F0B68; } }
L_003F0B90:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = ld16((c.r[17].w[0] + 2u));  if (t) { goto L_003F0BAC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0BA8u); set32(c.r[5], c.r[5].w[0] + 2032u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F0BA8u) [[unlikely]] return; }
L_003F0BA8:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_003F0BAC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003F0C00; } }
L_003F0BB4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F09FCu | kUnwind; return; } goto L_003F09FC; } }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003F0BC4:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[7].d[0] = ld16((c.r[6].w[0] + 148u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_003F0C34; } }
    c.budget -= 1;
L_003F0BD8:
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0BC4u | kUnwind; return; } goto L_003F0BC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0A00u | kUnwind; return; } goto L_003F0A00; } }
L_003F0BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0BF8u); set32(c.r[4], c.r[18].w[0] << 1);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003F0BF8u) [[unlikely]] return; }
L_003F0BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0AA8u | kUnwind; return; } goto L_003F0AA8; } }
L_003F0C00:
    set32(c.r[2], c.r[18].w[0] << 5);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C0Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003F0C0Cu) [[unlikely]] return; }
L_003F0C0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1968u);
    set32(c.r[6], c.r[6].w[0] + 2032u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C2Cu); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003F0C2Cu) [[unlikely]] return; }
L_003F0C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0BB4u | kUnwind; return; } goto L_003F0BB4; } }
L_003F0C34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C40u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 112u, depth + 1u); else { c.pc = 0x003F0F70u; return; } if (c.pc != 0x003F0C40u) [[unlikely]] return; }
L_003F0C40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0BD8u | kUnwind; return; } goto L_003F0BD8; } }
L_003F0C48:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0C54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x003F0C54u) [[unlikely]] return; }
L_003F0C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F09A4u | kUnwind; return; } goto L_003F09A4; } }
L_003F0C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003F0C60:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_003F0C80:
    st32((c.r[4].w[0] + 72u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 68u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), 0u);  c.pc = t; return; }
L_003F0CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F0CF4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F0CDC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F0CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0CD8u); set32(c.r[4], c.r[2].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003F0CD8u) [[unlikely]] return; }
L_003F0CD8:
    st32((c.r[17].w[0] + 72u), 0u);
    c.budget -= 1;
L_003F0CDC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F0CF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0CF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F0CF4u) [[unlikely]] return; }
L_003F0CF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F0D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F0D3C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D38u); set32(c.r[5], c.r[5].w[0] + 3232u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F0D38u) [[unlikely]] return; }
L_003F0D38:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_003F0D3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F0D54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D50u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003F0D50u) [[unlikely]] return; }
L_003F0D50:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_003F0D54:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F0D70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0D6Cu); set32(c.r[5], c.r[5].w[0] + 2032u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F0D6Cu) [[unlikely]] return; }
L_003F0D6C:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_003F0D70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F0D80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[21], ld32((c.r[4].w[0] + 72u)));
    st32((c.r[4].w[0] + 72u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    set32(c.r[16], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 68u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003F0DE0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F0DDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0DDCu); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003F0DDCu) [[unlikely]] return; }
L_003F0DDC:
    st32((c.r[20].w[0] + 72u), 0u);
    c.budget -= 1;
L_003F0DE0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003F0E54; } }
L_003F0DE8:
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003F0E8C; } }
    c.r[7].d[0] = c.r[21].d[0] << 32;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 3;
L_003F0E08:
    set32(c.r[5], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    ld128((c.r[7].w[0]) & ~15u, c.r[4]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 48u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    c.r[3].d[0] = ld16((c.r[7].w[0] + 32u));
    st16((c.r[5].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 34u));
    st16((c.r[5].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0E08u | kUnwind; return; } goto L_003F0E08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 72u)));  if (t) { goto L_003F0E90; } }
L_003F0E54:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E68u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003F0E68u) [[unlikely]] return; }
L_003F0E68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1920u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0E84u); set32(c.r[7], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x003F0E84u) [[unlikely]] return; }
L_003F0E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 72u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0DE8u | kUnwind; return; } goto L_003F0DE8; } }
L_003F0E8C:
    set32(c.r[6], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_003F0E90:
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[21].d[0] << 32;
    set32(c.r[7], c.r[4].w[0] << 4);
    ld128((c.r[17].w[0]) & ~15u, c.r[5]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[4]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st16((c.r[6].w[0] + 32u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[6], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st16((c.r[6].w[0] + 34u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[6], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull; st128((c.r[6].w[0] + 16u) & ~15u, c.r[4]);  if (t) { goto L_003F0EE4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F0EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0EE4u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003F0EE4u) [[unlikely]] return; }
L_003F0EE4:
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003F0F30; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003F0EF8:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 34u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003F0F38; } }
    c.budget -= 1;
L_003F0F18:
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0EF8u | kUnwind; return; } goto L_003F0EF8; } }
    c.budget -= 1;
L_003F0F30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F0F48; } }
L_003F0F38:
    st32((c.r[20].w[0] + 60u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 64u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F0F18u | kUnwind; return; } goto L_003F0F18; } }
    c.budget -= 1;
L_003F0F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F0F70:
    set32(c.r[29], c.r[29].w[0] - 816u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[29].w[0] + 732u));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st32((c.r[29].w[0] + 220u), c.f[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[0] = ld32((c.r[29].w[0] + 716u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.f[31]);
    st32((c.r[29].w[0] + 700u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 696u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    set32(c.r[5], ld32((c.r[29].w[0] + 700u)));
    st32((c.r[29].w[0] + 32u), c.f[28]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    set32(c.r[4], c.r[29].w[0] + 812u);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F0FF8u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_007C(c, 154u, depth + 1u); else { c.pc = 0x003F2C20u; return; } if (c.pc != 0x003F0FF8u) [[unlikely]] return; }
L_003F0FF8:
    set32(c.r[3], c.r[16].w[0] + 188u);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 150u));
    st32((c.r[29].w[0] + 672u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 312u));
    set32(c.r[3], c.r[16].w[0] + 300u);
    set32(c.r[19], c.r[16].w[0] + 148u);
    st32((c.r[29].w[0] + 656u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[16].w[0] + 184u));
    set32(c.r[3], c.r[16].w[0] + 316u);
    set32(c.r[22], c.r[16].w[0] + 280u);
    st32((c.r[29].w[0] + 640u), c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] + 336u);
    st16((c.r[29].w[0] + 560u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 624u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 300u), c.f[0]);
    set32(c.r[3], c.r[16].w[0] + 256u);
    st32((c.r[29].w[0] + 608u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 180u));
    set32(c.r[3], c.r[16].w[0] + 356u);
    st32((c.r[29].w[0] + 592u), c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] + 224u);
    st32((c.r[29].w[0] + 576u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 700u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7F7F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[31] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFF7F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.f[28] = c.r[3].w[0];
    c.f[30] = c.f[31];
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[23], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[20].d[0] & 65535ull;
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 352u), c.r[3].w[0]);
    c.f[29] = c.f[31];
    c.f[27] = c.f[28];
    st32((c.r[29].w[0] + 296u), c.f[28]);
    c.f[26] = c.f[28];
    c.budget -= 44;
    { const bool t = c.r[1].d[0] == 0ull; c.f[25] = c.f[28];  if (t) { goto L_003F2AB0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[4].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.budget -= 10;
    { const bool t = c.r[20].sd[0] < 0; st32((c.r[29].w[0] + 256u), c.f[0]);  if (t) { goto L_003F10DC; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F10F8; } }
L_003F10DC:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F10F8:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 252u), c.f[0]);  if (t) { goto L_003F2AB0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 696u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    c.budget -= 5;
L_003F1128:
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    c.r[2].d[0] = 0ull | 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[2].d[0] = ld16((c.r[29].w[0] + 560u));
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[2] = c.r[5].w[0];
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[2]);
    set32(c.r[2], c.f[1]);
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[17].w[0] << 6);
    c.f[0] = 0u;
    st32((c.r[29].w[0] + 292u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.f[24] = c.f[0];
    c.f[20] = c.f[0];
    c.f[22] = c.f[0];
    c.f[21] = c.f[0];
    st32((c.r[29].w[0] + 240u), c.f[0]);
    st32((c.r[29].w[0] + 244u), c.f[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 700u)));
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st16((c.r[29].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 544u));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 624u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 700u)));
    c.r[21].d[0] = ld8((c.r[2].w[0] + 16u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 700u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 4u));
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 576u)));
    c.f[6] = ld32((c.r[4].w[0] + 8u));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 544u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[6]);
    set32(c.r[4], c.r[7].w[0] - c.r[4].w[0]);
    st16((c.r[29].w[0] + 400u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 576u)));
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 400u));
    set32(c.r[7], c.r[4].w[0] << 5);
    set32(c.r[4], ld32((c.r[29].w[0] + 576u)));
    c.f[5] = ld32((c.r[4].w[0] + 4u));
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[29].w[0] + 528u), c.r[4].w[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    set32(c.r[4], c.r[5].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[4].w[0] + 60u));
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    c.f[7] = fp::cvt_s_w(c.f[2]);
    set32(c.r[4], c.r[29].w[0] + 740u);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 756u);
    st32((c.r[4].w[0]), c.f[2]);
    set32(c.r[4], c.r[29].w[0] + 744u);
    st32((c.r[4].w[0]), c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 760u);
    st32((c.r[4].w[0]), c.f[1]);
    set32(c.r[4], ld32((c.r[29].w[0] + 576u)));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[7]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[29].w[0] + 736u), c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 752u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[7]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.budget -= 114;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 236u), c.f[0]);  if (t) { goto L_003F12FC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1318; } }
L_003F12FC:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F1318:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003F132C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1348; } }
L_003F132C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1348:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003F135C; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1378; } }
L_003F135C:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1378:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F13A4; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F13C0; } }
L_003F13A4:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F13C0:
    c.f[0] = 0u;
    set32(c.r[3], c.r[29].w[0] + 808u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 4u);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 288u), c.f[0]);  if (t) { goto L_003F13FC; } }
L_003F13E0:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F13E0u | kUnwind; return; } goto L_003F13E0; } }
L_003F13FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 812u)));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 3u));
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], c.r[2].w[0] + 16u);  if (t) { goto L_003F1420; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F143C; } }
L_003F1420:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F143C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F1450; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F146C; } }
L_003F1450:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F146C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003F1480; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F149C; } }
L_003F1480:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F149C:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F14C4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F14E0; } }
L_003F14C4:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F14E0:
    c.f[0] = 0u;
    c.r[3].d[0] = ld8((c.r[22].w[0] + 4u));
    c.r[5].d[0] = ld8((c.r[22].w[0] + 1u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] < 0; st8((c.r[29].w[0] + 808u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003F1510; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F152C; } }
L_003F1510:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F152C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F1540; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F155C; } }
L_003F1540:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F155C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003F1570; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F158C; } }
L_003F1570:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F158C:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F15B4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F15D0; } }
L_003F15B4:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F15D0:
    c.f[0] = 0u;
    c.r[4].d[0] = ld8((c.r[22].w[0] + 5u));
    c.r[5].d[0] = ld8((c.r[22].w[0] + 2u));
    set32(c.r[2], c.r[29].w[0] + 809u);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] < 0; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F1604; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1620; } }
L_003F1604:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F1620:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F1634; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1650; } }
L_003F1634:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1650:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003F1664; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1680; } }
L_003F1664:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1680:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F16AC; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F16C8; } }
L_003F16AC:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F16C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 810u);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] < 0; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F1704; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1720; } }
L_003F1704:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F1720:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F1734; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1750; } }
L_003F1734:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1750:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003F1764; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1780; } }
L_003F1764:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1780:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F17AC; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F17C8; } }
L_003F17AC:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F17C8:
    c.f[0] = 0u;
    set32(c.r[4], c.r[29].w[0] + 804u);
    set32(c.r[2], c.r[29].w[0] + 811u);
    set32(c.r[3], 0u + 4u);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003F180C; } }
L_003F17F0:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F17F0u | kUnwind; return; } goto L_003F17F0; } }
L_003F180C:
    set32(c.r[2], ld32((c.r[29].w[0] + 812u)));
    c.r[3].d[0] = ld8((c.r[22].w[0] + 9u));
    c.r[5].d[0] = ld8((c.r[22].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[2], c.r[2].w[0] + 20u);  if (t) { goto L_003F1830; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F184C; } }
L_003F1830:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F184C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F1860; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F187C; } }
L_003F1860:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F187C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003F1890; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F18AC; } }
L_003F1890:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F18AC:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F18D4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F18F0; } }
L_003F18D4:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F18F0:
    c.f[0] = 0u;
    c.r[3].d[0] = ld8((c.r[22].w[0] + 10u));
    c.r[5].d[0] = ld8((c.r[22].w[0] + 7u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] < 0; st8((c.r[29].w[0] + 804u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003F1920; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F193C; } }
L_003F1920:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F193C:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F1950; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F196C; } }
L_003F1950:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F196C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003F1980; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F199C; } }
L_003F1980:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F199C:
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F19C4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F19E0; } }
L_003F19C4:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F19E0:
    c.f[0] = 0u;
    c.r[4].d[0] = ld8((c.r[22].w[0] + 11u));
    c.r[5].d[0] = ld8((c.r[22].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 805u);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] < 0; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F1A14; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1A30; } }
L_003F1A14:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F1A30:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F1A44; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1A60; } }
L_003F1A44:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1A60:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003F1A74; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1A90; } }
L_003F1A74:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1A90:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1ABC; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1AD8; } }
L_003F1ABC:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F1AD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 3u));
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 806u);
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] < 0; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F1B14; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1B30; } }
L_003F1B14:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F1B30:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F1B44; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1B60; } }
L_003F1B44:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1B60:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003F1B74; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1B90; } }
L_003F1B74:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1B90:
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 812u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1BBC; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1BD8; } }
L_003F1BBC:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1BD8:
    c.f[23] = 0u;
    c.r[4].d[0] = ld8((c.r[19].w[0] + 16u));
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 524u), 0u);
    c.facc = fp::ee::add(c.fcr31, c.f[23], c.f[0]);
    c.r[30].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[29].w[0] + 807u);
    set32(c.r[5], c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003F2AF4; } }
L_003F1C10:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; st32((c.r[29].w[0] + 496u), c.r[2].w[0]);  if (t) { goto L_003F2B10; } }
L_003F1C20:
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 812u)));
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 9;
    { const bool t = c.r[20].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1C50; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1C6C; } }
L_003F1C50:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1C6C:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1C94; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1CB0; } }
L_003F1C94:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F1CB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 592u)));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 12;
    { const bool t = c.r[20].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1CEC; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1D08; } }
L_003F1CEC:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1D08:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1D30; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1D4C; } }
L_003F1D30:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F1D4C:
    set32(c.r[3], ld32((c.r[29].w[0] + 608u)));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[5] = ld32((c.r[3].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 10;
    { const bool t = c.r[20].sd[0] < 0; c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);  if (t) { goto L_003F1D80; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1D9C; } }
L_003F1D80:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1D9C:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 608u)));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[4] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.budget -= 14;
    { const bool t = c.r[20].sd[0] < 0; st32((c.r[29].w[0] + 276u), c.f[0]);  if (t) { goto L_003F1DE0; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1DFC; } }
L_003F1DE0:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1DFC:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 672u)));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[5] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[5]);
    c.budget -= 14;
    { const bool t = c.r[20].sd[0] < 0; st32((c.r[29].w[0] + 272u), c.f[0]);  if (t) { goto L_003F1E40; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1E5C; } }
L_003F1E40:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1E5C:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 672u)));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[2].w[0] + 48u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[4] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.budget -= 14;
    { const bool t = c.r[20].sd[0] < 0; st32((c.r[29].w[0] + 268u), c.f[0]);  if (t) { goto L_003F1EA0; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1EBC; } }
L_003F1EA0:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1EBC:
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 672u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 264u), c.f[0]);  if (t) { goto L_003F1F18; } }
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F1F18; } }
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 268u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.budget -= 7;
L_003F1F18:
    set32(c.r[3], ld32((c.r[29].w[0] + 640u)));
    c.r[5].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 7;
    { const bool t = c.r[20].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1F40; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1F5C; } }
L_003F1F40:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F1F5C:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1F84; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F1FA0; } }
L_003F1F84:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F1FA0:
    set32(c.r[3], ld32((c.r[29].w[0] + 640u)));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[20].sd[0] < 0; st16((c.r[29].w[0] + 480u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F1FE8; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F2004; } }
L_003F1FE8:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F2004:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F202C; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F2048; } }
L_003F202C:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F2048:
    set32(c.r[3], ld32((c.r[29].w[0] + 624u)));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[20].sd[0] < 0; st16((c.r[29].w[0] + 464u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F2090; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F20AC; } }
L_003F2090:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F20AC:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F20D4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F20F0; } }
L_003F20D4:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F20F0:
    set32(c.r[3], ld32((c.r[29].w[0] + 624u)));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.f[1]);
    c.budget -= 15;
    { const bool t = c.r[20].sd[0] < 0; st16((c.r[29].w[0] + 448u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_003F2138; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F2154; } }
L_003F2138:
    set32(c.r[4], c.r[20].w[0] >> 1);
    c.r[3].d[0] = c.r[20].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F2154:
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    c.f[3] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F217C; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F2198; } }
L_003F217C:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F2198:
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st16((c.r[29].w[0] + 432u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 544u));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 416u), 0u);  if (t) { goto L_003F29C0; } }
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 804u));
    st8((c.r[29].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[29].w[0] + 808u));
    st8((c.r[29].w[0] + 368u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].d[0] = ld16((c.r[29].w[0] + 544u));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003F2200; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F221C; } }
L_003F2200:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F221C:
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.budget -= 5;
L_003F2230:
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 528u)));
    c.f[12] = ld32((c.r[29].w[0] + 284u));
    c.f[13] = ld32((c.r[29].w[0] + 280u));
    c.f[14] = c.f[24];
    c.f[15] = ld32((c.r[2].w[0] + 4u));
    c.f[16] = ld32((c.r[2].w[0] + 8u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F225Cu); st32((c.r[29].w[0] + 528u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007C(c, 189u, depth + 1u); else { c.pc = 0x003F34B0u; return; } if (c.pc != 0x003F225Cu) [[unlikely]] return; }
L_003F225C:
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    c.f[12] = ld32((c.r[29].w[0] + 276u));
    c.f[13] = ld32((c.r[29].w[0] + 272u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.f[15] = ld32((c.r[2].w[0] + 16u));
    c.f[16] = ld32((c.r[2].w[0] + 20u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F227Cu); c.f[14] = c.f[24];  if (depth < kMaxDepth) unit_007C(c, 189u, depth + 1u); else { c.pc = 0x003F34B0u; return; } if (c.pc != 0x003F227Cu) [[unlikely]] return; }
L_003F227C:
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[3].d[0] = c.r[2].d[0] | 46871ull;
    c.f[2] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[5] = c.r[3].w[0];
    c.f[12] = ld32((c.r[29].w[0] + 268u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.f[13] = ld32((c.r[29].w[0] + 264u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E270000u);
    c.r[3].d[0] = c.r[2].d[0] | 38972ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.f[3] = c.r[3].w[0];
    c.f[4] = c.r[2].w[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B800000u);
    c.r[3].d[0] = c.r[2].d[0] | 32897ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[1] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 672u)));
    c.f[14] = c.f[24];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[5]);
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    st32((c.r[29].w[0] + 292u), c.f[0]);
    c.f[15] = ld32((c.r[2].w[0] + 20u));
    c.f[16] = ld32((c.r[2].w[0] + 24u));
    c.f[6] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[5], c.f[1]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    c.f[21] = fp::ee::add(c.fcr31, c.f[21], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 59;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2368u); st32((c.r[29].w[0] + 236u), c.f[0]);  if (depth < kMaxDepth) unit_007C(c, 189u, depth + 1u); else { c.pc = 0x003F34B0u; return; } if (c.pc != 0x003F2368u) [[unlikely]] return; }
L_003F2368:
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[2], ld32((c.r[29].w[0] + 640u)));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 480u));
    c.f[12] = c.f[24];
    c.r[5].d[0] = ld16((c.r[29].w[0] + 464u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.f[1];
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[13] = ld32((c.r[2].w[0] + 8u));
    c.f[14] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 288u), c.f[1]);
    set32(c.r[2], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F23A0u); st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007C(c, 188u, depth + 1u); else { c.pc = 0x003F33C0u; return; } if (c.pc != 0x003F23A0u) [[unlikely]] return; }
L_003F23A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 624u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 448u));
    c.r[5].d[0] = ld16((c.r[29].w[0] + 432u));
    c.f[13] = ld32((c.r[2].w[0] + 8u));
    c.f[14] = ld32((c.r[2].w[0] + 12u));
    c.f[12] = c.f[24];
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F23C8u); c.r[21].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_007C(c, 188u, depth + 1u); else { c.pc = 0x003F33C0u; return; } if (c.pc != 0x003F23C8u) [[unlikely]] return; }
L_003F23C8:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.f[0]);
    c.f[1] = 0u;
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003F2B28; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003F2470; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003F2408; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F2424; } }
L_003F2408:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F2424:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_003F2438; } }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F2454; } }
L_003F2438:
    set32(c.r[3], c.r[18].w[0] >> 1);
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F2454:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.budget -= 7;
L_003F2470:
    c.r[2].d[0] = c.r[21].d[0] & 65535ull;
    c.f[0] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[5], c.r[2].w[0] << 16);
    c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[18].d[0] = c.r[16].d[0] & 65535ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[20], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[29].w[0] + 240u), c.f[20]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[22], c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[29].w[0] + 244u), c.f[22]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[21], c.f[0]);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[18].d[0];
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[2]);
    c.budget -= 30;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 248u), c.f[21]);  if (t) { goto L_003F2BA0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 16u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F25F8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F2590; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F2518; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2738; } }
L_003F2518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.r[3].d[0] = c.r[2].d[0] | 34953ull;
    c.f[0] = 0u;
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[1] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[23]);
    c.f[23] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[5], c.f[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F2578; } }
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[23] = fp::ee::add(c.fcr31, c.f[23], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[5], c.f[0]);
    c.budget -= 9;
L_003F2578:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2584u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x003F2584u) [[unlikely]] return; }
L_003F2584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2738; } }
    c.budget -= 1;
L_003F2590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.f[3] = fp::cvt_w_s(c.f[23]);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[23]);
    set32(c.r[3], c.f[3]);
    c.f[23] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[2], c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003F25E0; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F25DCu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F25DCu) [[unlikely]] return; }
L_003F25DC:
    st32((c.r[29].w[0] + 524u), c.r[2].w[0]);
    c.budget -= 1;
L_003F25E0:
    set32(c.r[5], ld32((c.r[29].w[0] + 524u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F25F0u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x003F25F0u) [[unlikely]] return; }
L_003F25F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2738; } }
L_003F25F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = c.r[30].d[0] == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003F26A0; } }
    c.f[23] = fp::ee::sub(c.fcr31, c.f[23], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F261Cu); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003F261Cu) [[unlikely]] return; }
L_003F261C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2624u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 41u, depth + 1u); else { c.pc = 0x0022D148u; return; } if (c.pc != 0x003F2624u) [[unlikely]] return; }
L_003F2624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F262Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 88u, depth + 1u); else { c.pc = 0x0020E130u; return; } if (c.pc != 0x003F262Cu) [[unlikely]] return; }
L_003F262C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], c.f[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F2728; } }
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[23]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[23] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2674u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003F2674u) [[unlikely]] return; }
L_003F2674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F267Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 41u, depth + 1u); else { c.pc = 0x0022D148u; return; } if (c.pc != 0x003F267Cu) [[unlikely]] return; }
L_003F267C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2684u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 88u, depth + 1u); else { c.pc = 0x0020E130u; return; } if (c.pc != 0x003F2684u) [[unlikely]] return; }
L_003F2684:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[2].d[0] = 0ull < c.r[30].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003F2728; } }
    c.budget -= 1;
L_003F26A0:
    c.f[23] = fp::ee::add(c.fcr31, c.f[23], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F26ACu); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003F26ACu) [[unlikely]] return; }
L_003F26AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F26B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 41u, depth + 1u); else { c.pc = 0x0022D148u; return; } if (c.pc != 0x003F26B4u) [[unlikely]] return; }
L_003F26B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F26BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 88u, depth + 1u); else { c.pc = 0x0020E130u; return; } if (c.pc != 0x003F26BCu) [[unlikely]] return; }
L_003F26BC:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], c.f[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F2728; } }
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[23]);
    c.f[23] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2700u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003F2700u) [[unlikely]] return; }
L_003F2700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2708u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 41u, depth + 1u); else { c.pc = 0x0022D148u; return; } if (c.pc != 0x003F2708u) [[unlikely]] return; }
L_003F2708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2710u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 88u, depth + 1u); else { c.pc = 0x0020E130u; return; } if (c.pc != 0x003F2710u) [[unlikely]] return; }
L_003F2710:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[2].d[0] = 0ull < c.r[30].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[30].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], c.f[0]);
    c.budget -= 6;
L_003F2728:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2734u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x003F2734u) [[unlikely]] return; }
L_003F2734:
    c.budget -= 1;
L_003F2738:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 368u));
    c.f[13] = ld32((c.r[22].w[0] + 12u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 384u));
    c.f[14] = ld32((c.r[22].w[0] + 16u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2750u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_007C(c, 187u, depth + 1u); else { c.pc = 0x003F32D0u; return; } if (c.pc != 0x003F2750u) [[unlikely]] return; }
L_003F2750:
    set32(c.r[2], c.r[29].w[0] + 809u);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 805u);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.f[13] = ld32((c.r[22].w[0] + 12u));
    c.f[14] = ld32((c.r[22].w[0] + 16u));
    c.f[12] = c.f[24];
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F277Cu); st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007C(c, 187u, depth + 1u); else { c.pc = 0x003F32D0u; return; } if (c.pc != 0x003F277Cu) [[unlikely]] return; }
L_003F277C:
    set32(c.r[2], c.r[29].w[0] + 810u);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 806u);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.f[13] = ld32((c.r[22].w[0] + 12u));
    c.f[14] = ld32((c.r[22].w[0] + 16u));
    c.f[12] = c.f[24];
    set32(c.r[2], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F27A8u); st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007C(c, 187u, depth + 1u); else { c.pc = 0x003F32D0u; return; } if (c.pc != 0x003F27A8u) [[unlikely]] return; }
L_003F27A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[15] = ld32((c.r[2].w[0] + 4u));
    c.f[16] = ld32((c.r[2].w[0] + 8u));
    c.f[12] = ld32((c.r[29].w[0] + 284u));
    c.f[13] = ld32((c.r[29].w[0] + 280u));
    c.f[14] = c.f[24];
    set32(c.r[2], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F27D0u); st8((c.r[17].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007C(c, 189u, depth + 1u); else { c.pc = 0x003F34B0u; return; } if (c.pc != 0x003F27D0u) [[unlikely]] return; }
L_003F27D0:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    set32(c.r[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003F2820; } }
    set32(c.r[2], c.r[29].w[0] + 811u);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[2], c.r[29].w[0] + 807u);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 656u)));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2810u); c.f[12] = c.f[24];  if (depth < kMaxDepth) unit_007C(c, 187u, depth + 1u); else { c.pc = 0x003F32D0u; return; } if (c.pc != 0x003F2810u) [[unlikely]] return; }
L_003F2810:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003F2850; } }
L_003F2820:
    set32(c.r[2], c.r[29].w[0] + 811u);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.f[13] = 0u;
    c.f[12] = c.f[24];
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F283Cu); c.f[14] = c.f[0];  if (depth < kMaxDepth) unit_007C(c, 187u, depth + 1u); else { c.pc = 0x003F32D0u; return; } if (c.pc != 0x003F283Cu) [[unlikely]] return; }
L_003F283C:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_003F2850:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_003F2864; } }
    c.f[0] = c.r[21].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F2880; } }
L_003F2864:
    set32(c.r[3], c.r[21].w[0] >> 1);
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F2880:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[26]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F28C0; } }
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_003F28A0; } }
    c.f[0] = c.r[21].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[26] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F28BC; } }
L_003F28A0:
    set32(c.r[3], c.r[21].w[0] >> 1);
    c.r[2].d[0] = c.r[21].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[26] = fp::cvt_s_w(c.f[0]);
    c.f[26] = fp::ee::add(c.fcr31, c.f[26], c.f[26]);
    c.budget -= 7;
L_003F28BC:
    c.budget -= 1;
L_003F28C0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003F28D4; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F28F0; } }
L_003F28D4:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F28F0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[25]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F2930; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003F2910; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[25] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F292C; } }
L_003F2910:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[25] = fp::cvt_s_w(c.f[0]);
    c.f[25] = fp::ee::add(c.fcr31, c.f[25], c.f[25]);
    c.budget -= 7;
L_003F292C:
    c.budget -= 1;
L_003F2930:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[31]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F2940; } }
    c.f[31] = c.f[20];
    c.budget -= 1;
L_003F2940:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[28]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F2950; } }
    c.f[28] = c.f[20];
    c.budget -= 1;
L_003F2950:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[30]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F2960; } }
    c.f[30] = c.f[22];
    c.budget -= 1;
L_003F2960:
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[27]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F2970; } }
    c.f[27] = c.f[22];
    c.budget -= 1;
L_003F2970:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[29]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F2980; } }
    c.f[29] = c.f[21];
    c.budget -= 1;
L_003F2980:
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F2998; } }
    st32((c.r[29].w[0] + 296u), c.f[21]);
    c.budget -= 2;
L_003F2998:
    set32(c.r[2], ld32((c.r[29].w[0] + 416u)));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 416u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[29].w[0] + 544u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.f[24] = fp::ee::add(c.fcr31, c.f[24], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2230u | kUnwind; return; } goto L_003F2230; } }
    c.budget -= 1;
L_003F29C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[5].d[0] = ld16((c.r[29].w[0] + 400u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].d[0] = ld16((c.r[29].w[0] + 544u));
    c.f[2] = c.r[2].w[0];
    set32(c.r[7], c.r[29].w[0] + 768u);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    set32(c.r[2], c.r[29].w[0] + 780u);
    c.f[3] = c.r[3].w[0];
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[2], c.r[29].w[0] + 796u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[26]);
    set32(c.r[2], c.r[29].w[0] + 772u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[25]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[30] = fp::ee::sub(c.fcr31, c.f[30], c.f[0]);
    c.f[27] = fp::ee::add(c.fcr31, c.f[27], c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    c.f[31] = fp::ee::sub(c.fcr31, c.f[31], c.f[1]);
    st32((c.r[2].w[0]), c.f[30]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 776u);
    c.f[29] = fp::ee::sub(c.fcr31, c.f[29], c.f[1]);
    c.f[28] = fp::ee::add(c.fcr31, c.f[28], c.f[1]);
    st32((c.r[2].w[0]), c.f[29]);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 792u);
    c.f[1] = c.f[29] & fp::kAbs;
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = c.f[30] & fp::kAbs;
    set32(c.r[2], c.r[29].w[0] + 788u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[27], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = c.f[31] & fp::kAbs;
    set32(c.r[2], c.r[29].w[0] + 784u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[28], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 700u)));
    st32((c.r[29].w[0] + 768u), c.f[31]);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[2]);
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2A80u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007C(c, 103u, depth + 1u); else { c.pc = 0x003F0D80u; return; } if (c.pc != 0x003F2A80u) [[unlikely]] return; }
L_003F2A80:
    set32(c.r[3], ld32((c.r[29].w[0] + 700u)));
    c.r[5].d[0] = ld16((c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[29].w[0] + 560u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[29].w[0] + 560u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 560u));
    set32(c.r[3], ld32((c.r[29].w[0] + 352u)));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 700u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F1128u | kUnwind; return; } goto L_003F1128; } }
L_003F2AB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 700u)));
    c.r[6].d[0] = ld16((c.r[23].w[0] + 20u));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 696u)));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 58u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 812u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F2BB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2AE8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003F2AE8u) [[unlikely]] return; }
L_003F2AE8:
    st32((c.r[29].w[0] + 812u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F2BB8; } }
L_003F2AF4:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B04u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2B04u) [[unlikely]] return; }
L_003F2B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 524u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F1C10u | kUnwind; return; } goto L_003F1C10; } }
    c.budget -= 1;
L_003F2B10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2B1Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2B1Cu) [[unlikely]] return; }
L_003F2B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 496u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F1C20u | kUnwind; return; } goto L_003F1C20; } }
    c.budget -= 1;
L_003F2B28:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003F2B3C; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F2B58; } }
L_003F2B3C:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F2B58:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_003F2B6C; } }
    c.f[0] = c.r[18].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F2B88; } }
L_003F2B6C:
    set32(c.r[3], c.r[18].w[0] >> 1);
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F2B88:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3BA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2470u | kUnwind; return; } goto L_003F2470; } }
L_003F2BA0:
    set32(c.r[5], ld32((c.r[29].w[0] + 496u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2BB0u); set32(c.r[6], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x003F2BB0u) [[unlikely]] return; }
L_003F2BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2738u | kUnwind; return; } goto L_003F2738; } }
L_003F2BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 816u);  c.pc = t; return; }
L_003F2C20:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    st32((c.r[29].w[0] + 168u), c.r[4].w[0]);
    set32(c.r[17], c.r[6].w[0] + 316u);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[6].w[0] + 336u);  if (t) { goto L_003F3034; } }
L_003F2C68:
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_003F2C90; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 4u));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_003F2C90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F2CA8; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_003F2CA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003F2CC4; } }
    c.r[4].d[0] = ld16((c.r[17].w[0] + 6u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003F2CC4; } }
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003F2CC4:
    c.r[22].d[0] = c.r[18].d[0] & 65535ull;
    c.r[1].d[0] = 0ll < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003F3020; } }
    c.r[18].d[0] = c.r[30].d[0] << 32;
    set32(c.r[17], c.r[22].w[0] - 1u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    c.budget -= 3;
L_003F2CE0:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] - 60u);
    c.budget -= 2;
L_003F2CE8:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2CF8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2CF8u) [[unlikely]] return; }
L_003F2CF8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D0Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2D0Cu) [[unlikely]] return; }
L_003F2D0C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003F2D48; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] - 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2D48; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2D48; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2CE8u | kUnwind; return; } goto L_003F2CE8; } }
    c.budget -= 1;
L_003F2D48:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] - 56u);
    set32(c.r[21], c.r[18].w[0] - 52u);
    c.budget -= 4;
L_003F2D58:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D68u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2D68u) [[unlikely]] return; }
L_003F2D68:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2D7Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2D7Cu) [[unlikely]] return; }
L_003F2D7C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_003F2DB8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2DB8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2DB8; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2D58u | kUnwind; return; } goto L_003F2D58; } }
    c.budget -= 1;
L_003F2DB8:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] - 48u);
    set32(c.r[21], c.r[18].w[0] - 44u);
    c.budget -= 4;
L_003F2DC8:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2DD8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2DD8u) [[unlikely]] return; }
L_003F2DD8:
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2DECu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2DECu) [[unlikely]] return; }
L_003F2DEC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_003F2E28; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2E28; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2E28; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2DC8u | kUnwind; return; } goto L_003F2DC8; } }
    c.budget -= 1;
L_003F2E28:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] - 40u);
    set32(c.r[21], c.r[18].w[0] - 36u);
    c.budget -= 4;
L_003F2E38:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2E48u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2E48u) [[unlikely]] return; }
L_003F2E48:
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2E5Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2E5Cu) [[unlikely]] return; }
L_003F2E5C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_003F2E98; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2E98; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2E98; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2E38u | kUnwind; return; } goto L_003F2E38; } }
    c.budget -= 1;
L_003F2E98:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] - 32u);
    set32(c.r[21], c.r[18].w[0] - 28u);
    c.budget -= 4;
L_003F2EA8:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2EB8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2EB8u) [[unlikely]] return; }
L_003F2EB8:
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2ECCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2ECCu) [[unlikely]] return; }
L_003F2ECC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  if (t) { goto L_003F2F08; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2F08; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2F08; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2EA8u | kUnwind; return; } goto L_003F2EA8; } }
    c.budget -= 1;
L_003F2F08:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_003F3044; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 4;
L_003F2F20:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] - 16u);
    set32(c.r[21], c.r[18].w[0] - 12u);
    c.budget -= 4;
L_003F2F30:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F40u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2F40u) [[unlikely]] return; }
L_003F2F40:
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2F54u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2F54u) [[unlikely]] return; }
L_003F2F54:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003F2F90; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2F90; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2F90; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2F30u | kUnwind; return; } goto L_003F2F30; } }
    c.budget -= 1;
L_003F2F90:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] - 4u);
    c.budget -= 2;
L_003F2F98:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2FA8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2FA8u) [[unlikely]] return; }
L_003F2FA8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_003F2FD0; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003F2FD0; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2F98u | kUnwind; return; } goto L_003F2F98; } }
L_003F2FD0:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] - 8u);
    c.budget -= 2;
L_003F2FD8:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F2FE8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F2FE8u) [[unlikely]] return; }
L_003F2FE8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003F3010; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003F3010; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2FD8u | kUnwind; return; } goto L_003F2FD8; } }
L_003F3010:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2CE0u | kUnwind; return; } goto L_003F2CE0; } }
L_003F3020:
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    c.r[4].d[0] = c.r[30].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_003F30B8; } }
L_003F3034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F303Cu); set32(c.r[4], c.r[3].w[0] << 6);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003F303Cu) [[unlikely]] return; }
L_003F303C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2C68u | kUnwind; return; } goto L_003F2C68; } }
L_003F3044:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] - 24u);
    set32(c.r[21], c.r[18].w[0] - 20u);
    c.budget -= 3;
L_003F3050:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3060u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F3060u) [[unlikely]] return; }
L_003F3060:
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3074u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x003F3074u) [[unlikely]] return; }
L_003F3074:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[18].w[0] + 44u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2F20u | kUnwind; return; } goto L_003F2F20; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2F20u | kUnwind; return; } goto L_003F2F20; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2F20u | kUnwind; return; } goto L_003F2F20; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3050u | kUnwind; return; } goto L_003F3050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F2F20u | kUnwind; return; } goto L_003F2F20; } }
    c.budget -= 1;
L_003F30B8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003F30F0:
    c.r[13].d[0] = ld16((c.r[4].w[0] + 10u));
    c.f[4] = ld32((c.r[5].w[0]));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 96u));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[11], ld32((c.r[4].w[0] + 12u)));
    c.f[2] = ld32((c.r[5].w[0] + 16u));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 128u)));
    c.f[1] = ld32((c.r[5].w[0] + 20u));
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 148u));
    c.f[5] = ld32((c.r[5].w[0] + 28u));
    set32(c.r[8], c.r[5].w[0] + 180u);
    set32(c.r[12], c.r[13].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    c.r[9].d[0] = c.r[9].d[0] << 62;
    set32(c.r[12], c.r[12].w[0] << 4);
    c.r[9].d[0] = c.r[9].d[0] >> 63;
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[9].d[0] = 0ull < c.r[9].d[0] ? 1ull : 0ull;
    st8((c.r[11].w[0] + 48u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[11].w[0]), c.f[4]);
    st32((c.r[11].w[0] + 4u), c.f[3]);
    st32((c.r[11].w[0] + 16u), c.f[2]);
    st32((c.r[11].w[0] + 20u), c.f[1]);
    st32((c.r[11].w[0] + 24u), c.f[0]);
    c.f[4] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[11].w[0] + 28u), c.f[5]);
    c.f[3] = ld32((c.r[5].w[0] + 36u));
    c.f[2] = ld32((c.r[5].w[0] + 40u));
    c.f[1] = ld32((c.r[5].w[0] + 44u));
    c.f[0] = ld32((c.r[5].w[0] + 84u));
    st32((c.r[11].w[0] + 32u), c.f[4]);
    st32((c.r[11].w[0] + 36u), c.f[3]);
    st32((c.r[11].w[0] + 40u), c.f[2]);
    st32((c.r[11].w[0] + 44u), c.f[1]);
    st32((c.r[11].w[0] + 52u), c.f[0]);
    st8((c.r[11].w[0] + 56u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[11].w[0] + 64u), 0u);
    st32((c.r[11].w[0] + 68u), 0u);
    st16((c.r[11].w[0] + 58u), static_cast<std::uint16_t>(0u));
    st32((c.r[11].w[0] + 60u), 0u);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 10u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 45;
    { const bool t = c.r[3].d[0] == 0ull; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_003F32B0; } }
    c.f[2] = ld32((c.r[8].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.f[1] = ld32((c.r[8].w[0] + 4u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003F32B0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_003F32B0; } }
    set32(c.r[8], c.f[2]);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.f[0]);
    c.budget -= 3;
L_003F31E4:
    c.r[11].d[0] = 0ull | 0ull;
    c.r[10].d[0] = 0ull | 0ull;
    c.r[11].d[0] = c.r[11].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[11].d[0] = c.r[11].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[11].d[0] = c.r[11].d[0] | 32768ull;
    c.r[10].d[0] = c.r[10].d[0] | 32768ull;
    c.r[11].d[0] = c.r[11].d[0] << 16;
    c.r[10].d[0] = c.r[10].d[0] << 16;
    c.r[13].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[11].d[0] = c.r[11].d[0] & c.r[8].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[11].d[0];
    c.r[10].d[0] = c.r[10].d[0] & c.r[5].d[0];
    c.f[3] = c.r[13].w[0];
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[11].d[0] = c.r[11].d[0] | c.r[10].d[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.r[10].d[0] = c.r[9].d[0] & 65535ull;
    c.f[1] = c.r[11].w[0];
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[11], c.f[3]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.r[13].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[11], c.f[1]);
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[11], c.r[11].w[0] - c.r[13].w[0]);
    mmi::mult(c, 0, c.r[10].w[0], c.r[11].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    set32(c.r[10], c.r[13].w[0] + c.r[10].w[0]);
    c.r[10].d[0] = c.r[10].d[0] & 65535ull;
    c.budget -= 38;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_003F3280; } }
    c.r[10].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 1;
L_003F3280:
    c.r[11].d[0] = ld16((c.r[7].w[0]));
    c.r[10].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull; st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));  if (t) { goto L_003F32B8; } }
    c.budget -= 1;
L_003F3298:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    c.r[10].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F31E4u | kUnwind; return; } goto L_003F31E4; } }
    c.budget -= 1;
L_003F32B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F32C8; } }
L_003F32B8:
    c.r[10].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[10].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3298u | kUnwind; return; } goto L_003F3298; } }
L_003F32C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F32D0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003F32E4; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F3300; } }
L_003F32E4:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F3300:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F3314; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_003F3330; } }
L_003F3314:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_003F3330:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F33AC; } }
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F33AC; } }
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[14]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F33A8; } }
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[12], c.f[13]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[14], c.f[13]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);  if (t) { goto L_003F3390; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F33AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[3];  if (t) { goto L_003F33A0; } }
L_003F3390:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F33AC; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_003F33A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F33AC; } }
L_003F33A8:
    c.f[0] = c.f[3];
    c.budget -= 1;
L_003F33AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F33C0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_003F33D4; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F33F0; } }
L_003F33D4:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F33F0:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_003F3404; } }
    c.f[1] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_003F3420; } }
L_003F3404:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[1]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_003F3420:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F349C; } }
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F349C; } }
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[14]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F3498; } }
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[12], c.f[13]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[14], c.f[13]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);  if (t) { goto L_003F3480; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F349C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[3];  if (t) { goto L_003F3490; } }
L_003F3480:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F349C; } }
    c.f[0] = c.f[3];
    c.budget -= 1;
L_003F3490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F349C; } }
L_003F3498:
    c.f[0] = c.f[3];
    c.budget -= 1;
L_003F349C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F34B0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[14]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F3528; } }
    fpu_compare(c, fp::key(c.f[14]) <= fp::key(c.f[15]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F3530; } }
    fpu_compare(c, fp::key(c.f[14]) < fp::key(c.f[16]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F3538; } }
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[14], c.f[15]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[16], c.f[15]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[13], c.f[12]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[0]);  if (t) { goto L_003F3510; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003F353C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[13];  if (t) { goto L_003F3520; } }
L_003F3510:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003F353C; } }
    c.f[0] = c.f[13];
    c.budget -= 1;
L_003F3520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F353C; } }
L_003F3528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[12];  if (t) { goto L_003F353C; } }
L_003F3530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[12];  if (t) { goto L_003F353C; } }
L_003F3538:
    c.f[0] = c.f[13];
    c.budget -= 1;
L_003F353C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003F3550:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8088u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F364C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F364C; } }
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3598u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_00A0(c, 85u, depth + 1u); else { c.pc = 0x004815A0u; return; } if (c.pc != 0x003F3598u) [[unlikely]] return; }
L_003F3598:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F364C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F35B4u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F35B4u) [[unlikely]] return; }
L_003F35B4:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F35BC:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F35E8; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F35E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F35BCu | kUnwind; return; } goto L_003F35BC; } }
    c.budget -= 1;
L_003F35E8:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3600; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F35F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F3654; } }
L_003F3600:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F35F8u | kUnwind; return; } goto L_003F35F8; } }
L_003F364C:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F3654:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F3670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8108u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F368C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F368Cu);  if (depth < kMaxDepth) unit_00A8(c, 181u, depth + 1u); else { c.pc = 0x004A2A80u; return; } if (c.pc != 0x003F368Cu) [[unlikely]] return; }
L_003F368C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F36A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F36C4; } }
L_003F36BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F3748; } }
L_003F36C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[10].d[0] = ld8((c.r[28].w[0] - 31568u));
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[9].d[0] = ld8((c.r[28].w[0] - 31567u));
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31566u));
    set32(c.r[6], c.r[6].w[0] + 13136u);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    set32(c.r[8], c.r[29].w[0] + 96u);
    c.f[12] = c.r[2].w[0];
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3730u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F3730u) [[unlikely]] return; }
L_003F3730:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3740u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F3740u) [[unlikely]] return; }
L_003F3740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F36BCu | kUnwind; return; } goto L_003F36BC; } }
L_003F3748:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F3760:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F3788; } }
L_003F3780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F37FC; } }
L_003F3788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.r[5].d[0] = ld8((c.r[28].w[0] - 31572u));
    c.f[14] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.f[12] = c.f[13];
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31570u));
    c.f[13] = c.f[0];
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 13152u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31571u));
    set32(c.r[8], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], c.r[29].w[0] + 124u);
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F37E4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F37E4u) [[unlikely]] return; }
L_003F37E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F37F4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F37F4u) [[unlikely]] return; }
L_003F37F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3780u | kUnwind; return; } goto L_003F3780; } }
L_003F37FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F3810:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F3834; } }
L_003F382C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F38A8; } }
L_003F3834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = ld8((c.r[28].w[0] - 31576u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    c.f[13] = c.r[2].w[0];
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.f[14] = c.r[3].w[0];
    set32(c.r[6], c.r[6].w[0] + 13160u);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31574u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31575u));
    set32(c.r[8], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], c.r[29].w[0] + 124u);
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3890u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F3890u) [[unlikely]] return; }
L_003F3890:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F38A0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F38A0u) [[unlikely]] return; }
L_003F38A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F382Cu | kUnwind; return; } goto L_003F382C; } }
L_003F38A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F38C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F38E4; } }
L_003F38DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F3954; } }
L_003F38E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[3].w[0];
    c.r[6].d[0] = ld8((c.r[28].w[0] - 31580u));
    c.f[13] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    c.f[14] = c.f[12];
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31579u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31578u));
    set32(c.r[8], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[6], c.r[6].w[0] + 13144u);
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F393Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F393Cu) [[unlikely]] return; }
L_003F393C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F394Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F394Cu) [[unlikely]] return; }
L_003F394C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F38DCu | kUnwind; return; } goto L_003F38DC; } }
L_003F3954:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F3970:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F3994; } }
L_003F398C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F3A08; } }
L_003F3994:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[5].d[0] = ld8((c.r[28].w[0] - 31584u));
    c.f[13] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    c.f[14] = c.f[13];
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 13088u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31583u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31582u));
    set32(c.r[8], c.r[29].w[0] + 96u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], c.r[29].w[0] + 124u);
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F39F0u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F39F0u) [[unlikely]] return; }
L_003F39F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3A00u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F3A00u) [[unlikely]] return; }
L_003F3A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F398Cu | kUnwind; return; } goto L_003F398C; } }
L_003F3A08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F3A20:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8096u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F3B14; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F3B14; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3A64u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A7(c, 239u, depth + 1u); else { c.pc = 0x0049FD50u; return; } if (c.pc != 0x003F3A64u) [[unlikely]] return; }
L_003F3A64:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F3B14; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3A80u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F3A80u) [[unlikely]] return; }
L_003F3A80:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F3A88:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F3AB0; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F3AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3A88u | kUnwind; return; } goto L_003F3A88; } }
L_003F3AB0:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3AC8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F3AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F3B1C; } }
L_003F3AC8:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3AC0u | kUnwind; return; } goto L_003F3AC0; } }
L_003F3B14:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F3B1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F3B30:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8096u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F3C24; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 500u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F3C24; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3B74u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 239u, depth + 1u); else { c.pc = 0x0049FD50u; return; } if (c.pc != 0x003F3B74u) [[unlikely]] return; }
L_003F3B74:
    set32(c.r[2], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[29].w[0] + 304u);  if (t) { goto L_003F3C24; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3B90u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_007D(c, 433u, depth + 1u); else { c.pc = 0x003F7EB0u; return; } if (c.pc != 0x003F3B90u) [[unlikely]] return; }
L_003F3B90:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_003F3B98:
    c.r[1].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F3BC0; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003F3BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3B98u | kUnwind; return; } goto L_003F3B98; } }
L_003F3BC0:
    c.r[3].d[0] = c.r[2].sd[0] < 500ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003F3BD8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003F3BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F3C2C; } }
L_003F3BD8:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 2016u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 2020u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    st8((c.r[5].w[0] + 2012u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3BD0u | kUnwind; return; } goto L_003F3BD0; } }
L_003F3C24:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_003F3C2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_003F3C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8028u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F3C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3C5Cu);  if (depth < kMaxDepth) unit_009D(c, 101u, depth + 1u); else { c.pc = 0x00476020u; return; } if (c.pc != 0x003F3C5Cu) [[unlikely]] return; }
L_003F3C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F3C70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F3C94; } }
L_003F3C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F3D08; } }
L_003F3C94:
    c.r[11].d[0] = ld8((c.r[6].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[10].d[0] = ld8((c.r[6].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.f[14] = c.r[9].w[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.f[12] = c.r[3].w[0];
    set32(c.r[8], c.r[29].w[0] + 48u);
    c.f[13] = c.r[2].w[0];
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[6].d[0] = ld8((c.r[6].w[0] + 2u));
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[6], c.r[6].w[0] + 13120u);
    st32((c.r[29].w[0] + 48u), c.r[9].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 52u), c.r[9].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3CF0u); st32((c.r[29].w[0] + 56u), c.r[9].w[0]);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F3CF0u) [[unlikely]] return; }
L_003F3CF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3D00u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F3D00u) [[unlikely]] return; }
L_003F3D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3C8Cu | kUnwind; return; } goto L_003F3C8C; } }
L_003F3D08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F3D20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F3D44; } }
L_003F3D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F3ED0; } }
L_003F3D44:
    set32(c.r[3], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003F3D6C; } }
L_003F3D50:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3D50u | kUnwind; return; } goto L_003F3D50; } }
L_003F3D6C:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003F3D84; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F3DA0; } }
L_003F3D84:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F3DA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 1u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F3DD0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F3DEC; } }
L_003F3DD0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F3DEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[2].d[0] = ld8((c.r[6].w[0] + 2u));
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 125u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003F3E1C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F3E38; } }
L_003F3E1C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F3E38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.f[0] = c.r[2].w[0];
    c.r[10].d[0] = ld8((c.r[29].w[0] + 124u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[11], c.r[29].w[0] + 126u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    set32(c.r[8], c.r[29].w[0] + 48u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st8((c.r[29].w[0] + 121u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[29].w[0] + 120u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 120u);
    set32(c.r[6], c.r[6].w[0] + 13128u);
    set32(c.r[10], c.f[0]);
    c.f[13] = c.r[2].w[0];
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[12] = c.r[3].w[0];
    c.r[2].d[0] = ld8((c.r[11].w[0]));
    c.f[14] = c.r[9].w[0];
    st8((c.r[29].w[0] + 122u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    st32((c.r[29].w[0] + 48u), c.r[9].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 52u), c.r[9].w[0]);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3EB8u); st32((c.r[29].w[0] + 56u), c.r[9].w[0]);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F3EB8u) [[unlikely]] return; }
L_003F3EB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3EC8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F3EC8u) [[unlikely]] return; }
L_003F3EC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3D3Cu | kUnwind; return; } goto L_003F3D3C; } }
L_003F3ED0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003F3EE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F3F08; } }
L_003F3F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003F3F70; } }
L_003F3F08:
    c.r[7].d[0] = ld8((c.r[28].w[0] - 31588u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[10].d[0] = ld8((c.r[28].w[0] - 31587u));
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.r[9].d[0] = ld8((c.r[28].w[0] - 31586u));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.f[13] = c.r[3].w[0];
    set32(c.r[6], c.r[6].w[0] + 13112u);
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[14] = c.r[2].w[0];
    st8((c.r[29].w[0] + 109u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[7], 0u + 1u);
    st8((c.r[29].w[0] + 110u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3F58u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F3F58u) [[unlikely]] return; }
L_003F3F58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F3F68u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 138u, depth + 1u); else { c.pc = 0x0041E940u; return; } if (c.pc != 0x003F3F68u) [[unlikely]] return; }
L_003F3F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F3F00u | kUnwind; return; } goto L_003F3F00; } }
L_003F3F70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003F3F80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8044u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F3FA4; } }
L_003F3F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { [[clang::musttail]] return unit_007D(c, 4u, depth); } }
L_003F3FA4:
    c.r[7].d[0] = ld8((c.r[28].w[0] - 31592u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[8].d[0] = ld8((c.r[28].w[0] - 31591u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.r[10].d[0] = ld8((c.r[28].w[0] - 31590u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.f[12] = c.r[9].w[0];
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.f[14] = c.r[3].w[0];
    set32(c.r[6], c.r[6].w[0] + 13112u);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[13] = c.r[2].w[0];
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], 0u + 1u);
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[8], c.r[29].w[0] + 48u);
    set32(c.r[17], ld32((c.r[4].w[0] + 8044u)));
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 48u), c.r[9].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F4004u); st32((c.r[29].w[0] + 56u), c.r[9].w[0]);  if (depth < kMaxDepth) unit_0087(c, 184u, depth + 1u); else { c.pc = 0x0041F080u; return; } if (c.pc != 0x003F4004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_007D(c, 2u, depth);
}

}

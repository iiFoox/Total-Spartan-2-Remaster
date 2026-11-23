#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004B[4096] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 71, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0,
    122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131,
    0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0,
    0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0,
    0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193,
    0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0,
    235, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0,
    0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0032C000;
    case 2u: goto L_0032C010;
    case 3u: goto L_0032C018;
    case 4u: goto L_0032C060;
    case 5u: goto L_0032C098;
    case 6u: goto L_0032C0AC;
    case 7u: goto L_0032C0FC;
    case 8u: goto L_0032C150;
    case 9u: goto L_0032C1A0;
    case 10u: goto L_0032C210;
    case 11u: goto L_0032C24C;
    case 12u: goto L_0032C268;
    case 13u: goto L_0032C298;
    case 14u: goto L_0032C2E0;
    case 15u: goto L_0032C304;
    case 16u: goto L_0032C3F0;
    case 17u: goto L_0032C410;
    case 18u: goto L_0032C480;
    case 19u: goto L_0032C49C;
    case 20u: goto L_0032C4AC;
    case 21u: goto L_0032C4BC;
    case 22u: goto L_0032C4CC;
    case 23u: goto L_0032C4DC;
    case 24u: goto L_0032C4F4;
    case 25u: goto L_0032C510;
    case 26u: goto L_0032C52C;
    case 27u: goto L_0032C548;
    case 28u: goto L_0032C564;
    case 29u: goto L_0032C580;
    case 30u: goto L_0032C78C;
    case 31u: goto L_0032C870;
    case 32u: goto L_0032C8C4;
    case 33u: goto L_0032C8E8;
    case 34u: goto L_0032C9B8;
    case 35u: goto L_0032C9D0;
    case 36u: goto L_0032CA18;
    case 37u: goto L_0032CA28;
    case 38u: goto L_0032CA38;
    case 39u: goto L_0032CA50;
    case 40u: goto L_0032CA64;
    case 41u: goto L_0032CAAC;
    case 42u: goto L_0032CB30;
    case 43u: goto L_0032CB78;
    case 44u: goto L_0032CB94;
    case 45u: goto L_0032CBB0;
    case 46u: goto L_0032CC7C;
    case 47u: goto L_0032CCB0;
    case 48u: goto L_0032CD1C;
    case 49u: goto L_0032CD88;
    case 50u: goto L_0032CDA4;
    case 51u: goto L_0032CDBC;
    case 52u: goto L_0032CDD8;
    case 53u: goto L_0032CDFC;
    case 54u: goto L_0032CE04;
    case 55u: goto L_0032CE10;
    case 56u: goto L_0032CE40;
    case 57u: goto L_0032CEEC;
    case 58u: goto L_0032CF1C;
    case 59u: goto L_0032CF80;
    case 60u: goto L_0032CF94;
    case 61u: goto L_0032CFBC;
    case 62u: goto L_0032CFD0;
    case 63u: goto L_0032D01C;
    case 64u: goto L_0032D05C;
    case 65u: goto L_0032D0E0;
    case 66u: goto L_0032D180;
    case 67u: goto L_0032D1C4;
    case 68u: goto L_0032D234;
    case 69u: goto L_0032D344;
    case 70u: goto L_0032D408;
    case 71u: goto L_0032D418;
    case 72u: goto L_0032D41C;
    case 73u: goto L_0032D424;
    case 74u: goto L_0032D45C;
    case 75u: goto L_0032D474;
    case 76u: goto L_0032D484;
    case 77u: goto L_0032D610;
    case 78u: goto L_0032D640;
    case 79u: goto L_0032D658;
    case 80u: goto L_0032D678;
    case 81u: goto L_0032D68C;
    case 82u: goto L_0032D6F0;
    case 83u: goto L_0032D730;
    case 84u: goto L_0032D810;
    case 85u: goto L_0032D8F0;
    case 86u: goto L_0032D93C;
    case 87u: goto L_0032DA88;
    case 88u: goto L_0032DBE8;
    case 89u: goto L_0032DCA4;
    case 90u: goto L_0032DD80;
    case 91u: goto L_0032DD9C;
    case 92u: goto L_0032DDB8;
    case 93u: goto L_0032DEE4;
    case 94u: goto L_0032DF30;
    case 95u: goto L_0032DF4C;
    case 96u: goto L_0032E024;
    case 97u: goto L_0032E08C;
    case 98u: goto L_0032E0BC;
    case 99u: goto L_0032E124;
    case 100u: goto L_0032E138;
    case 101u: goto L_0032E170;
    case 102u: goto L_0032E19C;
    case 103u: goto L_0032E1BC;
    case 104u: goto L_0032E1EC;
    case 105u: goto L_0032E350;
    case 106u: goto L_0032E374;
    case 107u: goto L_0032E3B4;
    case 108u: goto L_0032E3F4;
    case 109u: goto L_0032E434;
    case 110u: goto L_0032E470;
    case 111u: goto L_0032E680;
    case 112u: goto L_0032E6A4;
    case 113u: goto L_0032E6BC;
    case 114u: goto L_0032E6E0;
    case 115u: goto L_0032E710;
    case 116u: goto L_0032E744;
    case 117u: goto L_0032E7B0;
    case 118u: goto L_0032E7C0;
    case 119u: goto L_0032E7D0;
    case 120u: goto L_0032E7E0;
    case 121u: goto L_0032E7F0;
    case 122u: goto L_0032E800;
    case 123u: goto L_0032E810;
    case 124u: goto L_0032E818;
    case 125u: goto L_0032E828;
    case 126u: goto L_0032E838;
    case 127u: goto L_0032E848;
    case 128u: goto L_0032E858;
    case 129u: goto L_0032E864;
    case 130u: goto L_0032E870;
    case 131u: goto L_0032E87C;
    case 132u: goto L_0032E888;
    case 133u: goto L_0032E89C;
    case 134u: goto L_0032E8AC;
    case 135u: goto L_0032E8BC;
    case 136u: goto L_0032E8D4;
    case 137u: goto L_0032E8E4;
    case 138u: goto L_0032E8F4;
    case 139u: goto L_0032E904;
    case 140u: goto L_0032E914;
    case 141u: goto L_0032E924;
    case 142u: goto L_0032E940;
    case 143u: goto L_0032E950;
    case 144u: goto L_0032E964;
    case 145u: goto L_0032E978;
    case 146u: goto L_0032E98C;
    case 147u: goto L_0032E9A0;
    case 148u: goto L_0032E9B4;
    case 149u: goto L_0032E9CC;
    case 150u: goto L_0032E9DC;
    case 151u: goto L_0032E9EC;
    case 152u: goto L_0032EA04;
    case 153u: goto L_0032EA20;
    case 154u: goto L_0032EA3C;
    case 155u: goto L_0032EA58;
    case 156u: goto L_0032EA74;
    case 157u: goto L_0032EA90;
    case 158u: goto L_0032EAAC;
    case 159u: goto L_0032EB2C;
    case 160u: goto L_0032EB60;
    case 161u: goto L_0032EB78;
    case 162u: goto L_0032EB94;
    case 163u: goto L_0032EBB0;
    case 164u: goto L_0032EBCC;
    case 165u: goto L_0032EBE8;
    case 166u: goto L_0032EC04;
    case 167u: goto L_0032EC20;
    case 168u: goto L_0032EC3C;
    case 169u: goto L_0032EC58;
    case 170u: goto L_0032EC74;
    case 171u: goto L_0032EC90;
    case 172u: goto L_0032ECAC;
    case 173u: goto L_0032ECC8;
    case 174u: goto L_0032ECE0;
    case 175u: goto L_0032ED14;
    case 176u: goto L_0032ED80;
    case 177u: goto L_0032ED90;
    case 178u: goto L_0032EDA0;
    case 179u: goto L_0032EDB0;
    case 180u: goto L_0032EDC0;
    case 181u: goto L_0032EDD0;
    case 182u: goto L_0032EDE0;
    case 183u: goto L_0032EDE8;
    case 184u: goto L_0032EDF8;
    case 185u: goto L_0032EE08;
    case 186u: goto L_0032EE18;
    case 187u: goto L_0032EE28;
    case 188u: goto L_0032EE34;
    case 189u: goto L_0032EE40;
    case 190u: goto L_0032EE4C;
    case 191u: goto L_0032EE58;
    case 192u: goto L_0032EE6C;
    case 193u: goto L_0032EE7C;
    case 194u: goto L_0032EE8C;
    case 195u: goto L_0032EE98;
    case 196u: goto L_0032EEA4;
    case 197u: goto L_0032EEB0;
    case 198u: goto L_0032EEBC;
    case 199u: goto L_0032EECC;
    case 200u: goto L_0032EEDC;
    case 201u: goto L_0032EEF4;
    case 202u: goto L_0032EF04;
    case 203u: goto L_0032EF14;
    case 204u: goto L_0032EF2C;
    case 205u: goto L_0032EF48;
    case 206u: goto L_0032EF64;
    case 207u: goto L_0032EF80;
    case 208u: goto L_0032EF9C;
    case 209u: goto L_0032EFB8;
    case 210u: goto L_0032EFD4;
    case 211u: goto L_0032F054;
    case 212u: goto L_0032F088;
    case 213u: goto L_0032F0A0;
    case 214u: goto L_0032F0BC;
    case 215u: goto L_0032F0D8;
    case 216u: goto L_0032F0F4;
    case 217u: goto L_0032F110;
    case 218u: goto L_0032F12C;
    case 219u: goto L_0032F148;
    case 220u: goto L_0032F160;
    case 221u: goto L_0032F188;
    case 222u: goto L_0032F198;
    case 223u: goto L_0032F1A8;
    case 224u: goto L_0032F1B8;
    case 225u: goto L_0032F1C8;
    case 226u: goto L_0032F1D8;
    case 227u: goto L_0032F200;
    case 228u: goto L_0032F234;
    case 229u: goto L_0032F2A0;
    case 230u: goto L_0032F2B0;
    case 231u: goto L_0032F2C0;
    case 232u: goto L_0032F2D0;
    case 233u: goto L_0032F2E0;
    case 234u: goto L_0032F2F0;
    case 235u: goto L_0032F300;
    case 236u: goto L_0032F308;
    case 237u: goto L_0032F318;
    case 238u: goto L_0032F328;
    case 239u: goto L_0032F338;
    case 240u: goto L_0032F348;
    case 241u: goto L_0032F354;
    case 242u: goto L_0032F360;
    case 243u: goto L_0032F36C;
    case 244u: goto L_0032F378;
    case 245u: goto L_0032F38C;
    case 246u: goto L_0032F39C;
    case 247u: goto L_0032F3AC;
    case 248u: goto L_0032F3C4;
    case 249u: goto L_0032F3E0;
    case 250u: goto L_0032F3FC;
    case 251u: goto L_0032F418;
    case 252u: goto L_0032F434;
    case 253u: goto L_0032F450;
    case 254u: goto L_0032F46C;
    case 255u: goto L_0032F4EC;
    case 256u: goto L_0032F520;
    case 257u: goto L_0032F538;
    case 258u: goto L_0032F554;
    case 259u: goto L_0032F570;
    case 260u: goto L_0032F58C;
    case 261u: goto L_0032F5B0;
    case 262u: goto L_0032F5D4;
    case 263u: goto L_0032F5F0;
    case 264u: goto L_0032F610;
    case 265u: goto L_0032F618;
    case 266u: goto L_0032F620;
    case 267u: goto L_0032F630;
    case 268u: goto L_0032F644;
    case 269u: goto L_0032F658;
    case 270u: goto L_0032F66C;
    case 271u: goto L_0032F680;
    case 272u: goto L_0032F694;
    case 273u: goto L_0032F6AC;
    case 274u: goto L_0032F6BC;
    case 275u: goto L_0032F6CC;
    case 276u: goto L_0032F6DC;
    case 277u: goto L_0032F6F8;
    case 278u: goto L_0032F724;
    case 279u: goto L_0032F740;
    case 280u: goto L_0032F75C;
    case 281u: goto L_0032F778;
    case 282u: goto L_0032F794;
    case 283u: goto L_0032F7B0;
    case 284u: goto L_0032F7CC;
    case 285u: goto L_0032F7E8;
    case 286u: goto L_0032F804;
    case 287u: goto L_0032F81C;
    case 288u: goto L_0032F830;
    case 289u: goto L_0032F870;
    case 290u: goto L_0032F880;
    case 291u: goto L_0032F8B4;
    case 292u: goto L_0032F8C4;
    case 293u: goto L_0032F904;
    case 294u: goto L_0032F914;
    case 295u: goto L_0032F944;
    case 296u: goto L_0032F954;
    case 297u: goto L_0032FABC;
    case 298u: goto L_0032FAEC;
    case 299u: goto L_0032FAFC;
    case 300u: goto L_0032FB2C;
    case 301u: goto L_0032FB3C;
    case 302u: goto L_0032FB6C;
    case 303u: goto L_0032FB7C;
    case 304u: goto L_0032FBAC;
    case 305u: goto L_0032FBBC;
    case 306u: goto L_0032FBEC;
    case 307u: goto L_0032FC48;
    case 308u: goto L_0032FC58;
    case 309u: goto L_0032FC8C;
    case 310u: goto L_0032FC9C;
    case 311u: goto L_0032FCCC;
    case 312u: goto L_0032FCDC;
    case 313u: goto L_0032FDD8;
    case 314u: goto L_0032FDE8;
    case 315u: goto L_0032FE1C;
    case 316u: goto L_0032FE34;
    case 317u: goto L_0032FE44;
    case 318u: goto L_0032FF60;
    default: bad_entry(c, 0x0032C000u); return;
    }
L_0032C000:
    set32(c.r[5], c.r[4].w[0] >> 3);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032BE20u | kUnwind; return; } [[clang::musttail]] return unit_004A(c, 66u, depth); } }
    c.budget -= 1;
L_0032C010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0032C050; } }
L_0032C018:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0032C02C; } }
    c.f[3] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[3]);  if (t) { goto L_0032C048; } }
L_0032C02C:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[3] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_0032C048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032BDECu | kUnwind; return; } [[clang::musttail]] return unit_004A(c, 65u, depth); } }
L_0032C050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032C060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 46u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C098u); st32((c.r[4].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_004B(c, 18u, depth + 1u); else { c.pc = 0x0032C480u; return; } if (c.pc != 0x0032C098u) [[unlikely]] return; }
L_0032C098:
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[10], 0u + 2u);
    set32(c.r[8], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 5;
L_0032C0AC:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0032C0C0; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 3;
L_0032C0C0:
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C0ACu | kUnwind; return; } goto L_0032C0AC; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[10], 0u + 21u);
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 5;
L_0032C0FC:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0032C110; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 3;
L_0032C110:
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C0FCu | kUnwind; return; } goto L_0032C0FC; } }
    c.r[10].d[0] = ld8((c.r[16].w[0] + 132u));
    set32(c.r[8], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[9], ld32((c.r[16].w[0] + 128u)));  if (t) { goto L_0032C188; } }
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 2;
L_0032C150:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0032C160; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 2;
L_0032C160:
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C150u | kUnwind; return; } goto L_0032C150; } }
L_0032C188:
    c.r[10].d[0] = ld8((c.r[16].w[0] + 144u));
    set32(c.r[8], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[9], ld32((c.r[16].w[0] + 140u)));  if (t) { goto L_0032C1D8; } }
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 2;
L_0032C1A0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0032C1B0; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 2;
L_0032C1B0:
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C1A0u | kUnwind; return; } goto L_0032C1A0; } }
L_0032C1D8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29220u));
    c.r[3].d[0] = c.r[3].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032C1F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 22743u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0032C1F8:
    st8((c.r[16].w[0] + 204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032C210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032C2E8; } }
    st32((c.r[16].w[0] + 108u), c.r[5].w[0]);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 112u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 56u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032C2F4; } }
L_0032C24C:
    st32((c.r[16].w[0] + 116u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032C3FC; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1000ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032C310; } }
L_0032C268:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st8((c.r[16].w[0] + 45u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 7;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0032C31C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xCCCC0000u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] - 2176u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 5;
L_0032C298:
    mmi::divu(c, 0, c.r[9].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 36u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    mmi::multu(c, 0, c.r[4].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[9], c.r[3].w[0] >> 3);
    c.budget -= 16;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C298u | kUnwind; return; } goto L_0032C298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032C31C; } }
L_0032C2E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0032C400; } }
L_0032C2E8:
    st32((c.r[16].w[0] + 108u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C2E0u | kUnwind; return; } goto L_0032C2E0; } }
L_0032C2F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C304u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032C304u) [[unlikely]] return; }
L_0032C304:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 156u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C24Cu | kUnwind; return; } goto L_0032C24C; } }
L_0032C310:
    set32(c.r[3], 0u + 999u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C268u | kUnwind; return; } goto L_0032C268; } }
L_0032C31C:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_0032C330; } }
    c.f[0] = c.r[8].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032C34C; } }
L_0032C330:
    set32(c.r[4], c.r[8].w[0] >> 1);
    c.r[3].d[0] = c.r[8].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_0032C34C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C380; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] >> 5);  if (t) { goto L_0032C39C; } }
L_0032C380:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], c.r[4].w[0] >> 5);
    c.budget -= 7;
L_0032C39C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0032C3B0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032C3CC; } }
L_0032C3B0:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0032C3CC:
    st32((c.r[16].w[0] + 148u), c.f[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0032C3FC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C3F0u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032C3F0u) [[unlikely]] return; }
L_0032C3F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C2E0u | kUnwind; return; } goto L_0032C2E0; } }
L_0032C3FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0032C400:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032C410:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 96u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032C44C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0032C434; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 3;
L_0032C434:
    set32(c.r[5], ld32((c.r[4].w[0] + 108u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0032C478; } }
L_0032C44C:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 46u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032C478; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 44u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0032C478; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0032C478; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0032C478:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032C4E4; } }
L_0032C49C:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032C500; } }
L_0032C4AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032C51C; } }
L_0032C4BC:
    set32(c.r[5], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032C538; } }
L_0032C4CC:
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032C554; } }
L_0032C4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0032C570; } }
L_0032C4E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C4F4u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032C4F4u) [[unlikely]] return; }
L_0032C4F4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C49Cu | kUnwind; return; } goto L_0032C49C; } }
L_0032C500:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C510u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032C510u) [[unlikely]] return; }
L_0032C510:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C4ACu | kUnwind; return; } goto L_0032C4AC; } }
L_0032C51C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C52Cu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032C52Cu) [[unlikely]] return; }
L_0032C52C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 160u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C4BCu | kUnwind; return; } goto L_0032C4BC; } }
L_0032C538:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C548u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032C548u) [[unlikely]] return; }
L_0032C548:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 156u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C4CCu | kUnwind; return; } goto L_0032C4CC; } }
L_0032C554:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C564u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032C564u) [[unlikely]] return; }
L_0032C564:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 164u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C4DCu | kUnwind; return; } goto L_0032C4DC; } }
L_0032C570:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032C580:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 18u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.f[0] = c.r[5].w[0];
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[7].w[0] >> 4);
    set32(c.r[3], c.r[3].w[0] >> 1);
    set32(c.r[5], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 4);
    c.r[7].d[0] = ld16((c.r[6].w[0] + 6u));
    c.f[2] = fp::cvt_s_w(c.f[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 21;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);  if (t) { goto L_0032C5E0; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032C5FC; } }
L_0032C5E0:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0032C5FC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 18u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    set32(c.r[8], c.r[5].w[0] >> 4);
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[9].d[0] = ld16((c.r[6].w[0] + 6u));
    c.f[3] = fp::cvt_s_w(c.f[0]);
    set32(c.r[8], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.budget -= 30;
    { const bool t = c.r[7].sd[0] < 0; set32(c.r[9], c.r[8].w[0] + c.r[3].w[0]);  if (t) { goto L_0032C680; } }
    c.f[0] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032C69C; } }
L_0032C680:
    set32(c.r[8], c.r[7].w[0] >> 1);
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.f[0] = c.r[8].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_0032C69C:
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 16u)));
    c.f[1] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[12], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[13], c.f[2]);
    st32((c.r[9].w[0]), c.f[0]);
    st32((c.r[9].w[0] + 4u), c.f[3]);
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[9].w[0] + 8u), c.r[7].w[0]);  if (t) { goto L_0032C794; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[4].d[0] = c.r[4].d[0] | 39322ull;
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C814; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C83C; } }
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[13]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C750; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_0032C76C; } }
L_0032C750:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 7;
L_0032C76C:
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[4].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 8;
L_0032C78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032C85C; } }
L_0032C794:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[1] = c.r[4].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[13]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032C7D4; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[7].d[0] & 255ull;  if (t) { goto L_0032C7F0; } }
L_0032C7D4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[7], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] | c.r[3].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 7;
L_0032C7F0:
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[4].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C78Cu | kUnwind; return; } goto L_0032C78C; } }
L_0032C814:
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[4].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[7], 0u + 128u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C78Cu | kUnwind; return; } goto L_0032C78C; } }
L_0032C83C:
    c.r[5].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[7], 0u - 1u);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C78Cu | kUnwind; return; } goto L_0032C78C; } }
L_0032C85C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0032C870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 44u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0032C8E0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_0032CB04; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032CB04; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 46u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032C8D8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032CAF4; } }
L_0032C8C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0032C8E0; } }
L_0032C8D8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0032C8E0:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0032CB54; } }
L_0032C8E8:
    set32(c.r[13], ld32((c.r[17].w[0] + 4u)));
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[10], ld32((c.r[17].w[0] + 80u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[12], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3430000u);
    c.f[13] = 0u;
    set32(c.r[14], c.r[14].w[0] + c.r[13].w[0]);
    set32(c.r[15], c.r[14].w[0] >> 4);
    set32(c.r[10], c.r[10].w[0] << 16);
    set32(c.r[13], c.r[15].w[0] << 4);
    set32(c.r[14], c.r[14].w[0] - c.r[13].w[0]);
    c.r[13].d[0] = c.r[10].d[0] | c.r[7].d[0];
    set32(c.r[10], c.r[15].w[0] << 3);
    set32(c.r[7], c.r[14].w[0] << 4);
    set32(c.r[10], c.r[12].w[0] + c.r[10].w[0]);
    c.r[12].d[0] = ld16((c.r[10].w[0] + 6u));
    set32(c.r[10], ld32((c.r[10].w[0])));
    set32(c.r[12], c.r[12].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    set32(c.r[7], c.r[10].w[0] + c.r[7].w[0]);
    st32((c.r[7].w[0] + 12u), c.r[13].w[0]);
    set32(c.r[12], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[13], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[12], c.r[2].w[0] + c.r[12].w[0]);
    set32(c.r[14], c.r[12].w[0] >> 4);
    set32(c.r[2], c.r[10].w[0] << 16);
    set32(c.r[10], c.r[14].w[0] << 4);
    set32(c.r[10], c.r[12].w[0] - c.r[10].w[0]);
    c.r[12].d[0] = c.r[2].d[0] | c.r[7].d[0];
    set32(c.r[7], c.r[14].w[0] << 3);
    set32(c.r[2], c.r[10].w[0] << 4);
    set32(c.r[7], c.r[13].w[0] + c.r[7].w[0]);
    c.r[10].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[12].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 116u), c.r[9].w[0]);
    st8((c.r[17].w[0] + 46u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032C9B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 29u, depth + 1u); else { c.pc = 0x0032C580u; return; } if (c.pc != 0x0032C9B8u) [[unlikely]] return; }
L_0032C9B8:
    c.r[10].d[0] = ld8((c.r[17].w[0] + 132u));
    set32(c.r[8], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[9], ld32((c.r[17].w[0] + 128u)));  if (t) { goto L_0032CA08; } }
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 2;
L_0032C9D0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0032C9E0; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 2;
L_0032C9E0:
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C9D0u | kUnwind; return; } goto L_0032C9D0; } }
L_0032CA08:
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032CB68; } }
L_0032CA18:
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032CB84; } }
L_0032CA28:
    set32(c.r[5], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032CBA0; } }
L_0032CA38:
    set32(c.r[3], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032CC84; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1000ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032CBBC; } }
L_0032CA50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CA64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x0032CA64u) [[unlikely]] return; }
L_0032CA64:
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 32268u));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 13;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0032CBC8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xCCCC0000u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[6], c.r[6].w[0] - 2176u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.budget -= 5;
L_0032CAAC:
    mmi::divu(c, 0, c.r[9].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 36u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[8], c.r[8].w[0] + c.r[3].w[0]);
    mmi::multu(c, 0, c.r[4].w[0], c.r[9].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[9], c.r[3].w[0] >> 3);
    c.budget -= 16;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CAACu | kUnwind; return; } goto L_0032CAAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CBC8; } }
L_0032CAF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C8C4u | kUnwind; return; } goto L_0032C8C4; } }
L_0032CB04:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0032CB38; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0032CB24; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 3;
L_0032CB24:
    st32((c.r[17].w[0] + 68u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 3;
L_0032CB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0032CC9C; } }
L_0032CB38:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 100u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 104u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[9].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CB30u | kUnwind; return; } goto L_0032CB30; } }
L_0032CB54:
    st32((c.r[17].w[0] + 100u), c.r[8].w[0]);
    st32((c.r[17].w[0] + 104u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 112u), c.r[9].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032C8E8u | kUnwind; return; } goto L_0032C8E8; } }
L_0032CB68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CB78u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032CB78u) [[unlikely]] return; }
L_0032CB78:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CA18u | kUnwind; return; } goto L_0032CA18; } }
L_0032CB84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CB94u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032CB94u) [[unlikely]] return; }
L_0032CB94:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CA28u | kUnwind; return; } goto L_0032CA28; } }
L_0032CBA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CBB0u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032CBB0u) [[unlikely]] return; }
L_0032CBB0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 156u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CA38u | kUnwind; return; } goto L_0032CA38; } }
L_0032CBBC:
    set32(c.r[2], 0u + 999u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 116u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CA50u | kUnwind; return; } goto L_0032CA50; } }
L_0032CBC8:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] < 0;  if (t) { goto L_0032CBDC; } }
    c.f[0] = c.r[8].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032CBF8; } }
L_0032CBDC:
    set32(c.r[4], c.r[8].w[0] >> 1);
    c.r[3].d[0] = c.r[8].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_0032CBF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41840000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032CC2C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] >> 5);  if (t) { goto L_0032CC48; } }
L_0032CC2C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], c.r[4].w[0] >> 5);
    c.budget -= 7;
L_0032CC48:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0032CC5C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032CC78; } }
L_0032CC5C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0032CC78:
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_0032CC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032CC98; } }
L_0032CC84:
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32268u));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CC7Cu | kUnwind; return; } goto L_0032CC7C; } }
L_0032CC98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0032CC9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032CCB0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    set32(c.r[3], 0u + 10u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 44u));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0032CF88; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0032CE48; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0032CD90; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0032CD58; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0032CD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 45u));  if (t) { goto L_0032D060; } }
L_0032CD10:
    c.f[13] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CD1Cu); c.f[12] = ld32((c.r[17].w[0] + 28u));  if (depth < kMaxDepth) unit_004B(c, 29u, depth + 1u); else { c.pc = 0x0032C580u; return; } if (c.pc != 0x0032CD1Cu) [[unlikely]] return; }
L_0032CD1C:
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 28u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 28u), c.f[1]);  if (t) { goto L_0032D05C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0032D05C; } }
L_0032CD58:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 28u));
    c.f[13] = 0u;
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[12] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 28u), c.f[12]);  if (t) { goto L_0032D464; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CD88u);  if (depth < kMaxDepth) unit_004B(c, 29u, depth + 1u); else { c.pc = 0x0032C580u; return; } if (c.pc != 0x0032CD88u) [[unlikely]] return; }
L_0032CD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D05C; } }
L_0032CD90:
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CDA4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x0032CDA4u) [[unlikely]] return; }
L_0032CDA4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[5].w[0] - 1269u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CDBCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0032CDBCu) [[unlikely]] return; }
L_0032CDBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CDD8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 40u, depth + 1u); else { c.pc = 0x002F02C0u; return; } if (c.pc != 0x0032CDD8u) [[unlikely]] return; }
L_0032CDD8:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[16], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D47C; } }
L_0032CDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CE04u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0032CE04u) [[unlikely]] return; }
L_0032CE04:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032D518; } }
L_0032CE10:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[13] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 28u), c.f[13]);  if (t) { goto L_0032D648; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CE40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 29u, depth + 1u); else { c.pc = 0x0032C580u; return; } if (c.pc != 0x0032CE40u) [[unlikely]] return; }
L_0032CE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032D05C; } }
L_0032CE48:
    set32(c.r[10], ld32((c.r[28].w[0] - 32100u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[9], ld32((c.r[28].w[0] - 32104u)));
    c.f[2] = c.r[3].w[0];
    c.r[8].d[0] = ld8((c.r[28].w[0] - 32096u));
    set32(c.r[5], c.r[29].w[0] + 331u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 32095u));
    c.f[0] = c.r[3].w[0];
    c.r[6].d[0] = ld8((c.r[28].w[0] - 32094u));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 32093u));
    st32((c.r[29].w[0] + 292u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 288u), c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29688u)));
    st32((c.r[29].w[0] + 288u), c.r[9].w[0]);
    st8((c.r[29].w[0] + 328u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[29].w[0] + 329u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 330u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 6096u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032CEBC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0032CED8; } }
L_0032CEBC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_0032CED8:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0032D664; } }
L_0032CEEC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 204u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032D05C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0032D05C; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CF1Cu); set32(c.r[5], c.r[5].w[0] - 1265u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0032CF1Cu) [[unlikely]] return; }
L_0032CF1C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    set32(c.r[9], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.f[13] = 0u;
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.f[2] = c.r[7].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = c.r[8].w[0];
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[7], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[8], c.r[29].w[0] + 328u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CF80u); st32((c.r[29].w[0] + 256u), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0032CF80u) [[unlikely]] return; }
L_0032CF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_0032D05C; } }
L_0032CF88:
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032D6F8; } }
L_0032CF94:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 96u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032D708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032CFBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 18u, depth + 1u); else { c.pc = 0x0032C480u; return; } if (c.pc != 0x0032CFBCu) [[unlikely]] return; }
L_0032CFBC:
    set32(c.r[9], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[10], 0u + 2u);
    set32(c.r[8], ld32((c.r[17].w[0])));
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 5;
L_0032CFD0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0032CFE0; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 2;
L_0032CFE0:
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CFD0u | kUnwind; return; } goto L_0032CFD0; } }
    set32(c.r[9], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[10], 0u + 21u);
    set32(c.r[8], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 5;
L_0032D01C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0032D030; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 3;
L_0032D030:
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D01Cu | kUnwind; return; } goto L_0032D01C; } }
    st8((c.r[17].w[0] + 46u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0032D05C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 45u));
    c.budget -= 1;
L_0032D060:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0032D134; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0032D1C4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0032D08C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 45u));  if (t) { goto L_0032D1C8; } }
L_0032D08C:
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42040000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 32u), c.f[1]);  if (t) { goto L_0032D738; } }
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    st32((c.r[17].w[0] + 152u), c.f[0]);
    c.r[10].d[0] = ld8((c.r[17].w[0] + 144u));
    set32(c.r[8], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 7;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[9], ld32((c.r[17].w[0] + 140u)));  if (t) { goto L_0032D118; } }
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 2;
L_0032D0E0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0032D0F0; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 2;
L_0032D0F0:
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D0E0u | kUnwind; return; } goto L_0032D0E0; } }
L_0032D118:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42040000u);
    st32((c.r[17].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[3], 0u + 2u);
    st32((c.r[17].w[0] + 120u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0032D1C4; } }
L_0032D134:
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 32u), c.f[1]);  if (t) { goto L_0032D818; } }
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[10].d[0] = ld8((c.r[17].w[0] + 132u));
    set32(c.r[8], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 5;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[9], ld32((c.r[17].w[0] + 128u)));  if (t) { goto L_0032D1B8; } }
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 2;
L_0032D180:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0032D190; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 2;
L_0032D190:
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D180u | kUnwind; return; } goto L_0032D180; } }
L_0032D1B8:
    st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 10u);
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0032D1C4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 45u));
    c.budget -= 1;
L_0032D1C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032D40C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032D40C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0032D40C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 116u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032D8F8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[8], 0u + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCCCC0000u);
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], c.r[5].w[0] - 2176u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 14;
L_0032D234:
    mmi::divu(c, 0, c.r[8].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    mmi::multu(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[8], c.r[2].w[0] >> 3);
    c.budget -= 16;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D234u | kUnwind; return; } goto L_0032D234; } }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));  if (t) { goto L_0032D288; } }
    c.f[0] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032D2A4; } }
L_0032D288:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_0032D2A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42040000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D2D8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] >> 5);  if (t) { goto L_0032D2F4; } }
L_0032D2D8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] >> 5);
    c.budget -= 7;
L_0032D2F4:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0032D30C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032D328; } }
L_0032D30C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0032D328:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 260u), c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.budget -= 7;
L_0032D344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 32084u));
    c.f[2] = c.r[2].w[0];
    c.r[6].d[0] = ld8((c.r[28].w[0] - 32083u));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32082u));
    set32(c.r[4], c.r[29].w[0] + 319u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32081u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    st8((c.r[29].w[0] + 316u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 317u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 318u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 6096u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D3A0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0032D3BC; } }
L_0032D3A0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_0032D3BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[28].w[0] - 32076u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 32080u)));
    c.f[13] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    set32(c.r[7], c.r[29].w[0] + 280u);
    set32(c.r[8], c.r[29].w[0] + 316u);
    set32(c.r[9], 0u + 1u);
    st32((c.r[29].w[0] + 284u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D408u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0032D408u) [[unlikely]] return; }
L_0032D408:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_0032D40C:
    set32(c.r[3], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032DB9C; } }
L_0032D418:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 204u));
    c.budget -= 1;
L_0032D41C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032DD88; } }
L_0032D424:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032E320; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 46u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032E32C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 45u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032D454; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 45u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0032D45C; } }
L_0032D454:
    set32(c.r[3], 0u + 10u);
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0032D45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0032E330; } }
L_0032D464:
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[12] = c.f[13];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D474u); st32((c.r[17].w[0] + 28u), c.f[13]);  if (depth < kMaxDepth) unit_004B(c, 29u, depth + 1u); else { c.pc = 0x0032C580u; return; } if (c.pc != 0x0032D474u) [[unlikely]] return; }
L_0032D474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D05Cu | kUnwind; return; } goto L_0032D05C; } }
L_0032D47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D484u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0032D484u) [[unlikely]] return; }
L_0032D484:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0032D498; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032D4B4; } }
L_0032D498:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_0032D4B4:
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 224u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CDFCu | kUnwind; return; } goto L_0032CDFC; } }
L_0032D518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    set32(c.r[8], ld32((c.r[28].w[0] - 32116u)));
    c.f[2] = c.r[2].w[0];
    c.r[7].d[0] = ld8((c.r[28].w[0] - 32112u));
    c.r[6].d[0] = ld8((c.r[28].w[0] - 32111u));
    set32(c.r[4], c.r[29].w[0] + 335u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32110u));
    c.f[0] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32109u));
    st32((c.r[29].w[0] + 296u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    st32((c.r[29].w[0] + 300u), c.r[8].w[0]);
    st8((c.r[29].w[0] + 332u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 333u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 334u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 6096u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D580; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0032D59C; } }
L_0032D580:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_0032D59C:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    set32(c.r[2], 0u - 1u);
    c.f[1] = c.r[6].w[0];
    set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 25;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0032D610; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D610u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032D610u) [[unlikely]] return; }
L_0032D610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[7], c.r[29].w[0] + 296u);
    set32(c.r[8], c.r[29].w[0] + 332u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D640u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0032D640u) [[unlikely]] return; }
L_0032D640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CE10u | kUnwind; return; } goto L_0032CE10; } }
L_0032D648:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D658u); c.f[13] = c.f[1];  if (depth < kMaxDepth) unit_004B(c, 29u, depth + 1u); else { c.pc = 0x0032C580u; return; } if (c.pc != 0x0032D658u) [[unlikely]] return; }
L_0032D658:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D05Cu | kUnwind; return; } goto L_0032D05C; } }
L_0032D664:
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D678u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x0032D678u) [[unlikely]] return; }
L_0032D678:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D68Cu); set32(c.r[5], c.r[5].w[0] - 1269u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0032D68Cu) [[unlikely]] return; }
L_0032D68C:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.f[12] = c.r[2].w[0];
    c.r[9].d[0] = 0ull + 0ull;
    c.f[13] = 0u;
    set32(c.r[10], 0u + 2u);
    c.f[2] = c.r[7].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = c.r[8].w[0];
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[7], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[8], c.r[29].w[0] + 328u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D6F0u); st32((c.r[29].w[0] + 256u), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0032D6F0u) [[unlikely]] return; }
L_0032D6F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CEECu | kUnwind; return; } goto L_0032CEEC; } }
L_0032D6F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032CF94u | kUnwind; return; } goto L_0032CF94; } }
L_0032D708:
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 108u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 100u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[10], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D730u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004B(c, 31u, depth + 1u); else { c.pc = 0x0032C870u; return; } if (c.pc != 0x0032D730u) [[unlikely]] return; }
L_0032D730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D05Cu | kUnwind; return; } goto L_0032D05C; } }
L_0032D738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 32092u));
    c.f[2] = c.r[2].w[0];
    c.r[6].d[0] = ld8((c.r[28].w[0] - 32091u));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32090u));
    set32(c.r[4], c.r[29].w[0] + 327u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32089u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    st8((c.r[29].w[0] + 324u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 325u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 326u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 6096u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D794; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0032D7B0; } }
L_0032D794:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_0032D7B0:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    set32(c.r[4], c.r[17].w[0] + 124u);
    set32(c.r[6], c.r[29].w[0] + 324u);
    set32(c.r[7], c.r[29].w[0] + 144u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[3] = c.r[5].w[0];
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D810u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004A(c, 63u, depth + 1u); else { c.pc = 0x0032BC80u; return; } if (c.pc != 0x0032D810u) [[unlikely]] return; }
L_0032D810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D1C4u | kUnwind; return; } goto L_0032D1C4; } }
L_0032D818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 32088u));
    c.f[2] = c.r[2].w[0];
    c.r[6].d[0] = ld8((c.r[28].w[0] - 32087u));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32086u));
    set32(c.r[4], c.r[29].w[0] + 323u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32085u));
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    st8((c.r[29].w[0] + 320u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 321u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 322u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 6096u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 19;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D874; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0032D890; } }
L_0032D874:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_0032D890:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    set32(c.r[4], c.r[17].w[0] + 124u);
    set32(c.r[6], c.r[29].w[0] + 320u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[3] = c.r[5].w[0];
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    c.f[12] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032D8F0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004A(c, 63u, depth + 1u); else { c.pc = 0x0032BC80u; return; } if (c.pc != 0x0032D8F0u) [[unlikely]] return; }
L_0032D8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D1C4u | kUnwind; return; } goto L_0032D1C4; } }
L_0032D8F8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0032DA50; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[8], 0u + 88u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCCCC0000u);
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], c.r[5].w[0] - 2176u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 14;
L_0032D93C:
    mmi::divu(c, 0, c.r[8].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    mmi::multu(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[8], c.r[2].w[0] >> 3);
    c.budget -= 16;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D93Cu | kUnwind; return; } goto L_0032D93C; } }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));  if (t) { goto L_0032D990; } }
    c.f[0] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032D9AC; } }
L_0032D990:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_0032D9AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42040000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032D9E0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] >> 5);  if (t) { goto L_0032D9FC; } }
L_0032D9E0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] >> 5);
    c.budget -= 7;
L_0032D9FC:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0032DA14; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032DA30; } }
L_0032DA14:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0032DA30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 260u), c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 256u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D344u | kUnwind; return; } goto L_0032D344; } }
L_0032DA50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[8], 0u + 888u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCCCC0000u);
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], c.r[5].w[0] - 2176u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 14;
L_0032DA88:
    mmi::divu(c, 0, c.r[8].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    mmi::multu(c, 0, c.r[3].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[8], c.r[2].w[0] >> 3);
    c.budget -= 16;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DA88u | kUnwind; return; } goto L_0032DA88; } }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] < 0; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));  if (t) { goto L_0032DADC; } }
    c.f[0] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032DAF8; } }
L_0032DADC:
    set32(c.r[3], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_0032DAF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42040000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032DB2C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] >> 5);  if (t) { goto L_0032DB48; } }
L_0032DB2C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[3].w[0] >> 5);
    c.budget -= 7;
L_0032DB48:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0032DB60; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032DB7C; } }
L_0032DB60:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0032DB7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 260u), c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 256u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D344u | kUnwind; return; } goto L_0032D344; } }
L_0032DB9C:
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[2] = c.r[3].w[0];
    c.f[3] = ld32((c.r[17].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 36u), c.f[2]);  if (t) { goto L_0032DC28; } }
    st32((c.r[17].w[0] + 120u), 0u);
    c.r[10].d[0] = ld8((c.r[17].w[0] + 144u));
    set32(c.r[8], ld32((c.r[17].w[0] + 136u)));
    c.budget -= 5;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[9], ld32((c.r[17].w[0] + 140u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D418u | kUnwind; return; } goto L_0032D418; } }
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 2;
L_0032DBE8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0032DBF8; } }
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 2;
L_0032DBF8:
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[3], c.r[9].w[0] << 4);
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[10].d[0] != 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DBE8u | kUnwind; return; } goto L_0032DBE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 204u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D41Cu | kUnwind; return; } goto L_0032D41C; } }
L_0032DC28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42040000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032DC78; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0032DC94; } }
L_0032DC78:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_0032DC94:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[29].w[0] + 312u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0032DCC0; } }
L_0032DCA4:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DCA4u | kUnwind; return; } goto L_0032DCA4; } }
L_0032DCC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    st8((c.r[29].w[0] + 312u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[2] = c.r[2].w[0];
    st8((c.r[29].w[0] + 313u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 314u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.f[1] = ld32((c.r[2].w[0] + 6096u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032DD04; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_0032DD20; } }
L_0032DD04:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
L_0032DD20:
    st8((c.r[29].w[0] + 315u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    c.f[0] = ld32((c.r[17].w[0] + 152u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    set32(c.r[4], c.r[17].w[0] + 136u);
    set32(c.r[6], c.r[29].w[0] + 312u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    c.r[8].d[0] = 0ull + 0ull;
    c.f[3] = c.r[5].w[0];
    c.f[1] = c.r[3].w[0];
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 120u)));
    c.f[12] = ld32((c.r[17].w[0] + 36u));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DD80u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004A(c, 63u, depth + 1u); else { c.pc = 0x0032BC80u; return; } if (c.pc != 0x0032DD80u) [[unlikely]] return; }
L_0032DD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D418u | kUnwind; return; } goto L_0032D418; } }
L_0032DD88:
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DD9Cu); set32(c.r[5], c.r[5].w[0] - 1272u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0032DD9Cu) [[unlikely]] return; }
L_0032DD9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DDB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 40u, depth + 1u); else { c.pc = 0x002F02C0u; return; } if (c.pc != 0x0032DDB8u) [[unlikely]] return; }
L_0032DDB8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 16u)));
    c.f[20] = c.f[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    c.f[0] = c.r[4].w[0];
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032DDDC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032DDF8; } }
L_0032DDDC:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0032DDF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 32068u)));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8874u)));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 32072u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x42340000u);
    set32(c.r[16], c.r[29].w[0] + 260u);
    c.r[10].d[0] = ld8((c.r[28].w[0] - 32064u));
    set32(c.r[7], c.r[29].w[0] + 311u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.r[9].d[0] = ld8((c.r[28].w[0] - 32063u));
    st32((c.r[29].w[0] + 276u), c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.r[6].d[0] = ld8((c.r[28].w[0] - 32061u));
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    c.f[1] = c.r[11].w[0];
    st32((c.r[29].w[0] + 272u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 29688u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[8].w[0];
    c.f[2] = c.r[4].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[8].d[0] = ld8((c.r[28].w[0] - 32062u));
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 272u), c.r[4].w[0]);
    st8((c.r[29].w[0] + 308u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[29].w[0] + 309u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[29].w[0] + 310u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 6096u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 39;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032DEA4; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0032DEC0; } }
L_0032DEA4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
L_0032DEC0:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032E044; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 164u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032DF20; } }
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 1;
L_0032DEE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032DF38; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 164u), c.r[3].w[0]);  if (t) { goto L_0032E044; } }
L_0032DF20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DF30u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032DF30u) [[unlikely]] return; }
L_0032DF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 40u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032DEE4u | kUnwind; return; } goto L_0032DEE4; } }
L_0032DF38:
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032DF4Cu); set32(c.r[5], c.r[5].w[0] - 1265u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0032DF4Cu) [[unlikely]] return; }
L_0032DF4C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = c.r[3].w[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8874u)));
    c.f[5] = ld32((c.r[17].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = c.r[2].sd[0] < 0; c.f[4] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);  if (t) { goto L_0032DFA8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032DFC4; } }
L_0032DFA8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0032DFC4:
    c.f[1] = ld32((c.r[29].w[0] + 260u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[9], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[29].w[0] + 272u);
    set32(c.r[8], c.r[29].w[0] + 308u);
    c.f[13] = 0u;
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[5]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[13], c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[12] = c.r[3].w[0];
    st32((c.r[29].w[0] + 80u), c.f[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E024u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0032E024u) [[unlikely]] return; }
L_0032E024:
    st32((c.r[17].w[0] + 164u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 8;
L_0032E044:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032E130; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032E0C4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[17].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D424u | kUnwind; return; } goto L_0032D424; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E08Cu); set32(c.r[5], c.r[5].w[0] - 1272u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0032E08Cu) [[unlikely]] return; }
L_0032E08C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    set32(c.r[9], 0u + 2u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[13] = 0u;
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[7], c.r[29].w[0] + 272u);
    set32(c.r[8], c.r[29].w[0] + 308u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E0BCu); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0032E0BCu) [[unlikely]] return; }
L_0032E0BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 160u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D424u | kUnwind; return; } goto L_0032D424; } }
L_0032E0C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[6], 0u - 1u);
    set32(c.r[7], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[7].w[0] >> 4);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    c.budget -= 20;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D424u | kUnwind; return; } goto L_0032D424; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E124u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032E124u) [[unlikely]] return; }
L_0032E124:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 160u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D424u | kUnwind; return; } goto L_0032D424; } }
L_0032E130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E138u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0077(c, 40u, depth + 1u); else { c.pc = 0x003DC660u; return; } if (c.pc != 0x0032E138u) [[unlikely]] return; }
L_0032E138:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032E170; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0032E318; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0032E170:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E19Cu); set32(c.r[5], c.r[5].w[0] - 1272u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0032E19Cu) [[unlikely]] return; }
L_0032E19C:
    set32(c.r[5], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0032E1BC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E1BCu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032E1BCu) [[unlikely]] return; }
L_0032E1BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    set32(c.r[9], 0u + 2u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[13] = 0u;
    set32(c.r[6], c.r[29].w[0] + 256u);
    set32(c.r[7], c.r[29].w[0] + 272u);
    set32(c.r[8], c.r[29].w[0] + 308u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E1ECu); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0032E1ECu) [[unlikely]] return; }
L_0032E1EC:
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0032E228; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 76u), c.r[4].w[0]);  if (t) { goto L_0032E244; } }
L_0032E228:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 7;
L_0032E244:
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] >> 1);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0032E260; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0032E27C; } }
L_0032E260:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[3]);
    c.budget -= 7;
L_0032E27C:
    c.f[2] = ld32((c.r[29].w[0] + 256u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[5], 0u + 1u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] >> 4);
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[5].w[0] << 4);
    c.r[4].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.r[4].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 39;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D424u | kUnwind; return; } goto L_0032D424; } }
L_0032E318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E170u | kUnwind; return; } goto L_0032E170; } }
L_0032E320:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032D45Cu | kUnwind; return; } goto L_0032D45C; } }
L_0032E32C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0032E330:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0032E350:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[8], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 128u), c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032E390; } }
L_0032E374:
    set32(c.r[7], c.r[7].w[0] - 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E374u | kUnwind; return; } goto L_0032E374; } }
L_0032E390:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[8], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 3u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032E3D0; } }
L_0032E3B4:
    set32(c.r[7], c.r[7].w[0] - 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E3B4u | kUnwind; return; } goto L_0032E3B4; } }
L_0032E3D0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[8], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 172u), c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 5u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032E410; } }
L_0032E3F4:
    set32(c.r[7], c.r[7].w[0] - 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E3F4u | kUnwind; return; } goto L_0032E3F4; } }
L_0032E410:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[8], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st32((c.r[4].w[0] + 180u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 184u), c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 10u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032E450; } }
L_0032E434:
    set32(c.r[7], c.r[7].w[0] - 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E434u | kUnwind; return; } goto L_0032E434; } }
L_0032E450:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 192u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 196u), c.r[7].w[0]);  c.pc = t; return; }
L_0032E470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], c.r[9].w[0] - 2088u);
    set32(c.r[11], ld32((c.r[5].w[0])));
    set32(c.r[12], c.r[6].w[0] << 3);
    set32(c.r[16], 0u - 1u);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 3u));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[24].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[15], 0u + 200u);
    c.r[6].d[0] = ld8((c.r[9].w[0] + 2u));
    set32(c.r[13], 0u + 128u);
    set32(c.r[11], c.r[11].w[0] + c.r[12].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    st32((c.r[4].w[0]), c.r[11].w[0]);
    c.f[0] = c.r[5].w[0];
    st32((c.r[4].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[12], 0u + 16u);
    st32((c.r[4].w[0] + 20u), c.r[16].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 24u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 156u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 160u), c.r[16].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[16].w[0]);
    st8((c.r[4].w[0] + 46u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[9].w[0] + 1u));
    st32((c.r[4].w[0] + 52u), 0u);
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 120u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    set32(c.r[11], c.r[8].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 76u), 0u);
    set32(c.r[14], c.r[11].w[0] + 1u);
    st32((c.r[4].w[0] + 68u), 0u);
    c.r[11].d[0] = ld8((c.r[28].w[0] - 29220u));
    c.r[11].d[0] = c.r[11].d[0] ^ 3ull;
    c.r[11].d[0] = c.r[11].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[4].w[0] + 204u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[10].w[0] + 8864u)));
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8866u)));
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 18u)));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[10], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[11], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[11].w[0] >> 4);
    set32(c.r[10], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[10], c.r[11].w[0] - c.r[10].w[0]);
    set32(c.r[11], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[16], ld32((c.r[11].w[0])));
    set32(c.r[3], c.r[10].w[0] << 2);
    c.r[25].d[0] = ld16((c.r[11].w[0] + 6u));
    set32(c.r[7], c.r[10].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 260u);
    set32(c.r[25], c.r[25].w[0] << 2);
    set32(c.r[25], c.r[16].w[0] + c.r[25].w[0]);
    set32(c.r[25], c.r[25].w[0] + c.r[3].w[0]);
    st8((c.r[25].w[0]), static_cast<std::uint8_t>(c.r[24].w[0]));
    st8((c.r[25].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[25].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[25].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 80u), c.r[15].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[14].w[0]);
    set32(c.r[5], ld32((c.r[11].w[0])));
    c.r[4].d[0] = ld16((c.r[11].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 396u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[10].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[11].w[0])));
    c.r[4].d[0] = ld16((c.r[11].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.budget -= 95;
    { const bool t = c.r[7].d[0] != c.r[12].d[0]; st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[13].w[0]));  if (t) { goto L_0032E5F4; } }
    set32(c.r[11], c.r[11].w[0] + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0032E5F4:
    set32(c.r[6], ld32((c.r[11].w[0])));
    set32(c.r[8], c.r[7].w[0] << 2);
    c.r[5].d[0] = ld16((c.r[11].w[0] + 6u));
    set32(c.r[3], 0u + 128u);
    c.r[4].d[0] = ld8((c.r[9].w[0]));
    c.r[10].d[0] = ld8((c.r[9].w[0] + 1u));
    c.r[12].d[0] = ld8((c.r[9].w[0] + 2u));
    c.r[13].d[0] = ld8((c.r[9].w[0] + 3u));
    set32(c.r[6], c.r[6].w[0] + 260u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[5], ld32((c.r[11].w[0])));
    c.r[4].d[0] = ld16((c.r[11].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 396u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[11].w[0])));
    c.r[4].d[0] = ld16((c.r[11].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0032E680:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0032E6BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E6A4u);  if (depth < kMaxDepth) unit_004B(c, 18u, depth + 1u); else { c.pc = 0x0032C480u; return; } if (c.pc != 0x0032E6A4u) [[unlikely]] return; }
L_0032E6A4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0032E6BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E6BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0032E6BCu) [[unlikely]] return; }
L_0032E6BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032E6E0:
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], 0u + 5u);
    st8((c.r[4].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 10u);
    st8((c.r[4].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 188u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 200u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0032E710:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[9], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 6092u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 4229u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4228u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3940u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], ld32((c.r[4].w[0] + 3876u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 3872u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 13;
L_0032E744:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_0032E758; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 3;
L_0032E758:
    c.r[4].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[8].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E744u | kUnwind; return; } goto L_0032E744; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 3880u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 3884u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4200u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0032E9F4; } }
L_0032E7B0:
    set32(c.r[5], ld32((c.r[16].w[0] + 2520u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EA10; } }
L_0032E7C0:
    set32(c.r[5], ld32((c.r[16].w[0] + 2856u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EA2C; } }
L_0032E7D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 3192u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EA48; } }
L_0032E7E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 3528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EA64; } }
L_0032E7F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 3864u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EA80; } }
L_0032E800:
    set32(c.r[5], ld32((c.r[16].w[0] + 4200u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EA9C; } }
L_0032E810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E818u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 18u, depth + 1u); else { c.pc = 0x0032C480u; return; } if (c.pc != 0x0032E818u) [[unlikely]] return; }
L_0032E818:
    set32(c.r[3], ld32((c.r[16].w[0] + 2032u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032EAB8; } }
L_0032E828:
    set32(c.r[5], ld32((c.r[16].w[0] + 6076u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EB68; } }
L_0032E838:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E848u); st8((c.r[16].w[0] + 5684u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032E848u) [[unlikely]] return; }
L_0032E848:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5696u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E858u); st8((c.r[16].w[0] + 5748u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032E858u) [[unlikely]] return; }
L_0032E858:
    set32(c.r[4], c.r[16].w[0] + 5760u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E864u); st8((c.r[16].w[0] + 5812u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032E864u) [[unlikely]] return; }
L_0032E864:
    set32(c.r[4], c.r[16].w[0] + 5824u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E870u); st8((c.r[16].w[0] + 5876u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032E870u) [[unlikely]] return; }
L_0032E870:
    set32(c.r[4], c.r[16].w[0] + 5888u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E87Cu); st8((c.r[16].w[0] + 5940u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032E87Cu) [[unlikely]] return; }
L_0032E87C:
    set32(c.r[4], c.r[16].w[0] + 5952u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E888u); st8((c.r[16].w[0] + 6004u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032E888u) [[unlikely]] return; }
L_0032E888:
    st8((c.r[16].w[0] + 6016u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 6044u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EB84; } }
L_0032E89C:
    set32(c.r[5], ld32((c.r[16].w[0] + 6048u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EBA0; } }
L_0032E8AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 6064u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EBBC; } }
L_0032E8BC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5632u);
    st8((c.r[16].w[0] + 6092u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 6096u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E8D4u); st8((c.r[16].w[0] + 5684u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032E8D4u) [[unlikely]] return; }
L_0032E8D4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5696u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E8E4u); st8((c.r[16].w[0] + 5748u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032E8E4u) [[unlikely]] return; }
L_0032E8E4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5760u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E8F4u); st8((c.r[16].w[0] + 5812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032E8F4u) [[unlikely]] return; }
L_0032E8F4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E904u); st8((c.r[16].w[0] + 5876u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032E904u) [[unlikely]] return; }
L_0032E904:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5888u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E914u); st8((c.r[16].w[0] + 5940u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032E914u) [[unlikely]] return; }
L_0032E914:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5952u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E924u); st8((c.r[16].w[0] + 6004u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032E924u) [[unlikely]] return; }
L_0032E924:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 6016u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 6017u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6060u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032E940u); st8((c.r[16].w[0] + 6061u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004B(c, 4u, depth + 1u); else { c.pc = 0x0032C060u; return; } if (c.pc != 0x0032E940u) [[unlikely]] return; }
L_0032E940:
    set32(c.r[5], ld32((c.r[16].w[0] + 5636u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032EBD8; } }
L_0032E950:
    st32((c.r[16].w[0] + 5632u), 0u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 5700u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032EBF4; } }
L_0032E964:
    st32((c.r[16].w[0] + 5696u), 0u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 5764u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032EC10; } }
L_0032E978:
    st32((c.r[16].w[0] + 5760u), 0u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 5828u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032EC2C; } }
L_0032E98C:
    st32((c.r[16].w[0] + 5824u), 0u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 5892u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032EC48; } }
L_0032E9A0:
    st32((c.r[16].w[0] + 5888u), 0u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 5956u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032EC64; } }
L_0032E9B4:
    st32((c.r[16].w[0] + 5952u), 0u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 6017u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 6044u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032EC80; } }
L_0032E9CC:
    set32(c.r[5], ld32((c.r[16].w[0] + 6048u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032EC9C; } }
L_0032E9DC:
    set32(c.r[5], ld32((c.r[16].w[0] + 6064u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032ECB8; } }
L_0032E9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0032ECD4; } }
L_0032E9F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EA04u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EA04u) [[unlikely]] return; }
L_0032EA04:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4200u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E7B0u | kUnwind; return; } goto L_0032E7B0; } }
L_0032EA10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EA20u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EA20u) [[unlikely]] return; }
L_0032EA20:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2520u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E7C0u | kUnwind; return; } goto L_0032E7C0; } }
L_0032EA2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EA3Cu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EA3Cu) [[unlikely]] return; }
L_0032EA3C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2856u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E7D0u | kUnwind; return; } goto L_0032E7D0; } }
L_0032EA48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EA58u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EA58u) [[unlikely]] return; }
L_0032EA58:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 3192u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E7E0u | kUnwind; return; } goto L_0032E7E0; } }
L_0032EA64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EA74u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EA74u) [[unlikely]] return; }
L_0032EA74:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 3528u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E7F0u | kUnwind; return; } goto L_0032E7F0; } }
L_0032EA80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EA90u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EA90u) [[unlikely]] return; }
L_0032EA90:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 3864u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E800u | kUnwind; return; } goto L_0032E800; } }
L_0032EA9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EAACu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EAACu) [[unlikely]] return; }
L_0032EAAC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4200u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E810u | kUnwind; return; } goto L_0032E810; } }
L_0032EAB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8884u)));
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 62u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8886u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], 0u + 128u);
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] - 50u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 32032u)));
    set32(c.r[2], c.r[5].w[0] + 35u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 32028u)));
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 2032u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EB2Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EB2Cu) [[unlikely]] return; }
L_0032EB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] - 1288u);
    c.f[13] = 0u;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], c.r[29].w[0] + 60u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EB60u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0032EB60u) [[unlikely]] return; }
L_0032EB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2032u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E828u | kUnwind; return; } goto L_0032E828; } }
L_0032EB68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EB78u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EB78u) [[unlikely]] return; }
L_0032EB78:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6076u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E838u | kUnwind; return; } goto L_0032E838; } }
L_0032EB84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EB94u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EB94u) [[unlikely]] return; }
L_0032EB94:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6044u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E89Cu | kUnwind; return; } goto L_0032E89C; } }
L_0032EBA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EBB0u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EBB0u) [[unlikely]] return; }
L_0032EBB0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6048u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E8ACu | kUnwind; return; } goto L_0032E8AC; } }
L_0032EBBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EBCCu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EBCCu) [[unlikely]] return; }
L_0032EBCC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6064u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E8BCu | kUnwind; return; } goto L_0032E8BC; } }
L_0032EBD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EBE8u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EBE8u) [[unlikely]] return; }
L_0032EBE8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5636u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E950u | kUnwind; return; } goto L_0032E950; } }
L_0032EBF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EC04u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EC04u) [[unlikely]] return; }
L_0032EC04:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5700u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E964u | kUnwind; return; } goto L_0032E964; } }
L_0032EC10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EC20u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EC20u) [[unlikely]] return; }
L_0032EC20:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5764u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E978u | kUnwind; return; } goto L_0032E978; } }
L_0032EC2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EC3Cu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EC3Cu) [[unlikely]] return; }
L_0032EC3C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5828u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E98Cu | kUnwind; return; } goto L_0032E98C; } }
L_0032EC48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EC58u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EC58u) [[unlikely]] return; }
L_0032EC58:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5892u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E9A0u | kUnwind; return; } goto L_0032E9A0; } }
L_0032EC64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EC74u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EC74u) [[unlikely]] return; }
L_0032EC74:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 5956u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E9B4u | kUnwind; return; } goto L_0032E9B4; } }
L_0032EC80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EC90u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EC90u) [[unlikely]] return; }
L_0032EC90:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6044u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E9CCu | kUnwind; return; } goto L_0032E9CC; } }
L_0032EC9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ECACu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032ECACu) [[unlikely]] return; }
L_0032ECAC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6048u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E9DCu | kUnwind; return; } goto L_0032E9DC; } }
L_0032ECB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032ECC8u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032ECC8u) [[unlikely]] return; }
L_0032ECC8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6064u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032E9ECu | kUnwind; return; } goto L_0032E9EC; } }
L_0032ECD4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032ECE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[9], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 6092u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 4229u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4228u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3940u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], ld32((c.r[4].w[0] + 3876u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 3872u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 13;
L_0032ED14:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_0032ED28; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 3;
L_0032ED28:
    c.r[4].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[8].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032ED14u | kUnwind; return; } goto L_0032ED14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 3880u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 3884u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4200u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0032EF1C; } }
L_0032ED80:
    set32(c.r[5], ld32((c.r[16].w[0] + 2520u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EF38; } }
L_0032ED90:
    set32(c.r[5], ld32((c.r[16].w[0] + 2856u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EF54; } }
L_0032EDA0:
    set32(c.r[5], ld32((c.r[16].w[0] + 3192u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EF70; } }
L_0032EDB0:
    set32(c.r[5], ld32((c.r[16].w[0] + 3528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EF8C; } }
L_0032EDC0:
    set32(c.r[5], ld32((c.r[16].w[0] + 3864u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EFA8; } }
L_0032EDD0:
    set32(c.r[5], ld32((c.r[16].w[0] + 4200u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032EFC4; } }
L_0032EDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EDE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 18u, depth + 1u); else { c.pc = 0x0032C480u; return; } if (c.pc != 0x0032EDE8u) [[unlikely]] return; }
L_0032EDE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 2032u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032EFE0; } }
L_0032EDF8:
    set32(c.r[5], ld32((c.r[16].w[0] + 6076u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F090; } }
L_0032EE08:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EE18u); st8((c.r[16].w[0] + 5684u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032EE18u) [[unlikely]] return; }
L_0032EE18:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5696u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EE28u); st8((c.r[16].w[0] + 5748u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032EE28u) [[unlikely]] return; }
L_0032EE28:
    set32(c.r[4], c.r[16].w[0] + 5760u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EE34u); st8((c.r[16].w[0] + 5812u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032EE34u) [[unlikely]] return; }
L_0032EE34:
    set32(c.r[4], c.r[16].w[0] + 5824u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EE40u); st8((c.r[16].w[0] + 5876u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032EE40u) [[unlikely]] return; }
L_0032EE40:
    set32(c.r[4], c.r[16].w[0] + 5888u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EE4Cu); st8((c.r[16].w[0] + 5940u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032EE4Cu) [[unlikely]] return; }
L_0032EE4C:
    set32(c.r[4], c.r[16].w[0] + 5952u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EE58u); st8((c.r[16].w[0] + 6004u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032EE58u) [[unlikely]] return; }
L_0032EE58:
    st8((c.r[16].w[0] + 6016u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 6044u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F0AC; } }
L_0032EE6C:
    set32(c.r[5], ld32((c.r[16].w[0] + 6048u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F0C8; } }
L_0032EE7C:
    set32(c.r[5], ld32((c.r[16].w[0] + 6064u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F0E4; } }
L_0032EE8C:
    set32(c.r[4], c.r[16].w[0] + 5632u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EE98u); st8((c.r[16].w[0] + 5684u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032EE98u) [[unlikely]] return; }
L_0032EE98:
    set32(c.r[4], c.r[16].w[0] + 5696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EEA4u); st8((c.r[16].w[0] + 5748u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032EEA4u) [[unlikely]] return; }
L_0032EEA4:
    set32(c.r[4], c.r[16].w[0] + 5760u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EEB0u); st8((c.r[16].w[0] + 5812u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032EEB0u) [[unlikely]] return; }
L_0032EEB0:
    set32(c.r[4], c.r[16].w[0] + 5824u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EEBCu); st8((c.r[16].w[0] + 5876u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032EEBCu) [[unlikely]] return; }
L_0032EEBC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5888u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EECCu); st8((c.r[16].w[0] + 5940u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032EECCu) [[unlikely]] return; }
L_0032EECC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5952u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EEDCu); st8((c.r[16].w[0] + 6004u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032EEDCu) [[unlikely]] return; }
L_0032EEDC:
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0] + 6017u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 6044u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032F100; } }
L_0032EEF4:
    set32(c.r[5], ld32((c.r[16].w[0] + 6048u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032F11C; } }
L_0032EF04:
    set32(c.r[5], ld32((c.r[16].w[0] + 6064u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032F138; } }
L_0032EF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0032F154; } }
L_0032EF1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EF2Cu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EF2Cu) [[unlikely]] return; }
L_0032EF2C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4200u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032ED80u | kUnwind; return; } goto L_0032ED80; } }
L_0032EF38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EF48u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EF48u) [[unlikely]] return; }
L_0032EF48:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2520u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032ED90u | kUnwind; return; } goto L_0032ED90; } }
L_0032EF54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EF64u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EF64u) [[unlikely]] return; }
L_0032EF64:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2856u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EDA0u | kUnwind; return; } goto L_0032EDA0; } }
L_0032EF70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EF80u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EF80u) [[unlikely]] return; }
L_0032EF80:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 3192u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EDB0u | kUnwind; return; } goto L_0032EDB0; } }
L_0032EF8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EF9Cu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EF9Cu) [[unlikely]] return; }
L_0032EF9C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 3528u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EDC0u | kUnwind; return; } goto L_0032EDC0; } }
L_0032EFA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EFB8u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EFB8u) [[unlikely]] return; }
L_0032EFB8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 3864u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EDD0u | kUnwind; return; } goto L_0032EDD0; } }
L_0032EFC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032EFD4u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032EFD4u) [[unlikely]] return; }
L_0032EFD4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4200u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EDE0u | kUnwind; return; } goto L_0032EDE0; } }
L_0032EFE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8884u)));
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 62u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8886u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], 0u + 128u);
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] - 50u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 32032u)));
    set32(c.r[2], c.r[5].w[0] + 35u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 32028u)));
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 2032u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F054u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F054u) [[unlikely]] return; }
L_0032F054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] - 1288u);
    c.f[13] = 0u;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], c.r[29].w[0] + 60u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F088u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0032F088u) [[unlikely]] return; }
L_0032F088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2032u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EDF8u | kUnwind; return; } goto L_0032EDF8; } }
L_0032F090:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F0A0u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F0A0u) [[unlikely]] return; }
L_0032F0A0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6076u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EE08u | kUnwind; return; } goto L_0032EE08; } }
L_0032F0AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F0BCu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F0BCu) [[unlikely]] return; }
L_0032F0BC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6044u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EE6Cu | kUnwind; return; } goto L_0032EE6C; } }
L_0032F0C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F0D8u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F0D8u) [[unlikely]] return; }
L_0032F0D8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6048u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EE7Cu | kUnwind; return; } goto L_0032EE7C; } }
L_0032F0E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F0F4u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F0F4u) [[unlikely]] return; }
L_0032F0F4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6064u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EE8Cu | kUnwind; return; } goto L_0032EE8C; } }
L_0032F100:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F110u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F110u) [[unlikely]] return; }
L_0032F110:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6044u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EEF4u | kUnwind; return; } goto L_0032EEF4; } }
L_0032F11C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F12Cu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F12Cu) [[unlikely]] return; }
L_0032F12C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6048u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EF04u | kUnwind; return; } goto L_0032EF04; } }
L_0032F138:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F148u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F148u) [[unlikely]] return; }
L_0032F148:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6064u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032EF14u | kUnwind; return; } goto L_0032EF14; } }
L_0032F154:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032F160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 6092u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 6096u), 0u);
    st8((c.r[4].w[0] + 5684u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F188u); set32(c.r[4], c.r[16].w[0] + 5632u);  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032F188u) [[unlikely]] return; }
L_0032F188:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5696u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F198u); st8((c.r[16].w[0] + 5748u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032F198u) [[unlikely]] return; }
L_0032F198:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5760u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F1A8u); st8((c.r[16].w[0] + 5812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032F1A8u) [[unlikely]] return; }
L_0032F1A8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F1B8u); st8((c.r[16].w[0] + 5876u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032F1B8u) [[unlikely]] return; }
L_0032F1B8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5888u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F1C8u); st8((c.r[16].w[0] + 5940u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032F1C8u) [[unlikely]] return; }
L_0032F1C8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5952u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F1D8u); st8((c.r[16].w[0] + 6004u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032F1D8u) [[unlikely]] return; }
L_0032F1D8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 6016u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6017u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6060u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 6061u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0032F200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[9], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 6092u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 4229u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 4228u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3940u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], ld32((c.r[4].w[0] + 3876u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 3872u)));
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], 0u + 16u);
    c.budget -= 13;
L_0032F234:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_0032F248; } }
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 3;
L_0032F248:
    c.r[4].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[8].w[0] << 4);
    set32(c.r[9], c.r[9].w[0] - 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[9].d[0] != 0ull; st32((c.r[2].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F234u | kUnwind; return; } goto L_0032F234; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 3880u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 3884u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 4200u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0032F3B4; } }
L_0032F2A0:
    set32(c.r[5], ld32((c.r[16].w[0] + 2520u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F3D0; } }
L_0032F2B0:
    set32(c.r[5], ld32((c.r[16].w[0] + 2856u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F3EC; } }
L_0032F2C0:
    set32(c.r[5], ld32((c.r[16].w[0] + 3192u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F408; } }
L_0032F2D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 3528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F424; } }
L_0032F2E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 3864u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F440; } }
L_0032F2F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 4200u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F45C; } }
L_0032F300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F308u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 18u, depth + 1u); else { c.pc = 0x0032C480u; return; } if (c.pc != 0x0032F308u) [[unlikely]] return; }
L_0032F308:
    set32(c.r[3], ld32((c.r[16].w[0] + 2032u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0032F478; } }
L_0032F318:
    set32(c.r[5], ld32((c.r[16].w[0] + 6076u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F528; } }
L_0032F328:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F338u); st8((c.r[16].w[0] + 5684u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032F338u) [[unlikely]] return; }
L_0032F338:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 5696u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F348u); st8((c.r[16].w[0] + 5748u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032F348u) [[unlikely]] return; }
L_0032F348:
    set32(c.r[4], c.r[16].w[0] + 5760u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F354u); st8((c.r[16].w[0] + 5812u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032F354u) [[unlikely]] return; }
L_0032F354:
    set32(c.r[4], c.r[16].w[0] + 5824u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F360u); st8((c.r[16].w[0] + 5876u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032F360u) [[unlikely]] return; }
L_0032F360:
    set32(c.r[4], c.r[16].w[0] + 5888u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F36Cu); st8((c.r[16].w[0] + 5940u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032F36Cu) [[unlikely]] return; }
L_0032F36C:
    set32(c.r[4], c.r[16].w[0] + 5952u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F378u); st8((c.r[16].w[0] + 6004u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0047(c, 126u, depth + 1u); else { c.pc = 0x0031D600u; return; } if (c.pc != 0x0032F378u) [[unlikely]] return; }
L_0032F378:
    st8((c.r[16].w[0] + 6016u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 6044u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032F544; } }
L_0032F38C:
    set32(c.r[5], ld32((c.r[16].w[0] + 6048u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032F560; } }
L_0032F39C:
    set32(c.r[5], ld32((c.r[16].w[0] + 6064u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0032F57C; } }
L_0032F3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0032F598; } }
L_0032F3B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F3C4u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F3C4u) [[unlikely]] return; }
L_0032F3C4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4200u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F2A0u | kUnwind; return; } goto L_0032F2A0; } }
L_0032F3D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F3E0u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F3E0u) [[unlikely]] return; }
L_0032F3E0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2520u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F2B0u | kUnwind; return; } goto L_0032F2B0; } }
L_0032F3EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F3FCu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F3FCu) [[unlikely]] return; }
L_0032F3FC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2856u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F2C0u | kUnwind; return; } goto L_0032F2C0; } }
L_0032F408:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F418u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F418u) [[unlikely]] return; }
L_0032F418:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 3192u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F2D0u | kUnwind; return; } goto L_0032F2D0; } }
L_0032F424:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F434u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F434u) [[unlikely]] return; }
L_0032F434:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 3528u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F2E0u | kUnwind; return; } goto L_0032F2E0; } }
L_0032F440:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F450u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F450u) [[unlikely]] return; }
L_0032F450:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 3864u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F2F0u | kUnwind; return; } goto L_0032F2F0; } }
L_0032F45C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F46Cu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F46Cu) [[unlikely]] return; }
L_0032F46C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4200u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F300u | kUnwind; return; } goto L_0032F300; } }
L_0032F478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8884u)));
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 62u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8886u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], 0u + 128u);
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] - 50u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 32032u)));
    set32(c.r[2], c.r[5].w[0] + 35u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 32028u)));
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 2032u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F4ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F4ECu) [[unlikely]] return; }
L_0032F4EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[12] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] - 1288u);
    c.f[13] = 0u;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], c.r[29].w[0] + 60u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F520u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0032F520u) [[unlikely]] return; }
L_0032F520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2032u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F318u | kUnwind; return; } goto L_0032F318; } }
L_0032F528:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F538u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F538u) [[unlikely]] return; }
L_0032F538:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6076u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F328u | kUnwind; return; } goto L_0032F328; } }
L_0032F544:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F554u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F554u) [[unlikely]] return; }
L_0032F554:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6044u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F38Cu | kUnwind; return; } goto L_0032F38C; } }
L_0032F560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F570u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F570u) [[unlikely]] return; }
L_0032F570:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6048u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F39Cu | kUnwind; return; } goto L_0032F39C; } }
L_0032F57C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F58Cu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F58Cu) [[unlikely]] return; }
L_0032F58C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6064u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F3ACu | kUnwind; return; } goto L_0032F3AC; } }
L_0032F598:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0032F5B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 2040u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032F608; } }
L_0032F5D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 2036u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F5F0u); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 39u, depth + 1u); else { c.pc = 0x00304850u; return; } if (c.pc != 0x0032F5F0u) [[unlikely]] return; }
L_0032F5F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 2040u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F5D4u | kUnwind; return; } goto L_0032F5D4; } }
    c.budget -= 1;
L_0032F608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F610u); set32(c.r[4], c.r[17].w[0] + 2036u);  if (depth < kMaxDepth) unit_0038(c, 306u, depth + 1u); else { c.pc = 0x002E19B0u; return; } if (c.pc != 0x0032F610u) [[unlikely]] return; }
L_0032F610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F618u); set32(c.r[4], c.r[17].w[0] + 2044u);  if (depth < kMaxDepth) unit_0031(c, 124u, depth + 1u); else { c.pc = 0x002C5090u; return; } if (c.pc != 0x0032F618u) [[unlikely]] return; }
L_0032F618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F620u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 4u, depth + 1u); else { c.pc = 0x0032C060u; return; } if (c.pc != 0x0032F620u) [[unlikely]] return; }
L_0032F620:
    set32(c.r[5], ld32((c.r[17].w[0] + 5636u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F714; } }
L_0032F630:
    st32((c.r[17].w[0] + 5632u), 0u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 5700u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F730; } }
L_0032F644:
    st32((c.r[17].w[0] + 5696u), 0u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 5764u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F74C; } }
L_0032F658:
    st32((c.r[17].w[0] + 5760u), 0u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 5828u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F768; } }
L_0032F66C:
    st32((c.r[17].w[0] + 5824u), 0u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 5892u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F784; } }
L_0032F680:
    st32((c.r[17].w[0] + 5888u), 0u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], ld32((c.r[17].w[0] + 5956u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F7A0; } }
L_0032F694:
    st32((c.r[17].w[0] + 5952u), 0u);
    set32(c.r[2], 0u - 1u);
    st8((c.r[17].w[0] + 6017u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[17].w[0] + 6044u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F7BC; } }
L_0032F6AC:
    set32(c.r[5], ld32((c.r[17].w[0] + 6048u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F7D8; } }
L_0032F6BC:
    set32(c.r[5], ld32((c.r[17].w[0] + 6064u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0032F7F4; } }
L_0032F6CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 6088u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0032F810; } }
L_0032F6DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 6084u)));
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F6F8u); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 39u, depth + 1u); else { c.pc = 0x00304850u; return; } if (c.pc != 0x0032F6F8u) [[unlikely]] return; }
L_0032F6F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 6088u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F6DCu | kUnwind; return; } goto L_0032F6DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 6084u);  if (t) { goto L_0032F814; } }
L_0032F714:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F724u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F724u) [[unlikely]] return; }
L_0032F724:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5636u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F630u | kUnwind; return; } goto L_0032F630; } }
L_0032F730:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F740u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F740u) [[unlikely]] return; }
L_0032F740:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5700u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F644u | kUnwind; return; } goto L_0032F644; } }
L_0032F74C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F75Cu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F75Cu) [[unlikely]] return; }
L_0032F75C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5764u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F658u | kUnwind; return; } goto L_0032F658; } }
L_0032F768:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F778u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F778u) [[unlikely]] return; }
L_0032F778:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5828u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F66Cu | kUnwind; return; } goto L_0032F66C; } }
L_0032F784:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F794u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F794u) [[unlikely]] return; }
L_0032F794:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5892u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F680u | kUnwind; return; } goto L_0032F680; } }
L_0032F7A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7B0u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F7B0u) [[unlikely]] return; }
L_0032F7B0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 5956u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F694u | kUnwind; return; } goto L_0032F694; } }
L_0032F7BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7CCu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F7CCu) [[unlikely]] return; }
L_0032F7CC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 6044u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F6ACu | kUnwind; return; } goto L_0032F6AC; } }
L_0032F7D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F7E8u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F7E8u) [[unlikely]] return; }
L_0032F7E8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 6048u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F6BCu | kUnwind; return; } goto L_0032F6BC; } }
L_0032F7F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F804u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x0032F804u) [[unlikely]] return; }
L_0032F804:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 6064u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F6CCu | kUnwind; return; } goto L_0032F6CC; } }
L_0032F810:
    set32(c.r[4], c.r[17].w[0] + 6084u);
    c.budget -= 1;
L_0032F814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F81Cu);  if (depth < kMaxDepth) unit_0038(c, 306u, depth + 1u); else { c.pc = 0x002E19B0u; return; } if (c.pc != 0x0032F81Cu) [[unlikely]] return; }
L_0032F81C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0032F830:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[18].w[0] + 6084u);
    st8((c.r[4].w[0] + 6092u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 6096u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F870u); set32(c.r[4], c.r[18].w[0] + 244u);  if (depth < kMaxDepth) unit_004A(c, 62u, depth + 1u); else { c.pc = 0x0032B870u; return; } if (c.pc != 0x0032F870u) [[unlikely]] return; }
L_0032F870:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032F8A0; } }
L_0032F880:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F880u | kUnwind; return; } goto L_0032F880; } }
    c.budget -= 1;
L_0032F8A0:
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[18].w[0] + 272u);
    set32(c.r[5], c.r[18].w[0] + 6084u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F8B4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 61u, depth + 1u); else { c.pc = 0x0032B6D0u; return; } if (c.pc != 0x0032F8B4u) [[unlikely]] return; }
L_0032F8B4:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032F8E0; } }
L_0032F8C4:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F8C4u | kUnwind; return; } goto L_0032F8C4; } }
L_0032F8E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[18].w[0] + 368u);
    set32(c.r[5], c.r[18].w[0] + 6084u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 82u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F904u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004A(c, 52u, depth + 1u); else { c.pc = 0x0032B140u; return; } if (c.pc != 0x0032F904u) [[unlikely]] return; }
L_0032F904:
    set32(c.r[16], c.r[16].w[0] + 6u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032F930; } }
L_0032F914:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F914u | kUnwind; return; } goto L_0032F914; } }
L_0032F930:
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[18].w[0] + 528u);
    set32(c.r[5], c.r[18].w[0] + 6084u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032F944u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 106u, depth + 1u); else { c.pc = 0x00323710u; return; } if (c.pc != 0x0032F944u) [[unlikely]] return; }
L_0032F944:
    set32(c.r[16], c.r[16].w[0] + 84u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032F970; } }
L_0032F954:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032F954u | kUnwind; return; } goto L_0032F954; } }
L_0032F970:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[8], c.r[2].w[0] << 3);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 6084u)));
    set32(c.r[7], c.r[7].w[0] - 2036u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 2u));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[11], 0u + 128u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 3u));
    set32(c.r[10], 0u + 16u);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[18].w[0] + 2008u), c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    st32((c.r[18].w[0] + 2012u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 2016u), c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 2020u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 2012u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 2008u)));
    set32(c.r[12], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[12].w[0] >> 4);
    set32(c.r[9], c.r[8].w[0] << 4);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[9], c.r[12].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[13], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[9].w[0] << 2);
    c.r[12].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[13], c.r[13].w[0] + 260u);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[12], c.r[13].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] + c.r[2].w[0]);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[12].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[12].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[12].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.r[3].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 52;
    { const bool t = c.r[9].d[0] != c.r[10].d[0]; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_0032FA48; } }
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0032FA48:
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.r[5].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[9], c.r[9].w[0] << 2);
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[3], 0u + 128u);
    c.r[10].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[11].d[0] = ld8((c.r[7].w[0] + 2u));
    c.r[12].d[0] = ld8((c.r[7].w[0] + 3u));
    set32(c.r[6], c.r[6].w[0] + 260u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[5], ld32((c.r[8].w[0])));
    c.r[4].d[0] = ld16((c.r[8].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 29;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0032FAD8; } }
L_0032FABC:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FABCu | kUnwind; return; } goto L_0032FABC; } }
L_0032FAD8:
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[18].w[0] + 2060u);
    set32(c.r[5], c.r[18].w[0] + 6084u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FAECu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0048(c, 4u, depth + 1u); else { c.pc = 0x003200B0u; return; } if (c.pc != 0x0032FAECu) [[unlikely]] return; }
L_0032FAEC:
    set32(c.r[16], c.r[16].w[0] + 42u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032FB18; } }
L_0032FAFC:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FAFCu | kUnwind; return; } goto L_0032FAFC; } }
L_0032FB18:
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 6084u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FB2Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 110u, depth + 1u); else { c.pc = 0x0032E470u; return; } if (c.pc != 0x0032FB2Cu) [[unlikely]] return; }
L_0032FB2C:
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032FB58; } }
L_0032FB3C:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FB3Cu | kUnwind; return; } goto L_0032FB3C; } }
L_0032FB58:
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[18].w[0] + 472u);
    set32(c.r[5], c.r[18].w[0] + 6084u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FB6Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 161u, depth + 1u); else { c.pc = 0x00327EB0u; return; } if (c.pc != 0x0032FB6Cu) [[unlikely]] return; }
L_0032FB6C:
    set32(c.r[16], c.r[16].w[0] + 9u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032FB98; } }
L_0032FB7C:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FB7Cu | kUnwind; return; } goto L_0032FB7C; } }
L_0032FB98:
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[18].w[0] + 208u);
    set32(c.r[5], c.r[18].w[0] + 6084u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FBACu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00326710u; return; } if (c.pc != 0x0032FBACu) [[unlikely]] return; }
L_0032FBAC:
    set32(c.r[16], c.r[16].w[0] + 7u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032FBD8; } }
L_0032FBBC:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FBBCu | kUnwind; return; } goto L_0032FBBC; } }
L_0032FBD8:
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 6068u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FBECu); set32(c.r[5], c.r[18].w[0] + 6084u);  if (depth < kMaxDepth) unit_0049(c, 112u, depth + 1u); else { c.pc = 0x00325570u; return; } if (c.pc != 0x0032FBECu) [[unlikely]] return; }
L_0032FBEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[17].d[0] = ld8((c.r[28].w[0] - 32132u));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8864u)));
    set32(c.r[8], c.r[29].w[0] + 78u);
    set32(c.r[4], c.r[18].w[0] + 412u);
    set32(c.r[5], c.r[18].w[0] + 6084u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8866u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[3], c.r[3].w[0] + 95u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 45u);
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FC48u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 31u, depth + 1u); else { c.pc = 0x00329450u; return; } if (c.pc != 0x0032FC48u) [[unlikely]] return; }
L_0032FC48:
    set32(c.r[16], c.r[16].w[0] + 6u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032FC78; } }
L_0032FC58:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FC58u | kUnwind; return; } goto L_0032FC58; } }
    c.budget -= 1;
L_0032FC78:
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[18].w[0] + 2060u);
    set32(c.r[5], c.r[18].w[0] + 6084u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FC8Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 327u, depth + 1u); else { c.pc = 0x0031FC20u; return; } if (c.pc != 0x0032FC8Cu) [[unlikely]] return; }
L_0032FC8C:
    set32(c.r[16], c.r[16].w[0] + 13u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032FCB8; } }
L_0032FC9C:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FC9Cu | kUnwind; return; } goto L_0032FC9C; } }
L_0032FCB8:
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 6084u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FCCCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 105u, depth + 1u); else { c.pc = 0x0032E350u; return; } if (c.pc != 0x0032FCCCu) [[unlikely]] return; }
L_0032FCCC:
    set32(c.r[16], c.r[16].w[0] + 26u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032FCF8; } }
L_0032FCDC:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FCDCu | kUnwind; return; } goto L_0032FCDC; } }
L_0032FCF8:
    st32((c.r[18].w[0] + 484u), c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 6084u)));
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[8], c.r[2].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x47800000u);
    set32(c.r[2], 0u + 128u);
    set32(c.r[4], c.r[18].w[0] + 2128u);
    set32(c.r[5], c.r[18].w[0] + 6084u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    st32((c.r[18].w[0] + 480u), c.r[6].w[0]);
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 490u)));
    set32(c.r[8], ld32((c.r[18].w[0] + 484u)));
    set32(c.r[9], ld32((c.r[18].w[0] + 480u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 488u)));
    c.f[0] = c.r[10].w[0];
    set32(c.r[8], c.r[8].w[0] << 4);
    c.r[10].d[0] = ld16((c.r[9].w[0] + 6u));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = c.r[6].w[0];
    set32(c.r[9], ld32((c.r[9].w[0])));
    set32(c.r[10], c.r[10].w[0] << 4);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    st32((c.r[8].w[0]), c.f[0]);
    st32((c.r[8].w[0] + 4u), c.f[1]);
    st32((c.r[8].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 484u)));
    set32(c.r[8], ld32((c.r[6].w[0])));
    c.r[6].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[8], c.r[8].w[0] + 396u);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[18].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 484u)));
    set32(c.r[8], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[8], c.r[8].w[0] + 328u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 32132u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 32128u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 56;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FDD8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 27u, depth + 1u); else { c.pc = 0x003291C0u; return; } if (c.pc != 0x0032FDD8u) [[unlikely]] return; }
L_0032FDD8:
    set32(c.r[16], c.r[16].w[0] + 6u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0032FE08; } }
L_0032FDE8:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FDE8u | kUnwind; return; } goto L_0032FDE8; } }
    c.budget -= 1;
L_0032FE08:
    c.r[6].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[18].w[0] + 412u);
    set32(c.r[5], c.r[18].w[0] + 6084u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FE1Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004A(c, 27u, depth + 1u); else { c.pc = 0x003291C0u; return; } if (c.pc != 0x0032FE1Cu) [[unlikely]] return; }
L_0032FE1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 216u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 26u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032FE34u); set32(c.r[4], c.r[18].w[0] + 412u);  if (depth < kMaxDepth) unit_004A(c, 22u, depth + 1u); else { c.pc = 0x00328F90u; return; } if (c.pc != 0x0032FE34u) [[unlikely]] return; }
L_0032FE34:
    set32(c.r[16], c.r[16].w[0] + 6u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0032FE60; } }
L_0032FE44:
    set32(c.r[16], c.r[16].w[0] - 16u);
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0032FE44u | kUnwind; return; } goto L_0032FE44; } }
L_0032FE60:
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[4], ld32((c.r[18].w[0] + 6084u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 2084u);
    set32(c.r[6], 0u + 128u);
    c.r[14].d[0] = ld8((c.r[3].w[0] + 3u));
    c.r[13].d[0] = ld8((c.r[3].w[0] + 2u));
    c.r[12].d[0] = ld8((c.r[3].w[0] + 1u));
    c.r[9].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[3], c.r[14].w[0] - c.r[12].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[13].w[0] - c.r[9].w[0]);
    set32(c.r[8], c.r[3].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[10].w[0] >> 4);
    set32(c.r[5], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[10].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[10].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[11], c.r[11].w[0] + 260u);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[10], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[10].w[0] + 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[10].w[0] + 2u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[10].w[0] + 3u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[18].w[0] + 88u), c.r[8].w[0]);
    st32((c.r[18].w[0] + 92u), c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0])));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[8], c.r[8].w[0] + 396u);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 328u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 61;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0032FF60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[28].w[0] - 32612u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = ld16((c.r[28].w[0] - 32616u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[11].d[0] = ld16((c.r[28].w[0] - 32632u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[12].d[0] = ld16((c.r[28].w[0] - 32624u));
    st16((c.r[2].w[0] + 8870u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[5].w[0] + 8866u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[11].w[0] - c.r[4].w[0]);
    st16((c.r[9].w[0] + 8872u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[10].w[0] + 8868u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[10], c.r[11].w[0] >> 1);
    st16((c.r[7].w[0] + 8876u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[5].w[0] + 8880u), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[11], c.r[12].w[0] - c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st16((c.r[6].w[0] + 8864u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[5].w[0] + 8886u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st16((c.r[6].w[0] + 8878u), static_cast<std::uint16_t>(c.r[11].w[0]));
    st16((c.r[3].w[0] + 8890u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.budget -= 40;
    [[clang::musttail]] return unit_004C(c, 1u, depth);
}

}

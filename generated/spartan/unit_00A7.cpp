#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00A7[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10,
    0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0,
    0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0,
    0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215,
    0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00A7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0049C000;
    case 2u: goto L_0049C010;
    case 3u: goto L_0049C020;
    case 4u: goto L_0049C034;
    case 5u: goto L_0049C088;
    case 6u: goto L_0049C0CC;
    case 7u: goto L_0049C0D4;
    case 8u: goto L_0049C0E4;
    case 9u: goto L_0049C0F4;
    case 10u: goto L_0049C0FC;
    case 11u: goto L_0049C104;
    case 12u: goto L_0049C10C;
    case 13u: goto L_0049C11C;
    case 14u: goto L_0049C140;
    case 15u: goto L_0049C1FC;
    case 16u: goto L_0049C208;
    case 17u: goto L_0049C238;
    case 18u: goto L_0049C25C;
    case 19u: goto L_0049C268;
    case 20u: goto L_0049C298;
    case 21u: goto L_0049C2BC;
    case 22u: goto L_0049C2C8;
    case 23u: goto L_0049C2F0;
    case 24u: goto L_0049C2FC;
    case 25u: goto L_0049C380;
    case 26u: goto L_0049C38C;
    case 27u: goto L_0049C398;
    case 28u: goto L_0049C410;
    case 29u: goto L_0049C45C;
    case 30u: goto L_0049C480;
    case 31u: goto L_0049C4BC;
    case 32u: goto L_0049C4F0;
    case 33u: goto L_0049C520;
    case 34u: goto L_0049C5A0;
    case 35u: goto L_0049C5F8;
    case 36u: goto L_0049C648;
    case 37u: goto L_0049C6FC;
    case 38u: goto L_0049C730;
    case 39u: goto L_0049C77C;
    case 40u: goto L_0049C7A0;
    case 41u: goto L_0049C7DC;
    case 42u: goto L_0049C810;
    case 43u: goto L_0049C840;
    case 44u: goto L_0049C8C0;
    case 45u: goto L_0049C918;
    case 46u: goto L_0049C968;
    case 47u: goto L_0049CA1C;
    case 48u: goto L_0049CA50;
    case 49u: goto L_0049CA88;
    case 50u: goto L_0049CACC;
    case 51u: goto L_0049CAEC;
    case 52u: goto L_0049CAF0;
    case 53u: goto L_0049CB28;
    case 54u: goto L_0049CB58;
    case 55u: goto L_0049CB78;
    case 56u: goto L_0049CB88;
    case 57u: goto L_0049CBA4;
    case 58u: goto L_0049CBCC;
    case 59u: goto L_0049CBF0;
    case 60u: goto L_0049CC38;
    case 61u: goto L_0049CC68;
    case 62u: goto L_0049CCAC;
    case 63u: goto L_0049CCDC;
    case 64u: goto L_0049CDEC;
    case 65u: goto L_0049CE1C;
    case 66u: goto L_0049CE64;
    case 67u: goto L_0049CEA0;
    case 68u: goto L_0049CEF4;
    case 69u: goto L_0049CF48;
    case 70u: goto L_0049CF84;
    case 71u: goto L_0049CFD8;
    case 72u: goto L_0049D090;
    case 73u: goto L_0049D110;
    case 74u: goto L_0049D134;
    case 75u: goto L_0049D170;
    case 76u: goto L_0049D1A4;
    case 77u: goto L_0049D1D4;
    case 78u: goto L_0049D230;
    case 79u: goto L_0049D248;
    case 80u: goto L_0049D2B0;
    case 81u: goto L_0049D2D4;
    case 82u: goto L_0049D2E0;
    case 83u: goto L_0049D330;
    case 84u: goto L_0049D33C;
    case 85u: goto L_0049D3D0;
    case 86u: goto L_0049D3F4;
    case 87u: goto L_0049D430;
    case 88u: goto L_0049D464;
    case 89u: goto L_0049D494;
    case 90u: goto L_0049D560;
    case 91u: goto L_0049D5E8;
    case 92u: goto L_0049D688;
    case 93u: goto L_0049D698;
    case 94u: goto L_0049D74C;
    case 95u: goto L_0049D770;
    case 96u: goto L_0049D8B0;
    case 97u: goto L_0049D8C0;
    case 98u: goto L_0049D8C8;
    case 99u: goto L_0049D8D8;
    case 100u: goto L_0049D8E0;
    case 101u: goto L_0049D8EC;
    case 102u: goto L_0049D8F4;
    case 103u: goto L_0049D904;
    case 104u: goto L_0049D950;
    case 105u: goto L_0049D974;
    case 106u: goto L_0049D980;
    case 107u: goto L_0049DA5C;
    case 108u: goto L_0049DA6C;
    case 109u: goto L_0049DA78;
    case 110u: goto L_0049DAA0;
    case 111u: goto L_0049DAD0;
    case 112u: goto L_0049DAF4;
    case 113u: goto L_0049DB00;
    case 114u: goto L_0049DB38;
    case 115u: goto L_0049DB68;
    case 116u: goto L_0049DBAC;
    case 117u: goto L_0049DBDC;
    case 118u: goto L_0049DC54;
    case 119u: goto L_0049DCDC;
    case 120u: goto L_0049DE30;
    case 121u: goto L_0049DE68;
    case 122u: goto L_0049DE70;
    case 123u: goto L_0049DE80;
    case 124u: goto L_0049DEA0;
    case 125u: goto L_0049E0BC;
    case 126u: goto L_0049E0E0;
    case 127u: goto L_0049E0EC;
    case 128u: goto L_0049E17C;
    case 129u: goto L_0049E188;
    case 130u: goto L_0049E1A0;
    case 131u: goto L_0049E1AC;
    case 132u: goto L_0049E1F0;
    case 133u: goto L_0049E324;
    case 134u: goto L_0049E598;
    case 135u: goto L_0049E5A4;
    case 136u: goto L_0049E5EC;
    case 137u: goto L_0049E5F8;
    case 138u: goto L_0049E648;
    case 139u: goto L_0049E664;
    case 140u: goto L_0049E6E8;
    case 141u: goto L_0049E878;
    case 142u: goto L_0049E884;
    case 143u: goto L_0049E8D8;
    case 144u: goto L_0049E910;
    case 145u: goto L_0049E948;
    case 146u: goto L_0049E960;
    case 147u: goto L_0049E96C;
    case 148u: goto L_0049E984;
    case 149u: goto L_0049E990;
    case 150u: goto L_0049E99C;
    case 151u: goto L_0049E9AC;
    case 152u: goto L_0049EA2C;
    case 153u: goto L_0049EA50;
    case 154u: goto L_0049EA88;
    case 155u: goto L_0049EA9C;
    case 156u: goto L_0049EAA8;
    case 157u: goto L_0049EABC;
    case 158u: goto L_0049EAC8;
    case 159u: goto L_0049EAD4;
    case 160u: goto L_0049EAE4;
    case 161u: goto L_0049EB60;
    case 162u: goto L_0049EB80;
    case 163u: goto L_0049EC2C;
    case 164u: goto L_0049EC4C;
    case 165u: goto L_0049ECA0;
    case 166u: goto L_0049ECB8;
    case 167u: goto L_0049ECE0;
    case 168u: goto L_0049EDCC;
    case 169u: goto L_0049EDD8;
    case 170u: goto L_0049EDDC;
    case 171u: goto L_0049EE20;
    case 172u: goto L_0049EE2C;
    case 173u: goto L_0049EF08;
    case 174u: goto L_0049EF14;
    case 175u: goto L_0049EF60;
    case 176u: goto L_0049EF9C;
    case 177u: goto L_0049EFA8;
    case 178u: goto L_0049EFC0;
    case 179u: goto L_0049EFC8;
    case 180u: goto L_0049EFFC;
    case 181u: goto L_0049F014;
    case 182u: goto L_0049F024;
    case 183u: goto L_0049F03C;
    case 184u: goto L_0049F04C;
    case 185u: goto L_0049F058;
    case 186u: goto L_0049F0A8;
    case 187u: goto L_0049F0E0;
    case 188u: goto L_0049F118;
    case 189u: goto L_0049F124;
    case 190u: goto L_0049F138;
    case 191u: goto L_0049F144;
    case 192u: goto L_0049F160;
    case 193u: goto L_0049F1B8;
    case 194u: goto L_0049F1D8;
    case 195u: goto L_0049F1E8;
    case 196u: goto L_0049F210;
    case 197u: goto L_0049F220;
    case 198u: goto L_0049F250;
    case 199u: goto L_0049F270;
    case 200u: goto L_0049F29C;
    case 201u: goto L_0049F2A8;
    case 202u: goto L_0049F2C0;
    case 203u: goto L_0049F2D4;
    case 204u: goto L_0049F2E4;
    case 205u: goto L_0049F2F8;
    case 206u: goto L_0049F304;
    case 207u: goto L_0049F310;
    case 208u: goto L_0049F338;
    case 209u: goto L_0049F360;
    case 210u: goto L_0049F390;
    case 211u: goto L_0049F3A8;
    case 212u: goto L_0049F3C0;
    case 213u: goto L_0049F3D0;
    case 214u: goto L_0049F3E8;
    case 215u: goto L_0049F3FC;
    case 216u: goto L_0049F40C;
    case 217u: goto L_0049F420;
    case 218u: goto L_0049F42C;
    case 219u: goto L_0049F438;
    case 220u: goto L_0049F460;
    case 221u: goto L_0049F490;
    case 222u: goto L_0049F6D0;
    case 223u: goto L_0049F774;
    case 224u: goto L_0049F8B0;
    case 225u: goto L_0049F94C;
    case 226u: goto L_0049F99C;
    case 227u: goto L_0049F9E8;
    case 228u: goto L_0049FA00;
    case 229u: goto L_0049FA4C;
    case 230u: goto L_0049FABC;
    case 231u: goto L_0049FAF0;
    case 232u: goto L_0049FB40;
    case 233u: goto L_0049FBA0;
    case 234u: goto L_0049FC10;
    case 235u: goto L_0049FC3C;
    case 236u: goto L_0049FC70;
    case 237u: goto L_0049FC9C;
    case 238u: goto L_0049FD1C;
    case 239u: goto L_0049FD50;
    case 240u: goto L_0049FD88;
    case 241u: goto L_0049FDBC;
    case 242u: goto L_0049FDF0;
    case 243u: goto L_0049FE00;
    case 244u: goto L_0049FE38;
    case 245u: goto L_0049FE48;
    case 246u: goto L_0049FE60;
    case 247u: goto L_0049FE90;
    case 248u: goto L_0049FF1C;
    case 249u: goto L_0049FF50;
    case 250u: goto L_0049FF88;
    case 251u: goto L_0049FF98;
    case 252u: goto L_0049FFC8;
    default: bad_entry(c, 0x0049C000u); return;
    }
L_0049C000:
    set32(c.r[3], 0u + 309u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049C10C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C010:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049C020; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0049C024; } }
L_0049C020:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049C024:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049C034; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0049C038; } }
L_0049C034:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049C038:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0049C070; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049C064; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[20] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_0049C074; } }
L_0049C064:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[20] = c.r[3].w[0];
    c.budget -= 3;
L_0049C070:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0049C074:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049C114; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 1;
L_0049C088:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[16].w[0] + 360u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[16].w[0] + 364u), c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 17;
L_0049C0CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0049C128; } }
L_0049C0D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 356u), 0u);  if (t) { goto L_0049C124; } }
L_0049C0E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 356u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C0CCu | kUnwind; return; } goto L_0049C0CC; } }
L_0049C0F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049BF6Cu | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 232u, depth); } }
L_0049C0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049BF9Cu | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 233u, depth); } }
L_0049C104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049BFE0u | kUnwind; return; } [[clang::musttail]] return unit_00A6(c, 234u, depth); } }
L_0049C10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C010u | kUnwind; return; } goto L_0049C010; } }
L_0049C114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C11Cu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0049C11Cu) [[unlikely]] return; }
L_0049C11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C088u | kUnwind; return; } goto L_0049C088; } }
L_0049C124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0049C128:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049C140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 36u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 40u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 44u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 380u)));
    c.r[4].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] - 286u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049C1D8; } }
    set32(c.r[3], c.r[4].w[0] - 292u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049C1C4; } }
    set32(c.r[3], c.r[4].w[0] - 288u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049C1C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0049C1C8; } }
L_0049C1C4:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049C1C8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049C1D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0049C1DC; } }
L_0049C1D8:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049C1DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049C304; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C3A0; } }
L_0049C1FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C208u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00A6(c, 217u, depth + 1u); else { c.pc = 0x0049B8C0u; return; } if (c.pc != 0x0049C208u) [[unlikely]] return; }
L_0049C208:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 296u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 380u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C3D4; } }
    set32(c.r[2], 0u + 297u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C3C4; } }
    set32(c.r[2], 0u + 299u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C3C4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C3D4; } }
    set32(c.r[2], 0u + 298u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C3CC; } }
    set32(c.r[2], 0u + 300u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C3CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C25C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C3D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C2D8; } }
    set32(c.r[2], 0u + 301u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C3EC; } }
    set32(c.r[2], 0u + 302u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C3DC; } }
    set32(c.r[2], 0u + 304u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C3DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C3EC; } }
    set32(c.r[2], 0u + 303u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C3E4; } }
    set32(c.r[2], 0u + 305u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C3E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C2BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C3EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C2C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C2D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049C2DC; } }
L_0049C2D8:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049C2DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049C2F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C2F0u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00A6(c, 213u, depth + 1u); else { c.pc = 0x0049B6F0u; return; } if (c.pc != 0x0049C2F0u) [[unlikely]] return; }
L_0049C2F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C2FCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x0049C2FCu) [[unlikely]] return; }
L_0049C2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049C398; } }
L_0049C304:
    c.r[4].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] - 292u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049C330; } }
    set32(c.r[3], c.r[4].w[0] - 288u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049C330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0049C334; } }
L_0049C330:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049C334:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0049C3F4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049C374; } }
    c.f[0] = ld32((c.r[3].w[0] + 480u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 484u));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 488u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 492u));
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 8;
L_0049C374:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C380u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00A6(c, 215u, depth + 1u); else { c.pc = 0x0049B7B0u; return; } if (c.pc != 0x0049C380u) [[unlikely]] return; }
L_0049C380:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C38Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00A6(c, 213u, depth + 1u); else { c.pc = 0x0049B6F0u; return; } if (c.pc != 0x0049C38Cu) [[unlikely]] return; }
L_0049C38C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C398u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x0049C398u) [[unlikely]] return; }
L_0049C398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0049C3F8; } }
L_0049C3A0:
    c.f[0] = ld32((c.r[3].w[0] + 480u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 484u));
    st32((c.r[7].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 488u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 492u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C1FCu | kUnwind; return; } goto L_0049C1FC; } }
L_0049C3C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C238u | kUnwind; return; } goto L_0049C238; } }
L_0049C3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C25Cu | kUnwind; return; } goto L_0049C25C; } }
L_0049C3D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C268u | kUnwind; return; } goto L_0049C268; } }
L_0049C3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C298u | kUnwind; return; } goto L_0049C298; } }
L_0049C3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C2BCu | kUnwind; return; } goto L_0049C2BC; } }
L_0049C3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C2C8u | kUnwind; return; } goto L_0049C2C8; } }
L_0049C3F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0049C3F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049C410:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 297u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 380u)));
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0049C6C4; } }
    set32(c.r[2], 0u + 299u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6C4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C45C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C490; } }
    set32(c.r[2], 0u + 302u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6CC; } }
    set32(c.r[2], 0u + 304u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C490; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049C494; } }
L_0049C490:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049C494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C544; } }
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], 0u + 320u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6D4; } }
    set32(c.r[2], 0u + 322u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C4BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C544; } }
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], 0u + 313u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6DC; } }
    set32(c.r[2], 0u + 317u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6DC; } }
    set32(c.r[2], 0u + 315u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C4F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C530; } }
    set32(c.r[2], 0u + 307u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6E4; } }
    set32(c.r[2], 0u + 311u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6E4; } }
    set32(c.r[2], 0u + 309u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049C534; } }
L_0049C530:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049C534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C544; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0049C548; } }
L_0049C544:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049C548:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0049C5A8; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 344u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 1224u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 1168u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], 0u + 303u);  if (t) { goto L_0049C590; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C58C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C58C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049C590; } }
L_0049C58C:
    set32(c.r[19], 0u + 305u);
    c.budget -= 1;
L_0049C590:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 97u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C5A0u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x0049C5A0u) [[unlikely]] return; }
L_0049C5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_0049C5FC; } }
L_0049C5A8:
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 344u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 1220u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 1164u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], 0u + 302u);  if (t) { goto L_0049C5E8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C5E4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C5E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049C5E8; } }
L_0049C5E4:
    set32(c.r[19], 0u + 304u);
    c.budget -= 1;
L_0049C5E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 97u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C5F8u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x0049C5F8u) [[unlikely]] return; }
L_0049C5F8:
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_0049C5FC:
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[18].w[0] + 24u));
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.f[2] = ld32((c.r[20].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[28].w[0] - 31132u));
    c.f[5] = ld32((c.r[6].w[0] + 340u));
    c.f[0] = ld32((c.r[2].w[0] + 84u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0049C6B8; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049C6EC; } }
L_0049C648:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0049C688; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], 0u + 289u);  if (t) { goto L_0049C6B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C67C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C67C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049C680; } }
L_0049C67C:
    set32(c.r[19], 0u + 291u);
    c.budget -= 1;
L_0049C680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0049C6BC; } }
L_0049C688:
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], 0u + 288u);  if (t) { goto L_0049C6B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6B4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C6B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049C6B8; } }
L_0049C6B4:
    set32(c.r[19], 0u + 290u);
    c.budget -= 1;
L_0049C6B8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0049C6BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0049C708; } }
L_0049C6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C45Cu | kUnwind; return; } goto L_0049C45C; } }
L_0049C6CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C480u | kUnwind; return; } goto L_0049C480; } }
L_0049C6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C4BCu | kUnwind; return; } goto L_0049C4BC; } }
L_0049C6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C4F0u | kUnwind; return; } goto L_0049C4F0; } }
L_0049C6E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C520u | kUnwind; return; } goto L_0049C520; } }
L_0049C6EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 98u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C6FCu); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x0049C6FCu) [[unlikely]] return; }
L_0049C6FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C648u | kUnwind; return; } goto L_0049C648; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0049C708:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0049C730:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 297u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 380u)));
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0049C9E4; } }
    set32(c.r[2], 0u + 299u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C9E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C77C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C7B0; } }
    set32(c.r[2], 0u + 302u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C9EC; } }
    set32(c.r[2], 0u + 304u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C9EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C7A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C7B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049C7B4; } }
L_0049C7B0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049C7B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C864; } }
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], 0u + 320u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C9F4; } }
    set32(c.r[2], 0u + 322u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C9F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C7DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C864; } }
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], 0u + 313u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C9FC; } }
    set32(c.r[2], 0u + 317u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C9FC; } }
    set32(c.r[2], 0u + 315u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C9FC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C850; } }
    set32(c.r[2], 0u + 307u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049CA04; } }
    set32(c.r[2], 0u + 311u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049CA04; } }
    set32(c.r[2], 0u + 309u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049CA04; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049C840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049C854; } }
L_0049C850:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049C854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049C864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0049C868; } }
L_0049C864:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049C868:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0049C8C8; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 344u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 1204u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 1184u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], 0u + 298u);  if (t) { goto L_0049C8B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C8AC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C8AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049C8B0; } }
L_0049C8AC:
    set32(c.r[19], 0u + 300u);
    c.budget -= 1;
L_0049C8B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 97u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C8C0u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x0049C8C0u) [[unlikely]] return; }
L_0049C8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 4u)));  if (t) { goto L_0049C91C; } }
L_0049C8C8:
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 344u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 1200u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 1180u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], 0u + 297u);  if (t) { goto L_0049C908; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C904; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049C908; } }
L_0049C904:
    set32(c.r[19], 0u + 299u);
    c.budget -= 1;
L_0049C908:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 97u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C918u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x0049C918u) [[unlikely]] return; }
L_0049C918:
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_0049C91C:
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[18].w[0] + 24u));
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.f[2] = ld32((c.r[20].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0] + 24u));
    c.f[1] = ld32((c.r[28].w[0] - 31132u));
    c.f[5] = ld32((c.r[6].w[0] + 340u));
    c.f[0] = ld32((c.r[2].w[0] + 100u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[5]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0049C9D8; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049CA0C; } }
L_0049C968:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0049C9A8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], 0u + 293u);  if (t) { goto L_0049C9D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C99C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C99C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049C9A0; } }
L_0049C99C:
    set32(c.r[19], 0u + 295u);
    c.budget -= 1;
L_0049C9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0049C9DC; } }
L_0049C9A8:
    set32(c.r[3], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[19], 0u + 292u);  if (t) { goto L_0049C9D8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C9D4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049C9D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049C9D8; } }
L_0049C9D4:
    set32(c.r[19], 0u + 294u);
    c.budget -= 1;
L_0049C9D8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0049C9DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0049CA28; } }
L_0049C9E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C77Cu | kUnwind; return; } goto L_0049C77C; } }
L_0049C9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C7A0u | kUnwind; return; } goto L_0049C7A0; } }
L_0049C9F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C7DCu | kUnwind; return; } goto L_0049C7DC; } }
L_0049C9FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C810u | kUnwind; return; } goto L_0049C810; } }
L_0049CA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C840u | kUnwind; return; } goto L_0049C840; } }
L_0049CA0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 98u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CA1Cu); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x0049CA1Cu) [[unlikely]] return; }
L_0049CA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049C968u | kUnwind; return; } goto L_0049C968; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0049CA28:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0049CA50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x37270000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], 0u + 388u);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = c.f[12];  if (t) { goto L_0049CB30; } }
L_0049CA88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB7270000u);
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0049CAF0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1396u)));
    c.r[2].d[0] = c.r[2].d[0] << 54;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049CAF0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0049CB94; } }
L_0049CACC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1200u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 388u);  if (t) { goto L_0049CAEC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CAECu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A7(c, 28u, depth + 1u); else { c.pc = 0x0049C410u; return; } if (c.pc != 0x0049CAECu) [[unlikely]] return; }
L_0049CAEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0049CAF0:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] - 292u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049CB1C; } }
    set32(c.r[2], c.r[3].w[0] - 288u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049CB1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049CB20; } }
L_0049CB1C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049CB20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049CBB0; } }
L_0049CB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0049CBD4; } }
L_0049CB30:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1396u)));
    c.r[2].d[0] = c.r[2].d[0] << 55;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CA88u | kUnwind; return; } goto L_0049CA88; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0049CB80; } }
L_0049CB58:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1200u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 388u);  if (t) { goto L_0049CB78; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CB78u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A7(c, 38u, depth + 1u); else { c.pc = 0x0049C730u; return; } if (c.pc != 0x0049CB78u) [[unlikely]] return; }
L_0049CB78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CAF0u | kUnwind; return; } goto L_0049CAF0; } }
L_0049CB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CB88u);  if (depth < kMaxDepth) unit_00A6(c, 195u, depth + 1u); else { c.pc = 0x0049AC50u; return; } if (c.pc != 0x0049CB88u) [[unlikely]] return; }
L_0049CB88:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CB58u | kUnwind; return; } goto L_0049CB58; } }
L_0049CB94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CBA4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A6(c, 195u, depth + 1u); else { c.pc = 0x0049AC50u; return; } if (c.pc != 0x0049CBA4u) [[unlikely]] return; }
L_0049CBA4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CACCu | kUnwind; return; } goto L_0049CACC; } }
L_0049CBB0:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CBCCu); c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00A6(c, 190u, depth + 1u); else { c.pc = 0x0049AAF0u; return; } if (c.pc != 0x0049CBCCu) [[unlikely]] return; }
L_0049CBCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CB28u | kUnwind; return; } goto L_0049CB28; } }
L_0049CBD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049CBF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.f[3] = ld32((c.r[29].w[0] + 12u));
    c.f[4] = ld32((c.r[29].w[0] + 28u));
    c.f[5] = ld32((c.r[29].w[0] + 44u));
    c.f[6] = ld32((c.r[29].w[0] + 60u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 380u)));
    set32(c.r[4], 0u + 312u);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 11;
    { const bool t = c.r[7].d[0] == c.r[4].d[0]; set32(c.r[8], c.r[2].w[0] + 380u);  if (t) { goto L_0049D000; } }
    set32(c.r[4], 0u + 316u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D000; } }
    set32(c.r[4], 0u + 314u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D000; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049CC38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049CC78; } }
    set32(c.r[4], 0u + 313u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D008; } }
    set32(c.r[4], 0u + 317u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D008; } }
    set32(c.r[4], 0u + 315u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D008; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049CC68:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049CC78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0049CC7C; } }
L_0049CC78:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049CC7C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049CD00; } }
    set32(c.r[4], 0u + 306u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D010; } }
    set32(c.r[4], 0u + 310u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D010; } }
    set32(c.r[4], 0u + 308u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D010; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049CCAC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049CCEC; } }
    set32(c.r[4], 0u + 307u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D018; } }
    set32(c.r[4], 0u + 311u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D018; } }
    set32(c.r[4], 0u + 309u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D018; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049CCDC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049CCEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0049CCF0; } }
L_0049CCEC:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049CCF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049CD00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0049CD04; } }
L_0049CD00:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049CD04:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049D020; } }
    c.r[4].d[0] = ld16((c.r[8].w[0]));
    set32(c.r[7], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[4].w[0] + 12u)));
    c.r[4].d[0] = ld8((c.r[8].w[0] + 51u));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] < 0; c.f[2] = ld32((c.r[2].w[0] + 360u));  if (t) { goto L_0049CD38; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0049CD54; } }
L_0049CD38:
    set32(c.r[7], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.f[0] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0049CD54:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = ld8((c.r[8].w[0] + 50u));
    c.r[7].d[0] = c.r[7].d[0] | 52429ull;
    c.f[0] = c.r[7].w[0];
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] < 0; c.f[7] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_0049CD78; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0049CD94; } }
L_0049CD78:
    set32(c.r[7], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.f[0] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0049CD94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0049D028; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0049D028; } }
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], 0u + 312u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D030; } }
    set32(c.r[4], 0u + 316u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D030; } }
    set32(c.r[4], 0u + 314u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D030; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049CDEC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049CE2C; } }
    set32(c.r[4], 0u + 313u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D038; } }
    set32(c.r[4], 0u + 317u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D038; } }
    set32(c.r[4], 0u + 315u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_0049D038; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049CE1C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049CE2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0049CE30; } }
L_0049CE2C:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049CE30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049CF1C; } }
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], 0u + 313u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049D040; } }
    set32(c.r[3], 0u + 317u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049D040; } }
    set32(c.r[3], 0u + 315u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049D040; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049CE64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0049CEC0; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049D048; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1581u));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049CE90; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 1;
L_0049CE90:
    set32(c.r[2], ld32((c.r[2].w[0] + 348u)));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0049CEA0:
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.f[6]);  if (t) { goto L_0049CF10; } }
L_0049CEC0:
    set32(c.r[4], ld32((c.r[2].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049D054; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1584u));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049CEE4; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 1;
L_0049CEE4:
    set32(c.r[2], ld32((c.r[2].w[0] + 348u)));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0049CEF4:
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[5]);
    c.budget -= 7;
L_0049CF10:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0049CFF8; } }
L_0049CF1C:
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], 0u + 307u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049D060; } }
    set32(c.r[3], 0u + 311u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049D060; } }
    set32(c.r[3], 0u + 309u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049D060; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049CF48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0049CFA4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049D068; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1575u));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049CF74; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 1;
L_0049CF74:
    set32(c.r[2], ld32((c.r[2].w[0] + 348u)));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0049CF84:
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.f[4]);  if (t) { goto L_0049CFF4; } }
L_0049CFA4:
    set32(c.r[4], ld32((c.r[2].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049D074; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1587u));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049CFC8; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 1;
L_0049CFC8:
    set32(c.r[2], ld32((c.r[2].w[0] + 348u)));
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0049CFD8:
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[3]);
    c.budget -= 7;
L_0049CFF4:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0049CFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0049D080; } }
L_0049D000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CC38u | kUnwind; return; } goto L_0049CC38; } }
L_0049D008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CC68u | kUnwind; return; } goto L_0049CC68; } }
L_0049D010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CCACu | kUnwind; return; } goto L_0049CCAC; } }
L_0049D018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CCDCu | kUnwind; return; } goto L_0049CCDC; } }
L_0049D020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049D080; } }
L_0049D028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049D080; } }
L_0049D030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CDECu | kUnwind; return; } goto L_0049CDEC; } }
L_0049D038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CE1Cu | kUnwind; return; } goto L_0049CE1C; } }
L_0049D040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CE64u | kUnwind; return; } goto L_0049CE64; } }
L_0049D048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 29296u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CEA0u | kUnwind; return; } goto L_0049CEA0; } }
L_0049D054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 29296u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CEF4u | kUnwind; return; } goto L_0049CEF4; } }
L_0049D060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CF48u | kUnwind; return; } goto L_0049CF48; } }
L_0049D068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 29296u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CF84u | kUnwind; return; } goto L_0049CF84; } }
L_0049D074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 29296u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CFD8u | kUnwind; return; } goto L_0049CFD8; } }
L_0049D080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049D090:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1200u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0049D6C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 319u);  if (t) { goto L_0049D0E8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0049D0E4; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0049D0E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0049D0EC; } }
L_0049D0E4:
    set32(c.r[16], 0u + 321u);
    c.budget -= 1;
L_0049D0E8:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0049D0EC:
    set32(c.r[4], 0u + 297u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 380u)));
    c.r[5].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D6A0; } }
    set32(c.r[4], 0u + 299u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D6A0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D110:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049D144; } }
    set32(c.r[4], 0u + 302u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D6A8; } }
    set32(c.r[4], 0u + 304u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D6A8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D134:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049D144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0049D148; } }
L_0049D144:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049D148:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049D1F8; } }
    c.r[5].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[4], 0u + 320u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D6B0; } }
    set32(c.r[4], 0u + 322u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D6B0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D170:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049D1F8; } }
    c.r[5].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[4], 0u + 313u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D6B8; } }
    set32(c.r[4], 0u + 317u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D6B8; } }
    set32(c.r[4], 0u + 315u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D6B8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D1A4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049D1E4; } }
    set32(c.r[4], 0u + 307u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D6C0; } }
    set32(c.r[4], 0u + 311u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D6C0; } }
    set32(c.r[4], 0u + 309u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D6C0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D1D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049D1E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0049D1E8; } }
L_0049D1E4:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049D1E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049D1F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0049D1FC; } }
L_0049D1F8:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049D1FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049D230; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u + 320u);  if (t) { goto L_0049D230; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0049D22C; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0049D22C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049D230; } }
L_0049D22C:
    set32(c.r[16], 0u + 322u);
    c.budget -= 1;
L_0049D230:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 380u));
    set32(c.r[2], c.r[2].w[0] - 286u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049D6D0; } }
L_0049D248:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[18], c.r[29].w[0] + 68u);
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    st32((c.r[29].w[0] + 76u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 380u));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049D344; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 318u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 380u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049D6F4; } }
    set32(c.r[2], 0u + 319u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049D6E4; } }
    set32(c.r[2], 0u + 321u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049D6E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D2B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049D6F4; } }
    set32(c.r[2], 0u + 320u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049D6EC; } }
    set32(c.r[2], 0u + 322u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049D6EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D2D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049D6F4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D2E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049D344; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 380u));
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[4].w[0] + 340u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[2]);
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 508u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0049D6FC; } }
L_0049D330:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D33Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x0049D33Cu) [[unlikely]] return; }
L_0049D33C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[18].w[0]));  if (t) { goto L_0049D348; } }
L_0049D344:
    c.f[12] = ld32((c.r[18].w[0]));
    c.budget -= 1;
L_0049D348:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 380u)));
    c.r[3].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] - 292u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049D37C; } }
    set32(c.r[2], c.r[3].w[0] - 288u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049D37C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049D380; } }
L_0049D37C:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049D380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049D704; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1396u)));
    c.r[5].d[0] = c.r[5].d[0] << 57;
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 388u);  if (t) { goto L_0049D744; } }
    c.r[6].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[5], c.r[6].w[0] - 286u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049D668; } }
    set32(c.r[2], 0u + 297u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0049D70C; } }
    set32(c.r[2], 0u + 299u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0049D70C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D3D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049D404; } }
    set32(c.r[2], 0u + 302u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0049D714; } }
    set32(c.r[2], 0u + 304u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0049D714; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D3F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049D404; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049D408; } }
L_0049D404:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049D408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049D4B8; } }
    c.r[5].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[2], 0u + 320u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0049D71C; } }
    set32(c.r[2], 0u + 322u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0049D71C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049D4B8; } }
    c.r[5].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[2], 0u + 313u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0049D724; } }
    set32(c.r[2], 0u + 317u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0049D724; } }
    set32(c.r[2], 0u + 315u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0049D724; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049D4A4; } }
    set32(c.r[2], 0u + 307u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0049D72C; } }
    set32(c.r[2], 0u + 311u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0049D72C; } }
    set32(c.r[2], 0u + 309u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0049D72C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049D4A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049D4A8; } }
L_0049D4A4:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049D4A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049D4B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0049D4BC; } }
L_0049D4B8:
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049D4BC:
    set32(c.r[7], ld32((c.r[4].w[0] + 1396u)));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[9], 0u + 1u);
    c.r[6].d[0] = c.r[7].d[0] << 59;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0049D508; } }
    c.r[6].d[0] = c.r[7].d[0] << 60;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049D508; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0049D508; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 208u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[9].d[0];  if (t) { goto L_0049D508; } }
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_0049D508:
    c.r[6].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0049D734; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 1396u)));
    c.r[4].d[0] = c.r[6].d[0] << 60;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049D538; } }
    c.r[4].d[0] = c.r[6].d[0] << 59;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0049D538:
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049D734; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], 0u - 1u);
    set32(c.r[6], ld32((c.r[6].w[0] + 208u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0049D734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049D734; } }
L_0049D560:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0049D5A8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 313u);  if (t) { goto L_0049D668; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D59C; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D594; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049D5A0; } }
L_0049D594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 317u);  if (t) { goto L_0049D5A0; } }
L_0049D59C:
    set32(c.r[2], 0u + 315u);
    c.budget -= 1;
L_0049D5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049D668; } }
L_0049D5A8:
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 312u);  if (t) { goto L_0049D668; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D5DC; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D5D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049D5E0; } }
L_0049D5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 316u);  if (t) { goto L_0049D5E0; } }
L_0049D5DC:
    set32(c.r[2], 0u + 314u);
    c.budget -= 1;
L_0049D5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049D668; } }
L_0049D5E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0049D630; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 307u);  if (t) { goto L_0049D668; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D624; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D61C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049D628; } }
L_0049D61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 311u);  if (t) { goto L_0049D628; } }
L_0049D624:
    set32(c.r[2], 0u + 309u);
    c.budget -= 1;
L_0049D628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049D668; } }
L_0049D630:
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], 0u + 306u);  if (t) { goto L_0049D668; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D664; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049D65C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049D668; } }
L_0049D65C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 310u);  if (t) { goto L_0049D668; } }
L_0049D664:
    set32(c.r[2], 0u + 308u);
    c.budget -= 1;
L_0049D668:
    set32(c.r[6], ld32((c.r[3].w[0] + 1396u)));
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[5], c.r[4].w[0] << 6);
    set32(c.r[4], 0u - 65u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st32((c.r[3].w[0] + 1396u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
L_0049D688:
    set32(c.r[3], 0u + 388u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049D698; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0049D698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0049D754; } }
L_0049D6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D110u | kUnwind; return; } goto L_0049D110; } }
L_0049D6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D134u | kUnwind; return; } goto L_0049D134; } }
L_0049D6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D170u | kUnwind; return; } goto L_0049D170; } }
L_0049D6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D1A4u | kUnwind; return; } goto L_0049D1A4; } }
L_0049D6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D1D4u | kUnwind; return; } goto L_0049D1D4; } }
L_0049D6C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 318u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D230u | kUnwind; return; } goto L_0049D230; } }
L_0049D6D0:
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D248u | kUnwind; return; } goto L_0049D248; } }
L_0049D6E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D2B0u | kUnwind; return; } goto L_0049D2B0; } }
L_0049D6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D2D4u | kUnwind; return; } goto L_0049D2D4; } }
L_0049D6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D2E0u | kUnwind; return; } goto L_0049D2E0; } }
L_0049D6FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D330u | kUnwind; return; } goto L_0049D330; } }
L_0049D704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 26u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D698u | kUnwind; return; } goto L_0049D698; } }
L_0049D70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D3D0u | kUnwind; return; } goto L_0049D3D0; } }
L_0049D714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D3F4u | kUnwind; return; } goto L_0049D3F4; } }
L_0049D71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D430u | kUnwind; return; } goto L_0049D430; } }
L_0049D724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D464u | kUnwind; return; } goto L_0049D464; } }
L_0049D72C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D494u | kUnwind; return; } goto L_0049D494; } }
L_0049D734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D5E8u | kUnwind; return; } goto L_0049D5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D560u | kUnwind; return; } goto L_0049D560; } }
L_0049D744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D74Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 48u, depth + 1u); else { c.pc = 0x0049CA50u; return; } if (c.pc != 0x0049D74Cu) [[unlikely]] return; }
L_0049D74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D688u | kUnwind; return; } goto L_0049D688; } }
L_0049D754:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0049D770:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 76u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0049D91C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 380u)));
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] - 292u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0049D814; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].d[0] = ld16((c.r[5].w[0] + 380u));
    c.f[2] = ld32((c.r[5].w[0] + 360u));
    set32(c.r[4], ld32((c.r[5].w[0] + 344u)));
    c.f[1] = ld32((c.r[5].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0049D814; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049D814:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] - 288u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0049D878; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].d[0] = ld16((c.r[5].w[0] + 380u));
    c.f[2] = ld32((c.r[5].w[0] + 360u));
    set32(c.r[4], ld32((c.r[5].w[0] + 344u)));
    c.f[1] = ld32((c.r[5].w[0] + 364u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0049D878; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049D878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049D91C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 537u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0049D8F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 29232u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0049C000u < 16384u) { entry = entries_00A7[(t - 0x0049C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0049D8B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D8C0u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x0049D8C0u) [[unlikely]] return; }
L_0049D8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0] + 76u));  if (t) { goto L_0049D908; } }
L_0049D8C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u + 41u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D8D8u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x0049D8D8u) [[unlikely]] return; }
L_0049D8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049D904; } }
L_0049D8E0:
    set32(c.r[5], 0u + 41u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D8ECu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x0049D8ECu) [[unlikely]] return; }
L_0049D8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049D904; } }
L_0049D8F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u + 39u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D904u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x0049D904u) [[unlikely]] return; }
L_0049D904:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 76u));
    c.budget -= 1;
L_0049D908:
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0049D91C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 318u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 380u)));
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049DA90; } }
    set32(c.r[3], 0u + 319u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049DA80; } }
    set32(c.r[3], 0u + 321u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049DA80; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D950:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049DA90; } }
    set32(c.r[3], 0u + 320u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049DA88; } }
    set32(c.r[3], 0u + 322u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049DA88; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D974:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049DA90; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049D980:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049DA98; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 26u);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 380u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 380u);  if (t) { goto L_0049DCE4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049DA6C; } }
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[5].w[0] - 286u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049D9F8; } }
    set32(c.r[3], c.r[5].w[0] - 292u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049D9E4; } }
    set32(c.r[3], c.r[5].w[0] - 288u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049D9E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0049D9E8; } }
L_0049D9E4:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049D9E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049D9F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0049D9FC; } }
L_0049D9F8:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049D9FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0049DA6C; } }
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 344u)));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 360u));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.f[2] = ld32((c.r[3].w[0] + 68u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0049DA6C; } }
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] - 286u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0049DA64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DA5Cu);  if (depth < kMaxDepth) unit_0028(c, 197u, depth + 1u); else { c.pc = 0x002A2380u; return; } if (c.pc != 0x0049DA5Cu) [[unlikely]] return; }
L_0049DA5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0049DA70; } }
L_0049DA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DA6Cu);  if (depth < kMaxDepth) unit_0028(c, 195u, depth + 1u); else { c.pc = 0x002A2340u; return; } if (c.pc != 0x0049DA6Cu) [[unlikely]] return; }
L_0049DA6C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0049DA70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DA78u);  if (depth < kMaxDepth) unit_00A7(c, 14u, depth + 1u); else { c.pc = 0x0049C140u; return; } if (c.pc != 0x0049DA78u) [[unlikely]] return; }
L_0049DA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0049DE18; } }
L_0049DA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D950u | kUnwind; return; } goto L_0049D950; } }
L_0049DA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D974u | kUnwind; return; } goto L_0049D974; } }
L_0049DA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D980u | kUnwind; return; } goto L_0049D980; } }
L_0049DA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DAA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 72u, depth + 1u); else { c.pc = 0x0049D090u; return; } if (c.pc != 0x0049DAA0u) [[unlikely]] return; }
L_0049DAA0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 318u);
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCAC; } }
    set32(c.r[2], 0u + 319u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DC9C; } }
    set32(c.r[2], 0u + 321u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DC9C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049DAD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DCAC; } }
    set32(c.r[2], 0u + 320u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCA4; } }
    set32(c.r[2], 0u + 322u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCA4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049DAF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DCAC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049DB00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DA6Cu | kUnwind; return; } goto L_0049DA6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 312u);
    c.f[20] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCB4; } }
    set32(c.r[2], 0u + 316u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCB4; } }
    set32(c.r[2], 0u + 314u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCB4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049DB38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DB78; } }
    set32(c.r[2], 0u + 313u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCBC; } }
    set32(c.r[2], 0u + 317u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCBC; } }
    set32(c.r[2], 0u + 315u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCBC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049DB68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DB78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049DB7C; } }
L_0049DB78:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049DB7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DC00; } }
    set32(c.r[2], 0u + 306u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCC4; } }
    set32(c.r[2], 0u + 310u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCC4; } }
    set32(c.r[2], 0u + 308u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCC4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049DBAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DBEC; } }
    set32(c.r[2], 0u + 307u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCCC; } }
    set32(c.r[2], 0u + 311u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCCC; } }
    set32(c.r[2], 0u + 309u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DCCC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049DBDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DBEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049DBF0; } }
L_0049DBEC:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049DBF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049DC04; } }
L_0049DC00:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049DC04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049DC3C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DC30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_0049DC40; } }
L_0049DC30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 3;
L_0049DC3C:
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0049DC40:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DCD4; } }
    st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.budget -= 1;
L_0049DC54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[17].w[0] + 360u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[17].w[0] + 364u), c.f[20]);
    c.f[0] = ld32((c.r[17].w[0] + 360u));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    st32((c.r[17].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DA6Cu | kUnwind; return; } goto L_0049DA6C; } }
L_0049DC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DAD0u | kUnwind; return; } goto L_0049DAD0; } }
L_0049DCA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DAF4u | kUnwind; return; } goto L_0049DAF4; } }
L_0049DCAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DB00u | kUnwind; return; } goto L_0049DB00; } }
L_0049DCB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DB38u | kUnwind; return; } goto L_0049DB38; } }
L_0049DCBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DB68u | kUnwind; return; } goto L_0049DB68; } }
L_0049DCC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DBACu | kUnwind; return; } goto L_0049DBAC; } }
L_0049DCCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DBDCu | kUnwind; return; } goto L_0049DBDC; } }
L_0049DCD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DCDCu); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0049DCDCu) [[unlikely]] return; }
L_0049DCDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 380u), static_cast<std::uint16_t>(c.r[18].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DC54u | kUnwind; return; } goto L_0049DC54; } }
L_0049DCE4:
    c.r[8].d[0] = ld16((c.r[16].w[0]));
    c.r[14].d[0] = 0ull & 1ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 1396u)));
    set32(c.r[6], 0u - 1025u);
    set32(c.r[15], 0u - 3u);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[13], 0u - 2u);
    set32(c.r[12], c.r[14].w[0] << 5);
    set32(c.r[10], c.r[14].w[0] << 6);
    set32(c.r[9], 0u - 33u);
    c.r[8].d[0] = c.r[8].d[0] << 61;
    set32(c.r[11], 0u - 65u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = c.r[8].d[0] >> 63;
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[18], c.r[7].w[0] << 10);
    c.r[18].d[0] = c.r[6].d[0] | c.r[18].d[0];
    set32(c.r[7], c.r[14].w[0] << 7);
    st32((c.r[4].w[0] + 1396u), c.r[18].w[0]);
    set32(c.r[6], 0u - 129u);
    c.r[18].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[4], c.r[14].w[0] << 2);
    c.r[15].d[0] = c.r[18].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[17].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[16].w[0]));
    c.r[15].d[0] = c.r[15].d[0] & c.r[2].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[3].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.r[15].d[0] = ld8((c.r[17].w[0] + 524u));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[17].w[0] + 524u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[14], ld32((c.r[16].w[0] + 4u)));
    c.r[13].d[0] = ld8((c.r[14].w[0] + 526u));
    c.r[9].d[0] = c.r[13].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[12].d[0];
    st8((c.r[14].w[0] + 526u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[12], ld32((c.r[16].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[12].w[0] + 526u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[11].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[12].w[0] + 526u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[16].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 526u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[9].d[0] | c.r[3].d[0];
    st8((c.r[10].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[9].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 48u), 0u);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[3].w[0] + 56u), 0u);
    st32((c.r[3].w[0] + 60u), c.f[20]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 1388u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 1396u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.budget -= 77;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 1396u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DA6Cu | kUnwind; return; } goto L_0049DA6C; } }
L_0049DE18:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0049DE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    lwr(c.r[5], (c.r[4].w[0] + 66u));
    lwl(c.r[5], (c.r[4].w[0] + 69u));
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0049DE88; } }
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DE78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DE68u);  if (depth < kMaxDepth) unit_00A6(c, 197u, depth + 1u); else { c.pc = 0x0049ADF0u; return; } if (c.pc != 0x0049DE68u) [[unlikely]] return; }
L_0049DE68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DE78; } }
L_0049DE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0049DE8C; } }
L_0049DE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DE80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 95u, depth + 1u); else { c.pc = 0x0049D770u; return; } if (c.pc != 0x0049DE80u) [[unlikely]] return; }
L_0049DE80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DE70u | kUnwind; return; } goto L_0049DE70; } }
L_0049DE88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0049DE8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0049DEA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; c.f[0] = ld32((c.r[29].w[0] + 108u));  if (t) { goto L_0049E1AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[14].d[0] = 0ull & 1ull;
    set32(c.r[2], c.r[2].w[0] + 23392u);
    set32(c.r[25], 0u - 1025u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[15], 0u - 3u);
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], 0u - 5u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[13], 0u - 2u);
    set32(c.r[12], c.r[14].w[0] << 5);
    set32(c.r[10], c.r[14].w[0] << 6);
    set32(c.r[7], c.r[14].w[0] << 7);
    set32(c.r[9], 0u - 33u);
    set32(c.r[11], 0u - 65u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[18], ld32((c.r[19].w[0] + 1396u)));
    set32(c.r[6], 0u - 129u);
    c.r[5].d[0] = c.r[5].d[0] << 61;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 63;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[5].w[0] << 10);
    set32(c.r[5], c.r[14].w[0] << 2);
    c.r[25].d[0] = c.r[18].d[0] & c.r[25].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[17].d[0];
    st32((c.r[19].w[0] + 1396u), c.r[25].w[0]);
    c.r[25].d[0] = ld16((c.r[16].w[0]));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[15].d[0] = ld16((c.r[16].w[0]));
    c.r[15].d[0] = c.r[15].d[0] & c.r[2].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[3].d[0];
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    set32(c.r[24], ld32((c.r[16].w[0] + 4u)));
    c.r[15].d[0] = ld8((c.r[24].w[0] + 524u));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[24].w[0] + 524u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[14], ld32((c.r[16].w[0] + 4u)));
    c.r[13].d[0] = ld8((c.r[14].w[0] + 526u));
    c.r[9].d[0] = c.r[13].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[12].d[0];
    st8((c.r[14].w[0] + 526u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[12], ld32((c.r[16].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[12].w[0] + 526u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[11].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[12].w[0] + 526u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[16].w[0] + 4u)));
    c.r[9].d[0] = ld8((c.r[10].w[0] + 526u));
    c.r[9].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[9].d[0] | c.r[3].d[0];
    st8((c.r[10].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st8((c.r[9].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[9].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 48u), 0u);
    st32((c.r[3].w[0] + 52u), 0u);
    st32((c.r[3].w[0] + 56u), 0u);
    st32((c.r[3].w[0] + 60u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 1388u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1396u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 1396u), c.r[2].w[0]);
    lwr(c.r[2], (c.r[16].w[0] + 66u));
    lwl(c.r[2], (c.r[16].w[0] + 69u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 85;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049E188; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 380u));
    set32(c.r[2], c.r[3].w[0] - 292u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049E048; } }
    set32(c.r[2], c.r[3].w[0] - 288u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0049E048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049E04C; } }
L_0049E048:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0049E04C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049E188; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[29].w[0] + 84u);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 380u));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049E188; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], 0u + 318u);
    c.r[5].d[0] = ld16((c.r[5].w[0] + 380u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049E1C4; } }
    set32(c.r[4], 0u + 319u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049E1B4; } }
    set32(c.r[4], 0u + 321u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049E1B4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049E0BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049E1C4; } }
    set32(c.r[4], 0u + 320u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049E1BC; } }
    set32(c.r[4], 0u + 322u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0049E1BC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049E0E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049E1C4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049E0EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049E188; } }
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[6], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 356u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[6], c.r[5].w[0] + 4u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[3].w[0] + 340u));
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.f[3] = ld32((c.r[4].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[3].w[0] + 508u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 34;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0049E1CC; } }
L_0049E17C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E188u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 198u, depth + 1u); else { c.pc = 0x0028DEC0u; return; } if (c.pc != 0x0049E188u) [[unlikely]] return; }
L_0049E188:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049E1A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E1A0u);  if (depth < kMaxDepth) unit_0028(c, 195u, depth + 1u); else { c.pc = 0x002A2340u; return; } if (c.pc != 0x0049E1A0u) [[unlikely]] return; }
L_0049E1A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E1ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x0049E1ACu) [[unlikely]] return; }
L_0049E1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0049E1D4; } }
L_0049E1B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E0BCu | kUnwind; return; } goto L_0049E0BC; } }
L_0049E1BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E0E0u | kUnwind; return; } goto L_0049E0E0; } }
L_0049E1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E0ECu | kUnwind; return; } goto L_0049E0EC; } }
L_0049E1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E17Cu | kUnwind; return; } goto L_0049E17C; } }
L_0049E1D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0049E1F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[9].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[10], c.r[9].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[8], 0u - 5u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[24], c.r[9].w[0] << 3);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[15], c.r[9].w[0] << 5);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[13], c.r[9].w[0] << 11);
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[19], 0u - 9u);
    set32(c.r[2], 0u - 17u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[14], 0u - 33u);
    set32(c.r[12], 0u - 2049u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[9].d[0] = c.r[11].d[0] & c.r[8].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    set32(c.r[11], 0u + 59u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[10], c.r[10].w[0] + 23392u);
    set32(c.r[9], 0u - 3u);
    c.r[19].d[0] = c.r[25].d[0] & c.r[19].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[19].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[19].d[0] = c.r[19].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[19].d[0] = ld16((c.r[4].w[0]));
    c.r[14].d[0] = c.r[19].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld16((c.r[4].w[0]));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[2].d[0] = c.r[10].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    lwr(c.r[2], (c.r[4].w[0] + 66u));
    set32(c.r[3], ld32((c.r[3].w[0] + 344u)));
    lwl(c.r[2], (c.r[4].w[0] + 69u));
    set32(c.r[3], ld32((c.r[3].w[0] + 1300u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    swr(c.r[2], (c.r[4].w[0] + 66u));
    swl(c.r[2], (c.r[4].w[0] + 69u));
    lwr(c.r[2], (c.r[4].w[0] + 66u));
    lwl(c.r[2], (c.r[4].w[0] + 69u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 76;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0049E600; } }
    c.r[2].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_0049E324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049E6F0; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 76u));
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 2u);
    set32(c.r[12], 0u - 3u);
    set32(c.r[13], c.r[4].w[0] << 1);
    set32(c.r[11], 0u - 5u);
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[8], 0u - 33u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[6], 0u - 1025u);
    set32(c.r[7], c.r[4].w[0] << 10);
    c.r[14].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.r[14].d[0] = c.r[14].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 50604ull;
    st8((c.r[18].w[0] + 76u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.f[0] = c.r[5].w[0];
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & c.r[12].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[13].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.r[5].d[0] = c.r[5].d[0] & c.r[11].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    lwr(c.r[5], (c.r[18].w[0] + 66u));
    lwl(c.r[5], (c.r[18].w[0] + 69u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    swr(c.r[3], (c.r[18].w[0] + 66u));
    swl(c.r[3], (c.r[18].w[0] + 69u));
    st32((c.r[18].w[0] + 16u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 68u), 0u);
    st32((c.r[18].w[0] + 72u), 0u);
    st32((c.r[18].w[0] + 32u), c.r[10].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[17].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 1388u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 1396u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    st32((c.r[17].w[0] + 1396u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 53;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 20u), c.f[1]);  if (t) { goto L_0049E6F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB7270000u);
    c.r[2].d[0] = c.r[2].d[0] | 50604ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0049E5E4; } }
    set32(c.r[3], 0u + 287u);
    st16((c.r[18].w[0] + 64u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 64u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0049E4D4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 96u));
    st32((c.r[18].w[0] + 48u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[18].w[0] + 52u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[18].w[0] + 56u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[18].w[0] + 60u), c.f[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 41;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[3]);  if (t) { goto L_0049E574; } }
L_0049E4D4:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 80u));
    st32((c.r[18].w[0] + 48u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 84u));
    st32((c.r[18].w[0] + 52u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 88u));
    st32((c.r[18].w[0] + 56u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 92u));
    st32((c.r[18].w[0] + 60u), c.f[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.f[2] = ld32((c.r[2].w[0] + 136u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[3]);
    c.budget -= 40;
L_0049E574:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 64u));
    set32(c.r[3], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.f[21] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E598u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0049E598u) [[unlikely]] return; }
L_0049E598:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E5A4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0049E5A4u) [[unlikely]] return; }
L_0049E5A4:
    c.f[2] = ld32((c.r[18].w[0] + 48u));
    c.f[4] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[20]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.f[0]);  if (t) { goto L_0049E5EC; } }
L_0049E5E4:
    set32(c.r[2], 0u + 318u);
    st16((c.r[18].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0049E5EC:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049E8C4; } }
L_0049E5F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0049E8E0; } }
L_0049E600:
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] & c.r[9].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 380u));
    c.r[2].d[0] = c.r[3].sd[0] < 230ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049E650; } }
    c.r[1].d[0] = c.r[3].sd[0] < 238ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0049E650; } }
L_0049E648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E324u | kUnwind; return; } goto L_0049E324; } }
L_0049E650:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049E6E0; } }
    set32(c.r[2], 0u + 230u);
    c.budget -= 1;
L_0049E664:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[19].w[0] + 380u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 360u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st32((c.r[19].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[19].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[19].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 360u));
    st32((c.r[19].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[19].w[0] + 376u));
    c.f[0] = ld32((c.r[19].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 372u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E648u | kUnwind; return; } goto L_0049E648; } }
L_0049E6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E6E8u); set32(c.r[4], c.r[19].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x0049E6E8u) [[unlikely]] return; }
L_0049E6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 230u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E664u | kUnwind; return; } goto L_0049E664; } }
L_0049E6F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0049E8E0; } }
L_0049E6F8:
    set32(c.r[3], 0u + 286u);
    set32(c.r[2], 0u + 287u);
    st16((c.r[18].w[0] + 64u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 64u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0049E7B4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 96u));
    st32((c.r[18].w[0] + 48u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[18].w[0] + 52u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[18].w[0] + 56u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[18].w[0] + 60u), c.f[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 41;
    { const bool t = 0ull == 0ull; c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[3]);  if (t) { goto L_0049E854; } }
L_0049E7B4:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[3].d[0] = c.r[2].d[0] | 4059ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 80u));
    st32((c.r[18].w[0] + 48u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 84u));
    st32((c.r[18].w[0] + 52u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 88u));
    st32((c.r[18].w[0] + 56u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 92u));
    st32((c.r[18].w[0] + 60u), c.f[2]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.f[2] = ld32((c.r[2].w[0] + 136u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[3]);
    c.budget -= 40;
L_0049E854:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 64u));
    set32(c.r[3], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.f[21] = ld32((c.r[2].w[0] + 64u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E878u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0049E878u) [[unlikely]] return; }
L_0049E878:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E884u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0049E884u) [[unlikely]] return; }
L_0049E884:
    c.f[2] = ld32((c.r[18].w[0] + 48u));
    c.f[4] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[20]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[18].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[18].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 56u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E5ECu | kUnwind; return; } goto L_0049E5EC; } }
L_0049E8C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E8D8u); set32(c.r[5], 0u + 96u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x0049E8D8u) [[unlikely]] return; }
L_0049E8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E5F8u | kUnwind; return; } goto L_0049E5F8; } }
L_0049E8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0049E910:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E948u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049E948u) [[unlikely]] return; }
L_0049E948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049E960; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[16].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E960u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x0049E960u) [[unlikely]] return; }
L_0049E960:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E96Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049E96Cu) [[unlikely]] return; }
L_0049E96C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049E984; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[16].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E984u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x0049E984u) [[unlikely]] return; }
L_0049E984:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E990u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049E990u) [[unlikely]] return; }
L_0049E990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049EA1C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0049E99C:
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0049EA10; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0049E9AC:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0049EA00; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0049EA10; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_0049EA10; } }
L_0049EA00:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E9ACu | kUnwind; return; } goto L_0049E9AC; } }
L_0049EA10:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0049EA34; } }
L_0049EA1C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[16].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EA2Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x0049EA2Cu) [[unlikely]] return; }
L_0049EA2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E99Cu | kUnwind; return; } goto L_0049E99C; } }
L_0049EA34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049EA50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EA88u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049EA88u) [[unlikely]] return; }
L_0049EA88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049EA9C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EA9Cu); set32(c.r[5], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x0049EA9Cu) [[unlikely]] return; }
L_0049EA9C:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EAA8u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049EAA8u) [[unlikely]] return; }
L_0049EAA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049EABC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EABCu); set32(c.r[5], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x0049EABCu) [[unlikely]] return; }
L_0049EABC:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EAC8u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049EAC8u) [[unlikely]] return; }
L_0049EAC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049EB54; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0049EAD4:
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0049EB48; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_0049EAE4:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0049EB38; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0049EB48; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_0049EB48; } }
L_0049EB38:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049EAE4u | kUnwind; return; } goto L_0049EAE4; } }
L_0049EB48:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0049EB68; } }
L_0049EB54:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EB60u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x0049EB60u) [[unlikely]] return; }
L_0049EB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049EAD4u | kUnwind; return; } goto L_0049EAD4; } }
L_0049EB68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049EB80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0049EBBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0049ECC0; } }
L_0049EBBC:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[7] = ld32((c.r[9].w[0]));
    c.f[6] = ld32((c.r[9].w[0] + 4u));
    c.f[5] = ld32((c.r[9].w[0] + 8u));
    c.f[4] = ld32((c.r[9].w[0] + 12u));
    c.f[3] = ld32((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[16].w[0] + 16u), c.f[7]);
    set32(c.r[7], c.r[16].w[0] + 16u);
    st32((c.r[16].w[0] + 20u), c.f[6]);
    st32((c.r[16].w[0] + 24u), c.f[5]);
    st32((c.r[16].w[0] + 28u), c.f[4]);
    st32((c.r[16].w[0]), c.f[3]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[8].w[0]);
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EC2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 190u, depth + 1u); else { c.pc = 0x003F3550u; return; } if (c.pc != 0x0049EC2Cu) [[unlikely]] return; }
L_0049EC2C:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[2], 0u + 12u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049EC8C; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049EC8C; } }
L_0049EC4C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0049EC7C; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 32u)));  if (t) { goto L_0049ECC0; } }
L_0049EC7C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0049ECC0; } }
L_0049EC8C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ECA0u); set32(c.r[7], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_007C(c, 190u, depth + 1u); else { c.pc = 0x003F3550u; return; } if (c.pc != 0x0049ECA0u) [[unlikely]] return; }
L_0049ECA0:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ECB8u); set32(c.r[7], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_007C(c, 190u, depth + 1u); else { c.pc = 0x003F3550u; return; } if (c.pc != 0x0049ECB8u) [[unlikely]] return; }
L_0049ECB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049EC4Cu | kUnwind; return; } goto L_0049EC4C; } }
L_0049ECC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0049ECE0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], 0u + 12u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 60u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049EE70; } }
    set32(c.r[2], 0u + 19u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049ED28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049EE84; } }
L_0049ED28:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 57;
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0049ED60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0] + 60u));  if (t) { goto L_0049ED64; } }
L_0049ED60:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_0049ED64:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0049EEAC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_0049EF28; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0049EDA4; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_0049EDA4:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049EDBC; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_0049EDBC:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0049EDCC:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EDD8u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x0049EDD8u) [[unlikely]] return; }
L_0049EDD8:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0049EDDC:
    set32(c.r[18], c.r[29].w[0] + 104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.f[20] = 0u;
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.f[21] = ld32((c.r[2].w[0] + 104u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EE20u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x0049EE20u) [[unlikely]] return; }
L_0049EE20:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EE2Cu); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x0049EE2Cu) [[unlikely]] return; }
L_0049EE2C:
    c.f[5] = ld32((c.r[18].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 96u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[2] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[21]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[3]);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[17].w[0] + 16u), c.f[4]);
    st32((c.r[17].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 96u), c.f[4]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.f[1]);  if (t) { goto L_0049EE84; } }
L_0049EE70:
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 5;
L_0049EE84:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0049EF34; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0049EF34; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_0049EF38; } }
L_0049EEAC:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_0049EF1C; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0049EEE0; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_0049EEE0:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0049EEF8; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_0049EEF8:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_0049EF08:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EF14u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x0049EF14u) [[unlikely]] return; }
L_0049EF14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0] + 112u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049EDDCu | kUnwind; return; } goto L_0049EDDC; } }
L_0049EF1C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 29184u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049EF08u | kUnwind; return; } goto L_0049EF08; } }
L_0049EF28:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 29184u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049EDCCu | kUnwind; return; } goto L_0049EDCC; } }
L_0049EF34:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0049EF38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0049EF60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
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
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_0049EFA4; } }
L_0049EF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049F0B0; } }
L_0049EFA4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049EFA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EFC0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 167u, depth + 1u); else { c.pc = 0x0049ECE0u; return; } if (c.pc != 0x0049EFC0u) [[unlikely]] return; }
L_0049EFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049EFE4; } }
L_0049EFC8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049EFA8u | kUnwind; return; } goto L_0049EFA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049EF9Cu | kUnwind; return; } goto L_0049EF9C; } }
L_0049EFE4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EFFCu); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049EFFCu) [[unlikely]] return; }
L_0049EFFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049F018; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[20].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F014u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x0049F014u) [[unlikely]] return; }
L_0049F014:
    c.budget -= 1;
L_0049F018:
    set32(c.r[5], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F024u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049F024u) [[unlikely]] return; }
L_0049F024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049F040; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[20].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F03Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x0049F03Cu) [[unlikely]] return; }
L_0049F03C:
    c.budget -= 1;
L_0049F040:
    set32(c.r[5], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F04Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049F04Cu) [[unlikely]] return; }
L_0049F04C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049F098; } }
    c.budget -= 1;
L_0049F058:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049EFC8u | kUnwind; return; } goto L_0049EFC8; } }
    c.budget -= 1;
L_0049F098:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[20].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F0A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x0049F0A8u) [[unlikely]] return; }
L_0049F0A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F058u | kUnwind; return; } goto L_0049F058; } }
L_0049F0B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0049F0E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049F11C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F118u); set32(c.r[5], c.r[5].w[0] - 3552u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0049F118u) [[unlikely]] return; }
L_0049F118:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_0049F11C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0049F1AC; } }
L_0049F124:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_0049F13C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F138u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0049F138u) [[unlikely]] return; }
L_0049F138:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_0049F13C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0049F1E0; } }
L_0049F144:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0049F1F0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
L_0049F160:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[8].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[3].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] + 64u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F160u | kUnwind; return; } goto L_0049F160; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0049F1F4; } }
L_0049F1AC:
    set32(c.r[2], c.r[17].w[0] << 6);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F1B8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0049F1B8u) [[unlikely]] return; }
L_0049F1B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3568u);
    set32(c.r[6], c.r[6].w[0] - 3552u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F1D8u); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0049F1D8u) [[unlikely]] return; }
L_0049F1D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F124u | kUnwind; return; } goto L_0049F124; } }
L_0049F1E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F1E8u); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0049F1E8u) [[unlikely]] return; }
L_0049F1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F144u | kUnwind; return; } goto L_0049F144; } }
L_0049F1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0049F1F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049F210:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0049F220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0049F250; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0049F250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F250u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0049F250u) [[unlikely]] return; }
L_0049F250:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0049F270:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0049F2A4; } }
L_0049F29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { goto L_0049F340; } }
L_0049F2A4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049F2A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F2C0u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049F2C0u) [[unlikely]] return; }
L_0049F2C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049F2D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F2D4u); set32(c.r[5], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x0049F2D4u) [[unlikely]] return; }
L_0049F2D4:
    c.budget -= 1;
L_0049F2D8:
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F2E4u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049F2E4u) [[unlikely]] return; }
L_0049F2E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049F2F8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F2F8u); set32(c.r[5], c.r[19].w[0] + 40u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x0049F2F8u) [[unlikely]] return; }
L_0049F2F8:
    set32(c.r[5], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F304u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049F304u) [[unlikely]] return; }
L_0049F304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049F32C; } }
    c.budget -= 1;
L_0049F310:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F2A8u | kUnwind; return; } goto L_0049F2A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F29Cu | kUnwind; return; } goto L_0049F29C; } }
L_0049F32C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F338u); set32(c.r[5], c.r[19].w[0] + 44u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x0049F338u) [[unlikely]] return; }
L_0049F338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F310u | kUnwind; return; } goto L_0049F310; } }
L_0049F340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0049F360:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0049F3CC; } }
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_0049F390:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049F3AC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F3A8u); set32(c.r[5], c.r[5].w[0] - 3552u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0049F3A8u) [[unlikely]] return; }
L_0049F3A8:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_0049F3AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049F468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F3C0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0049F3C0u) [[unlikely]] return; }
L_0049F3C0:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049F468; } }
L_0049F3CC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049F3D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F3E8u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049F3E8u) [[unlikely]] return; }
L_0049F3E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049F400; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F3FCu); set32(c.r[5], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x0049F3FCu) [[unlikely]] return; }
L_0049F3FC:
    c.budget -= 1;
L_0049F400:
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F40Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049F40Cu) [[unlikely]] return; }
L_0049F40C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049F420; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F420u); set32(c.r[5], c.r[19].w[0] + 40u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x0049F420u) [[unlikely]] return; }
L_0049F420:
    set32(c.r[5], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F42Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 409u, depth + 1u); else { c.pc = 0x003F7A60u; return; } if (c.pc != 0x0049F42Cu) [[unlikely]] return; }
L_0049F42C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049F454; } }
    c.budget -= 1;
L_0049F438:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F3D0u | kUnwind; return; } goto L_0049F3D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F390u | kUnwind; return; } goto L_0049F390; } }
L_0049F454:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F460u); set32(c.r[5], c.r[19].w[0] + 44u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x0049F460u) [[unlikely]] return; }
L_0049F460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F438u | kUnwind; return; } goto L_0049F438; } }
L_0049F468:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0049F490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u + 2u);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 29672u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 12u));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049F614; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0049F4E4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0049F4D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);  if (t) { goto L_0049F6D4; } }
L_0049F4D0:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 100u);  if (t) { goto L_0049F6D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049F89C; } }
L_0049F4E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[6].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0049F834; } }
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 14u));
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] < 0; c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (t) { goto L_0049F574; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0049F590; } }
L_0049F574:
    set32(c.r[3], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_0049F590:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0049F5A4; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0049F5C0; } }
L_0049F5A4:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0049F5C0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0049F6D0; } }
L_0049F614:
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0049F86C; } }
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[5].d[0] = ld16((c.r[4].w[0] + 14u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 11;
    { const bool t = c.r[5].sd[0] < 0; c.f[2] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);  if (t) { goto L_0049F664; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0049F680; } }
L_0049F664:
    set32(c.r[3], c.r[5].w[0] >> 1);
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0049F680:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[1]);
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 20;
L_0049F6D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.budget -= 1;
L_0049F6D4:
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0049F6F0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0049F70C; } }
L_0049F6F0:
    set32(c.r[5], c.r[2].w[0] >> 1);
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0049F70C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[6], c.f[0]);
    c.r[5].d[0] = 0ull | 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[1]);
    set32(c.r[3], c.r[2].w[0] << 16);
    c.r[3].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] << 16);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 12u));
    c.f[3] = c.r[3].w[0];
    c.budget -= 26;
L_0049F774:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] + 52u);  if (t) { goto L_0049F7B0; } }
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[5].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[2]);  if (t) { goto L_0049F7D0; } }
    c.budget -= 1;
L_0049F7B0:
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[5].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    c.budget -= 8;
L_0049F7D0:
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[6], c.f[0]);
    c.r[5].d[0] = 0ull | 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.f[4] = c.r[3].w[0];
    c.f[4] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    set32(c.r[8], c.f[4]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[5].d[0] = ld16((c.r[7].w[0] + 6u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 396u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    c.budget -= 23;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F774u | kUnwind; return; } goto L_0049F774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0049F89C; } }
L_0049F834:
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] - 29120u);
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F6D0u | kUnwind; return; } goto L_0049F6D0; } }
L_0049F86C:
    set32(c.r[2], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 29120u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F6D0u | kUnwind; return; } goto L_0049F6D0; } }
L_0049F89C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049F8B0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.f[2] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] - 29120u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[19].w[0] + 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 32u), c.f[2]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 36u), c.f[1]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    set32(c.r[6], c.r[6].w[0] + 2432u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[7].w[0]);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F94Cu); set32(c.r[4], c.r[19].w[0] + 112u);  if (depth < kMaxDepth) unit_0083(c, 27u, depth + 1u); else { c.pc = 0x0040C3C0u; return; } if (c.pc != 0x0049F94Cu) [[unlikely]] return; }
L_0049F94C:
    c.f[1] = ld32((c.r[19].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    set32(c.r[6], c.r[28].w[0] - 31128u);
    c.f[2] = ld32((c.r[19].w[0] + 40u));
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.f[4] = c.r[2].w[0];
    set32(c.r[4], 0u + 4u);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[19].w[0] + 80u), c.f[1]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[19].w[0] + 84u), c.f[3]);
    st32((c.r[19].w[0] + 88u), c.f[2]);
    st32((c.r[19].w[0] + 92u), c.f[0]);
    st32((c.r[19].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 20;
L_0049F99C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F99Cu | kUnwind; return; } goto L_0049F99C; } }
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[18], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[16], c.r[19].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 184u);
    c.r[21].d[0] = ld8((c.r[2].w[0]));
    c.r[22].d[0] = ld8((c.r[2].w[0] + 1u));
    c.r[23].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[30].d[0] = ld8((c.r[2].w[0] + 3u));
    c.budget -= 11;
L_0049F9E8:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[20], c.r[19].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FA00u); set32(c.r[6], 0u + 255u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x0049FA00u) [[unlikely]] return; }
L_0049FA00:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0049FA18; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0049FA34; } }
L_0049FA18:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_0049FA34:
    st32((c.r[20].w[0] + 52u), c.f[0]);
    set32(c.r[20], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FA4Cu); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x0049FA4Cu) [[unlikely]] return; }
L_0049FA4C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[2].d[0] = ld16((c.r[20].w[0] + 6u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[22].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[23].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[30].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FABCu); st32((c.r[2].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x0049FABCu) [[unlikely]] return; }
L_0049FABC:
    set32(c.r[6], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[20].w[0] + 6u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] + 396u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FAF0u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x0049FAF0u) [[unlikely]] return; }
L_0049FAF0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F9E8u | kUnwind; return; } goto L_0049F9E8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0049FB40:
    set32(c.r[7], c.r[5].w[0] << 7);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 29120u);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], ld32((c.r[7].w[0] + 60u)));
    st32((c.r[7].w[0] + 8u), c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] >> 16);
    st16((c.r[7].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 12u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[7].w[0] + 20u), c.f[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0] + 16u), c.f[0]);  c.pc = t; return; }
L_0049FBA0:
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[7], c.r[5].w[0] << 7);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[8], c.r[6].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], ld32((c.r[8].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] - 29120u);
    c.r[7].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] >> 16);
    st16((c.r[8].w[0] + 14u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st32((c.r[8].w[0] + 8u), 0u);
    st32((c.r[8].w[0] + 4u), 0u);
    st8((c.r[8].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[8].w[0] + 12u));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[8].w[0] + 20u), c.f[0]);
    st32((c.r[8].w[0] + 16u), c.f[0]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0049FC10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], c.r[5].w[0] << 7);
    set32(c.r[18], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 11;
L_0049FC3C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[4].w[0] + 60u);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0049FD08; } }
    c.budget -= 1;
L_0049FC70:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FC3Cu | kUnwind; return; } goto L_0049FC3C; } }
    c.r[5].d[0] = ld8((c.r[19].w[0] + 5u));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0049FD00; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 3;
L_0049FC9C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0049FCF0; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0049FD00; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_0049FD00; } }
L_0049FCF0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FC9Cu | kUnwind; return; } goto L_0049FC9C; } }
L_0049FD00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049FD28; } }
L_0049FD08:
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FD1Cu); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x0049FD1Cu) [[unlikely]] return; }
L_0049FD1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FC70u | kUnwind; return; } goto L_0049FC70; } }
    c.budget -= 1;
L_0049FD28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0049FD50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049FD9C; } }
L_0049FD88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 48u)));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[10].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[9].w[0]);  if (t) { goto L_0049FDDC; } }
L_0049FD9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FDBCu); c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 224u, depth + 1u); else { c.pc = 0x0049F8B0u; return; } if (c.pc != 0x0049FDBCu) [[unlikely]] return; }
L_0049FDBC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[3], 0u + 6u);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FD88u | kUnwind; return; } goto L_0049FD88; } }
L_0049FDDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049FDF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C120u | kUnwind; return; } [[clang::musttail]] return unit_0083(c, 10u, depth); }
L_0049FE00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0049FF00; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 5u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0049FF00; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049FE38:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FE48u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00A7(c, 221u, depth + 1u); else { c.pc = 0x0049F490u; return; } if (c.pc != 0x0049FE48u) [[unlikely]] return; }
L_0049FE48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049FEE8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 4;
L_0049FE60:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[4].w[0] + 60u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0049FF08; } }
L_0049FE90:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FE60u | kUnwind; return; } goto L_0049FE60; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 5u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_0049FEE8; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 5u));
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 12;
L_0049FEE8:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 5u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FE38u | kUnwind; return; } goto L_0049FE38; } }
    c.budget -= 1;
L_0049FF00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049FF28; } }
L_0049FF08:
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FF1Cu); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x0049FF1Cu) [[unlikely]] return; }
L_0049FF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FE90u | kUnwind; return; } goto L_0049FE90; } }
    c.budget -= 1;
L_0049FF28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0049FF50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0049FFF8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0049FF88:
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 4;
L_0049FF98:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[4].w[0] + 60u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00A8(c, 4u, depth); } }
L_0049FFC8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FF98u | kUnwind; return; } goto L_0049FF98; } }
    c.r[4].d[0] = ld8((c.r[21].w[0] + 5u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[21].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FF88u | kUnwind; return; } goto L_0049FF88; } }
    c.budget -= 1;
L_0049FFF8:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 4u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_00A8(c, 1u, depth);
}

}

#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0,
    0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_009D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00474000;
    case 2u: goto L_0047419C;
    case 3u: goto L_004741EC;
    case 4u: goto L_004741F8;
    case 5u: goto L_0047430C;
    case 6u: goto L_00474310;
    case 7u: goto L_00474320;
    case 8u: goto L_00474354;
    case 9u: goto L_0047435C;
    case 10u: goto L_004743DC;
    case 11u: goto L_0047440C;
    case 12u: goto L_00474430;
    case 13u: goto L_00474460;
    case 14u: goto L_00474464;
    case 15u: goto L_0047454C;
    case 16u: goto L_00474560;
    case 17u: goto L_00474580;
    case 18u: goto L_004745B0;
    case 19u: goto L_004745D0;
    case 20u: goto L_004745F0;
    case 21u: goto L_00474698;
    case 22u: goto L_004746B0;
    case 23u: goto L_004746CC;
    case 24u: goto L_004746FC;
    case 25u: goto L_00474780;
    case 26u: goto L_004747A0;
    case 27u: goto L_004747B0;
    case 28u: goto L_004747D0;
    case 29u: goto L_004747F0;
    case 30u: goto L_00474880;
    case 31u: goto L_00474898;
    case 32u: goto L_004748B8;
    case 33u: goto L_004749F0;
    case 34u: goto L_00474AC0;
    case 35u: goto L_00474B5C;
    case 36u: goto L_00474C08;
    case 37u: goto L_00474C5C;
    case 38u: goto L_00474D74;
    case 39u: goto L_00474DB4;
    case 40u: goto L_00474DC4;
    case 41u: goto L_00474DD4;
    case 42u: goto L_00474E00;
    case 43u: goto L_00474E70;
    case 44u: goto L_00474ED4;
    case 45u: goto L_00474EF0;
    case 46u: goto L_00474F00;
    case 47u: goto L_00474F0C;
    case 48u: goto L_00474F34;
    case 49u: goto L_00474F80;
    case 50u: goto L_00474F94;
    case 51u: goto L_00474FC0;
    case 52u: goto L_00474FF8;
    case 53u: goto L_0047500C;
    case 54u: goto L_00475090;
    case 55u: goto L_004750E0;
    case 56u: goto L_00475100;
    case 57u: goto L_0047511C;
    case 58u: goto L_0047516C;
    case 59u: goto L_00475188;
    case 60u: goto L_004751F4;
    case 61u: goto L_004751FC;
    case 62u: goto L_00475224;
    case 63u: goto L_004752A8;
    case 64u: goto L_0047533C;
    case 65u: goto L_00475408;
    case 66u: goto L_0047543C;
    case 67u: goto L_00475468;
    case 68u: goto L_0047547C;
    case 69u: goto L_004754A0;
    case 70u: goto L_004754FC;
    case 71u: goto L_00475588;
    case 72u: goto L_00475660;
    case 73u: goto L_00475684;
    case 74u: goto L_004757D4;
    case 75u: goto L_004757E8;
    case 76u: goto L_00475808;
    case 77u: goto L_0047581C;
    case 78u: goto L_00475858;
    case 79u: goto L_004758D0;
    case 80u: goto L_004759DC;
    case 81u: goto L_004759F0;
    case 82u: goto L_00475A08;
    case 83u: goto L_00475A18;
    case 84u: goto L_00475A24;
    case 85u: goto L_00475A30;
    case 86u: goto L_00475A54;
    case 87u: goto L_00475A70;
    case 88u: goto L_00475AEC;
    case 89u: goto L_00475B10;
    case 90u: goto L_00475B4C;
    case 91u: goto L_00475B5C;
    case 92u: goto L_00475B68;
    case 93u: goto L_00475B74;
    case 94u: goto L_00475B98;
    case 95u: goto L_00475BB4;
    case 96u: goto L_00475C30;
    case 97u: goto L_00475C50;
    case 98u: goto L_00475C60;
    case 99u: goto L_00475C70;
    case 100u: goto L_00475C80;
    case 101u: goto L_00476020;
    case 102u: goto L_00476080;
    case 103u: goto L_004760C4;
    case 104u: goto L_00476164;
    case 105u: goto L_00476190;
    case 106u: goto L_004761C0;
    case 107u: goto L_004761E0;
    case 108u: goto L_00476210;
    case 109u: goto L_0047625C;
    case 110u: goto L_00476274;
    case 111u: goto L_004762F4;
    case 112u: goto L_00476310;
    case 113u: goto L_00476320;
    case 114u: goto L_00476358;
    case 115u: goto L_00476364;
    case 116u: goto L_0047637C;
    case 117u: goto L_00476388;
    case 118u: goto L_004763E8;
    case 119u: goto L_00476434;
    case 120u: goto L_00476460;
    case 121u: goto L_00476484;
    case 122u: goto L_004764C0;
    case 123u: goto L_004764E8;
    case 124u: goto L_0047653C;
    case 125u: goto L_00476560;
    case 126u: goto L_00476588;
    case 127u: goto L_004765A0;
    case 128u: goto L_004765AC;
    case 129u: goto L_004765C0;
    case 130u: goto L_004765F0;
    case 131u: goto L_00476610;
    case 132u: goto L_0047665C;
    case 133u: goto L_0047667C;
    case 134u: goto L_0047672C;
    case 135u: goto L_00476738;
    case 136u: goto L_00476768;
    case 137u: goto L_00476774;
    case 138u: goto L_00476788;
    case 139u: goto L_00476794;
    case 140u: goto L_004767A8;
    case 141u: goto L_004767C0;
    case 142u: goto L_004767D8;
    case 143u: goto L_004767F8;
    case 144u: goto L_00476808;
    case 145u: goto L_00476810;
    case 146u: goto L_00476838;
    case 147u: goto L_004768E0;
    case 148u: goto L_004768F0;
    case 149u: goto L_00476974;
    case 150u: goto L_0047699C;
    case 151u: goto L_004769F0;
    case 152u: goto L_00476A78;
    case 153u: goto L_00476AC8;
    case 154u: goto L_00476B70;
    case 155u: goto L_00476C14;
    case 156u: goto L_00476C50;
    case 157u: goto L_00476CE0;
    case 158u: goto L_00476DF8;
    case 159u: goto L_00476E04;
    case 160u: goto L_00476E34;
    case 161u: goto L_00476E40;
    case 162u: goto L_00476E6C;
    case 163u: goto L_00476E78;
    case 164u: goto L_00476F5C;
    case 165u: goto L_00476FBC;
    case 166u: goto L_00476FC4;
    case 167u: goto L_00476FDC;
    case 168u: goto L_0047702C;
    case 169u: goto L_00477058;
    case 170u: goto L_004770B0;
    case 171u: goto L_00477120;
    case 172u: goto L_004771E4;
    case 173u: goto L_00477224;
    case 174u: goto L_00477278;
    case 175u: goto L_00477380;
    case 176u: goto L_004774F0;
    case 177u: goto L_00477560;
    case 178u: goto L_004775F0;
    case 179u: goto L_00477660;
    case 180u: goto L_004776D8;
    case 181u: goto L_004776E4;
    case 182u: goto L_00477780;
    case 183u: goto L_004778B0;
    case 184u: goto L_004778CC;
    case 185u: goto L_004778E0;
    case 186u: goto L_004778F0;
    case 187u: goto L_00477900;
    case 188u: goto L_00477910;
    case 189u: goto L_0047792C;
    case 190u: goto L_00477944;
    case 191u: goto L_00477960;
    case 192u: goto L_00477970;
    case 193u: goto L_00477990;
    case 194u: goto L_004779D4;
    case 195u: goto L_00477A4C;
    case 196u: goto L_00477AA0;
    case 197u: goto L_00477AB0;
    case 198u: goto L_00477AE4;
    case 199u: goto L_00477AF8;
    case 200u: goto L_00477B48;
    case 201u: goto L_00477B70;
    case 202u: goto L_00477BC4;
    case 203u: goto L_00477C40;
    case 204u: goto L_00477C80;
    case 205u: goto L_00477CA0;
    case 206u: goto L_00477CC0;
    case 207u: goto L_00477CEC;
    case 208u: goto L_00477D28;
    case 209u: goto L_00477D50;
    case 210u: goto L_00477D70;
    case 211u: goto L_00477DA8;
    case 212u: goto L_00477DCC;
    case 213u: goto L_00477DD4;
    case 214u: goto L_00477DF4;
    case 215u: goto L_00477E10;
    case 216u: goto L_00477E40;
    case 217u: goto L_00477E50;
    case 218u: goto L_00477EAC;
    case 219u: goto L_00477EB4;
    case 220u: goto L_00477EE4;
    case 221u: goto L_00477F10;
    case 222u: goto L_00477F1C;
    case 223u: goto L_00477F34;
    case 224u: goto L_00477F40;
    case 225u: goto L_00477FB8;
    default: bad_entry(c, 0x00474000u); return;
    }
L_00474000:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00474044; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 102u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0047403C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 295u));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0047403C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0047403C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] & 255ull;  if (t) { goto L_004740E0; } }
L_00474044:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], 0u + 51u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00474068; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 762u)));
    set32(c.r[2], c.r[2].w[0] - 300u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 102u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004740E0; } }
L_00474068:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 762u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 752u)));
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 82u)));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004740C0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_004740DC; } }
L_004740C0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
L_004740DC:
    st16((c.r[17].w[0] + 102u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_004740E0:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], 0u + 194u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00474120; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047419C; } }
    st32((c.r[17].w[0] + 136u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.f[0]);  if (t) { goto L_0047419C; } }
L_00474120:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00474368; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0047419C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0047419C; } }
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0047419C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1536u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00474198; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1539u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00474198; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047419C; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047419C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0047419C; } }
L_00474198:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0047419C:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004741C0; } }
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_004741C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004741C0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 156u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 296u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0047437C; } }
L_004741EC:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004741F8u); set32(c.r[4], c.r[17].w[0] + 116u);  if (depth < kMaxDepth) unit_0089(c, 7u, depth + 1u); else { c.pc = 0x00424080u; return; } if (c.pc != 0x004741F8u) [[unlikely]] return; }
L_004741F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004743A8; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 105u));
    c.r[3].d[0] = c.r[5].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047430C; } }
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0047430C; } }
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00474270; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00474270; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00474270:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004743C8; } }
    set32(c.r[10], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[10].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047430C; } }
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 32506ull;
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0047430C; } }
    c.r[9].d[0] = ld16((c.r[10].w[0] + 544u));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047430Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 167u, depth + 1u); else { c.pc = 0x00289CC0u; return; } if (c.pc != 0x0047430Cu) [[unlikely]] return; }
L_0047430C:
    c.f[1] = ld32((c.r[17].w[0] + 148u));
    c.budget -= 1;
L_00474310:
    c.f[0] = ld32((c.r[17].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004743E4; } }
L_00474320:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00474414; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 29166u));
    c.r[3].d[0] = c.r[3].d[0] << 53;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00474414; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474354u); set32(c.r[4], c.r[4].w[0] + 27296u);  if (depth < kMaxDepth) unit_00B1(c, 217u, depth + 1u); else { c.pc = 0x004C7860u; return; } if (c.pc != 0x00474354u) [[unlikely]] return; }
L_00474354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00474418; } }
L_0047435C:
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047419Cu | kUnwind; return; } goto L_0047419C; } }
L_00474368:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047419Cu | kUnwind; return; } goto L_0047419C; } }
L_0047437C:
    c.f[1] = ld32((c.r[4].w[0] + 280u));
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 140u));
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004741ECu | kUnwind; return; } goto L_004741EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 136u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004741ECu | kUnwind; return; } goto L_004741EC; } }
L_004743A8:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 105u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047430Cu | kUnwind; return; } goto L_0047430C; } }
L_004743C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004743DCu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 167u, depth + 1u); else { c.pc = 0x00289CC0u; return; } if (c.pc != 0x004743DCu) [[unlikely]] return; }
L_004743DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 148u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474310u | kUnwind; return; } goto L_00474310; } }
L_004743E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 29166u));
    c.r[3].d[0] = c.r[3].d[0] << 53;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474320u | kUnwind; return; } goto L_00474320; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047440Cu); set32(c.r[4], c.r[4].w[0] + 27296u);  if (depth < kMaxDepth) unit_00B1(c, 217u, depth + 1u); else { c.pc = 0x004C7860u; return; } if (c.pc != 0x0047440Cu) [[unlikely]] return; }
L_0047440C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474354u | kUnwind; return; } goto L_00474354; } }
L_00474414:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00474418:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00474430:
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], 0u + 14u);
    st32((c.r[6].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 14ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_00474454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));  if (t) { goto L_00474458; } }
L_00474454:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00474458:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00474588; } }
L_00474460:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 1;
L_00474464:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00474980; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], 0u + 8u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 296u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00474988; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 295u)));
    set32(c.r[3], 0u + 6u);
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004749B4; } }
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00474990; } }
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0047499C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 96u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0047499C; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[5].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0047499C; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 252u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[5].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0047452C; } }
    c.r[3].d[0] = c.r[5].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047452C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0047452C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0047499C; } }
    c.r[5].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0047499C; } }
    set32(c.r[3], 0u + 100u);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0047454C:
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004749C0; } }
L_00474560:
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], 0u + 71u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004749D8; } }
    set32(c.r[3], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004749D8; } }
L_00474580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004749E8; } }
L_00474588:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 222u)));
    set32(c.r[7], c.r[6].w[0] + 8u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[6].w[0] + 216u), c.r[8].w[0]);
    set32(c.r[3], 0u + 10u);
    c.budget -= 10;
L_004745B0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[8].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[8].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00474620; } }
L_004745D0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[7].w[0] + 212u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_004748C8; } }
    c.budget -= 1;
L_004745F0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_004748D0; } }
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[8].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004745D0u | kUnwind; return; } goto L_004745D0; } }
    c.budget -= 1;
L_00474620:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    set32(c.r[12], ld32((c.r[7].w[0] + 208u)));
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[11], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[11].w[0] + 16u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[12].d[0];
    c.budget -= 10;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[9], c.r[11].w[0] + 16u);  if (t) { goto L_004748D8; } }
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.r[8].d[0] = c.r[8].d[0] | c.r[12].d[0];
    st32((c.r[9].w[0]), c.r[8].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    set32(c.r[8], ld32((c.r[7].w[0] + 204u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] + 12u)));
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.budget -= 13;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_004746B0; } }
    set32(c.r[8], c.r[11].w[0] + 1u);
    st8((c.r[7].w[0] + 212u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_004748F8; } }
    c.budget -= 1;
L_00474698:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_004746B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004746CC; } }
L_004746B0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004745B0u | kUnwind; return; } goto L_004745B0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 212u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[9], c.r[7].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_004746CC:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474460u | kUnwind; return; } goto L_00474460; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 10u);
    c.f[3] = c.r[7].w[0];
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[11], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[6], 0u + 4u);
    c.f[2] = c.r[7].w[0];
    set32(c.r[7], 0u + 8u);
    c.budget -= 10;
L_004746FC:
    set32(c.r[8], ld32((c.r[9].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_00474780; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_00474730; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[5].d[0];  if (t) { goto L_00474720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00474780; } }
L_00474720:
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.r[8].w[0]);  if (t) { goto L_00474780; } }
    c.budget -= 1;
L_00474730:
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00474900; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 156u));
    c.r[8].d[0] = c.r[8].d[0] << 58;
    c.r[8].d[0] = c.r[8].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_00474780; } }
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 140u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00474780; } }
    st32((c.r[4].w[0] + 136u), c.f[1]);
    c.budget -= 2;
L_00474780:
    set32(c.r[10], ld32((c.r[4].w[0] + 36u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 220u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[10].w[0] + 220u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = c.r[8].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[8].d[0] == c.r[3].d[0]; set32(c.r[9], c.r[10].w[0] + 8u);  if (t) { goto L_00474938; } }
L_004747A0:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 212u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[10].d[0] == c.r[8].d[0];  if (t) { goto L_00474940; } }
L_004747B0:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 212u)));
    set32(c.r[10], c.r[12].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[15], c.r[9].w[0] + c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[15].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[10].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00474820; } }
L_004747D0:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 212u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[9].w[0] + 212u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = c.r[10].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[10].d[0] == c.r[3].d[0];  if (t) { goto L_00474948; } }
    c.budget -= 1;
L_004747F0:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 212u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == c.r[10].d[0];  if (t) { goto L_00474950; } }
    set32(c.r[10], c.r[12].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[15], c.r[9].w[0] + c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[15].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004747D0u | kUnwind; return; } goto L_004747D0; } }
    c.budget -= 1;
L_00474820:
    set32(c.r[14], ld32((c.r[9].w[0] + 208u)));
    set32(c.r[10], ld32((c.r[15].w[0] + 16u)));
    c.r[10].d[0] = c.r[10].d[0] & c.r[14].d[0];
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[12], c.r[15].w[0] + 16u);  if (t) { goto L_00474958; } }
    set32(c.r[10], ld32((c.r[12].w[0])));
    c.r[10].d[0] = c.r[10].d[0] | c.r[14].d[0];
    st32((c.r[12].w[0]), c.r[10].w[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 212u)));
    set32(c.r[10], ld32((c.r[9].w[0] + 204u)));
    set32(c.r[12], c.r[14].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[12], c.r[9].w[0] + c.r[12].w[0]);
    set32(c.r[12], ld32((c.r[12].w[0] + 12u)));
    c.r[10].d[0] = c.r[10].d[0] & c.r[12].d[0];
    c.budget -= 13;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_00474898; } }
    set32(c.r[10], c.r[14].w[0] + 1u);
    st8((c.r[9].w[0] + 212u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = c.r[10].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[10].d[0] == c.r[3].d[0]; c.r[8].d[0] = c.r[13].d[0] + 0ull;  if (t) { goto L_00474978; } }
L_00474880:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 212u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[10].d[0];  if (t) { goto L_00474898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004748B8; } }
L_00474898:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004747B0u | kUnwind; return; } goto L_004747B0; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 212u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[8].w[0]);
    c.budget -= 6;
L_004748B8:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004746FCu | kUnwind; return; } goto L_004746FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 56u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474464u | kUnwind; return; } goto L_00474464; } }
L_004748C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004745F0u | kUnwind; return; } goto L_004745F0; } }
L_004748D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004746CCu | kUnwind; return; } goto L_004746CC; } }
L_004748D8:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[11].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 213u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 213u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004746B0u | kUnwind; return; } goto L_004746B0; } }
L_004748F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474698u | kUnwind; return; } goto L_00474698; } }
L_00474900:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 132u));
    c.f[0] = ld32((c.r[4].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474780u | kUnwind; return; } goto L_00474780; } }
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474780u | kUnwind; return; } goto L_00474780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 136u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474780u | kUnwind; return; } goto L_00474780; } }
    c.budget -= 1;
L_00474938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004747A0u | kUnwind; return; } goto L_004747A0; } }
L_00474940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004748B8u | kUnwind; return; } goto L_004748B8; } }
L_00474948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004747F0u | kUnwind; return; } goto L_004747F0; } }
L_00474950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004748B8u | kUnwind; return; } goto L_004748B8; } }
L_00474958:
    st8((c.r[15].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[15].w[0] + 12u), c.r[11].w[0]);
    c.r[8].d[0] = c.r[13].d[0] + 0ull;
    st8((c.r[15].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 213u)));
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 213u), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474898u | kUnwind; return; } goto L_00474898; } }
L_00474978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474880u | kUnwind; return; } goto L_00474880; } }
L_00474980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { goto L_004749E8; } }
L_00474988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047454Cu | kUnwind; return; } goto L_0047454C; } }
L_00474990:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047454Cu | kUnwind; return; } goto L_0047454C; } }
L_0047499C:
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[5].w[0] + 112u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047454Cu | kUnwind; return; } goto L_0047454C; } }
L_004749B4:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047454Cu | kUnwind; return; } goto L_0047454C; } }
L_004749C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 80u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474560u | kUnwind; return; } goto L_00474560; } }
L_004749D8:
    set32(c.r[3], ld32((c.r[6].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 102u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474580u | kUnwind; return; } goto L_00474580; } }
L_004749E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004749F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00474DDC; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 105u));
    c.r[2].d[0] = c.r[4].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00474C10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00474D40; } }
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00474D48; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 762u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1536u)));
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00474A78; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00474A78:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 154u));
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00474A94; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00474A94:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], 0u + 80u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[20] = ld32((c.r[2].w[0] + 76u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474AC0u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_0032(c, 10u, depth + 1u); else { c.pc = 0x002C82C0u; return; } if (c.pc != 0x00474AC0u) [[unlikely]] return; }
L_00474AC0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00474AD4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00474AF0; } }
L_00474AD4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00474AF0:
    c.f[1] = c.r[16].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 100u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);  if (t) { goto L_00474B24; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00474B40; } }
L_00474B24:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00474B40:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00474D64; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 105u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
L_00474B5C:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[4].d[0] = ld8((c.r[17].w[0] + 105u));
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 105u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 105u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00474D6C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00474BBC; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00474BBC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00474BBC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00474C5C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 105u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00474C5C; } }
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00474C5C; } }
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[0] = ld32((c.r[17].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00474C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474C08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 54u, depth + 1u); else { c.pc = 0x00475090u; return; } if (c.pc != 0x00474C08u) [[unlikely]] return; }
L_00474C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 105u));  if (t) { goto L_00474C60; } }
L_00474C10:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], 0u + 193u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00474D7C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00474C54; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00474C54; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00474C54:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00474D7C; } }
L_00474C5C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 105u));
    c.budget -= 1;
L_00474C60:
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00474DCC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00474C98; } }
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00474C98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00474DCC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 105u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00474DCC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00474CE4; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00474CE4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00474CE4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00474DCC; } }
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00474DBC; } }
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[0] = ld32((c.r[17].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00474DBC; } }
    c.f[1] = ld32((c.r[17].w[0] + 120u));
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00474DA8; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00474DBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00474DAC; } }
L_00474D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474B5Cu | kUnwind; return; } goto L_00474B5C; } }
L_00474D48:
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 105u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474B5Cu | kUnwind; return; } goto L_00474B5C; } }
L_00474D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474B5Cu | kUnwind; return; } goto L_00474B5C; } }
L_00474D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474D74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 54u, depth + 1u); else { c.pc = 0x00475090u; return; } if (c.pc != 0x00474D74u) [[unlikely]] return; }
L_00474D74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474C5Cu | kUnwind; return; } goto L_00474C5C; } }
L_00474D7C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 105u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 105u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.f[0] = ld32((c.r[2].w[0] + 508u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 88u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474C5Cu | kUnwind; return; } goto L_00474C5C; } }
L_00474DA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00474DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474DB4u);  if (depth < kMaxDepth) unit_009D(c, 42u, depth + 1u); else { c.pc = 0x00474E00u; return; } if (c.pc != 0x00474DB4u) [[unlikely]] return; }
L_00474DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00474DE0; } }
L_00474DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474DC4u); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x00474DC4u) [[unlikely]] return; }
L_00474DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474DB4u | kUnwind; return; } goto L_00474DB4; } }
L_00474DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474DD4u); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x00474DD4u) [[unlikely]] return; }
L_00474DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474DB4u | kUnwind; return; } goto L_00474DB4; } }
L_00474DDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00474DE0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00474E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.f[2] = ld32((c.r[6].w[0] + 32u));
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = ld32((c.r[6].w[0] + 40u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    st8((c.r[4].w[0] + 104u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 295u));
    c.budget -= 19;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);  if (t) { goto L_00474E84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43610000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00474F00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474E70u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 205u, depth + 1u); else { c.pc = 0x00477CA0u; return; } if (c.pc != 0x00474E70u) [[unlikely]] return; }
L_00474E70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00474F00; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00474F00; } }
L_00474E84:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00474F14; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00474F14; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42440000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00474F20; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00474F2C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00474ED4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 104u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00474F00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474EF0u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 205u, depth + 1u); else { c.pc = 0x00477CA0u; return; } if (c.pc != 0x00474EF0u) [[unlikely]] return; }
L_00474EF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00474F00; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00474F00:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 104u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00474F64; } }
L_00474F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0047507C; } }
L_00474F14:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474F00u | kUnwind; return; } goto L_00474F00; } }
L_00474F20:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474ED4u | kUnwind; return; } goto L_00474ED4; } }
L_00474F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474F34u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00474F34u) [[unlikely]] return; }
L_00474F34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00474F58; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474ED4u | kUnwind; return; } goto L_00474ED4; } }
L_00474F58:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474ED4u | kUnwind; return; } goto L_00474ED4; } }
L_00474F64:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[4].w[0] + 19136u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 295u));
    c.r[2].d[0] = c.r[2].d[0] ^ 8ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474F80u); c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_009D(c, 191u, depth + 1u); else { c.pc = 0x00477960u; return; } if (c.pc != 0x00474F80u) [[unlikely]] return; }
L_00474F80:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 104u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474F94u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 170u, depth + 1u); else { c.pc = 0x00289D30u; return; } if (c.pc != 0x00474F94u) [[unlikely]] return; }
L_00474F94:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 104u));
    set32(c.r[2], 0u - 129u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 105u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] << 7);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00474FC0u); st8((c.r[16].w[0] + 105u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00474FC0u) [[unlikely]] return; }
L_00474FC0:
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    set32(c.r[4], 0u - 2u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u + 2u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 105u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 105u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 296u));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0047503C; } }
L_00474FF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 296u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0047505C; } }
L_0047500C:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 296u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00475078; } }
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474F0Cu | kUnwind; return; } goto L_00474F0C; } }
L_0047503C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 105u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00474FF8u | kUnwind; return; } goto L_00474FF8; } }
L_0047505C:
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047500Cu | kUnwind; return; } goto L_0047500C; } }
L_00475078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0047507C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00475090:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004751D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 232u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004750E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004750E0u) [[unlikely]] return; }
L_004750E0:
    st32((c.r[19].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004751D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00475100u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00475100u) [[unlikely]] return; }
L_00475100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004751D8; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047511Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047511Cu) [[unlikely]] return; }
L_0047511C:
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[6] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 224u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 232u), c.f[5]);
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 228u), c.f[3]);  if (t) { goto L_00475174; } }
L_0047516C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), 0u);  if (t) { goto L_004751D8; } }
L_00475174:
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00475188u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00475188u) [[unlikely]] return; }
L_00475188:
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[6] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 208u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    st32((c.r[29].w[0] + 216u), c.f[5]);
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 212u), c.f[3]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047516Cu | kUnwind; return; } goto L_0047516C; } }
L_004751D8:
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004752E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004751F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004751F4u) [[unlikely]] return; }
L_004751F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004752E0; } }
L_004751FC:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 762u)));
    st16((c.r[19].w[0] + 100u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 108u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004752A8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00475224u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00475224u) [[unlikely]] return; }
L_00475224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004752A8; } }
    c.r[11].d[0] = ld8((c.r[19].w[0] + 105u));
    set32(c.r[9], 0u - 9u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[19].w[0] + 105u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[10], ld32((c.r[19].w[0] + 40u)));
    c.r[9].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[10].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[10].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 108u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004752A8u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 173u, depth + 1u); else { c.pc = 0x00289DA0u; return; } if (c.pc != 0x004752A8u) [[unlikely]] return; }
L_004752A8:
    c.r[7].d[0] = ld8((c.r[19].w[0] + 105u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], 0u - 17u);
    set32(c.r[6], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 105u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[19].w[0] + 105u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00475620; } }
L_004752E0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.r[1].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00475610; } }
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00475428; } }
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - 8u);  if (t) { goto L_004753E8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.r[1].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00475330; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00475330; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00475330:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004753E8; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_0047533C:
    set32(c.r[6], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = c.r[6].d[0] << 56;
    set32(c.r[6], c.r[5].w[0] + 2u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    set32(c.r[7], c.r[7].w[0] + c.r[29].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st8((c.r[7].w[0] + 240u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    st8((c.r[6].w[0] + 240u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[5].w[0] + 3u);
    c.r[7].d[0] = c.r[6].d[0] << 56;
    set32(c.r[6], c.r[5].w[0] + 4u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    set32(c.r[7], c.r[7].w[0] + c.r[29].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st8((c.r[7].w[0] + 240u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    st8((c.r[6].w[0] + 240u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[5].w[0] + 5u);
    c.r[7].d[0] = c.r[6].d[0] << 56;
    set32(c.r[6], c.r[5].w[0] + 6u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    set32(c.r[7], c.r[7].w[0] + c.r[29].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st8((c.r[7].w[0] + 240u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    st8((c.r[6].w[0] + 240u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[5].w[0] + 7u);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    st8((c.r[6].w[0] + 240u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 42;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047533Cu | kUnwind; return; } goto L_0047533C; } }
    c.budget -= 1;
L_004753E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00475428; } }
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[3].w[0] + 240u);
    c.budget -= 2;
L_00475408:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00475408u | kUnwind; return; } goto L_00475408; } }
    c.budget -= 1;
L_00475428:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[29].w[0] + 196u);
    set32(c.r[23], c.r[29].w[0] + 200u);
    set32(c.r[30], c.r[29].w[0] + 180u);
    c.budget -= 5;
L_0047543C:
    c.r[21].d[0] = c.r[17].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.r[1].d[0] = c.r[21].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00475608; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00475608; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
L_00475468:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047547Cu); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x0047547Cu) [[unlikely]] return; }
L_0047547C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00475540; } }
    set32(c.r[2], c.r[20].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[2].w[0] + 240u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004754D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.budget -= 2;
L_004754A0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004754B8; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004754B8:
    set32(c.r[2], c.r[20].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[2].w[0] + 240u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004754A0u | kUnwind; return; } goto L_004754A0; } }
    c.budget -= 1;
L_004754D0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 19040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004754FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004754FCu) [[unlikely]] return; }
L_004754FC:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[3].w[0] + 36u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[5] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[22].w[0]), c.f[2]);
    st32((c.r[23].w[0]), c.f[4]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.budget -= 17;
L_00475540:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004755E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[20].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 19040u);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004755E0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00475588u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00475588u) [[unlikely]] return; }
L_00475588:
    set32(c.r[4], ld32((c.r[19].w[0] + 56u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[3].w[0];
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 184u);
    c.f[5] = ld32((c.r[2].w[0] + 8u));
    c.f[4] = ld32((c.r[4].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[6] = ld32((c.r[4].w[0] + 40u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    st32((c.r[30].w[0]), c.f[3]);
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[5]);  if (t) { goto L_004755E0; } }
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_004755E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004755F8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 112u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00475468u | kUnwind; return; } goto L_00475468; } }
L_004755F8:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047543Cu | kUnwind; return; } goto L_0047543C; } }
L_00475608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004751FCu | kUnwind; return; } goto L_004751FC; } }
L_00475610:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 19040u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 108u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004751FCu | kUnwind; return; } goto L_004751FC; } }
L_00475620:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00475660:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[19].w[0] + 116u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00475684u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0089(c, 36u, depth + 1u); else { c.pc = 0x00424D50u; return; } if (c.pc != 0x00475684u) [[unlikely]] return; }
L_00475684:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 156u));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    set32(c.r[2], 0u + 17u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[19].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004756C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[19].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_004756D0; } }
L_004756C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[19].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 4;
L_004756D0:
    c.f[1] = ld32((c.r[19].w[0] + 92u));
    c.r[15].d[0] = 0ull & 1ull;
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[14], 0u - 2u);
    set32(c.r[12], 0u - 3u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[10], 0u - 9u);
    set32(c.r[11], c.r[15].w[0] << 3);
    set32(c.r[8], 0u - 17u);
    set32(c.r[9], c.r[15].w[0] << 4);
    set32(c.r[6], 0u - 33u);
    set32(c.r[7], c.r[15].w[0] << 5);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[4], 0u - 65u);
    set32(c.r[5], c.r[15].w[0] << 6);
    set32(c.r[2], 0u - 129u);
    set32(c.r[3], c.r[15].w[0] << 7);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 19040u);
    st32((c.r[19].w[0] + 140u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    st32((c.r[19].w[0] + 136u), c.f[0]);
    st32((c.r[19].w[0] + 148u), c.r[24].w[0]);
    st32((c.r[19].w[0] + 80u), 0u);
    c.r[24].d[0] = ld8((c.r[19].w[0] + 105u));
    c.r[14].d[0] = c.r[24].d[0] & c.r[14].d[0];
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    st8((c.r[19].w[0] + 105u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[14].d[0] = ld8((c.r[19].w[0] + 105u));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[19].w[0] + 105u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[19].w[0] + 105u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[19].w[0] + 105u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[19].w[0] + 105u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[19].w[0] + 105u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[19].w[0] + 105u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[19].w[0] + 105u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[19].w[0] + 105u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[19].w[0] + 105u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 105u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 105u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 104u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[19].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[19].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[19].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    st32((c.r[19].w[0] + 76u), c.f[0]);
    c.budget -= 65;
L_004757D4:
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004757E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004757E8u) [[unlikely]] return; }
L_004757E8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].d[0] = c.r[18].d[0] << 56;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] + 22768u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00475808u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00475808u) [[unlikely]] return; }
L_00475808:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047581Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x002BD2E0u; return; } if (c.pc != 0x0047581Cu) [[unlikely]] return; }
L_0047581C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00475838; } }
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_00475838:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004757D4u | kUnwind; return; } goto L_004757D4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[19].w[0] + 112u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_0047588C; } }
L_00475858:
    st32((c.r[19].w[0] + 108u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    st16((c.r[19].w[0] + 100u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    st16((c.r[19].w[0] + 102u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 88u), c.f[0]);  if (t) { goto L_004758B0; } }
L_0047588C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], 0u - 513u);
    c.r[6].d[0] = ld16((c.r[3].w[0] + 29166u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(512ll);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 29166u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00475858u | kUnwind; return; } goto L_00475858; } }
L_004758B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004758D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 23664u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 23648u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 23632u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 23312u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00470000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 23024u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    set32(c.r[12], c.r[12].w[0] + 20160u);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    set32(c.r[11], c.r[11].w[0] + 8744u);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[9], 0u - 3u);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[10], c.r[2].w[0] << 1);
    st32((c.r[4].w[0] + 56u), 0u);
    set32(c.r[7], 0u - 5u);
    st32((c.r[4].w[0] + 60u), 0u);
    set32(c.r[8], c.r[2].w[0] << 2);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[2].w[0] << 6);
    st32((c.r[4].w[0]), c.r[12].w[0]);
    set32(c.r[3], 0u - 65u);
    st32((c.r[4].w[0] + 116u), c.r[11].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    st32((c.r[4].w[0] + 160u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 164u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 156u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 156u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 156u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 67;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004759DCu); st32((c.r[4].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 72u, depth + 1u); else { c.pc = 0x00475660u; return; } if (c.pc != 0x004759DCu) [[unlikely]] return; }
L_004759DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004759F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00475A08u); set32(c.r[4], c.r[16].w[0] + 116u);  if (depth < kMaxDepth) unit_0089(c, 32u, depth + 1u); else { c.pc = 0x00424A40u; return; } if (c.pc != 0x00475A08u) [[unlikely]] return; }
L_00475A08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00475A18u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 191u, depth + 1u); else { c.pc = 0x00477960u; return; } if (c.pc != 0x00475A18u) [[unlikely]] return; }
L_00475A18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00475A24u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 188u, depth + 1u); else { c.pc = 0x00477910u; return; } if (c.pc != 0x00475A24u) [[unlikely]] return; }
L_00475A24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00475A30u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 192u, depth + 1u); else { c.pc = 0x00477970u; return; } if (c.pc != 0x00475A30u) [[unlikely]] return; }
L_00475A30:
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[16].w[0] + 136u);  if (t) { goto L_00475A8C; } }
L_00475A54:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 194u);
    set32(c.r[10], c.r[4].w[0] + 544u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[11], c.r[16].w[0] + 40u);  if (t) { goto L_00475A94; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 105u));
    c.budget -= 1;
L_00475A70:
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), 0u);  if (t) { goto L_00475AF4; } }
L_00475A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00475A54u | kUnwind; return; } goto L_00475A54; } }
L_00475A94:
    c.r[9].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[5], 0u - 1u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[10].w[0]));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[10].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[11].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00475AECu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x00475AECu) [[unlikely]] return; }
L_00475AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 105u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00475A70u | kUnwind; return; } goto L_00475A70; } }
L_00475AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00475B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[3].w[0] << 9);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 29166u));
    set32(c.r[3], 0u - 513u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 116u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00475B4Cu); st16((c.r[2].w[0] + 29166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0089(c, 32u, depth + 1u); else { c.pc = 0x00424A40u; return; } if (c.pc != 0x00475B4Cu) [[unlikely]] return; }
L_00475B4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00475B5Cu); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 191u, depth + 1u); else { c.pc = 0x00477960u; return; } if (c.pc != 0x00475B5Cu) [[unlikely]] return; }
L_00475B5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00475B68u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 188u, depth + 1u); else { c.pc = 0x00477910u; return; } if (c.pc != 0x00475B68u) [[unlikely]] return; }
L_00475B68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00475B74u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 192u, depth + 1u); else { c.pc = 0x00477970u; return; } if (c.pc != 0x00475B74u) [[unlikely]] return; }
L_00475B74:
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 140u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[16].w[0] + 136u);  if (t) { goto L_00475BD0; } }
L_00475B98:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], 0u + 194u);
    set32(c.r[10], c.r[4].w[0] + 544u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[11], c.r[16].w[0] + 40u);  if (t) { goto L_00475BD8; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 105u));
    c.budget -= 1;
L_00475BB4:
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 105u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 80u), 0u);  if (t) { goto L_00475C38; } }
L_00475BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00475B98u | kUnwind; return; } goto L_00475B98; } }
L_00475BD8:
    c.r[9].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[5], 0u - 1u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[10].w[0]));
    c.r[4].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[10].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[10].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[11].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00475C30u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 192u, depth + 1u); else { c.pc = 0x0028DE10u; return; } if (c.pc != 0x00475C30u) [[unlikely]] return; }
L_00475C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 105u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00475BB4u | kUnwind; return; } goto L_00475BB4; } }
L_00475C38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00475C50:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004749F0u | kUnwind; return; } goto L_004749F0; }
L_00475C60:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00473FD0u | kUnwind; return; } [[clang::musttail]] return unit_009C(c, 430u, depth); }
L_00475C70:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00474430u | kUnwind; return; } goto L_00474430; }
L_00475C80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.f[2] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[12]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[12]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[12]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 22;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[2].w[0] + 8u), c.f[0]);  if (t) { goto L_00476008; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 106u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[4].w[0] + 106u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 106u));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00475F38; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00475D24; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00475D40; } }
L_00475D24:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00475D40:
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
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
    set32(c.r[5], c.f[1]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 16);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 106u));
    c.budget -= 29;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00475DC0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00475DDC; } }
L_00475DC0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00475DDC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 107u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00475DF4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00475E10; } }
L_00475DF4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00475E10:
    c.f[3] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 56u), c.f[0]);  if (t) { goto L_00475F40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00475FE8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 103u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_00475E94; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00475EB0; } }
L_00475E94:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00475EB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    c.r[3].d[0] = c.r[2].d[0] | 52428ull;
    c.f[0] = c.r[3].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00476008; } }
L_00475F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047600C; } }
L_00475F40:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 103u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_00475F58; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00475F74; } }
L_00475F58:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00475F74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[3].d[0] = 0ull | 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[3].d[0] = c.r[3].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[1]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00476008; } }
L_00475FE8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 103u));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
L_00476008:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0047600C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00476020:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[3] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.f[4] = c.r[7].w[0];
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.f[5] = ld32((c.r[29].w[0] + 92u));
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[4].w[0] + 5u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[4]);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull; c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);  if (t) { goto L_00476088; } }
L_00476080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004761F0; } }
L_00476088:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[7].w[0] << 2);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    st32((c.r[16].w[0] + 16u), c.f[3]);
    st32((c.r[16].w[0] + 20u), c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004760C4u); st32((c.r[16].w[0] + 28u), c.f[5]);  if (depth < kMaxDepth) unit_0087(c, 185u, depth + 1u); else { c.pc = 0x0041F110u; return; } if (c.pc != 0x004760C4u) [[unlikely]] return; }
L_004760C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.f[2] = ld32((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 100u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 328u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 101u));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 102u));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 103u));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[2]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 104u));
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476164u); st32((c.r[29].w[0] + 108u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x00476164u) [[unlikely]] return; }
L_00476164:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 255u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476190u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x00476190u) [[unlikely]] return; }
L_00476190:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 90u));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 91u));
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[7], c.r[7].w[0] + 396u);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004761C0u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x004761C0u) [[unlikely]] return; }
L_004761C0:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 260u);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004761E0u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x004761E0u) [[unlikely]] return; }
L_004761E0:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476080u | kUnwind; return; } goto L_00476080; } }
L_004761F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00476210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[16], c.r[5].w[0] << 7);
    set32(c.r[6], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004762E0; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 5u));
    c.budget -= 1;
L_0047625C:
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004762D8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 3;
L_00476274:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_004762C8; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 5u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 5u));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_004762D8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_004762D8; } }
L_004762C8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476274u | kUnwind; return; } goto L_00476274; } }
L_004762D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004762FC; } }
L_004762E0:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004762F4u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x004762F4u) [[unlikely]] return; }
L_004762F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[17].w[0] + 5u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047625Cu | kUnwind; return; } goto L_0047625C; } }
L_004762FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00476310:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C120u | kUnwind; return; } [[clang::musttail]] return unit_0083(c, 10u, depth); }
L_00476320:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_00476360; } }
L_00476358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00476440; } }
L_00476360:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00476364:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047637Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 100u, depth + 1u); else { c.pc = 0x00475C80u; return; } if (c.pc != 0x0047637Cu) [[unlikely]] return; }
L_0047637C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004763A4; } }
    c.budget -= 1;
L_00476388:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476364u | kUnwind; return; } goto L_00476364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476358u | kUnwind; return; } goto L_00476358; } }
L_004763A4:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 5u));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00476420; } }
    c.budget -= 1;
L_004763E8:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476388u | kUnwind; return; } goto L_00476388; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476388u | kUnwind; return; } goto L_00476388; } }
L_00476420:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476434u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x00476434u) [[unlikely]] return; }
L_00476434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004763E8u | kUnwind; return; } goto L_004763E8; } }
    c.budget -= 1;
L_00476440:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00476460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004764D8; } }
L_00476484:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[6].w[0] + 4u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] + 12u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00476528; } }
L_004764C0:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[17].w[0] + 5u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476484u | kUnwind; return; } goto L_00476484; } }
L_004764D8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00476548; } }
L_004764E8:
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[7], c.r[3].w[0] << 7);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004764E8u | kUnwind; return; } goto L_004764E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00476548; } }
L_00476528:
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047653Cu); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x0047653Cu) [[unlikely]] return; }
L_0047653C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004764C0u | kUnwind; return; } goto L_004764C0; } }
    c.budget -= 1;
L_00476548:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00476560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0047658C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476588u); set32(c.r[5], c.r[5].w[0] + 26048u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x00476588u) [[unlikely]] return; }
L_00476588:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_0047658C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004765A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004765A0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004765A0u) [[unlikely]] return; }
L_004765A0:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004765A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004765ACu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0082(c, 390u, depth + 1u); else { c.pc = 0x0040BFC0u; return; } if (c.pc != 0x004765ACu) [[unlikely]] return; }
L_004765AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004765C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004765F0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004765F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004765F0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004765F0u) [[unlikely]] return; }
L_004765F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00476610:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 22776u);  if (t) { goto L_004766F0; } }
L_0047665C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047667Cu); set32(c.r[5], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0047667Cu) [[unlikely]] return; }
L_0047667C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004766D8; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004766F0; } }
L_004766D8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047665Cu | kUnwind; return; } goto L_0047665C; } }
    c.budget -= 1;
L_004766F0:
    set32(c.r[19], c.r[29].w[0] + 156u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[29].w[0] + 152u), 0u);
    set32(c.r[2], c.r[2].w[0] + 22776u);
    st32((c.r[19].w[0]), 0u);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 64u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047672Cu); st32((c.r[6].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 14u, depth + 1u); else { c.pc = 0x0040C1A0u; return; } if (c.pc != 0x0047672Cu) [[unlikely]] return; }
L_0047672C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476738u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0082(c, 357u, depth + 1u); else { c.pc = 0x0040BA70u; return; } if (c.pc != 0x00476738u) [[unlikely]] return; }
L_00476738:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + 15u);
    set32(c.r[3], c.r[3].w[0] >> 4);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld8((c.r[17].w[0] + 4u));  if (t) { goto L_0047676C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476768u); set32(c.r[5], c.r[5].w[0] + 26048u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x00476768u) [[unlikely]] return; }
L_00476768:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_0047676C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004767CC; } }
L_00476774:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld8((c.r[17].w[0] + 4u));  if (t) { goto L_0047678C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476788u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00476788u) [[unlikely]] return; }
L_00476788:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_0047678C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00476800; } }
L_00476794:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00476810; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_004767A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004768B4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004767C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004767C0u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004767C0u) [[unlikely]] return; }
L_004767C0:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_004768B8; } }
L_004767CC:
    set32(c.r[2], c.r[16].w[0] << 7);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004767D8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004767D8u) [[unlikely]] return; }
L_004767D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00470000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 26848u);
    set32(c.r[6], c.r[6].w[0] + 26048u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004767F8u); set32(c.r[7], 0u + 128u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004767F8u) [[unlikely]] return; }
L_004767F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476774u | kUnwind; return; } goto L_00476774; } }
L_00476800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476808u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00476808u) [[unlikely]] return; }
L_00476808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476794u | kUnwind; return; } goto L_00476794; } }
L_00476810:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[18].d[0] = c.r[21].d[0] & 255ull;
    set32(c.r[16], c.r[18].w[0] << 7);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[17].w[0] + 44u);
    set32(c.r[20], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[20].w[0] + 116u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476838u); c.r[5].d[0] = ld16((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x00476838u) [[unlikely]] return; }
L_00476838:
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[21].w[0] + 1u);
    c.r[5].d[0] = ld16((c.r[20].w[0]));
    c.r[21].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] >> 16);
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 16u), 0u);
    st32((c.r[20].w[0] + 20u), 0u);
    st32((c.r[20].w[0] + 24u), 0u);
    st32((c.r[20].w[0] + 28u), c.f[20]);
    st32((c.r[20].w[0] + 32u), 0u);
    st32((c.r[20].w[0] + 36u), 0u);
    st32((c.r[20].w[0] + 40u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 4u));
    c.r[3].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 29;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476810u | kUnwind; return; } goto L_00476810; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004767A8u | kUnwind; return; } goto L_004767A8; } }
L_004768B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_004768B8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004768E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004768F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[8].w[0]), 0u);
    c.f[1] = c.r[3].w[0];
    c.f[4] = ld32((c.r[7].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.f[12] = ld32((c.r[7].w[0]));
    c.f[3] = ld32((c.r[6].w[0]));
    c.f[7] = ld32((c.r[7].w[0] + 8u));
    c.f[9] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    c.f[10] = fp::ee::sub(c.fcr31, c.f[12], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[11] = fp::ee::sub(c.fcr31, c.f[7], c.f[9]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[10]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[11]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[2]);
    c.f[10] = fp::ee::mul(c.fcr31, c.f[10], c.f[1]);
    c.f[11] = fp::ee::mul(c.fcr31, c.f[11], c.f[1]);
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[5] = ld32((c.r[7].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.f[6] = c.f[12];
    c.budget -= 29;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[8] = c.f[3];  if (t) { goto L_00476BB4; } }
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00476974; } }
    c.f[6] = c.f[0];
    c.budget -= 1;
L_00476974:
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00476BBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0047699C; } }
    c.f[7] = c.f[0];
    c.budget -= 1;
L_0047699C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[24], 0u - 1u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[6]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29752u)));
    c.r[15].d[0] = c.r[24].d[0] + 0ull;
    set32(c.r[13], c.r[13].w[0] + 22800u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[12], c.f[3]);
    set32(c.r[9], c.r[5].w[0] >> 4);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[7]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.f[13] = c.r[10].w[0];
    c.f[0] = c.r[11].w[0];
    set32(c.r[5], c.r[5].w[0] >> 4);
    c.budget -= 21;
L_004769F0:
    c.f[8] = fp::ee::add(c.fcr31, c.f[8], c.f[10]);
    c.f[14] = fp::ee::add(c.fcr31, c.f[2], c.f[8]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[9], c.f[11]);
    c.f[15] = fp::cvt_w_s(c.f[14]);
    set32(c.r[10], c.f[15]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[2], c.f[9]);
    set32(c.r[12], c.r[10].w[0] >> 4);
    c.f[15] = fp::cvt_w_s(c.f[12]);
    set32(c.r[10], c.f[15]);
    c.budget -= 11;
    { const bool t = c.r[12].d[0] != c.r[24].d[0]; set32(c.r[11], c.r[10].w[0] >> 4);  if (t) { goto L_00476A28; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == c.r[15].d[0];  if (t) { goto L_00476B90; } }
    c.budget -= 1;
L_00476A28:
    c.f[14] = fp::cvt_w_s(c.f[14]);
    set32(c.r[10], c.f[14]);
    c.f[12] = fp::cvt_w_s(c.f[12]);
    set32(c.r[15], c.r[10].w[0] >> 4);
    set32(c.r[10], c.r[15].w[0] << 4);
    set32(c.r[15], c.r[10].w[0] - c.r[15].w[0]);
    set32(c.r[10], c.r[15].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] - c.r[15].w[0]);
    set32(c.r[15], c.f[12]);
    set32(c.r[10], c.r[10].w[0] << 8);
    set32(c.r[24], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[15], c.r[15].w[0] >> 4);
    set32(c.r[10], c.r[15].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] + c.r[15].w[0]);
    set32(c.r[10], c.r[10].w[0] << 5);
    set32(c.r[10], c.r[24].w[0] + c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[10].w[0] + 264u)));
    c.budget -= 19;
    { const bool t = c.r[10].d[0] == 0ull;  if (t) { goto L_00476B88; } }
    c.budget -= 1;
L_00476A78:
    c.r[15].d[0] = ld8((c.r[10].w[0] + 523u));
    c.r[15].d[0] = c.r[15].d[0] << 62;
    c.r[15].d[0] = c.r[15].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_00476BCC; } }
    c.r[15].d[0] = ld8((c.r[10].w[0] + 523u));
    c.r[15].d[0] = c.r[15].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_00476BD8; } }
    set32(c.r[15], ld32((c.r[10].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_00476BE0; } }
    c.r[24].d[0] = ld8((c.r[15].w[0] + 1572u));
    set32(c.r[15], ld32((c.r[15].w[0] + 4u)));
    c.r[15].d[0] = c.r[24].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.r[15].d[0] = c.r[24].d[0] & 255ull;
    set32(c.r[24], c.r[15].w[0] << 6);
    set32(c.r[15], ld32((c.r[10].w[0] + 348u)));
    set32(c.r[15], c.r[15].w[0] + c.r[24].w[0]);
    c.budget -= 8;
L_00476AC8:
    c.f[19] = ld32((c.r[6].w[0] + 4u));
    c.f[18] = ld32((c.r[7].w[0] + 4u));
    c.f[14] = ld32((c.r[15].w[0] + 52u));
    c.f[17] = ld32((c.r[6].w[0] + 8u));
    c.f[16] = ld32((c.r[7].w[0] + 8u));
    c.f[12] = ld32((c.r[15].w[0] + 56u));
    c.f[15] = ld32((c.r[15].w[0] + 48u));
    c.f[20] = fp::ee::sub(c.fcr31, c.f[18], c.f[19]);
    c.f[14] = fp::ee::sub(c.fcr31, c.f[14], c.f[19]);
    c.f[19] = fp::ee::sub(c.fcr31, c.f[16], c.f[17]);
    c.f[16] = fp::ee::sub(c.fcr31, c.f[12], c.f[17]);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[19], c.f[19]);
    c.f[18] = fp::ee::div(c.fcr31, c.f[0], c.f[12]);
    c.f[17] = fp::ee::sub(c.fcr31, c.f[15], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[14], c.f[20]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[17], c.f[1]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[20], c.f[18]);
    c.f[15] = fp::ee::madd(c.fcr31, c.facc, c.f[16], c.f[19]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[12], c.f[15]);
    c.f[12] = fp::ee::sub(c.fcr31, c.f[14], c.f[12]);
    c.facc = fp::ee::mul(c.fcr31, c.f[12], c.f[12]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[19], c.f[18]);
    c.f[14] = fp::ee::mul(c.fcr31, c.f[1], c.f[18]);
    c.f[14] = fp::ee::mul(c.fcr31, c.f[14], c.f[15]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[12], c.f[15]);
    c.f[14] = fp::ee::sub(c.fcr31, c.f[17], c.f[14]);
    c.f[15] = ld32((c.r[10].w[0] + 192u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[16], c.f[12]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[14], c.f[14]);
    c.f[14] = fp::ee::madd(c.fcr31, c.facc, c.f[12], c.f[12]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[13], c.f[15]);
    c.f[12] = fp::ee::mul(c.fcr31, c.f[12], c.f[15]);
    fpu_compare(c, fp::key(c.f[14]) < fp::key(c.f[12]));
    c.budget -= 37;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00476B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[14].d[0] + 0ull;  if (t) { goto L_00476B70; } }
    c.budget -= 1;
L_00476B68:
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00476B70:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_00476BE8; } }
    set32(c.r[10], ld32((c.r[10].w[0] + 1572u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476A78u | kUnwind; return; } goto L_00476A78; } }
    c.budget -= 1;
L_00476B88:
    c.r[24].d[0] = c.r[12].d[0] + 0ull;
    c.r[15].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 2;
L_00476B90:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[9].d[0];  if (t) { goto L_00476BA0; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004769F0u | kUnwind; return; } goto L_004769F0; } }
L_00476BA0:
    st32((c.r[4].w[0]), c.f[6]);
    st32((c.r[4].w[0] + 4u), c.f[4]);
    st32((c.r[4].w[0] + 8u), c.f[7]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[5]);  if (t) { goto L_00476C3C; } }
L_00476BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[6] = c.f[1];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476974u | kUnwind; return; } goto L_00476974; } }
L_00476BBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.f[0] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[7] = c.f[0] ^ fp::kSign;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047699Cu | kUnwind; return; } goto L_0047699C; } }
L_00476BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476B70u | kUnwind; return; } goto L_00476B70; } }
    c.budget -= 1;
L_00476BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476B70u | kUnwind; return; } goto L_00476B70; } }
L_00476BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[13].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476AC8u | kUnwind; return; } goto L_00476AC8; } }
L_00476BE8:
    st32((c.r[8].w[0]), c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[10].w[0] + 344u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00476C30; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[10].w[0] + 348u)));
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 7;
L_00476C14:
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[2]);  if (t) { goto L_00476C3C; } }
L_00476C30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 22800u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476C14u | kUnwind; return; } goto L_00476C14; } }
L_00476C3C:
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00476C50:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    set32(c.r[2], c.r[29].w[0] + 308u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[8].w[0] + 4u));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[5] = ld32((c.r[8].w[0] + 8u));
    c.f[4] = ld32((c.r[7].w[0] + 8u));
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[7].w[0]));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[2]);
    c.f[13] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 312u);
    st32((c.r[29].w[0] + 304u), c.f[12]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476CE0u); st32((c.r[2].w[0]), c.f[13]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x00476CE0u) [[unlikely]] return; }
L_00476CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[8].d[0] = 0ull | 0ull;
    c.f[8] = c.r[2].w[0];
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    set32(c.r[23], c.r[29].w[0] + 292u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[8].d[0] = c.r[8].d[0] | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.f[6] = c.r[2].w[0];
    st32((c.r[23].w[0]), 0u);
    c.f[7] = fp::ee::add(c.fcr31, c.f[8], c.f[0]);
    set32(c.r[21], c.r[29].w[0] + 296u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.f[4] = c.r[2].w[0];
    set32(c.r[16], c.r[29].w[0] + 280u);
    c.f[5] = fp::ee::mul(c.fcr31, c.f[6], c.f[7]);
    set32(c.r[30], c.r[29].w[0] + 276u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    st32((c.r[29].w[0] + 288u), 0u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 272u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 296u));
    set32(c.r[2], c.f[5]);
    c.f[1] = ld32((c.r[29].w[0] + 300u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.f[21] = 0u;
    st32((c.r[16].w[0]), c.f[2]);
    c.f[2] = c.r[7].w[0];
    st32((c.r[29].w[0] + 284u), c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[21], c.f[7]);
    c.f[22] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[8]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 292u));
    set32(c.r[7], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[8], c.f[7]);
    c.r[6].d[0] = c.r[6].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.facc = fp::ee::add(c.fcr31, c.f[21], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[6], c.f[1]);
    set32(c.r[2], c.f[0]);
    c.f[5] = c.r[5].w[0];
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.f[5] = fp::ee::add(c.fcr31, c.f[2], c.f[5]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[30].w[0]), c.f[3]);
    c.f[3] = c.r[3].w[0];
    c.f[5] = fp::cvt_w_s(c.f[5]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[5] = fp::cvt_s_w(c.f[5]);
    c.f[24] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[5]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[21], c.f[1]);
    c.f[12] = c.f[22];
    c.budget -= 70;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476DF8u); c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[3]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00476DF8u) [[unlikely]] return; }
L_00476DF8:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476E04u); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x00476E04u) [[unlikely]] return; }
L_00476E04:
    c.f[2] = ld32((c.r[21].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 288u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[22] = ld32((c.r[29].w[0] + 272u));
    c.f[12] = c.f[24];
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[23]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[23]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476E34u); st32((c.r[21].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00476E34u) [[unlikely]] return; }
L_00476E34:
    c.f[12] = c.f[24];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476E40u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x00476E40u) [[unlikely]] return; }
L_00476E40:
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 272u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[12] = c.f[20];
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[21]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476E6Cu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00476E6Cu) [[unlikely]] return; }
L_00476E6C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476E78u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x00476E78u) [[unlikely]] return; }
L_00476E78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 13120u);
    c.f[10] = 0u;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[7] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[9] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[20]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[20]);
    c.f[3] = ld32((c.r[23].w[0]));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[7] = fp::ee::add(c.fcr31, c.f[7], c.f[10]);
    c.f[6] = ld32((c.r[18].w[0] + 8u));
    c.f[5] = ld32((c.r[18].w[0]));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[7]);
    c.f[8] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[1]);
    st32((c.r[23].w[0]), c.f[3]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[3] = fp::ee::add(c.fcr31, c.f[6], c.f[8]);
    c.f[4] = ld32((c.r[29].w[0] + 288u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[9]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    c.f[5] = ld32((c.r[18].w[0] + 4u));
    c.f[4] = ld32((c.r[18].w[0] + 8u));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 272u));
    c.f[1] = ld32((c.r[30].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[5] = fp::ee::add(c.fcr31, c.f[5], c.f[10]);
    st32((c.r[29].w[0] + 332u), 0u);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[8]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[9]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[5]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[30].w[0]), c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 264u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 268u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 57;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00476F5Cu); set32(c.r[6], c.r[29].w[0] + 256u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00476F5Cu) [[unlikely]] return; }
L_00476F5C:
    c.f[5] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    c.f[4] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[3] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 308u);
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0]));
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.f[0] = ld32((c.r[19].w[0]));
    set32(c.r[7], c.r[29].w[0] + 224u);
    c.f[12] = 0u;
    set32(c.r[8], 0u + 1u);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.r[9].d[0] = 0ull + 0ull;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 316u), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 312u);
    st32((c.r[2].w[0]), c.f[2]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476FBCu); st32((c.r[29].w[0] + 304u), c.f[0]);  if (depth < kMaxDepth) unit_003B(c, 14u, depth + 1u); else { c.pc = 0x002EC240u; return; } if (c.pc != 0x00476FBCu) [[unlikely]] return; }
L_00476FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00477060; } }
L_00476FC4:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00476FDCu); set32(c.r[8], c.r[29].w[0] + 332u);  if (depth < kMaxDepth) unit_009D(c, 148u, depth + 1u); else { c.pc = 0x004768F0u; return; } if (c.pc != 0x00476FDCu) [[unlikely]] return; }
L_00476FDC:
    c.f[2] = ld32((c.r[29].w[0] + 196u));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.f[3] = ld32((c.r[29].w[0] + 192u));
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[2].w[0]), c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 264u);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 268u);
    st32((c.r[29].w[0] + 256u), c.f[3]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00477090; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 20192u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047702Cu); set32(c.r[7], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_009E(c, 163u, depth + 1u); else { c.pc = 0x0047AB00u; return; } if (c.pc != 0x0047702Cu) [[unlikely]] return; }
L_0047702C:
    c.f[1] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004770BC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004770D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477058u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0034(c, 43u, depth + 1u); else { c.pc = 0x002D08C0u; return; } if (c.pc != 0x00477058u) [[unlikely]] return; }
L_00477058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  if (t) { goto L_004770D4; } }
L_00477060:
    c.f[2] = ld32((c.r[29].w[0] + 228u));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.f[3] = ld32((c.r[29].w[0] + 224u));
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    st32((c.r[2].w[0]), c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 264u);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 268u);
    st32((c.r[29].w[0] + 256u), c.f[3]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00476FC4u | kUnwind; return; } goto L_00476FC4; } }
L_00477090:
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[4].w[0] + 20192u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[6], c.r[29].w[0] + 272u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004770B0u); set32(c.r[7], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_009E(c, 171u, depth + 1u); else { c.pc = 0x0047ACC0u; return; } if (c.pc != 0x004770B0u) [[unlikely]] return; }
L_004770B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047702Cu | kUnwind; return; } goto L_0047702C; } }
L_004770BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477058u | kUnwind; return; } goto L_00477058; } }
L_004770D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 1;
L_004770D4:
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
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00477120:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[0] = ld32((c.r[28].w[0] - 31244u));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[28].w[0] - 29672u));
    c.f[2] = c.r[3].w[0];
    c.f[21] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 40u)));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.f[29] = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    set32(c.r[5], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 32;
    { const bool t = c.r[5].d[0] == 0ull; c.f[28] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);  if (t) { goto L_00477500; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004771BC; } }
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 2;
L_004771BC:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004771D4; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1572u));
    c.budget -= 1;
L_004771D4:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004771E4:
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.f[24] = ld32((c.r[2].w[0] + 52u));
    c.f[26] = ld32((c.r[2].w[0] + 56u));
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.f[25] = ld32((c.r[2].w[0] + 48u));  if (t) { goto L_0047750C; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1581u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00477214; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_00477214:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00477224:
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    set32(c.r[16], c.r[29].w[0] + 152u);
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    set32(c.r[17], c.r[29].w[0] + 148u);
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[25], c.f[0]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[2]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[23] = fp::ee::sub(c.fcr31, c.f[26], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[23]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[22]);
    c.f[27] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[20] = fp::ee::sub(c.fcr31, c.f[24], c.f[1]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477278u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00477278u) [[unlikely]] return; }
L_00477278:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.f[1] = c.r[3].w[0];
    c.f[4] = 0u;
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[27], c.f[0]);
    c.f[6] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 112u));
    c.f[2] = ld32((c.r[2].w[0] + 40u));
    c.f[1] = ld32((c.r[2].w[0] + 120u));
    c.f[5] = ld32((c.r[2].w[0] + 36u));
    c.f[3] = ld32((c.r[2].w[0] + 116u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[0]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[28]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[5] = fp::ee::sub(c.fcr31, c.f[5], c.f[3]);  if (t) { goto L_004773B8; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[29]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004773B8; } }
    c.f[3] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    set32(c.r[3], c.r[29].w[0] + 116u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[20]);
    c.f[7] = fp::ee::div(c.fcr31, c.f[7], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[22], c.f[22]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[23]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[20], c.f[6]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[23], c.f[5]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[22], c.f[6]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[22], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[2]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[2]);
    c.f[2] = c.f[3] & fp::kAbs;
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[3].w[0]), c.f[3]);
    c.f[1] = ld32((c.r[28].w[0] - 31240u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 33;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00477358; } }
    c.f[7] = c.f[4];
    c.budget -= 1;
L_00477358:
    c.f[2] = fp::ee::mul(c.fcr31, c.f[0], c.f[7]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = 0u;
    c.f[3] = ld32((c.r[28].w[0] - 32272u));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[25]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[6], c.f[7]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[26]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477380u); c.f[26] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00477380u) [[unlikely]] return; }
L_00477380:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.f[25] = fp::ee::madd(c.fcr31, c.facc, c.f[23], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[26]);
    c.f[26] = fp::ee::msub(c.fcr31, c.facc, c.f[22], c.f[1]);
    c.budget -= 14;
L_004773B8:
    st32((c.r[18].w[0] + 16u), c.f[25]);
    set32(c.r[10], c.r[29].w[0] + 132u);
    st32((c.r[18].w[0] + 20u), c.f[24]);
    set32(c.r[6], c.r[29].w[0] + 136u);
    st32((c.r[18].w[0] + 24u), c.f[26]);
    st32((c.r[18].w[0] + 28u), c.f[21]);
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[24], c.f[1]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[25], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[26], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[2]);
    st32((c.r[10].w[0]), c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 5u));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047747C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 31232u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0047747C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0047742C; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00477448; } }
L_0047742C:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00477448:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = ld32((c.r[28].w[0] - 31236u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[10].w[0]));
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[3]);
    st32((c.r[10].w[0]), c.f[0]);
    c.budget -= 13;
L_0047747C:
    c.f[5] = ld32((c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[4] = ld32((c.r[6].w[0]));
    set32(c.r[4], c.r[4].w[0] - 13208u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[8], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.f[2] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = c.r[2].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[10].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004774F0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0091(c, 121u, depth + 1u); else { c.pc = 0x00445A60u; return; } if (c.pc != 0x004774F0u) [[unlikely]] return; }
L_004774F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00477518; } }
L_00477500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 22800u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004771E4u | kUnwind; return; } goto L_004771E4; } }
L_0047750C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 22800u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477224u | kUnwind; return; } goto L_00477224; } }
L_00477518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00477560:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[3].d[0] | 55050ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[1] = c.r[4].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[28].w[0] - 28352u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 25;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[28].w[0] - 28352u), c.f[1]);  if (t) { goto L_004775CC; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[28].w[0] - 28352u), c.f[0]);
    c.budget -= 2;
L_004775CC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 31252u)));
    set32(c.r[6], c.r[29].w[0] + 255u);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 31250u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31249u));
    set32(c.r[7], ld32((c.r[28].w[0] - 28356u)));
    st16((c.r[29].w[0] + 252u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 254u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = c.r[7].d[0] == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00477628; } }
L_004775F0:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 56u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00477618; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 48u));
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00477618; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00477618:
    set32(c.r[7], ld32((c.r[7].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004775F0u | kUnwind; return; } goto L_004775F0; } }
    c.budget -= 1;
L_00477628:
    set32(c.r[16], ld32((c.r[28].w[0] - 28356u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00477870; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[30], c.r[29].w[0] + 196u);
    c.f[22] = c.r[3].w[0];
    set32(c.r[20], c.r[29].w[0] + 216u);
    c.f[21] = 0u;
    set32(c.r[19], c.r[29].w[0] + 184u);
    set32(c.r[18], c.r[29].w[0] + 200u);
    set32(c.r[17], c.r[29].w[0] + 192u);
    set32(c.r[21], c.r[29].w[0] + 208u);
    set32(c.r[22], c.r[29].w[0] + 232u);
    set32(c.r[23], c.r[29].w[0] + 224u);
    c.budget -= 11;
L_00477660:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 56u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00477860; } }
    set32(c.r[2], c.r[29].w[0] + 236u);
    st32((c.r[2].w[0]), c.f[22]);
    set32(c.r[2], c.r[29].w[0] + 188u);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 204u);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[2].w[0]), c.f[21]);
    c.f[20] = ld32((c.r[28].w[0] - 28352u));
    set32(c.r[2], c.r[29].w[0] + 220u);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[2].w[0]), c.f[21]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[12] = c.f[20];
    st32((c.r[30].w[0]), c.f[22]);
    st32((c.r[19].w[0]), c.f[21]);
    st32((c.r[18].w[0]), c.f[21]);
    st32((c.r[17].w[0]), c.f[21]);
    st32((c.r[21].w[0]), c.f[21]);
    st32((c.r[22].w[0]), c.f[21]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004776D8u); st32((c.r[23].w[0]), c.f[21]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004776D8u) [[unlikely]] return; }
L_004776D8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004776E4u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004776E4u) [[unlikely]] return; }
L_004776E4:
    c.f[7] = ld32((c.r[19].w[0]));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[8] = ld32((c.r[29].w[0] + 176u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[5] = ld32((c.r[18].w[0]));
    c.f[6] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[20].w[0]));
    c.f[4] = ld32((c.r[21].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[7]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[0]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[7]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[8], c.f[20]);
    st32((c.r[19].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[6], c.f[20]);
    st32((c.r[18].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[21].w[0]), c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.f[2] = ld32((c.r[22].w[0]));
    c.f[3] = ld32((c.r[23].w[0]));
    st32((c.r[20].w[0]), c.f[1]);
    c.f[5] = ld32((c.r[16].w[0] + 32u));
    c.f[4] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.f[3] = ld32((c.r[16].w[0] + 36u));
    c.f[2] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[23].w[0]), c.f[1]);
    st32((c.r[22].w[0]), c.f[0]);
    c.budget -= 39;
L_00477780:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[0] = ld32((c.r[4].w[0]));
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477780u | kUnwind; return; } goto L_00477780; } }
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], c.r[16].w[0] + 8u);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 1056u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1064u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0] + 1064u), c.r[4].w[0]);
    c.budget -= 37;
L_00477860:
    set32(c.r[16], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477660u | kUnwind; return; } goto L_00477660; } }
    c.budget -= 1;
L_00477870:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
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
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_004778B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004778CCu); set32(c.r[4], c.r[4].w[0] + 20192u);  if (depth < kMaxDepth) unit_009E(c, 157u, depth + 1u); else { c.pc = 0x0047AA20u; return; } if (c.pc != 0x004778CCu) [[unlikely]] return; }
L_004778CC:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004778E0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00476C50u | kUnwind; return; } goto L_00476C50; }
L_004778F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));  c.pc = t; return; }
L_00477900:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  c.pc = t; return; }
L_00477910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00477934; } }
L_0047792C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0047794C; } }
L_00477934:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[5].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477944u); set32(c.r[4], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_00A2(c, 114u, depth + 1u); else { c.pc = 0x00489B50u; return; } if (c.pc != 0x00477944u) [[unlikely]] return; }
L_00477944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0047792Cu | kUnwind; return; } goto L_0047792C; } }
L_0047794C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00477960:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00477970:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00477990:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[20] = ld32((c.r[29].w[0] + 108u));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28208u);
    set32(c.r[5], 0u + 135u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004779D4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x004779D4u) [[unlikely]] return; }
L_004779D4:
    set32(c.r[6], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[6].w[0] + 8u), 0u);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 32u), c.r[18].w[0]);
    st32((c.r[6].w[0] + 36u), c.r[17].w[0]);
    st8((c.r[6].w[0] + 40u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[5], ld32((c.r[6].w[0] + 36u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 344u)));
    c.budget -= 13;
    { const bool t = c.r[7].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 40u)));  if (t) { goto L_00477A6C; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00477A24; } }
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 2;
L_00477A24:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[4].d[0] = c.r[8].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00477A3C; } }
    c.r[8].d[0] = ld8((c.r[7].w[0] + 1572u));
    c.budget -= 1;
L_00477A3C:
    set32(c.r[3], ld32((c.r[5].w[0] + 348u)));
    c.r[4].d[0] = c.r[8].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_00477A4C:
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[6].w[0] + 16u), c.f[0]);
    st32((c.r[6].w[0] + 20u), c.f[2]);
    st32((c.r[6].w[0] + 24u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 28u), c.f[20]);  if (t) { goto L_00477A78; } }
L_00477A6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 22800u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477A4Cu | kUnwind; return; } goto L_00477A4C; } }
L_00477A78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00477AA0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[2].w[0]));  c.pc = t; return; }
L_00477AB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 136u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477AE4u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x00477AE4u) [[unlikely]] return; }
L_00477AE4:
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00477B00; } }
L_00477AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00477B54; } }
L_00477B00:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = ld32((c.r[17].w[0] + 36u));
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[2] = 0u;
    c.f[3] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 52u), c.f[3]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477B48u); set32(c.r[4], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_00A2(c, 120u, depth + 1u); else { c.pc = 0x00489C80u; return; } if (c.pc != 0x00477B48u) [[unlikely]] return; }
L_00477B48:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477AF8u | kUnwind; return; } goto L_00477AF8; } }
L_00477B54:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00477B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0] + 64u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00477BC4; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[3], 0u + 5168u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], ld32((c.r[6].w[0] + 168u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00477BC4; } }
    set32(c.r[4], c.r[6].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477BC4u); set32(c.r[5], c.r[7].w[0] + 64u);  if (depth < kMaxDepth) unit_00A2(c, 114u, depth + 1u); else { c.pc = 0x00489B50u; return; } if (c.pc != 0x00477BC4u) [[unlikely]] return; }
L_00477BC4:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00477C88; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00477C88; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 811u));
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00477C04; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00477C04:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00477C58; } }
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00477C78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
L_00477C40:
    set32(c.r[3], ld32((c.r[28].w[0] - 31248u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00477C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00477C70; } }
L_00477C58:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00477C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00477C8C; } }
L_00477C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 171u, depth + 1u); else { c.pc = 0x00477120u; return; } if (c.pc != 0x00477C80u) [[unlikely]] return; }
L_00477C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477C40u | kUnwind; return; } goto L_00477C40; } }
L_00477C88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00477C8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00477CA0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00477CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00477D18; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_00477CEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00477D30; } }
L_00477D18:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477D28u); set32(c.r[4], c.r[2].w[0] + 160u);  if (depth < kMaxDepth) unit_00A2(c, 114u, depth + 1u); else { c.pc = 0x00489B50u; return; } if (c.pc != 0x00477D28u) [[unlikely]] return; }
L_00477D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477CECu | kUnwind; return; } goto L_00477CEC; } }
L_00477D30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00477D50:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[5], 0u - 1u);
    st32((c.r[3].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00477D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00477E10; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00477DAC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00477DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477DA8u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00477DA8u) [[unlikely]] return; }
L_00477DA8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_00477DAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00477DD8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00477DD4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00477E18; } }
L_00477DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477DD4u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00477DD4u) [[unlikely]] return; }
L_00477DD4:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_00477DD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00477DF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00477DF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477DF4u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00477DF4u) [[unlikely]] return; }
L_00477DF4:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_00477DF8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00477E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477E10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00477E10u) [[unlikely]] return; }
L_00477E10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00477E20; } }
L_00477E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28348u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477DCCu | kUnwind; return; } goto L_00477DCC; } }
L_00477E20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00477E40:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 31228u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00477E50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 28u), c.f[27]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 140u));
    c.f[22] = c.r[2].w[0];
    c.budget -= 23;
L_00477EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477EB4u); set32(c.r[4], c.r[28].w[0] - 28336u);  if (depth < kMaxDepth) unit_000F(c, 416u, depth + 1u); else { c.pc = 0x0023FBE0u; return; } if (c.pc != 0x00477EB4u) [[unlikely]] return; }
L_00477EB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBEA00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.r[2].d[0] = c.r[2].d[0] | 55676ull;
    c.r[3].d[0] = c.r[3].d[0] | 55676ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[28].w[0] - 28336u);
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477EE4u); c.f[23] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 416u, depth + 1u); else { c.pc = 0x0023FBE0u; return; } if (c.pc != 0x00477EE4u) [[unlikely]] return; }
L_00477EE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[27] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477F10u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00477F10u) [[unlikely]] return; }
L_00477F10:
    c.f[12] = c.f[23];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477F1Cu); c.f[26] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x00477F1Cu) [[unlikely]] return; }
L_00477F1C:
    c.f[25] = c.f[0];
    c.f[0] = 0u;
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[26]);
    c.f[12] = c.f[27];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477F34u); c.f[24] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[25]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00477F34u) [[unlikely]] return; }
L_00477F34:
    c.f[12] = c.f[27];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00477F40u); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x00477F40u) [[unlikely]] return; }
L_00477F40:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    c.facc = fp::ee::mul(c.fcr31, c.f[24], c.f[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.f[2] = 0u;
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[23]);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[26]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[22], c.f[25]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.facc = fp::ee::mul(c.fcr31, c.f[24], c.f[23]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 28u), c.f[21]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00477EACu | kUnwind; return; } goto L_00477EAC; } }
    c.r[11].d[0] = c.r[17].d[0] & 255ull;
    c.r[1].d[0] = 0ll < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_009E(c, 2u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00980000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[9].d[0] = c.r[3].d[0] | 38528ull;
    c.r[7].d[0] = 0ull & 1ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[6], 0u - 2u);
    c.f[6] = c.r[3].w[0];
    c.budget -= 7;
L_00477FB8:
    c.r[5].d[0] = c.r[12].d[0] & 255ull;
    set32(c.r[3], c.r[12].w[0] + 1u);
    c.r[12].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] << 5);
    set32(c.r[10], c.r[18].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[19].w[0] + c.r[3].w[0]);
    st32((c.r[10].w[0] + 84u), c.r[9].w[0]);
    c.r[3].d[0] = c.r[12].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    st32((c.r[10].w[0] + 80u), c.r[8].w[0]);
    c.r[5].d[0] = ld8((c.r[10].w[0] + 88u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st8((c.r[10].w[0] + 88u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.budget -= 18;
    [[clang::musttail]] return unit_009E(c, 1u, depth);
}

}

#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0063[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30,
    0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0,
    0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
};

void unit_0063(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0038C000;
    case 2u: goto L_0038C01C;
    case 3u: goto L_0038C054;
    case 4u: goto L_0038C05C;
    case 5u: goto L_0038C060;
    case 6u: goto L_0038C0C4;
    case 7u: goto L_0038C0CC;
    case 8u: goto L_0038C0E4;
    case 9u: goto L_0038C0EC;
    case 10u: goto L_0038C0FC;
    case 11u: goto L_0038C118;
    case 12u: goto L_0038C13C;
    case 13u: goto L_0038C150;
    case 14u: goto L_0038C170;
    case 15u: goto L_0038C17C;
    case 16u: goto L_0038C1A0;
    case 17u: goto L_0038C1B8;
    case 18u: goto L_0038C1E4;
    case 19u: goto L_0038C200;
    case 20u: goto L_0038C240;
    case 21u: goto L_0038C274;
    case 22u: goto L_0038C2E4;
    case 23u: goto L_0038C2F0;
    case 24u: goto L_0038C330;
    case 25u: goto L_0038C368;
    case 26u: goto L_0038C388;
    case 27u: goto L_0038C3A8;
    case 28u: goto L_0038C448;
    case 29u: goto L_0038C460;
    case 30u: goto L_0038C47C;
    case 31u: goto L_0038C484;
    case 32u: goto L_0038C508;
    case 33u: goto L_0038C518;
    case 34u: goto L_0038C530;
    case 35u: goto L_0038C578;
    case 36u: goto L_0038C584;
    case 37u: goto L_0038C5B8;
    case 38u: goto L_0038C5D8;
    case 39u: goto L_0038C5E8;
    case 40u: goto L_0038C668;
    case 41u: goto L_0038C690;
    case 42u: goto L_0038C6B0;
    case 43u: goto L_0038C6D0;
    case 44u: goto L_0038C6F0;
    case 45u: goto L_0038C780;
    case 46u: goto L_0038C798;
    case 47u: goto L_0038C7B8;
    case 48u: goto L_0038C818;
    case 49u: goto L_0038C898;
    case 50u: goto L_0038C910;
    case 51u: goto L_0038C978;
    case 52u: goto L_0038CA20;
    case 53u: goto L_0038CA4C;
    case 54u: goto L_0038CAB8;
    case 55u: goto L_0038CB10;
    case 56u: goto L_0038CB40;
    case 57u: goto L_0038CBC8;
    case 58u: goto L_0038CBE8;
    case 59u: goto L_0038CBF8;
    case 60u: goto L_0038CC9C;
    case 61u: goto L_0038CCFC;
    case 62u: goto L_0038CD20;
    case 63u: goto L_0038CD8C;
    case 64u: goto L_0038CE68;
    case 65u: goto L_0038CEE0;
    case 66u: goto L_0038CF44;
    case 67u: goto L_0038CFD0;
    case 68u: goto L_0038D000;
    case 69u: goto L_0038D01C;
    case 70u: goto L_0038D044;
    case 71u: goto L_0038D058;
    case 72u: goto L_0038D0D4;
    case 73u: goto L_0038D114;
    case 74u: goto L_0038D190;
    case 75u: goto L_0038D1A0;
    case 76u: goto L_0038D268;
    case 77u: goto L_0038D2E8;
    case 78u: goto L_0038D360;
    case 79u: goto L_0038D3C4;
    case 80u: goto L_0038D44C;
    case 81u: goto L_0038D450;
    case 82u: goto L_0038D464;
    case 83u: goto L_0038D480;
    case 84u: goto L_0038D494;
    case 85u: goto L_0038D49C;
    case 86u: goto L_0038D4A4;
    case 87u: goto L_0038D4AC;
    case 88u: goto L_0038D4B4;
    case 89u: goto L_0038D4BC;
    case 90u: goto L_0038D4F8;
    case 91u: goto L_0038D500;
    case 92u: goto L_0038D560;
    case 93u: goto L_0038D568;
    case 94u: goto L_0038D570;
    case 95u: goto L_0038D578;
    case 96u: goto L_0038D5B0;
    case 97u: goto L_0038D628;
    case 98u: goto L_0038D68C;
    case 99u: goto L_0038D6D8;
    case 100u: goto L_0038D728;
    case 101u: goto L_0038D744;
    case 102u: goto L_0038D784;
    case 103u: goto L_0038D794;
    case 104u: goto L_0038D79C;
    case 105u: goto L_0038D7B8;
    case 106u: goto L_0038D7C8;
    case 107u: goto L_0038D7EC;
    case 108u: goto L_0038D834;
    case 109u: goto L_0038D86C;
    case 110u: goto L_0038D88C;
    case 111u: goto L_0038D8E0;
    case 112u: goto L_0038D914;
    case 113u: goto L_0038D98C;
    case 114u: goto L_0038D9F0;
    case 115u: goto L_0038DA80;
    case 116u: goto L_0038DA9C;
    case 117u: goto L_0038DAA4;
    case 118u: goto L_0038DAC4;
    case 119u: goto L_0038DACC;
    case 120u: goto L_0038DB00;
    case 121u: goto L_0038DB64;
    case 122u: goto L_0038DB7C;
    case 123u: goto L_0038DCC0;
    case 124u: goto L_0038DD14;
    case 125u: goto L_0038DD1C;
    case 126u: goto L_0038DD3C;
    case 127u: goto L_0038DD50;
    case 128u: goto L_0038DDE0;
    case 129u: goto L_0038DE58;
    case 130u: goto L_0038DEBC;
    case 131u: goto L_0038DF64;
    case 132u: goto L_0038DF94;
    case 133u: goto L_0038DFC0;
    case 134u: goto L_0038DFFC;
    case 135u: goto L_0038E078;
    case 136u: goto L_0038E0DC;
    case 137u: goto L_0038E158;
    case 138u: goto L_0038E1D0;
    case 139u: goto L_0038E234;
    case 140u: goto L_0038E2B0;
    case 141u: goto L_0038E328;
    case 142u: goto L_0038E38C;
    case 143u: goto L_0038E408;
    case 144u: goto L_0038E480;
    case 145u: goto L_0038E4E4;
    case 146u: goto L_0038E530;
    case 147u: goto L_0038E580;
    case 148u: goto L_0038E5D0;
    case 149u: goto L_0038E620;
    case 150u: goto L_0038E678;
    case 151u: goto L_0038E688;
    case 152u: goto L_0038E6D8;
    case 153u: goto L_0038E700;
    case 154u: goto L_0038E724;
    case 155u: goto L_0038E950;
    case 156u: goto L_0038EB30;
    case 157u: goto L_0038EB58;
    case 158u: goto L_0038EB80;
    case 159u: goto L_0038EBA0;
    case 160u: goto L_0038EC0C;
    case 161u: goto L_0038EC20;
    case 162u: goto L_0038EC44;
    case 163u: goto L_0038ECD4;
    case 164u: goto L_0038ED50;
    case 165u: goto L_0038EDB4;
    case 166u: goto L_0038EE20;
    case 167u: goto L_0038EE44;
    case 168u: goto L_0038EED4;
    case 169u: goto L_0038EF50;
    case 170u: goto L_0038EFB4;
    case 171u: goto L_0038F020;
    case 172u: goto L_0038F030;
    case 173u: goto L_0038F0A4;
    case 174u: goto L_0038F0A8;
    case 175u: goto L_0038F0C0;
    case 176u: goto L_0038F0F8;
    case 177u: goto L_0038F12C;
    case 178u: goto L_0038F134;
    case 179u: goto L_0038F14C;
    case 180u: goto L_0038F158;
    case 181u: goto L_0038F210;
    case 182u: goto L_0038F388;
    case 183u: goto L_0038F3A0;
    case 184u: goto L_0038F3AC;
    case 185u: goto L_0038F3C0;
    case 186u: goto L_0038F3D8;
    case 187u: goto L_0038F3E8;
    case 188u: goto L_0038F3F8;
    case 189u: goto L_0038F410;
    case 190u: goto L_0038F45C;
    case 191u: goto L_0038F480;
    case 192u: goto L_0038F4E0;
    case 193u: goto L_0038F508;
    case 194u: goto L_0038F540;
    case 195u: goto L_0038F568;
    case 196u: goto L_0038F574;
    case 197u: goto L_0038F590;
    case 198u: goto L_0038F5B0;
    case 199u: goto L_0038F5BC;
    case 200u: goto L_0038F5D4;
    case 201u: goto L_0038F5E4;
    case 202u: goto L_0038F600;
    case 203u: goto L_0038F618;
    case 204u: goto L_0038F640;
    case 205u: goto L_0038F64C;
    case 206u: goto L_0038F668;
    case 207u: goto L_0038F6A8;
    case 208u: goto L_0038F6D0;
    case 209u: goto L_0038F6DC;
    case 210u: goto L_0038F6F8;
    case 211u: goto L_0038F704;
    case 212u: goto L_0038F730;
    case 213u: goto L_0038F748;
    case 214u: goto L_0038F754;
    case 215u: goto L_0038F768;
    case 216u: goto L_0038F780;
    case 217u: goto L_0038F794;
    case 218u: goto L_0038F7AC;
    case 219u: goto L_0038F7D8;
    case 220u: goto L_0038F7F0;
    case 221u: goto L_0038F804;
    case 222u: goto L_0038F81C;
    case 223u: goto L_0038F830;
    case 224u: goto L_0038F848;
    case 225u: goto L_0038F85C;
    case 226u: goto L_0038F874;
    case 227u: goto L_0038F888;
    case 228u: goto L_0038F8A0;
    case 229u: goto L_0038F8B4;
    case 230u: goto L_0038F8CC;
    case 231u: goto L_0038F8E0;
    case 232u: goto L_0038F8F8;
    case 233u: goto L_0038F90C;
    case 234u: goto L_0038F924;
    case 235u: goto L_0038F938;
    case 236u: goto L_0038F950;
    case 237u: goto L_0038F964;
    case 238u: goto L_0038F97C;
    case 239u: goto L_0038F990;
    case 240u: goto L_0038F9A8;
    case 241u: goto L_0038F9BC;
    case 242u: goto L_0038F9D4;
    case 243u: goto L_0038FA04;
    case 244u: goto L_0038FA1C;
    case 245u: goto L_0038FA30;
    case 246u: goto L_0038FA48;
    case 247u: goto L_0038FA5C;
    case 248u: goto L_0038FA74;
    case 249u: goto L_0038FA88;
    case 250u: goto L_0038FAAC;
    case 251u: goto L_0038FAB8;
    case 252u: goto L_0038FAC0;
    case 253u: goto L_0038FAD8;
    case 254u: goto L_0038FAEC;
    case 255u: goto L_0038FB04;
    case 256u: goto L_0038FB18;
    case 257u: goto L_0038FB30;
    case 258u: goto L_0038FB44;
    case 259u: goto L_0038FB5C;
    case 260u: goto L_0038FB70;
    case 261u: goto L_0038FB88;
    case 262u: goto L_0038FB9C;
    case 263u: goto L_0038FBB4;
    case 264u: goto L_0038FBC8;
    case 265u: goto L_0038FBE0;
    case 266u: goto L_0038FBF8;
    case 267u: goto L_0038FC10;
    case 268u: goto L_0038FC1C;
    case 269u: goto L_0038FC30;
    case 270u: goto L_0038FC48;
    case 271u: goto L_0038FC5C;
    case 272u: goto L_0038FC74;
    case 273u: goto L_0038FC88;
    case 274u: goto L_0038FCA0;
    case 275u: goto L_0038FCB4;
    case 276u: goto L_0038FCCC;
    case 277u: goto L_0038FCE0;
    case 278u: goto L_0038FCF8;
    case 279u: goto L_0038FD0C;
    case 280u: goto L_0038FD24;
    case 281u: goto L_0038FD30;
    case 282u: goto L_0038FD44;
    case 283u: goto L_0038FD5C;
    case 284u: goto L_0038FD68;
    case 285u: goto L_0038FD88;
    case 286u: goto L_0038FDA0;
    case 287u: goto L_0038FDB4;
    case 288u: goto L_0038FDCC;
    case 289u: goto L_0038FDD8;
    case 290u: goto L_0038FDEC;
    case 291u: goto L_0038FE04;
    case 292u: goto L_0038FE20;
    case 293u: goto L_0038FE38;
    case 294u: goto L_0038FE68;
    case 295u: goto L_0038FE80;
    case 296u: goto L_0038FE94;
    case 297u: goto L_0038FEAC;
    case 298u: goto L_0038FEC0;
    case 299u: goto L_0038FED8;
    case 300u: goto L_0038FEEC;
    case 301u: goto L_0038FF04;
    case 302u: goto L_0038FF18;
    case 303u: goto L_0038FF3C;
    case 304u: goto L_0038FF6C;
    case 305u: goto L_0038FF90;
    case 306u: goto L_0038FF98;
    case 307u: goto L_0038FFBC;
    case 308u: goto L_0038FFC8;
    case 309u: goto L_0038FFE8;
    default: bad_entry(c, 0x0038C000u); return;
    }
L_0038C000:
    c.f[5] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[20]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[21]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038C120; } }
L_0038C01C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[5]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C05C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 1432u)));
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C054u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0063(c, 123u, depth + 1u); else { c.pc = 0x0038DCC0u; return; } if (c.pc != 0x0038C054u) [[unlikely]] return; }
L_0038C054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C2EC; } }
L_0038C05C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 1;
L_0038C060:
    c.f[0] = ld32((c.r[16].w[0] + 176u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[16].w[0] + 176u), c.f[0]);  if (t) { goto L_0038C088; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038C2EC; } }
L_0038C088:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038C148; } }
    c.f[1] = ld32((c.r[16].w[0] + 176u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C148; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 264u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 95u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038C148; } }
L_0038C0C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C2EC; } }
L_0038C0CC:
    set32(c.r[2], ld32((c.r[3].w[0] + 1432u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C0E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0063(c, 123u, depth + 1u); else { c.pc = 0x0038DCC0u; return; } if (c.pc != 0x0038C0E4u) [[unlikely]] return; }
L_0038C0E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038BEDCu | kUnwind; return; } [[clang::musttail]] return unit_0062(c, 211u, depth); } }
L_0038C0EC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038BF30u | kUnwind; return; } [[clang::musttail]] return unit_0062(c, 213u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038BF00u | kUnwind; return; } [[clang::musttail]] return unit_0062(c, 212u, depth); } }
L_0038C0FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 1432u)));
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C118u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0063(c, 123u, depth + 1u); else { c.pc = 0x0038DCC0u; return; } if (c.pc != 0x0038C118u) [[unlikely]] return; }
L_0038C118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 36u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C060u | kUnwind; return; } goto L_0038C060; } }
L_0038C120:
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[20]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[21]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 7;
L_0038C13C:
    c.f[20] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[21] = fp::ee::mul(c.fcr31, c.f[21], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C01Cu | kUnwind; return; } goto L_0038C01C; } }
L_0038C148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C150u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0038C150u) [[unlikely]] return; }
L_0038C150:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 176u), c.f[0]);  if (t) { goto L_0038C208; } }
L_0038C170:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0038C1A8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_0038C17C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0038C2EC; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1036u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038C2EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C1A0u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0064(c, 351u, depth + 1u); else { c.pc = 0x00393C40u; return; } if (c.pc != 0x0038C1A0u) [[unlikely]] return; }
L_0038C1A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038C2EC; } }
L_0038C1A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 186u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C1B8u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0062(c, 206u, depth + 1u); else { c.pc = 0x0038BD20u; return; } if (c.pc != 0x0038C1B8u) [[unlikely]] return; }
L_0038C1B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0038C224; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0038C224; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43100000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C1E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 26u, depth + 1u); else { c.pc = 0x00388750u; return; } if (c.pc != 0x0038C1E4u) [[unlikely]] return; }
L_0038C1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038C224; } }
    c.f[12] = ld32((c.r[17].w[0] + 768u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C200u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0063(c, 123u, depth + 1u); else { c.pc = 0x0038DCC0u; return; } if (c.pc != 0x0038C200u) [[unlikely]] return; }
L_0038C200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C2EC; } }
L_0038C208:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 284u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C170u | kUnwind; return; } goto L_0038C170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C2EC; } }
L_0038C224:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[3].w[0] + 1440u)));
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0038C2B8; } }
L_0038C240:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], c.r[20].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 1424u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0038C2A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43100000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C274u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 26u, depth + 1u); else { c.pc = 0x00388750u; return; } if (c.pc != 0x0038C274u) [[unlikely]] return; }
L_0038C274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038C2A8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 752u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 1040u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 115u));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038C2A8; } }
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    c.r[22].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
L_0038C2A8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C240u | kUnwind; return; } goto L_0038C240; } }
L_0038C2B8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0038C2EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[22].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 1432u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C2E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0063(c, 123u, depth + 1u); else { c.pc = 0x0038DCC0u; return; } if (c.pc != 0x0038C2E4u) [[unlikely]] return; }
L_0038C2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C0C4u | kUnwind; return; } goto L_0038C0C4; } }
L_0038C2EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0038C2F0:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0038C330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 28u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[7], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 222u)));
    set32(c.r[4], c.r[6].w[0] + 8u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[6].w[0] + 216u), c.r[7].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 14;
L_0038C368:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0038C3D8; } }
L_0038C388:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0038C7C8; } }
    c.budget -= 1;
L_0038C3A8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_0038C7D0; } }
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C388u | kUnwind; return; } goto L_0038C388; } }
    c.budget -= 1;
L_0038C3D8:
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[10], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[10].w[0] + 16u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[11].d[0];
    c.budget -= 9;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] + 16u);  if (t) { goto L_0038C7D8; } }
    set32(c.r[7], ld32((c.r[8].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    st32((c.r[8].w[0]), c.r[7].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 204u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0038C460; } }
    set32(c.r[7], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[6].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0038C7F8; } }
L_0038C448:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[7].d[0];  if (t) { goto L_0038C460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0038C47C; } }
L_0038C460:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C368u | kUnwind; return; } goto L_0038C368; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0038C47C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0038C7C0; } }
L_0038C484:
    set32(c.r[6], ld32((c.r[7].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0038C668; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0038C650; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0038C620; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0038C548; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0038C538; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0038C520; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0038C4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C668; } }
    c.budget -= 1;
L_0038C4E8:
    c.r[4].d[0] = ld8((c.r[7].w[0] + 4u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038C800; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0038C668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C508u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 52u, depth + 1u); else { c.pc = 0x0038CA20u; return; } if (c.pc != 0x0038C508u) [[unlikely]] return; }
L_0038C508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038C668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C518u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 120u, depth + 1u); else { c.pc = 0x0038DB00u; return; } if (c.pc != 0x0038C518u) [[unlikely]] return; }
L_0038C518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C668; } }
L_0038C520:
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.f[12] = ld32((c.r[7].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C530u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 56u, depth + 1u); else { c.pc = 0x0038CB40u; return; } if (c.pc != 0x0038C530u) [[unlikely]] return; }
L_0038C530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C668; } }
L_0038C538:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_0038C668; } }
    c.budget -= 1;
L_0038C548:
    c.r[4].d[0] = ld8((c.r[7].w[0] + 4u));
    c.r[1].d[0] = c.r[4].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038C668; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 752u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 119u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 62;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038C820; } }
    c.budget -= 1;
L_0038C578:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C584u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0064(c, 339u, depth + 1u); else { c.pc = 0x00393760u; return; } if (c.pc != 0x0038C584u) [[unlikely]] return; }
L_0038C584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038C5E8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 160u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038C5E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14240u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0038C000u < 16384u) { entry = entries_0063[(t - 0x0038C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038C5B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C5D8u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0064(c, 330u, depth + 1u); else { c.pc = 0x00393400u; return; } if (c.pc != 0x0038C5D8u) [[unlikely]] return; }
L_0038C5D8:
    set32(c.r[4], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 4;
L_0038C5E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038C668; } }
    c.f[1] = ld32((c.r[16].w[0] + 120u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038C668; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 120u), c.f[0]);  if (t) { goto L_0038C668; } }
    c.budget -= 1;
L_0038C620:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 293u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038C640; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038C668; } }
    c.budget -= 1;
L_0038C640:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 189u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038C668; } }
    c.budget -= 1;
L_0038C650:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038C668; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0A00000u);
    st32((c.r[4].w[0] + 776u), c.r[3].w[0]);
    c.budget -= 3;
L_0038C668:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 10u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 220u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[6].w[0] + 8u);  if (t) { goto L_0038C9C8; } }
    c.budget -= 1;
L_0038C690:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0038C9D0; } }
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
L_0038C6B0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0038C720; } }
L_0038C6D0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0038C9D8; } }
    c.budget -= 1;
L_0038C6F0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_0038C9E0; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C6D0u | kUnwind; return; } goto L_0038C6D0; } }
    c.budget -= 1;
L_0038C720:
    set32(c.r[10], ld32((c.r[4].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[11].w[0] + 16u);  if (t) { goto L_0038C9E8; } }
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 204u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0038C798; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0038CA08; } }
L_0038C780:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0038C798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0038C7B8; } }
L_0038C798:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C6B0u | kUnwind; return; } goto L_0038C6B0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 212u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_0038C7B8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C484u | kUnwind; return; } goto L_0038C484; } }
L_0038C7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038CA10; } }
L_0038C7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C3A8u | kUnwind; return; } goto L_0038C3A8; } }
L_0038C7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C47Cu | kUnwind; return; } goto L_0038C47C; } }
L_0038C7D8:
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C460u | kUnwind; return; } goto L_0038C460; } }
L_0038C7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C448u | kUnwind; return; } goto L_0038C448; } }
L_0038C800:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C668u | kUnwind; return; } goto L_0038C668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038C818u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 120u, depth + 1u); else { c.pc = 0x0038DB00u; return; } if (c.pc != 0x0038C818u) [[unlikely]] return; }
L_0038C818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C668u | kUnwind; return; } goto L_0038C668; } }
L_0038C820:
    c.r[9].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[8].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 9u);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[5], 0u - 2u);
    set32(c.r[2], 0u - 3u);
    set32(c.r[4], c.r[8].w[0] << 1);
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 293u));
    c.budget -= 23;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C578u | kUnwind; return; } goto L_0038C578; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 208u)));
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 8u);  if (t) { goto L_0038C8F0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0038C898:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038C8E0; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0038C8E0; } }
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038C8F0; } }
L_0038C8E0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[5].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C898u | kUnwind; return; } goto L_0038C898; } }
L_0038C8F0:
    set32(c.r[5], ld32((c.r[4].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 200u), c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.r[3].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
L_0038C910:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 8u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038C980; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 10u);
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0038C9C0; } }
    c.budget -= 1;
L_0038C978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038C9B0; } }
L_0038C980:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0038C998; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038C998:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C910u | kUnwind; return; } goto L_0038C910; } }
    breakpoint(c, 0x0038C9A8u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038C9B0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 293u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C578u | kUnwind; return; } goto L_0038C578; } }
L_0038C9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C978u | kUnwind; return; } goto L_0038C978; } }
L_0038C9C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C690u | kUnwind; return; } goto L_0038C690; } }
L_0038C9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C7B8u | kUnwind; return; } goto L_0038C7B8; } }
L_0038C9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C6F0u | kUnwind; return; } goto L_0038C6F0; } }
L_0038C9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C7B8u | kUnwind; return; } goto L_0038C7B8; } }
L_0038C9E8:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[11].w[0] + 12u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C798u | kUnwind; return; } goto L_0038C798; } }
L_0038CA08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038C780u | kUnwind; return; } goto L_0038C780; } }
L_0038CA10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038CA20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038CAE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CA4Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 22u, depth + 1u); else { c.pc = 0x00388530u; return; } if (c.pc != 0x0038CA4Cu) [[unlikely]] return; }
L_0038CA4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038CAE8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 160u));
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038CAF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038CA80; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 2;
L_0038CA80:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038CA9C; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038CA9C; } }
    st32((c.r[16].w[0] + 156u), 0u);
    c.budget -= 1;
L_0038CA9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038CAD8; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038CAD8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_0038CAB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0038CAC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0038CAF4; } }
L_0038CAC8:
    set32(c.r[3], ld32((c.r[3].w[0] + 1332u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038CAB8u | kUnwind; return; } goto L_0038CAB8; } }
    c.budget -= 1;
L_0038CAD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0038CAF4; } }
L_0038CAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0038CAF4; } }
L_0038CAE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0038CAF4; } }
L_0038CAF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0038CAF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038CB10:
    st32((c.r[4].w[0] + 148u), 0u);
    set32(c.r[3], 0u - 17u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[7], 0u + 1u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 153u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0038CB40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 160u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.f[21] = c.f[12];  if (t) { goto L_0038CCFC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 284u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0038CCFC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038CC00; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 1360u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038CC00; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 260u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038CBC4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038CBDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0038CBC8; } }
L_0038CBC4:
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 1;
L_0038CBC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0038CC00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0038CD00; } }
L_0038CBDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CBE8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0038CBE8u) [[unlikely]] return; }
L_0038CBE8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CBF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038CBF8u) [[unlikely]] return; }
L_0038CBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038CBC8u | kUnwind; return; } goto L_0038CBC8; } }
L_0038CC00:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038CCFC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[2] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[21]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038CCFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038CC84; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1036u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038CC84; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 1057u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0038CC84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038CCFC; } }
L_0038CC84:
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CC9Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0062(c, 22u, depth + 1u); else { c.pc = 0x00388530u; return; } if (c.pc != 0x0038CC9Cu) [[unlikely]] return; }
L_0038CC9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038CCFC; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 112u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038CCE8; } }
    set32(c.r[2], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = 0ull & 1ull;
    st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[2].w[0] << 1);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 112u));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_0038CCE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CCFCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0063(c, 123u, depth + 1u); else { c.pc = 0x0038DCC0u; return; } if (c.pc != 0x0038CCFCu) [[unlikely]] return; }
L_0038CCFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0038CD00:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0038CD20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038CF8C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038CF8C; } }
    c.r[5].d[0] = ld8((c.r[4].w[0] + 807u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0038CF8C; } }
    c.r[17].d[0] = ld16((c.r[4].w[0] + 380u));
    c.r[1].d[0] = c.r[17].sd[0] < 59ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038CF8C; } }
    c.r[3].d[0] = c.r[17].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038CF8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038CD8Cu);  if (depth < kMaxDepth) unit_0053(c, 271u, depth + 1u); else { c.pc = 0x0034FC20u; return; } if (c.pc != 0x0038CD8Cu) [[unlikely]] return; }
L_0038CD8C:
    set32(c.r[3], c.r[17].w[0] - 49u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038CF8C; } }
    set32(c.r[15], ld32((c.r[16].w[0] + 32u)));
    c.r[8].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 3u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[11], 0u - 17u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[9], 0u - 2049u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[6], 0u - 9u);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[5], 0u - 2u);
    set32(c.r[4], c.r[8].w[0] << 1);
    c.r[13].d[0] = ld16((c.r[15].w[0] + 544u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[3].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st16((c.r[15].w[0] + 544u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[15].w[0] + 544u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[15].w[0] + 544u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[15].w[0] + 544u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[15].w[0] + 544u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 293u));
    c.budget -= 41;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038CF8C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 208u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 8u);  if (t) { goto L_0038CEC0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0038CE68:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038CEB0; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0038CEB0; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038CEC0; } }
L_0038CEB0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038CE68u | kUnwind; return; } goto L_0038CE68; } }
L_0038CEC0:
    set32(c.r[6], ld32((c.r[4].w[0] + 200u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 200u), c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.r[5].d[0] = c.r[9].d[0] << 56;
    set32(c.r[7], 0u + 10u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 8;
L_0038CEE0:
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[10].w[0] + 8u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0038CF4C; } }
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[8].w[0] + 1u);
    st32((c.r[10].w[0] + 16u), 0u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0038CFA8; } }
L_0038CF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0038CF84; } }
L_0038CF4C:
    set32(c.r[6], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[6].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0038CF68; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038CF68:
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038CEE0u | kUnwind; return; } goto L_0038CEE0; } }
    breakpoint(c, 0x0038CF78u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_0038CF84:
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 293u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0038CF8C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 56u));
    set32(c.r[3], 0u - 5u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038CFB0; } }
L_0038CFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038CF44u | kUnwind; return; } goto L_0038CF44; } }
L_0038CFB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038CFD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 128u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038D01C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038D184; } }
L_0038D000:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038D1A8; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0038D1A8; } }
L_0038D01C:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038D1B4; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038D1B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 132u), 0u);  if (t) { goto L_0038D1B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.budget -= 1;
L_0038D044:
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_0038D05C; } }
L_0038D058:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038D05C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x402F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 60896ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D240; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FFB0000u);
    c.r[3].d[0] = c.r[3].d[0] | 21458ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D248; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F960000u);
    c.r[3].d[0] = c.r[3].d[0] | 52196ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038D254; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EC90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038D0D4; } }
    c.r[3].d[0] = c.r[4].d[0] | 1ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_0038D0D4:
    st8((c.r[16].w[0] + 186u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08C30000u);
    c.r[4].d[0] = c.r[3].d[0] | 6ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[3].w[0] + 212u), c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 8u);
    set32(c.r[3], ld32((c.r[3].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038D104; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));  if (t) { goto L_0038D108; } }
L_0038D104:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038D108:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D260; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    c.budget -= 1;
L_0038D114:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 172u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038D40C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0038D15C; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D15C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038D15C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038D270; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D40C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = ld8((c.r[16].w[0] + 56u));  if (t) { goto L_0038D274; } }
L_0038D184:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D190u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0038D190u) [[unlikely]] return; }
L_0038D190:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D1A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038D1A0u) [[unlikely]] return; }
L_0038D1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 124u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D000u | kUnwind; return; } goto L_0038D000; } }
L_0038D1A8:
    st32((c.r[16].w[0] + 124u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D01Cu | kUnwind; return; } goto L_0038D01C; } }
L_0038D1B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.r[7].d[0] = 0ull | 0ull;
    c.f[3] = c.r[3].w[0];
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBEC90000u);
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.r[4].d[0] = c.r[4].d[0] | 4059ull;
    c.f[4] = ld32((c.r[5].w[0] + 104u));
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.f[1] = 0u;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    set32(c.r[3], c.f[1]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    c.f[3] = c.r[6].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 33;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D058u | kUnwind; return; } goto L_0038D058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D044u | kUnwind; return; } goto L_0038D044; } }
L_0038D240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(4ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D0D4u | kUnwind; return; } goto L_0038D0D4; } }
L_0038D248:
    c.r[3].d[0] = c.r[4].d[0] | 3ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D0D4u | kUnwind; return; } goto L_0038D0D4; } }
L_0038D254:
    c.r[3].d[0] = c.r[4].d[0] | 2ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D0D4u | kUnwind; return; } goto L_0038D0D4; } }
L_0038D260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D268u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 24u, depth + 1u); else { c.pc = 0x0038C330u; return; } if (c.pc != 0x0038D268u) [[unlikely]] return; }
L_0038D268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 172u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D114u | kUnwind; return; } goto L_0038D114; } }
L_0038D270:
    c.r[9].d[0] = ld8((c.r[16].w[0] + 56u));
    c.budget -= 1;
L_0038D274:
    c.r[8].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 9u);
    set32(c.r[7], c.r[8].w[0] << 3);
    set32(c.r[5], 0u - 2u);
    set32(c.r[3], 0u - 3u);
    set32(c.r[4], c.r[8].w[0] << 1);
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[8].d[0];
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 188u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 293u));
    c.budget -= 22;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038D40C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 208u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 8u);  if (t) { goto L_0038D340; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0038D2E8:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038D330; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0038D330; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038D340; } }
L_0038D330:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D2E8u | kUnwind; return; } goto L_0038D2E8; } }
L_0038D340:
    set32(c.r[6], ld32((c.r[4].w[0] + 200u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 200u), c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.r[5].d[0] = c.r[9].d[0] << 56;
    set32(c.r[7], 0u + 10u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 8;
L_0038D360:
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[10].w[0] + 8u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0038D3CC; } }
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[8].w[0] + 1u);
    st32((c.r[10].w[0] + 16u), 0u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0038D7A4; } }
L_0038D3C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0038D404; } }
L_0038D3CC:
    set32(c.r[6], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[6].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0038D3E8; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038D3E8:
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D360u | kUnwind; return; } goto L_0038D360; } }
    breakpoint(c, 0x0038D3F8u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_0038D404:
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 293u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0038D40C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D8E0; } }
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D8E0; } }
    c.r[3].d[0] = c.r[4].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038D894; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038D7AC; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038D44C:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 1;
L_0038D450:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038D874; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0038D874; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 56u));
    c.budget -= 1;
L_0038D464:
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038D894; } }
L_0038D480:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038D8E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D494u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 120u, depth + 1u); else { c.pc = 0x0038DB00u; return; } if (c.pc != 0x0038D494u) [[unlikely]] return; }
L_0038D494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));  if (t) { goto L_0038D8E4; } }
L_0038D49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D4A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 194u, depth + 1u); else { c.pc = 0x0038BA20u; return; } if (c.pc != 0x0038D4A4u) [[unlikely]] return; }
L_0038D4A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038D8E0; } }
L_0038D4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D4B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 118u, depth + 1u); else { c.pc = 0x0038A810u; return; } if (c.pc != 0x0038D4B4u) [[unlikely]] return; }
L_0038D4B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038D8E0; } }
L_0038D4BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038D4D4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 2;
L_0038D4D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038D4F0; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038D4F0; } }
    st32((c.r[16].w[0] + 156u), 0u);
    c.budget -= 1;
L_0038D4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D4F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 99u, depth + 1u); else { c.pc = 0x0038A290u; return; } if (c.pc != 0x0038D4F8u) [[unlikely]] return; }
L_0038D4F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038D8E0; } }
L_0038D500:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038D518; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 2;
L_0038D518:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038D534; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038D534; } }
    st32((c.r[16].w[0] + 156u), 0u);
    c.budget -= 1;
L_0038D534:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038D560; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 292u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038D560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D560u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 114u, depth + 1u); else { c.pc = 0x0038A650u; return; } if (c.pc != 0x0038D560u) [[unlikely]] return; }
L_0038D560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D568u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 99u, depth + 1u); else { c.pc = 0x0038A290u; return; } if (c.pc != 0x0038D568u) [[unlikely]] return; }
L_0038D568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038D8E0; } }
L_0038D570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D578u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 136u, depth + 1u); else { c.pc = 0x0038AC80u; return; } if (c.pc != 0x0038D578u) [[unlikely]] return; }
L_0038D578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038D6D8; } }
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[2], 0u + 10u);
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[18], c.r[2].w[0] + 8u);
    set32(c.r[2], ld32((c.r[2].w[0] + 208u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038D608; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0038D5B0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038D5F8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0038D5F8; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 213u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 213u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0038D608; } }
L_0038D5F8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D5B0u | kUnwind; return; } goto L_0038D5B0; } }
L_0038D608:
    set32(c.r[3], ld32((c.r[18].w[0] + 200u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[18].w[0] + 200u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 214u)));
    c.r[2].d[0] = c.r[6].d[0] << 56;
    set32(c.r[4], 0u + 10u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 8;
L_0038D628:
    c.r[5].d[0] = c.r[6].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[18].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 8u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D694; } }
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00040000u);
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], 0u + 10u);
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 213u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 214u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0038D8C0; } }
L_0038D68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0038D6CC; } }
L_0038D694:
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_0038D6B0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038D6B0:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D628u | kUnwind; return; } goto L_0038D628; } }
    breakpoint(c, 0x0038D6C0u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_0038D6CC:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0038D6D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038D738; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], c.r[2].w[0] + 752u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 800u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 752u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 91u));
    set32(c.r[4], c.r[5].w[0] << 2);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0038D8C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 49u)));
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038D8C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038D728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038D738; } }
    set32(c.r[2], 0u + 9u);
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0038D738:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D744u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0064(c, 339u, depth + 1u); else { c.pc = 0x00393760u; return; } if (c.pc != 0x0038D744u) [[unlikely]] return; }
L_0038D744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038D8D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 752u)));
    set32(c.r[6], c.r[3].w[0] + 752u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 800u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 92u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038D8D0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 49u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 97u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038D8D0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038D784:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 161u)));  if (t) { goto L_0038D8DC; } }
L_0038D794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D79Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 7u, depth + 1u); else { c.pc = 0x00388060u; return; } if (c.pc != 0x0038D79Cu) [[unlikely]] return; }
L_0038D79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0038D8E0; } }
L_0038D7A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D3C4u | kUnwind; return; } goto L_0038D3C4; } }
L_0038D7AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D7B8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x0038D7B8u) [[unlikely]] return; }
L_0038D7B8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D7C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038D7C8u) [[unlikely]] return; }
L_0038D7C8:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 160u));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D44Cu | kUnwind; return; } goto L_0038D44C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 144u)));
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0038D810; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_0038D7EC:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[3].d[0];  if (t) { goto L_0038D800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0038D814; } }
L_0038D800:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D7ECu | kUnwind; return; } goto L_0038D7EC; } }
L_0038D810:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038D814:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038D820; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038D820:
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0038D858; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_0038D834:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0038D848; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0038D85C; } }
L_0038D848:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D834u | kUnwind; return; } goto L_0038D834; } }
L_0038D858:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038D85C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D44Cu | kUnwind; return; } goto L_0038D44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D86Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 120u, depth + 1u); else { c.pc = 0x0038DB00u; return; } if (c.pc != 0x0038D86Cu) [[unlikely]] return; }
L_0038D86C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 148u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D450u | kUnwind; return; } goto L_0038D450; } }
L_0038D874:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 152u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = ld8((c.r[16].w[0] + 153u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038D88Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 32u, depth + 1u); else { c.pc = 0x00388970u; return; } if (c.pc != 0x0038D88Cu) [[unlikely]] return; }
L_0038D88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 56u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D464u | kUnwind; return; } goto L_0038D464; } }
L_0038D894:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 160u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038D8E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14288u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0038C000u < 16384u) { entry = entries_0063[(t - 0x0038C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038D8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D68Cu | kUnwind; return; } goto L_0038D68C; } }
L_0038D8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D728u | kUnwind; return; } goto L_0038D728; } }
L_0038D8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D784u | kUnwind; return; } goto L_0038D784; } }
L_0038D8D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 161u)));
    c.budget -= 1;
L_0038D8DC:
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0038D8E0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.budget -= 1;
L_0038D8E4:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038DA60; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038D970; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
L_0038D914:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0038D95C; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0038D95C; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038D970; } }
L_0038D95C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D914u | kUnwind; return; } goto L_0038D914; } }
    c.budget -= 1;
L_0038D970:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_0038D98C:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038D9F8; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 2u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0038DA58; } }
L_0038D9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[16].w[0] + 40u)));  if (t) { goto L_0038DA2C; } }
L_0038D9F8:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0038DA10; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038DA10:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D98Cu | kUnwind; return; } goto L_0038D98C; } }
    breakpoint(c, 0x0038DA20u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
L_0038DA2C:
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    st32((c.r[9].w[0]), c.r[6].w[0]);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0038DA64; } }
L_0038DA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038D9F0u | kUnwind; return; } goto L_0038D9F0; } }
L_0038DA60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0038DA64:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0038DA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038DAB8; } }
L_0038DA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DAA4u); set32(c.r[4], ld32((c.r[16].w[0] + 260u)));  if (depth < kMaxDepth) unit_0063(c, 67u, depth + 1u); else { c.pc = 0x0038CFD0u; return; } if (c.pc != 0x0038DAA4u) [[unlikely]] return; }
L_0038DAA4:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DA9Cu | kUnwind; return; } goto L_0038DA9C; } }
L_0038DAB8:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0038DAE0; } }
L_0038DAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DACCu); set32(c.r[4], ld32((c.r[16].w[0] + 260u)));  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00389850u; return; } if (c.pc != 0x0038DACCu) [[unlikely]] return; }
L_0038DACC:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DAC4u | kUnwind; return; } goto L_0038DAC4; } }
L_0038DAE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038DB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0038DB50; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 1320u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038DB50; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1320u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038DB44; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 18u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0038DB50; } }
L_0038DB44:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0038DB50:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[3].d[0] = c.r[4].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0038DC70; } }
L_0038DB64:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038DC40; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DB7Cu); set32(c.r[4], c.r[3].w[0] + 752u);  if (depth < kMaxDepth) unit_0064(c, 377u, depth + 1u); else { c.pc = 0x00393F60u; return; } if (c.pc != 0x0038DB7Cu) [[unlikely]] return; }
L_0038DB7C:
    set32(c.r[5], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 752u)));
    set32(c.r[3], c.r[4].w[0] + 752u);
    set32(c.r[4], ld32((c.r[4].w[0] + 1040u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 116u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038DBB0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 288u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 288u), c.r[4].w[0]);  if (t) { goto L_0038DBB4; } }
L_0038DBB0:
    st32((c.r[3].w[0] + 288u), 0u);
    c.budget -= 1;
L_0038DBB4:
    set32(c.r[10], ld32((c.r[3].w[0])));
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 284u));
    set32(c.r[6], 0u - 3u);
    set32(c.r[9], ld32((c.r[3].w[0] + 288u)));
    set32(c.r[4], 0u - 65u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[10].d[0] = ld8((c.r[10].w[0] + 115u));
    c.r[7].d[0] = c.r[8].d[0] & c.r[7].d[0];
    c.r[8].d[0] = c.r[9].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.r[8].d[0] = c.r[8].d[0] ^ 1ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[3].w[0] + 284u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[9], ld32((c.r[3].w[0])));
    c.r[7].d[0] = ld8((c.r[3].w[0] + 284u));
    set32(c.r[8], ld32((c.r[3].w[0] + 288u)));
    c.r[9].d[0] = ld8((c.r[9].w[0] + 115u));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    set32(c.r[7], c.r[9].w[0] << 1);
    c.r[7].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = c.r[7].d[0] ^ 1ull;
    set32(c.r[7], c.r[7].w[0] << 1);
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[3].w[0] + 284u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 1044u)));
    c.budget -= 34;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0038DC40; } }
    st32((c.r[5].w[0] + 1044u), 0u);
    c.budget -= 1;
L_0038DC40:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 112u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 57u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 40u), 0u);  if (t) { goto L_0038DCA4; } }
L_0038DC70:
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[3].d[0] = 0ull & 1ull;
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 112u));
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DB64u | kUnwind; return; } goto L_0038DB64; } }
L_0038DCA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038DCC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.f[20] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[18].d[0]; c.f[23] = c.f[12];  if (t) { goto L_0038E91C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038E7D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DD14u);  if (depth < kMaxDepth) unit_0063(c, 120u, depth + 1u); else { c.pc = 0x0038DB00u; return; } if (c.pc != 0x0038DD14u) [[unlikely]] return; }
L_0038DD14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[18].w[0] + 220u));  if (t) { goto L_0038E7D8; } }
L_0038DD1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 180u), c.f[0]);  if (t) { goto L_0038DD48; } }
L_0038DD3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    st32((c.r[19].w[0] + 180u), c.f[0]);
    c.budget -= 3;
L_0038DD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DD50u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0038DD50u) [[unlikely]] return; }
L_0038DD50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[3].d[0] = 0ull & 1ull;
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], 0u - 2u);
    c.f[1] = 0u;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], 0u - 3u);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[19].w[0] + 176u), c.f[0]);
    st32((c.r[19].w[0] + 172u), 0u);
    c.r[7].d[0] = ld8((c.r[19].w[0] + 112u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 112u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    st32((c.r[19].w[0] + 44u), c.r[5].w[0]);
    st8((c.r[19].w[0] + 57u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[19].w[0] + 40u), c.r[18].w[0]);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 113u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 293u));
    c.budget -= 29;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038DF04; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 8u);  if (t) { goto L_0038DE38; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0038DDE0:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0038DE28; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0038DE28; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038DE38; } }
L_0038DE28:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DDE0u | kUnwind; return; } goto L_0038DDE0; } }
L_0038DE38:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_0038DE58:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038DEC4; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0038E7E8; } }
L_0038DEBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038DEFC; } }
L_0038DEC4:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0038DEE0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038DEE0:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DE58u | kUnwind; return; } goto L_0038DE58; } }
    breakpoint(c, 0x0038DEF0u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_0038DEFC:
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 293u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0038DF04:
    set32(c.r[5], ld32((c.r[19].w[0] + 32u)));
    c.f[2] = ld32((c.r[19].w[0] + 80u));
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.f[0] = ld32((c.r[19].w[0] + 88u));
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    set32(c.r[3], ld32((c.r[2].w[0] + 1360u)));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_0038E844; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 293u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038E844; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 260u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[2].d[0] = c.r[2].d[0] << 59;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0038E7F0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038E81C; } }
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_0038DF64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038E844; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43100000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[22]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[21]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038E844; } }
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DF94u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x0038DF94u) [[unlikely]] return; }
L_0038DF94:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0038DFB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_0038DFB4; } }
L_0038DFB0:
    set32(c.r[16], 0u + 2u);
    c.budget -= 1;
L_0038DFB4:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038DFC0u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x0038DFC0u) [[unlikely]] return; }
L_0038DFC0:
    c.r[1].d[0] = c.r[2].sd[0] < 51ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0038E280; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[4].d[0] = ld8((c.r[2].w[0] + 293u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038E124; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 8u);  if (t) { goto L_0038E058; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0038DFFC:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0038E044; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0038E044; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038E058; } }
L_0038E044:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DFFCu | kUnwind; return; } goto L_0038DFFC; } }
    c.budget -= 1;
L_0038E058:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_0038E078:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038E0E4; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0038E824; } }
L_0038E0DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038E11C; } }
L_0038E0E4:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0038E100; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038E100:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E078u | kUnwind; return; } goto L_0038E078; } }
    breakpoint(c, 0x0038E110u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_0038E11C:
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 293u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0038E124:
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 1360u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 293u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038E844; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 8u);  if (t) { goto L_0038E1B0; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0038E158:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0038E1A0; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0038E1A0; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038E1B0; } }
L_0038E1A0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E158u | kUnwind; return; } goto L_0038E158; } }
L_0038E1B0:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_0038E1D0:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038E23C; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0038E82C; } }
L_0038E234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038E274; } }
L_0038E23C:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0038E258; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038E258:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E1D0u | kUnwind; return; } goto L_0038E1D0; } }
    breakpoint(c, 0x0038E268u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_0038E274:
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 293u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038E844; } }
L_0038E280:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[2].w[0] + 293u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038E3D4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 8u);  if (t) { goto L_0038E308; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0038E2B0:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0038E2F8; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0038E2F8; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038E308; } }
L_0038E2F8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E2B0u | kUnwind; return; } goto L_0038E2B0; } }
L_0038E308:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_0038E328:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038E394; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0038E834; } }
L_0038E38C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038E3CC; } }
L_0038E394:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0038E3B0; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038E3B0:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E328u | kUnwind; return; } goto L_0038E328; } }
    breakpoint(c, 0x0038E3C0u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_0038E3CC:
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0038E3D4:
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 1360u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 293u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0038E844; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] + 8u);  if (t) { goto L_0038E460; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0038E408:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0038E450; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_0038E450; } }
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
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038E460; } }
L_0038E450:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E408u | kUnwind; return; } goto L_0038E408; } }
L_0038E460:
    set32(c.r[5], ld32((c.r[3].w[0] + 200u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 8;
L_0038E480:
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
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038E4EC; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
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
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0038E83C; } }
L_0038E4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0038E524; } }
L_0038E4EC:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_0038E508; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038E508:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E480u | kUnwind; return; } goto L_0038E480; } }
    breakpoint(c, 0x0038E518u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_0038E524:
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 293u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_0038E844; } }
L_0038E530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED40000u);
    c.r[2].d[0] = c.r[2].d[0] | 5069ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038E8B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x401A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 33401ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038E578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0038E678; } }
L_0038E578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_0038E678; } }
L_0038E580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED40000u);
    c.r[2].d[0] = c.r[2].d[0] | 5069ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.f[22] ^ fp::kSign;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038E8BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x401A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 33401ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038E5C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(3ll);  if (t) { goto L_0038E678; } }
L_0038E5C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_0038E678; } }
L_0038E5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED40000u);
    c.r[2].d[0] = c.r[2].d[0] | 5069ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = c.f[21] ^ fp::kSign;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038E8C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x401A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 33401ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038E618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(7ll);  if (t) { goto L_0038E678; } }
L_0038E618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(6ll);  if (t) { goto L_0038E678; } }
L_0038E620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED40000u);
    c.r[2].d[0] = c.r[2].d[0] | 5069ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.f[22] ^ fp::kSign;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = c.f[21] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038E8CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x401A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 33401ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0038E66C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(5ll);  if (t) { goto L_0038E678; } }
L_0038E66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(6ll);  if (t) { goto L_0038E678; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038E678:
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E688u); set32(c.r[4], c.r[2].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 7u, depth + 1u); else { c.pc = 0x00394100u; return; } if (c.pc != 0x0038E688u) [[unlikely]] return; }
L_0038E688:
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038E6C4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1320u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038E6B8; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 18u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 18u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0038E6C4; } }
L_0038E6B8:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0038E6C4:
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E6D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0038E6D8u) [[unlikely]] return; }
L_0038E6D8:
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0038E6F4; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1036u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_0038E6F4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E700u); set32(c.r[4], c.r[18].w[0] + 752u);  if (depth < kMaxDepth) unit_0065(c, 117u, depth + 1u); else { c.pc = 0x00395CF0u; return; } if (c.pc != 0x0038E700u) [[unlikely]] return; }
L_0038E700:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.f[21] = c.f[0];  if (t) { goto L_0038E724; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1044u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038E724; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 1360u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038E724u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0065(c, 199u, depth + 1u); else { c.pc = 0x00397470u; return; } if (c.pc != 0x0038E724u) [[unlikely]] return; }
L_0038E724:
    set32(c.r[7], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], 0u - 2u);
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[4], 0u - 3u);
    set32(c.r[7], ld32((c.r[7].w[0] + 752u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 1040u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 116u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 1040u), c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 752u)));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 1036u));
    set32(c.r[7], ld32((c.r[3].w[0] + 1040u)));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 115u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[3].w[0] + 1036u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], ld32((c.r[3].w[0] + 752u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1036u));
    set32(c.r[6], ld32((c.r[3].w[0] + 1040u)));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 115u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    set32(c.r[5], c.r[7].w[0] << 1);
    c.r[5].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 30;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[3].w[0] + 1036u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0038E8DC; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038E8DC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1044u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0038E8D4; } }
    fpu_compare(c, fp::key(c.f[23]) <= fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0038E8DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 40u)));  if (t) { goto L_0038E8D8; } }
L_0038E7D4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 220u));
    c.budget -= 1;
L_0038E7D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DD3Cu | kUnwind; return; } goto L_0038DD3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DD1Cu | kUnwind; return; } goto L_0038DD1C; } }
L_0038E7E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DEBCu | kUnwind; return; } goto L_0038DEBC; } }
L_0038E7F0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0038E80C; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DF64u | kUnwind; return; } goto L_0038DF64; } }
L_0038E80C:
    set32(c.r[2], ld32((c.r[4].w[0] + 148u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DF64u | kUnwind; return; } goto L_0038DF64; } }
L_0038E81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038DF64u | kUnwind; return; } goto L_0038DF64; } }
L_0038E824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E0DCu | kUnwind; return; } goto L_0038E0DC; } }
L_0038E82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E234u | kUnwind; return; } goto L_0038E234; } }
L_0038E834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E38Cu | kUnwind; return; } goto L_0038E38C; } }
L_0038E83C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E4E4u | kUnwind; return; } goto L_0038E4E4; } }
L_0038E844:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0038E85C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038E85C:
    c.f[0] = 0u;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_0038E874; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038E874:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E620u | kUnwind; return; } goto L_0038E620; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E5D0u | kUnwind; return; } goto L_0038E5D0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E580u | kUnwind; return; } goto L_0038E580; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E530u | kUnwind; return; } goto L_0038E530; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E678u | kUnwind; return; } goto L_0038E678; } }
L_0038E8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E678u | kUnwind; return; } goto L_0038E678; } }
L_0038E8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E678u | kUnwind; return; } goto L_0038E678; } }
L_0038E8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E678u | kUnwind; return; } goto L_0038E678; } }
L_0038E8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(4ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038E678u | kUnwind; return; } goto L_0038E678; } }
L_0038E8D4:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 1;
L_0038E8D8:
    st32((c.r[3].w[0] + 1044u), c.r[4].w[0]);
    c.budget -= 1;
L_0038E8DC:
    set32(c.r[3], ld32((c.r[19].w[0] + 40u)));
    c.f[2] = ld32((c.r[3].w[0] + 508u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[19].w[0] + 80u), c.f[0]);
    st32((c.r[19].w[0] + 84u), c.f[2]);
    st32((c.r[19].w[0] + 88u), c.f[1]);
    st32((c.r[19].w[0] + 92u), c.f[20]);
    c.f[0] = ld32((c.r[19].w[0] + 80u));
    st32((c.r[19].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 84u));
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 88u));
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 92u));
    st32((c.r[19].w[0] + 108u), c.f[0]);
    c.budget -= 16;
L_0038E91C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0038E950:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 47u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 124u), 0u);
    st32((c.r[4].w[0] + 128u), 0u);
    st8((c.r[4].w[0] + 188u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    c.r[5].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0038E994; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 189u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0038E99C; } }
L_0038E994:
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 189u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0038E99C:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 112u));
    c.r[12].d[0] = 0ull & 1ull;
    set32(c.r[11], 0u - 2u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[8], 0u - 3u);
    set32(c.r[9], c.r[12].w[0] << 1);
    set32(c.r[18], 0u - 17u);
    set32(c.r[19], c.r[12].w[0] << 4);
    set32(c.r[16], 0u + 388u);
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 5u);
    set32(c.r[7], c.r[12].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    set32(c.r[5], c.r[12].w[0] << 3);
    c.r[13].d[0] = c.r[3].d[0] | c.r[12].d[0];
    set32(c.r[24], 0u - 65u);
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[3], 0u - 9u);
    st8((c.r[4].w[0] + 57u), static_cast<std::uint8_t>(0u));
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    st32((c.r[4].w[0] + 40u), 0u);
    set32(c.r[14], 0u - 129u);
    st32((c.r[4].w[0] + 48u), 0u);
    set32(c.r[15], c.r[12].w[0] << 7);
    st32((c.r[4].w[0] + 44u), c.r[10].w[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    c.r[20].d[0] = ld8((c.r[4].w[0] + 113u));
    c.r[20].d[0] = c.r[20].d[0] & c.r[8].d[0];
    c.r[20].d[0] = c.r[20].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 113u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st32((c.r[4].w[0] + 132u), 0u);
    c.r[20].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[18].d[0] = c.r[20].d[0] & c.r[18].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[19].d[0];
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[4].w[0] + 148u), 0u);
    st32((c.r[4].w[0] + 120u), 0u);
    st16((c.r[4].w[0] + 162u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 168u), 0u);
    st32((c.r[4].w[0] + 176u), 0u);
    st32((c.r[4].w[0] + 172u), 0u);
    c.r[16].d[0] = ld8((c.r[4].w[0] + 112u));
    c.r[16].d[0] = c.r[16].d[0] & c.r[8].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[17].d[0];
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[16].d[0] = ld8((c.r[4].w[0] + 112u));
    c.r[16].d[0] = c.r[16].d[0] & c.r[6].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[16].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[16].d[0] = c.r[16].d[0] & c.r[11].d[0];
    c.r[16].d[0] = c.r[16].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[16].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[8].d[0] = c.r[16].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 112u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 56u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 113u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[11].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 113u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 113u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st8((c.r[4].w[0] + 160u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[24].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[25].d[0];
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 156u), 0u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 112u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[14].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 180u), c.r[13].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 101;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0038EB30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0038EB6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8592u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EB58u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0063(c, 120u, depth + 1u); else { c.pc = 0x0038DB00u; return; } if (c.pc != 0x0038EB58u) [[unlikely]] return; }
L_0038EB58:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0038EB6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0038EB6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038EB80:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038EB94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0038EB94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0038EBA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00390000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00390000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00390000u);
    set32(c.r[2], c.r[2].w[0] - 4064u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] - 4576u);
    set32(c.r[7], c.r[7].w[0] - 5088u);
    st32((c.r[4].w[0] + 20u), c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], 0u + 26u);
    st32((c.r[4].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] - 8592u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EC0Cu); st32((c.r[4].w[0] + 132u), 0u);  if (depth < kMaxDepth) unit_0063(c, 155u, depth + 1u); else { c.pc = 0x0038E950u; return; } if (c.pc != 0x0038EC0Cu) [[unlikely]] return; }
L_0038EC0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0038EC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 188u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EC44u); set32(c.r[16], c.r[17].w[0] + 188u);  if (depth < kMaxDepth) unit_0063(c, 120u, depth + 1u); else { c.pc = 0x0038DB00u; return; } if (c.pc != 0x0038EC44u) [[unlikely]] return; }
L_0038EC44:
    c.r[11].d[0] = ld8((c.r[17].w[0] + 56u));
    c.r[10].d[0] = 0ull & 1ull;
    set32(c.r[8], 0u - 5u);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[6], 0u - 9u);
    set32(c.r[7], c.r[10].w[0] << 3);
    set32(c.r[5], 0u - 2u);
    set32(c.r[3], 0u - 3u);
    set32(c.r[4], c.r[10].w[0] << 1);
    c.r[8].d[0] = c.r[11].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[17].w[0] + 56u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 56u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 56u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 293u));
    c.budget -= 29;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038EE0C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 208u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 8u);  if (t) { goto L_0038ED30; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0038ECD4:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038ED1C; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0038ED1C; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038ED30; } }
L_0038ED1C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038ECD4u | kUnwind; return; } goto L_0038ECD4; } }
    c.budget -= 1;
L_0038ED30:
    set32(c.r[6], ld32((c.r[4].w[0] + 200u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 200u), c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.r[5].d[0] = c.r[9].d[0] << 56;
    set32(c.r[7], 0u + 10u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 8;
L_0038ED50:
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[10].w[0] + 8u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0038EDBC; } }
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[8].w[0] + 1u);
    st32((c.r[10].w[0] + 16u), 0u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0038EE04; } }
L_0038EDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0038EDF4; } }
L_0038EDBC:
    set32(c.r[6], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[6].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0038EDD8; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038EDD8:
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038ED50u | kUnwind; return; } goto L_0038ED50; } }
    breakpoint(c, 0x0038EDE8u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_0038EDF4:
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 293u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0038EE10; } }
L_0038EE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038EDB4u | kUnwind; return; } goto L_0038EDB4; } }
L_0038EE0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0038EE10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038EE20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 188u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038EE44u); set32(c.r[16], c.r[17].w[0] + 188u);  if (depth < kMaxDepth) unit_0063(c, 120u, depth + 1u); else { c.pc = 0x0038DB00u; return; } if (c.pc != 0x0038EE44u) [[unlikely]] return; }
L_0038EE44:
    c.r[11].d[0] = ld8((c.r[17].w[0] + 56u));
    c.r[10].d[0] = 0ull & 1ull;
    set32(c.r[8], 0u - 5u);
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[6], 0u - 9u);
    set32(c.r[7], c.r[10].w[0] << 3);
    set32(c.r[5], 0u - 2u);
    set32(c.r[3], 0u - 3u);
    set32(c.r[4], c.r[10].w[0] << 1);
    c.r[8].d[0] = c.r[11].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[17].w[0] + 56u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 56u));
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 56u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 56u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 293u));
    c.budget -= 29;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0038F00C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 208u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 8u);  if (t) { goto L_0038EF30; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0038EED4:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0038EF1C; } }
    set32(c.r[5], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_0038EF1C; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[6].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[6].w[0] + 12u), c.r[5].w[0]);
    st8((c.r[6].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0038EF30; } }
L_0038EF1C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = c.r[8].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038EED4u | kUnwind; return; } goto L_0038EED4; } }
    c.budget -= 1;
L_0038EF30:
    set32(c.r[6], ld32((c.r[4].w[0] + 200u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[5].d[0] = c.r[6].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0] + 200u), c.r[5].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.r[5].d[0] = c.r[9].d[0] << 56;
    set32(c.r[7], 0u + 10u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 8;
L_0038EF50:
    c.r[8].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[10].w[0] + 8u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0038EFBC; } }
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[8].w[0] + 1u);
    st32((c.r[10].w[0] + 16u), 0u);
    set32(c.r[5], 0u + 10u);
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0038F004; } }
L_0038EFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0038EFF4; } }
L_0038EFBC:
    set32(c.r[6], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[6].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0038EFD8; } }
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038EFD8:
    c.r[6].d[0] = c.r[9].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038EF50u | kUnwind; return; } goto L_0038EF50; } }
    breakpoint(c, 0x0038EFE8u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_0038EFF4:
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[3].w[0] + 293u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0038F010; } }
L_0038F004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038EFB4u | kUnwind; return; } goto L_0038EFB4; } }
L_0038F00C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0038F010:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0038F020:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0038CFD0u | kUnwind; return; } goto L_0038CFD0; }
L_0038F030:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 29600u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[2].d[0] = c.r[22].d[0] << 48;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[22].d[0] & 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] << 1);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 29;
L_0038F0A4:
    st8((c.r[28].w[0] - 29128u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0038F0A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F0C0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038F0C0u) [[unlikely]] return; }
L_0038F0C0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0038F0E0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F0A8u | kUnwind; return; } goto L_0038F0A8; } }
    c.budget -= 1;
L_0038F0E0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0038F0F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0038F0FC; } }
L_0038F0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F0F8u); set32(c.r[4], c.r[28].w[0] - 29160u);  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038F0F8u) [[unlikely]] return; }
L_0038F0F8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0038F0FC:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] - 87u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(101ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14400u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0038C000u < 16384u) { entry = entries_0063[(t - 0x0038C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0038F12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 137u, depth); } }
L_0038F134:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F14Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038F14Cu) [[unlikely]] return; }
L_0038F14C:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F158u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038F158u) [[unlikely]] return; }
L_0038F158:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - 15728u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[20].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[7], c.r[3].w[0] + 64u);
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[20].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[20].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[20].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.r[9].d[0] = ld8((c.r[3].w[0] + 60u));
    c.r[8].d[0] = ld8((c.r[3].w[0] + 61u));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 62u));
    st8((c.r[20].w[0] + 60u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[20].w[0] + 61u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[20].w[0] + 62u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 46;
L_0038F210:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F210u | kUnwind; return; } goto L_0038F210; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    st16((c.r[20].w[0] + 82u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 84u)));
    st16((c.r[20].w[0] + 84u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 86u));
    st8((c.r[20].w[0] + 86u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 87u));
    st8((c.r[20].w[0] + 87u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 88u));
    st8((c.r[20].w[0] + 88u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 89u));
    st8((c.r[20].w[0] + 89u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 90u));
    st8((c.r[20].w[0] + 90u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 91u));
    st8((c.r[20].w[0] + 91u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 92u)));
    st8((c.r[20].w[0] + 92u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 93u)));
    st8((c.r[20].w[0] + 93u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 94u));
    st8((c.r[20].w[0] + 94u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 95u));
    st8((c.r[20].w[0] + 95u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 96u)));
    st8((c.r[20].w[0] + 96u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 97u)));
    st8((c.r[20].w[0] + 97u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 98u)));
    st8((c.r[20].w[0] + 98u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 99u)));
    st8((c.r[20].w[0] + 99u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 100u)));
    st8((c.r[20].w[0] + 100u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    st8((c.r[20].w[0] + 101u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 102u)));
    st8((c.r[20].w[0] + 102u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 103u)));
    st8((c.r[20].w[0] + 103u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 104u));
    st8((c.r[20].w[0] + 104u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 105u));
    st8((c.r[20].w[0] + 105u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 106u)));
    st8((c.r[20].w[0] + 106u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 107u)));
    st8((c.r[20].w[0] + 107u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 108u));
    st8((c.r[20].w[0] + 108u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 109u));
    st8((c.r[20].w[0] + 109u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 110u)));
    st8((c.r[20].w[0] + 110u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 111u)));
    st8((c.r[20].w[0] + 111u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 112u)));
    st8((c.r[20].w[0] + 112u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 113u));
    st8((c.r[20].w[0] + 113u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 114u));
    st8((c.r[20].w[0] + 114u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 115u));
    st8((c.r[20].w[0] + 115u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 116u));
    st8((c.r[20].w[0] + 116u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 117u));
    st8((c.r[20].w[0] + 117u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 118u));
    st8((c.r[20].w[0] + 118u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 119u));
    st8((c.r[20].w[0] + 119u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 120u));
    st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 121u));
    st8((c.r[20].w[0] + 121u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 122u));
    st8((c.r[20].w[0] + 122u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 123u));
    st8((c.r[20].w[0] + 123u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[20].w[0] + 124u), c.f[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0] + 128u));
    st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 130u));
    c.budget -= 87;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 130u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F388:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F3A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038F3A0u) [[unlikely]] return; }
L_0038F3A0:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F3ACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038F3ACu) [[unlikely]] return; }
L_0038F3AC:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[1].d[0] = c.r[3].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] & 255ull;  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038F3C0:
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[4].d[0] = c.r[21].d[0] & 255ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[16], c.r[2].w[0] + 49u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F3D8u); c.r[5].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0032(c, 10u, depth + 1u); else { c.pc = 0x002C82C0u; return; } if (c.pc != 0x0038F3D8u) [[unlikely]] return; }
L_0038F3D8:
    c.r[23].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[21].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F3E8u); c.r[5].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0032(c, 9u, depth + 1u); else { c.pc = 0x002C8280u; return; } if (c.pc != 0x0038F3E8u) [[unlikely]] return; }
L_0038F3E8:
    c.r[30].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[21].d[0] & 255ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F3F8u); c.r[5].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0032(c, 8u, depth + 1u); else { c.pc = 0x002C8240u; return; } if (c.pc != 0x0038F3F8u) [[unlikely]] return; }
L_0038F3F8:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F410u); c.r[4].d[0] = c.r[22].d[0] & 255ull;  if (depth < kMaxDepth) unit_0032(c, 7u, depth + 1u); else { c.pc = 0x002C81E0u; return; } if (c.pc != 0x0038F410u) [[unlikely]] return; }
L_0038F410:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] << 56;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.r[3].d[0] = c.r[18].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F3C0u | kUnwind; return; } goto L_0038F3C0; } }
    set32(c.r[3], c.r[21].w[0] << 3);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[5], c.r[17].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + 29600u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[10], 0u - 5u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 13;
L_0038F45C:
    c.r[11].d[0] = c.r[7].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    set32(c.r[9], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[8], c.r[17].w[0] + c.r[11].w[0]);
    c.r[9].d[0] = ld8((c.r[9].w[0] + 29u));
    st8((c.r[8].w[0] + 29u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 8;
    { const bool t = c.r[9].d[0] == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 127u, depth); } }
    c.budget -= 1;
L_0038F480:
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[8], c.r[17].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[8].w[0] + 40u);
    c.r[8].d[0] = ld16((c.r[8].w[0] + 40u));
    c.r[8].d[0] = c.r[8].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_0038F4B0; } }
    set32(c.r[8], c.r[6].w[0] + c.r[11].w[0]);
    c.r[8].d[0] = ld16((c.r[8].w[0] + 40u));
    c.r[8].d[0] = c.r[8].d[0] | 4ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_0038F4C0; } }
L_0038F4B0:
    set32(c.r[8], c.r[6].w[0] + c.r[11].w[0]);
    c.r[8].d[0] = ld16((c.r[8].w[0] + 40u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[10].d[0];
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 4;
L_0038F4C0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[8].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F45Cu | kUnwind; return; } goto L_0038F45C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[28].w[0] - 29128u));  if (t) { [[clang::musttail]] return unit_0064(c, 123u, depth); } }
L_0038F4E0:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], c.r[5].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15728u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[3].w[0] + 64u);
    c.budget -= 10;
L_0038F508:
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[8], c.r[8].w[0] + 3u);
    c.r[3].d[0] = c.r[8].sd[0] < 9ll ? 1ull : 0ull;
    st16((c.r[5].w[0] + 64u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 2u));
    st16((c.r[5].w[0] + 66u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 4u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[5].w[0] + 68u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F508u | kUnwind; return; } goto L_0038F508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F540:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[1].d[0] = c.r[3].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F568u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038F568u) [[unlikely]] return; }
L_0038F568:
    set32(c.r[4], c.r[28].w[0] - 29136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F574u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038F574u) [[unlikely]] return; }
L_0038F574:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F590u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038F590u) [[unlikely]] return; }
L_0038F590:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 207u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F5B0u); st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038F5B0u) [[unlikely]] return; }
L_0038F5B0:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F5BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038F5BCu) [[unlikely]] return; }
L_0038F5BC:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 128u, depth); } }
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(9ll);
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0038F5D4:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 131u, depth); } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0038F5E4:
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.r[4].d[0] = c.r[22].d[0] & 255ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[6].d[0] = c.r[23].d[0] & 65535ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F600u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 7u, depth + 1u); else { c.pc = 0x002C81E0u; return; } if (c.pc != 0x0038F600u) [[unlikely]] return; }
L_0038F600:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F5E4u | kUnwind; return; } goto L_0038F5E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F618:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[1].d[0] = c.r[3].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F640u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038F640u) [[unlikely]] return; }
L_0038F640:
    set32(c.r[4], c.r[28].w[0] - 29136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F64Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038F64Cu) [[unlikely]] return; }
L_0038F64C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F668u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038F668u) [[unlikely]] return; }
L_0038F668:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[3].w[0] - 49u);
    c.r[5].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);
    st8((c.r[4].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F6A8:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    c.r[1].d[0] = c.r[3].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F6D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038F6D0u) [[unlikely]] return; }
L_0038F6D0:
    set32(c.r[4], c.r[28].w[0] - 29136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F6DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038F6DCu) [[unlikely]] return; }
L_0038F6DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F6F8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038F6F8u) [[unlikely]] return; }
L_0038F6F8:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F704u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038F704u) [[unlikely]] return; }
L_0038F704:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] - 49u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F730:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F748u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038F748u) [[unlikely]] return; }
L_0038F748:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F754u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038F754u) [[unlikely]] return; }
L_0038F754:
    st8((c.r[20].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F768:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F780u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038F780u) [[unlikely]] return; }
L_0038F780:
    st32((c.r[20].w[0]), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F794:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F7ACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038F7ACu) [[unlikely]] return; }
L_0038F7AC:
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F7D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F7F0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038F7F0u) [[unlikely]] return; }
L_0038F7F0:
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F804:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F81Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038F81Cu) [[unlikely]] return; }
L_0038F81C:
    st32((c.r[20].w[0] + 16u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F848u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038F848u) [[unlikely]] return; }
L_0038F848:
    st32((c.r[20].w[0] + 20u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F85C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F874u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038F874u) [[unlikely]] return; }
L_0038F874:
    st32((c.r[20].w[0] + 24u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F888:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F8A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038F8A0u) [[unlikely]] return; }
L_0038F8A0:
    st32((c.r[20].w[0] + 28u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F8B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F8CCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038F8CCu) [[unlikely]] return; }
L_0038F8CC:
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F8E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F8F8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038F8F8u) [[unlikely]] return; }
L_0038F8F8:
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F90C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F924u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038F924u) [[unlikely]] return; }
L_0038F924:
    st32((c.r[20].w[0] + 40u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F938:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F950u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038F950u) [[unlikely]] return; }
L_0038F950:
    st32((c.r[20].w[0] + 44u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F964:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F97Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038F97Cu) [[unlikely]] return; }
L_0038F97C:
    st16((c.r[20].w[0] + 82u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F990:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F9A8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038F9A8u) [[unlikely]] return; }
L_0038F9A8:
    st16((c.r[20].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038F9BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038F9D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038F9D4u) [[unlikely]] return; }
L_0038F9D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st8((c.r[20].w[0] + 90u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FA04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FA1Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FA1Cu) [[unlikely]] return; }
L_0038FA1C:
    st8((c.r[20].w[0] + 91u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FA30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FA48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FA48u) [[unlikely]] return; }
L_0038FA48:
    st8((c.r[20].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FA5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FA74u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FA74u) [[unlikely]] return; }
L_0038FA74:
    st8((c.r[20].w[0] + 93u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FA88:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FAACu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038FAACu) [[unlikely]] return; }
L_0038FAAC:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FAB8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038FAB8u) [[unlikely]] return; }
L_0038FAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 94u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FAC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FAD8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FAD8u) [[unlikely]] return; }
L_0038FAD8:
    st8((c.r[20].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FAEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FB04u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FB04u) [[unlikely]] return; }
L_0038FB04:
    st8((c.r[20].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FB18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FB30u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FB30u) [[unlikely]] return; }
L_0038FB30:
    st8((c.r[20].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FB44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FB5Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FB5Cu) [[unlikely]] return; }
L_0038FB5C:
    st8((c.r[20].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FB70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FB88u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FB88u) [[unlikely]] return; }
L_0038FB88:
    st8((c.r[20].w[0] + 99u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FB9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FBB4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FBB4u) [[unlikely]] return; }
L_0038FBB4:
    st8((c.r[20].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FBC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FBE0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038FBE0u) [[unlikely]] return; }
L_0038FBE0:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FBF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FC10u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038FC10u) [[unlikely]] return; }
L_0038FC10:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FC1Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038FC1Cu) [[unlikely]] return; }
L_0038FC1C:
    st8((c.r[20].w[0] + 101u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FC30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FC48u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FC48u) [[unlikely]] return; }
L_0038FC48:
    st8((c.r[20].w[0] + 102u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FC5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FC74u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FC74u) [[unlikely]] return; }
L_0038FC74:
    st8((c.r[20].w[0] + 103u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FC88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FCA0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FCA0u) [[unlikely]] return; }
L_0038FCA0:
    st8((c.r[20].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FCB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FCCCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FCCCu) [[unlikely]] return; }
L_0038FCCC:
    st8((c.r[20].w[0] + 105u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FCE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FCF8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FCF8u) [[unlikely]] return; }
L_0038FCF8:
    st8((c.r[20].w[0] + 107u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FD0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FD24u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038FD24u) [[unlikely]] return; }
L_0038FD24:
    set32(c.r[4], c.r[28].w[0] - 29152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FD30u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038FD30u) [[unlikely]] return; }
L_0038FD30:
    st8((c.r[20].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FD44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FD5Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038FD5Cu) [[unlikely]] return; }
L_0038FD5C:
    set32(c.r[4], c.r[28].w[0] - 29152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FD68u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038FD68u) [[unlikely]] return; }
L_0038FD68:
    st8((c.r[20].w[0] + 109u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 109u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st8((c.r[20].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FD88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FDA0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FDA0u) [[unlikely]] return; }
L_0038FDA0:
    st8((c.r[20].w[0] + 110u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FDB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FDCCu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038FDCCu) [[unlikely]] return; }
L_0038FDCC:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FDD8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038FDD8u) [[unlikely]] return; }
L_0038FDD8:
    st8((c.r[20].w[0] + 111u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FDEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FE04u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FE04u) [[unlikely]] return; }
L_0038FE04:
    set32(c.r[3], 0u + 50u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st8((c.r[20].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FE20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FE38u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x0038FE38u) [[unlikely]] return; }
L_0038FE38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    st8((c.r[20].w[0] + 106u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FE68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FE80u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FE80u) [[unlikely]] return; }
L_0038FE80:
    st8((c.r[20].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FE94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FEACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FEACu) [[unlikely]] return; }
L_0038FEAC:
    st8((c.r[20].w[0] + 114u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FEC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FED8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FED8u) [[unlikely]] return; }
L_0038FED8:
    st8((c.r[20].w[0] + 115u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FEEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FF04u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FF04u) [[unlikely]] return; }
L_0038FF04:
    st8((c.r[20].w[0] + 116u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 128u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FF18:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FF3Cu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FF3Cu) [[unlikely]] return; }
L_0038FF3C:
    set32(c.r[3], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st8((c.r[20].w[0] + 117u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 117u));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0064(c, 133u, depth); } }
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 117u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FF6C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FF90u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FF90u) [[unlikely]] return; }
L_0038FF90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 118u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
L_0038FF98:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FFBCu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0038FFBCu) [[unlikely]] return; }
L_0038FFBC:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FFC8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0038FFC8u) [[unlikely]] return; }
L_0038FFC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[20].w[0] + 86u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 206u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0038FFE8u); st8((c.r[29].w[0] + 206u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0038FFE8u) [[unlikely]] return; }
L_0038FFE8:
    st8((c.r[20].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 206u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0064(c, 134u, depth); } }
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 87u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_0064(c, 122u, depth); } }
    [[clang::musttail]] return unit_0064(c, 2u, depth);
}

}
